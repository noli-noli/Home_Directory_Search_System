aView
 *
 * @param {string | Buffer | TypedArray | DataView} buf
 * @returns {string}
 * @throws {TypeError} Throws when buf is not in one of supported types
 */
StringDecoder.prototype.write = function write(buf) {
  if (typeof buf === 'string')
    return buf;
  if (!ArrayBufferIsView(buf))
    throw new ERR_INVALID_ARG_TYPE('buf',
                                   ['Buffer', 'TypedArray', 'DataView'],
                                   buf);
  if (!this[kNativeDecoder]) {
    throw new ERR_INVALID_THIS('StringDecoder');
  }
  return decode(this[kNativeDecoder], buf);
};

/**
 * Returns any remaining input stored in the internal buffer as a string.
 * After end() is called, the stringDecoder object can be reused for new
 * input.
 *
 * @param {string | Buffer | TypedArray | DataView} [buf]
 * @returns {string}
 */
StringDecoder.prototype.end = function end(buf) {
  let ret = '';
  if (buf !== undefined)
    ret = this.write(buf);
  if (this[kNativeDecoder][kBufferedBytes] > 0)
    ret += flush(this[kNativeDecoder]);
  return ret;
};

/* Everything below this line is undocumented legacy stuff. */
/**
 *
 * @param {string | Buffer | TypedArray | DataView} buf
 * @param {number} offset
 * @returns {string}
 */
StringDecoder.prototype.text = function text(buf, offset) {
  this[kNativeDecoder][kMissingBytes] = 0;
  this[kNativeDecoder][kBufferedBytes] = 0;
  return this.write(buf.slice(offset));
};

ObjectDefineProperties(StringDecoder.prototype, {
  lastChar: {
    __proto__: null,
    configurable: true,
    enumerable: true,
    get() {
      return TypedArrayPrototypeSubarray(this[kNativeDecoder],
                                         kIncompleteCharactersStart,
                                         kIncompleteCharactersEnd);
    }
  },
  lastNeed: {
    __proto__: null,
    configurable: true,
    enumerable: true,
    get() {
      return this[kNativeDecoder][kMissingBytes];
    }
  },
  lastTotal: {
    __proto__: null,
    configurable: true,
    enumerable: true,
    get() {
      return this[kNativeDecoder][kBufferedBytes] +
             this[kNativeDecoder][kMissingBytes];
    }
  }
});

exports.StringDecoder = StringDecoder;
