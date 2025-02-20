// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
export var strShimFunction = "function";
export var strShimObject = "object";
export var strShimUndefined = "undefined";
export var strShimPrototype = "prototype";
export var strShimHasOwnProperty = "hasOwnProperty";
export var strDefault = "default";
export var ObjClass = Object;
export var ObjProto = ObjClass[strShimPrototype];
export var ObjAssign = ObjClass["assign"];
export var ObjCreate = ObjClass["create"];
export var ObjDefineProperty = ObjClass["defineProperty"];
export var ObjHasOwnProperty = ObjProto[strShimHasOwnProperty];