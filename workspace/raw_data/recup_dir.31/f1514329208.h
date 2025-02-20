e);
      this.#todo = [];
    });
  }

  /**
   * Clears the internal list of pending actions without sending it to the
   * associated `stream`.
   * @returns {Readline} this
   */
  rollback() {
    this.#todo = [];
    return this;
  }
}

module.exports = {
  Readline,
};
