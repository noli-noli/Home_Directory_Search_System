at) {
    this[kType] = 'DecompressionStream';
    switch (format) {
      case 'deflate':
        this[kHandle] = lazyZlib().createInflate();
        break;
      case 'gzip':
        this[kHandle] = lazyZlib().createGunzip();
        break;
      default:
        throw new ERR_INVALID_ARG_VALUE('format', format);
    }
    this[kTransform] = newReadableWritablePairFromDuplex(this[kHandle]);
  }

  /**
   * @readonly
   * @type {ReadableStream}
   */
  get readable() {
    if (!isDecompressionStream(this))
      throw new ERR_INVALID_THIS('DecompressionStream');
    return this[kTransform].readable;
  }

  /**
   * @readonly
   * @type {WritableStream}
   */
  get writable() {
    if (!isDecompressionStream(this))
      throw new ERR_INVALID_THIS('DecompressionStream');
    return this[kTransform].writable;
  }

  [kInspect](depth, options) {
    if (!isDecompressionStream(this))
      throw new ERR_INVALID_THIS('DecompressionStream');
    customInspect(depth, options, 'DecompressionStream', {
      readable: this[kTransform].readable,
      writable: this[kTransform].writable,
    });
  }
}

ObjectDefineProperties(CompressionStream.prototype, {
  readable: kEnumerableProperty,
  writable: kEnumerableProperty,
});

ObjectDefineProperties(DecompressionStream.prototype, {
  readable: kEnumerableProperty,
  writable: kEnumerableProperty,
});

module.exports = {
  CompressionStream,
  DecompressionStream,
};
