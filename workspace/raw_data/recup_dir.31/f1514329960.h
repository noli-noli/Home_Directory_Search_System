rty(require, 'main', process.mainModule);

  // Enable support to add extra extension types.
  require.extensions = Module._extensions;

  require.cache = Module._cache;

  return require;
}

/**
 * Remove byte order marker. This catches EF BB BF (the UTF-8 BOM)
 * because the buffer-to-string conversion in `fs.readFileSync()`
 * translates it to FEFF, the UTF-16 BOM.
 */
function stripBOM(content) {
  if (StringPrototypeCharCodeAt(content) === 0xFEFF) {
    content = StringPrototypeSlice(content, 1);
  }
  return content;
}

function addBuiltinLibsToObject(object, dummyModuleName) {
  // Make built-in modules available directly (loaded lazily).
  const Module = require('internal/modules/cjs/loader').Module;
  const { builtinModules } = Module;

  // To require built-in modules in user-land and ignore modules whose
  // `canBeRequiredByUsers` is false. So we create a dummy module object and not
  // use `require()` directly.
  const dummyModule = new Module(dummyModuleName);

  ArrayPrototypeForEach(builtinModules, (name) => {
    // Neither add underscored modules, nor ones that contain slashes (e.g.,
    // 'fs/promises') or ones that are already defined.
    if (StringPrototypeStartsWith(name, '_') ||
        StringPrototypeIncludes(name, '/') ||
        ObjectPrototypeHasOwnProperty(object, name)) {
      return;
    }
    // Goals of this mechanism are:
    // - Lazy loading of built-in modules
    // - Having all built-in modules available as non-enumerable properties
    // - Allowing the user to re-assign these variables as if there were no
    //   pre-existing globals with the same name.

    const setReal = (val) => {
      // Deleting the property before re-assigning it disables the
      // getter/setter mechanism.
      delete object[name];
      object[name] = val;
    };

    ObjectDefineProperty(object, name, {
      __proto__: null,
      get: () => {
        const lib = dummyModule.require(name);

        try {
          // Override the current getter/setter and set up a new
          // non-enumerable property.
          ObjectDefineProperty(object, name, {
            __proto__: null,
            get: () => lib,
            set: setReal,
            configurable: true,
            enumerable: false,
          });
        } catch {
          // If the property is no longer configurable, ignore the error.
        }

        return lib;
      },
      set: setReal,
      configurable: true,
      enumerable: false
    });
  });
}

/**
 *
 * @param {string | URL} referrer
 * @returns {string}
 */
function normalizeReferrerURL(referrer) {
  if (typeof referrer === 'string' && path.isAbsolute(referrer)) {
    return pathToFileURL(referrer).href;
  }
  return new URL(referrer).href;
}

// For error messages only - used to check if ESM syntax is in use.
function hasEsmSyntax(code) {
  debug('Checking for ESM syntax');
  const parser = require('internal/deps/acorn/acorn/dist/acorn').Parser;
  let root;
  try {
    root = parser.parse(code, { sourceType: 'module', ecmaVersion: 'latest' });
  } catch {
    return false;
  }

  return ArrayPrototypeSome(root.body, (stmt) =>
    stmt.type === 'ExportDefaultDeclaration' ||
    stmt.type === 'ExportNamedDeclaration' ||
    stmt.type === 'ImportDeclaration' ||
    stmt.type === 'ExportAllDeclaration');
}

module.exports = {
  addBuiltinLibsToObject,
  cjsConditions,
  hasEsmSyntax,
  loadBuiltinModule,
  makeRequireFunction,
  normalizeReferrerURL,
  stripBOM,
};
