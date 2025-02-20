asename = basename(filepath);
      const relativePath = StringPrototypeSlice(relative(config.pjsonPath, filepath), 1);
      suggestion = 'Loading extensionless files is not supported inside of ' +
        '"type":"module" package.json contexts. The package.json file ' +
        `${config.pjsonPath} caused this "type":"module" context. Try ` +
        `changing ${filepath} to have a file extension. Note the "bin" ` +
        'field of package.json can point to a file with an extension, for example ' +
        `{"type":"module","bin":{"${fileBasename}":"${relativePath}.js"}}`;
    }
    throw new ERR_UNKNOWN_FILE_EXTENSION(ext, filepath, suggestion);
  }

  return getLegacyExtensionFormat(ext) ?? null;
}

/**
 * @param {URL} url
 * @param {{parentURL: string}} context
 * @returns {Promise<string> | undefined} only works when enabled
 */
function getHttpProtocolModuleFormat(url, context) {
  if (experimentalNetworkImports) {
    return PromisePrototypeThen(
      PromiseResolve(fetchModule(url, context)),
      (entry) => {
        return mimeToFormat(entry.headers['content-type']);
      }
    );
  }
}

/**
 * @param {URL | URL['href']} url
 * @param {{parentURL: string}} context
 * @returns {Promise<string> | string | undefined} only works when enabled
 */
function defaultGetFormatWithoutErrors(url, context) {
  const parsed = new URL(url);
  if (!ObjectPrototypeHasOwnProperty(protocolHandlers, parsed.protocol))
    return null;
  return protocolHandlers[parsed.protocol](parsed, context, true);
}

/**
 * @param {URL | URL['href']} url
 * @param {{parentURL: string}} context
 * @returns {Promise<string> | string | undefined} only works when enabled
 */
function defaultGetFormat(url, context) {
  const parsed = new URL(url);
  return ObjectPrototypeHasOwnProperty(protocolHandlers, parsed.protocol) ?
    protocolHandlers[parsed.protocol](parsed, context, false) :
    null;
}

module.exports = {
  defaultGetFormat,
  defaultGetFormatWithoutErrors,
  extensionFormatMap,
};
