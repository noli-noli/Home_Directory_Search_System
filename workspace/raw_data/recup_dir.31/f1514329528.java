nction clearResourceTimings(name) {
  if (name !== undefined) {
    name = `${name}`;
  }
  clearEntriesFromBuffer('resource', name);
}

function getEntries() {
  return filterBufferMapByNameAndType();
}

function getEntriesByName(name) {
  if (arguments.length === 0) {
    throw new ERR_MISSING_ARGS('name');
  }
  name = `${name}`;
  return filterBufferMapByNameAndType(name, undefined);
}

function getEntriesByType(type) {
  if (arguments.length === 0) {
    throw new ERR_MISSING_ARGS('type');
  }
  type = `${type}`;
  return filterBufferMapByNameAndType(undefined, type);
}

class InternalPerformance extends EventTarget {}
InternalPerformance.prototype.constructor = Performance.prototype.constructor;
ObjectSetPrototypeOf(InternalPerformance.prototype, Performance.prototype);

ObjectDefineProperties(Performance.prototype, {
  clearMarks: {
    __proto__: null,
    configurable: true,
    enumerable: false,
    value: clearMarks,
  },
  clearMeasures: {
    __proto__: null,
    configurable: true,
    enumerable: false,
    value: clearMeasures,
  },
  clearResourceTimings: {
    __proto__: null,
    configurable: true,
    enumerable: false,
    value: clearResourceTimings,
  },
  eventLoopUtilization: {
    __proto__: null,
    configurable: true,
    enumerable: false,
    value: eventLoopUtilization,
  },
  getEntries: {
    __proto__: null,
    configurable: true,
    enumerable: false,
    value: getEntries,
  },
  getEntriesByName: {
    __proto__: null,
    configurable: true,
    enumerable: false,
    value: getEntriesByName,
  },
  getEntriesByType: {
    __proto__: null,
    configurable: true,
    enumerable: false,
    value: getEntriesByType,
  },
  mark: {
    __proto__: null,
    configurable: true,
    enumerable: false,
    value: mark,
  },
  measure: {
    __proto__: null,
    configurable: true,
    enumerable: false,
    value: measure,
  },
  nodeTiming: {
    __proto__: null,
    configurable: true,
    enumerable: false,
    value: nodeTiming,
  },
  // In the browser, this function is not public.  However, it must be used inside fetch
  // which is a Node.js dependency, not a internal module
  markResourceTiming: {
    __proto__: null,
    configurable: true,
    enumerable: false,
    value: markResourceTiming,
  },
  now: {
    __proto__: null,
    configurable: true,
    enumerable: false,
    value: now,
  },
  setResourceTimingBufferSize: {
    __proto__: null,
    configurable: true,
    enumerable: false,
    value: setResourceTimingBufferSize
  },
  timerify: {
    __proto__: null,
    configurable: true,
    enumerable: false,
    value: timerify,
  },
  // This would be updated during pre-execution in case
  // the process is launched from a snapshot.
  // TODO(joyeecheung): we may want to warn about access to
  // this during snapshot building.
  timeOrigin: {
    __proto__: null,
    configurable: true,
    enumerable: true,
    value: getTimeOriginTimestamp(),
  },
  toJSON: {
    __proto__: null,
    configurable: true,
    enumerable: true,
    value: toJSON,
  }
});

function refreshTimeOrigin() {
  ObjectDefineProperty(Performance.prototype, 'timeOrigin', {
    __proto__: null,
    configurable: true,
    enumerable: true,
    value: getTimeOriginTimestamp(),
  });
}

const performance = new InternalPerformance();

function dispatchBufferFull(type) {
  const event = new Event(type, {
    [kTrustEvent]: true
  });
  performance.dispatchEvent(event);
}
setDispatchBufferFull(dispatchBufferFull);

module.exports = {
  Performance,
  performance,
  refreshTimeOrigin
};
