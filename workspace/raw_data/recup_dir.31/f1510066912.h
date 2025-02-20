 // is actually used, per the spec.
    this[kState] = {
      highWaterMark: +init.highWaterMark,
    };
  }

  /**
   * @readonly
   * @type {number}
   */
  get highWaterMark() {
    if (!isCountQueuingStrategy(this))
      throw new ERR_INVALID_THIS('CountQueuingStrategy');
    return this[kState].highWaterMark;
  }

  /**
   * @type {QueuingStrategySize}
   */
  get size() {
    if (!isCountQueuingStrategy(this))
      throw new ERR_INVALID_THIS('CountQueuingStrategy');
    return countSizeFunction;
  }

  [kInspect](depth, options) {
    return customInspect(depth, options, this[kType], {
      highWaterMark: this.highWaterMark,
    });
  }
}

ObjectDefineProperties(CountQueuingStrategy.prototype, {
  highWaterMark: kEnumerableProperty,
  size: kEnumerableProperty,
  [SymbolToStringTag]: getNonWritablePropertyDescriptor(CountQueuingStrategy.name),
});

module.exports = {
  ByteLengthQueuingStrategy,
  CountQueuingStrategy,
};
