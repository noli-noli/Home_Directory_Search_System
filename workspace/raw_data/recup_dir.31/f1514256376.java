// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
import { ObjAssign } from "./Constants";
import { getGlobal } from "./Helpers";
import { __assignFn, __createBindingFn, __extendsFn } from "./TsLibShims";
export function __exposeGlobalTsLib() {
    var globalObj = getGlobal() || {};
    // tslint:disable: only-arrow-functions
    (function (root, assignFn, extendsFn, createBindingFn) {
        // Assign the globally scoped versions of the functions -- used when consuming individual ts files
        // If check is to support NativeScript where these are marked as readonly
        if (!root.__assign) {
            root.__assign = ObjAssign || assignFn;
        }
        if (!root.__extends) {
            root.__extends = extendsFn;
        }
        if (!root.__createBinding) {
            root.__createBinding = createBindingFn;
        }
    })(globalObj, __assignFn, __extendsFn, __createBindingFn);
    // Assign local variables that will be used for embedded scenarios, if check is to support NativeScript where these are marked as readonly
    if (!__assign) {
        __assign = globalObj.__assign;
    }
    if (!__extends) {
        __extends = globalObj.__extends;
    }
    if (!__createBinding) {
        __createBinding = globalObj.__createBinding;
    }
}