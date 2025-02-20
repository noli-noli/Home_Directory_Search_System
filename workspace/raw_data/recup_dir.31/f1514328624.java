T_POINT
    );

    const plan = planEntry.node;

    const planStart = NumberParseInt(plan.start, 10);
    const planEnd = NumberParseInt(plan.end, 10);

    if (planEnd === 0 && testPointEntries.length > 0) {
      throw new ERR_TAP_VALIDATION_ERROR(
        `found ${testPointEntries.length} Test Point${
          testPointEntries.length > 1 ? 's' : ''
        } but plan is ${planStart}..0`
      );
    }

    if (planEnd > 0) {
      if (testPointEntries.length === 0) {
        throw new ERR_TAP_VALIDATION_ERROR('missing Test Points');
      }

      if (!bailoutEntry && testPointEntries.length !== planEnd) {
        throw new ERR_TAP_VALIDATION_ERROR(
          `test Points count ${testPointEntries.length} does not match plan count ${planEnd}`
        );
      }

      for (let i = 0; i < testPointEntries.length; i++) {
        const test = testPointEntries[i].node;
        const testId = NumberParseInt(test.id, 10);

        if (testId < planStart || testId > planEnd) {
          throw new ERR_TAP_VALIDATION_ERROR(
            `test ${testId} is out of plan range ${planStart}..${planEnd}`
          );
        }
      }
    }
  }
}

// TAP14 and TAP13 are compatible with each other
class TAP13ValidationStrategy extends TAPValidationStrategy {}
class TAP14ValidationStrategy extends TAPValidationStrategy {}

class TapChecker {
  static TAP13 = '13';
  static TAP14 = '14';

  constructor({ specs }) {
    switch (specs) {
      case TapChecker.TAP13:
        this.strategy = new TAP13ValidationStrategy();
        break;
      default:
        this.strategy = new TAP14ValidationStrategy();
    }
  }

  check(ast) {
    return this.strategy.validate(ast);
  }
}

module.exports = {
  TapChecker,
  TAP14ValidationStrategy,
  TAP13ValidationStrategy,
};
