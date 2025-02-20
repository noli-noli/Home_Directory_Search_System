r.message, error.name);
      }
      this[kState].port.postMessage({ type: 'error', value: error });
      throw error;
    } finally {
      this[kState].port.close();
    }
  }
}

class CrossRealmTransformWritableSink {
  constructor(port) {
    this[kState] = {
      port,
      controller: undefined,
      backpressurePromise: createDeferredPromise(),
    };

    port.onmessage = ({ data }) => {
      assert(typeof data === 'object');
      const {
        type,
        value
      } = { ...data };
      assert(typeof type === 'string');
      switch (type) {
        case 'pull':
          if (this[kState].backpressurePromise !== undefined)
            this[kState].backpressurePromise.resolve?.();
          this[kState].backpressurePromise = undefined;
          break;
        case 'error':
          writableStreamDefaultControllerErrorIfNeeded(
            this[kState].controller,
            value);
          if (this[kState].backpressurePromise !== undefined)
            this[kState].backpressurePromise.resolve?.();
          this[kState].backpressurePromise = undefined;
          break;
      }
    };
    port.onmessageerror = () => {
      const error = new CloneableDOMException(
        'Internal transferred ReadableStream error',
        'DataCloneError');
      port.postMessage({ type: 'error', value: error });
      writableStreamDefaultControllerErrorIfNeeded(
        this[kState].controller,
        error);
      port.close();
    };

  }

  start(controller) {
    this[kState].controller = controller;
  }

  async write(chunk) {
    if (this[kState].backpressurePromise === undefined) {
      this[kState].backpressurePromise = {
        promise: PromiseResolve(),
        resolve: undefined,
        reject: undefined,
      };
    }
    await this[kState].backpressurePromise.promise;
    this[kState].backpressurePromise = createDeferredPromise();
    try {
      this[kState].port.postMessage({ type: 'chunk', value: chunk });
    } catch (error) {
      if (error instanceof DOMException) {
        // eslint-disable-next-line no-ex-assign
        error = new CloneableDOMException(error.message, error.name);
      }
      this[kState].port.postMessage({ type: 'error', value: error });
      this[kState].port.close();
      throw error;
    }
  }

  close() {
    this[kState].port.postMessage({ type: 'close' });
    this[kState].port.close();
  }

  abort(reason) {
    try {
      this[kState].port.postMessage({ type: 'error', value: reason });
    } catch (error) {
      if (error instanceof DOMException) {
        // eslint-disable-next-line no-ex-assign
        error = new CloneableDOMException(error.message, error.name);
      }
      this[kState].port.postMessage({ type: 'error', value: error });
      throw error;
    } finally {
      this[kState].port.close();
    }
  }
}

function newCrossRealmReadableStream(writable, port) {
  const readable =
    new ReadableStream(
      new CrossRealmTransformReadableSource(port));

  const promise =
    readableStreamPipeTo(readable, writable, false, false, false);

  setPromiseHandled(promise);

  return {
    readable,
    promise,
  };
}

function newCrossRealmWritableSink(readable, port) {
  const writable =
    new WritableStream(
      new CrossRealmTransformWritableSink(port));

  const promise = readableStreamPipeTo(readable, writable, false, false, false);
  setPromiseHandled(promise);
  return {
    writable,
    promise,
  };
}

module.exports = {
  newCrossRealmReadableStream,
  newCrossRealmWritableSink,
  CrossRealmTransformWritableSink,
  CrossRealmTransformReadableSource,
  CloneableDOMException,
  InternalCloneableDOMException,
};
