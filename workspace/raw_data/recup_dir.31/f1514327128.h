
  kPreviousKey,
  kPrompt,
  kQuestionCallback,
  kQuestionCancel,
  kRefreshLine,
  kSawKeyPress,
  kSawReturnAt,
  kSetRawMode,
  kTabComplete,
  kTabCompleter,
  kTtyWrite,
  kWordLeft,
  kWordRight,
  kWriteToOutput,
} = require('internal/readline/interface');

function Interface(input, output, completer, terminal) {
  if (!(this instanceof Interface)) {
    return new Interface(input, output, completer, terminal);
  }

  if (input?.input &&
      typeof input.completer === 'function' && input.completer.length !== 2) {
    const { completer } = input;
    input.completer = (v, cb) => cb(null, completer(v));
  } else if (typeof completer === 'function' && completer.length !== 2) {
    const realCompleter = completer;
    completer = (v, cb) => cb(null, realCompleter(v));
  }

  FunctionPrototypeCall(InterfaceConstructor, this,
                        input, output, completer, terminal);

  if (process.env.TERM === 'dumb') {
    this._ttyWrite = FunctionPrototypeBind(_ttyWriteDumb, this);
  }
}

ObjectSetPrototypeOf(Interface.prototype, _Interface.prototype);
ObjectSetPrototypeOf(Interface, _Interface);

const superQuestion = _Interface.prototype.question;

/**
 * Displays `query` by writing it to the `output`.
 * @param {string} query
 * @param {{ signal?: AbortSignal; }} [options]
 * @param {Function} cb
 * @returns {void}
 */
Interface.prototype.question = function(query, options, cb) {
  cb = typeof options === 'function' ? options : cb;
  if (options === null || typeof options !== 'object') {
    options = kEmptyObject;
  }

  if (options.signal) {
    validateAbortSignal(options.signal, 'options.signal');
    if (options.signal.aborted) {
      return;
    }

    const onAbort = () => {
      this[kQuestionCancel]();
    };
    options.signal.addEventListener('abort', onAbort, { once: true });
    const cleanup = () => {
      options.signal.removeEventListener('abort', onAbort);
    };
    const originalCb = cb;
    cb = typeof cb === 'function' ? (answer) => {
      cleanup();
      return originalCb(answer);
    } : cleanup;
  }

  if (typeof cb === 'function') {
    FunctionPrototypeCall(superQuestion, this, query, cb);
  }
};
Interface.prototype.question[promisify.custom] = function question(query, options) {
  if (options === null || typeof options !== 'object') {
    options = kEmptyObject;
  }

  if (options.signal && options.signal.aborted) {
    return PromiseReject(
      new AbortError(undefined, { cause: options.signal.reason }));
  }

  return new Promise((resolve, reject) => {
    let cb = resolve;

    if (options.signal) {
      const onAbort = () => {
        reject(new AbortError(undefined, { cause: options.signal.reason }));
      };
      options.signal.addEventListener('abort', onAbort, { once: true });
      cb = (answer) => {
        options.signal.removeEventListener('abort', onAbort);
        resolve(answer);
      };
    }

    this.question(query, options, cb);
  });
};

/**
 * Creates a new `readline.Interface` instance.
 * @param {Readable | {
 *   input: Readable;
 *   output: Writable;
 *   completer?: Function;
 *   terminal?: boolean;
 *   history?: string[];
 *   historySize?: number;
 *   removeHistoryDuplicates?: boolean;
 *   prompt?: string;
 *   crlfDelay?: number;
 *   escapeCodeTimeout?: number;
 *   tabSize?: number;
 *   signal?: AbortSignal;
 *   }} input
 * @param {Writable} [output]
 * @param {Function} [completer]
 * @param {boolean} [terminal]
 * @returns {Interface}
 */
function createInterface(input, output, completer, terminal) {
  return new Interface(input, output, completer, terminal);
}

ObjectDefineProperties(Interface.prototype, {
  // Redirect internal prototype methods to the underscore notation for backward
  // compatibility.
  [kSetRawMode]: {
    __proto__: null,
    get() {
      return this._setRawMode;
    }
  },
  [kOnLine]: {
    __proto__: null,
    get() {
      return this._onLine;
    }
  },
  [kWriteToOutput]: {
    __proto__: null,
    get() {
      return this._writeToOutput;
    }
  },
  [kAddHistory]: {
    __proto__: null,
    get() {
      return this._addHistory;
    }
  },
  [kRefreshLine]: {
    __proto__: null,
    get() {
      return this._refreshLine;
    }
  },
  [kNormalWrite]: {
    __proto__: null,
    get() {
      return this._normalWrite;
    }
  },
  [kInsertString]: {
    __proto__: null,
    get() {
      return this._insertString;
    }
  },
  [kTabComplete]: {
    __proto__: null,
    get() {
      return this._tabComplete;
    }
  },
  [kWordLeft]: {
    __proto__: null,
    get() {
      return this._wordLeft;
    }
  },
  [kWordRight]: {
    __proto__: null,
    get() {
      return this._wordRight;
    }
  },
  [kDeleteLeft]: {
    __proto__: null,
    get() {
      return this._deleteLeft;
    }
  },
  [kDeleteRight]: {
    __proto__: null,
    get() {
      return this._deleteRight;
    }
  },
  [kDeleteWordLeft]: {
    __proto__: null,
    get() {
      return this._deleteWordLeft;
    }
  },
  [kDeleteWordRight]: {
    __proto__: null,
    get() {
      return this._deleteWordRight;
    }
  },
  [kDeleteLineLeft]: {
    __proto__: null,
    get() {
      return this._deleteLineLeft;
    }
  },
  [kDeleteLineRight]: {
    __proto__: null,
    get() {
      return this._deleteLineRight;
    }
  },
  [kLine]: {
    __proto__: null,
    get() {
      return this._line;
    }
  },
  [kHistoryNext]: {
    __proto__: null,
    get() {
      return this._historyNext;
    }
  },
  [kHistoryPrev]: {
    __proto__: null,
    get() {
      return this._historyPrev;
    }
  },
  [kGetDisplayPos]: {
    __proto__: null,
    get() {
      return this._getDisplayPos;
    }
  },
  [kMoveCursor]: {
    __proto__: null,
    get() {
      return this._moveCursor;
    }
  },
  [kTtyWrite]: {
    __proto__: null,
    get() {
      return this._ttyWrite;
    }
  },

  // Defining proxies for the internal instance properties for backward
  // compatibility.
  _decoder: {
    __proto__: null,
    get() {
      return this[kDecoder];
    },
    set(value) {
      this[kDecoder] = value;
    },
  },
  _line_buffer: {
    __proto__: null,
    get() {
      return this[kLine_buffer];
    },
    set(value) {
      this[kLine_buffer] = value;
    },
  },
  _oldPrompt: {
    __proto__: null,
    get() {
      return this[kOldPrompt];
    },
    set(value) {
      this[kOldPrompt] = value;
    },
  },
  _previousKey: {
    __proto__: null,
    get() {
      return this[kPreviousKey];
    },
    set(value) {
      this[kPreviousKey] = value;
    },
  },
  _prompt: {
    __proto__: null,
    get() {
      return this[kPrompt];
    },
    set(value) {
      this[kPrompt] = value;
    },
  },
  _questionCallback: {
    __proto__: null,
    get() {
      return this[kQuestionCallback];
    },
    set(value) {
      this[kQuestionCallback] = value;
    },
  },
  _sawKeyPress: {
    __proto__: null,
    get() {
      return this[kSawKeyPress];
    },
    set(value) {
      this[kSawKeyPress] = value;
    },
  },
  _sawReturnAt: {
    __proto__: null,
    get() {
      return this[kSawReturnAt];
    },
    set(value) {
      this[kSawReturnAt] = value;
    },
  },
});

// Make internal methods public for backward compatibility.
Interface.prototype._setRawMode = _Interface.prototype[kSetRawMode];
Interface.prototype._onLine = _Interface.prototype[kOnLine];
Interface.prototype._writeToOutput = _Interface.prototype[kWriteToOutput];
Interface.prototype._addHistory = _Interface.prototype[kAddHistory];
Interface.prototype._refreshLine = _Interface.prototype[kRefreshLine];
Interface.prototype._normalWrite = _Interface.prototype[kNormalWrite];
Interface.prototype._insertString = _Interface.prototype[kInsertString];
Interface.prototype._tabComplete = function(lastKeypressWasTab) {
  // Overriding parent method because `this.completer` in the legacy
  // implementation takes a callback instead of being an async function.
  this.pause();
  const string = StringPrototypeSlice(this.line, 0, this.cursor);
  this.completer(string, (err, value) => {
    this.resume();

    if (err) {
      this._writeToOutput(`Tab completion error: ${inspect(err)}`);
      return;
    }

    this[kTabCompleter](lastKeypressWasTab, value);
  });
};
Interface.prototype._wordLeft = _Interface.prototype[kWordLeft];
Interface.prototype._wordRight = _Interface.prototype[kWordRight];
Interface.prototype._deleteLeft = _Interface.prototype[kDeleteLeft];
Interface.prototype._deleteRight = _Interface.prototype[kDeleteRight];
Interface.prototype._deleteWordLeft = _Interface.prototype[kDeleteWordLeft];
Interface.prototype._deleteWordRight = _Interface.prototype[kDeleteWordRight];
Interface.prototype._deleteLineLeft = _Interface.prototype[kDeleteLineLeft];
Interface.prototype._deleteLineRight = _Interface.prototype[kDeleteLineRight];
Interface.prototype._line = _Interface.prototype[kLine];
Interface.prototype._historyNext = _Interface.prototype[kHistoryNext];
Interface.prototype._historyPrev = _Interface.prototype[kHistoryPrev];
Interface.prototype._getDisplayPos = _Interface.prototype[kGetDisplayPos];
Interface.prototype._getCursorPos = _Interface.prototype.getCursorPos;
Interface.prototype._moveCursor = _Interface.prototype[kMoveCursor];
Interface.prototype._ttyWrite = _Interface.prototype[kTtyWrite];

function _ttyWriteDumb(s, key) {
  key = key || kEmptyObject;

  if (key.name === 'escape') return;

  if (this[kSawReturnAt] && key.name !== 'enter')
    this[kSawReturnAt] = 0;

  if (key.ctrl) {
    if (key.name === 'c') {
      if (this.listenerCount('SIGINT') > 0) {
        this.emit('SIGINT');
      } else {
        // This readline instance is finished
        this.close();
      }

      return;
    } else if (key.name === 'd') {
      this.close();
      return;
    }
  }

  switch (key.name) {
    case 'return':  // Carriage return, i.e. \r
      this[kSawReturnAt] = DateNow();
      this._line();
      break;

    case 'enter':
      // When key interval > crlfDelay
      if (this[kSawReturnAt] === 0 ||
          DateNow() - this[kSawReturnAt] > this.crlfDelay) {
        this._line();
      }
      this[kSawReturnAt] = 0;
      break;

    default:
      if (typeof s === 'string' && s) {
        this.line += s;
        this.cursor += s.length;
        this._writeToOutput(s);
      }
  }
}

module.exports = {
  Interface,
  clearLine,
  clearScreenDown,
  createInterface,
  cursorTo,
  emitKeypressEvents,
  moveCursor,
  promises,
};
