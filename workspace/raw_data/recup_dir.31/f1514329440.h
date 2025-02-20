 to re-run (which it should do); however, this should NOT cause
// ESM to be re-initialised; doing so causes duplicate custom loaders to be added to the public
// esmLoader.
let isESMInitialized = false;

/**
 * Causes side-effects: user-defined loader hooks are added to esmLoader.
 * @returns {void}
 */
async function initializeLoader() {
  if (isESMInitialized) { return; }

  const { getOptionValue } = require('internal/options');
  const customLoaders = getOptionValue('--experimental-loader');

  if (customLoaders.length === 0) return;

  let cwd;
  try {
    cwd = process.cwd() + '/';
  } catch {
    cwd = 'file:///';
  }

  // A separate loader instance is necessary to avoid cross-contamination
  // between internal Node.js and userland. For example, a module with internal
  // state (such as a counter) should be independent.
  const internalEsmLoader = new ESMLoader();

  // Importation must be handled by internal loader to avoid poluting userland
  const keyedExportsList = await internalEsmLoader.import(
    customLoaders,
    pathToFileURL(cwd).href,
    ObjectCreate(null),
  );

  // Hooks must then be added to external/public loader
  // (so they're triggered in userland)
  await esmLoader.addCustomLoaders(keyedExportsList);

  isESMInitialized = true;
}

exports.loadESM = async function loadESM(callback) {
  try {
    await initializeLoader();
    await callback(esmLoader);
  } catch (err) {
    if (hasUncaughtExceptionCaptureCallback()) {
      process._fatalException(err);
      return;
    }
    internalBinding('errors').triggerUncaughtException(
      err,
      true /* fromPromise */
    );
  }
};
