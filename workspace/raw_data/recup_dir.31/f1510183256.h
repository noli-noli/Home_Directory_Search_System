{
  "name": "@xterm/addon-ligatures",
  "version": "0.10.0-beta.70",
  "description": "Add support for programming ligatures to xterm.js",
  "author": {
    "name": "The xterm.js authors",
    "url": "https://xtermjs.org/"
  },
  "main": "lib/addon-ligatures.js",
  "module": "lib/addon-ligatures.mjs",
  "types": "typings/addon-ligatures.d.ts",
  "repository": "https://github.com/xtermjs/xterm.js/tree/master/addons/addon-ligatures",
  "engines": {
    "node": ">8.0.0"
  },
  "scripts": {
    "prepare": "node bin/download-fonts.js",
    "build": "tsc -p src",
    "watch": "tsc -w -p src",
    "prepackage": "npm run build",
    "package": "webpack",
    "pretest": "npm run build",
    "test": "nyc mocha out/**/*.test.js",
    "prepublish": "npm run package"
  },
  "keywords": [
    "font",
    "ligature",
    "terminal",
    "xterm",
    "xterm.js"
  ],
  "license": "MIT",
  "dependencies": {
    "font-finder": "^1.1.0",
    "font-ligatures": "^1.4.1"
  },
  "devDependencies": {
    "@types/sinon": "^5.0.1",
    "axios": "^1.6.0",
    "mkdirp": "0.5.5",
    "sinon": "6.3.5",
    "yauzl": "^2.10.0"
  },
  "peerDependencies": {
    "@xterm/xterm": "^5.6.0-beta.70"
  },
  "commit": "41e8ae395937011d6bf6c7cb618b851791aed395"
}