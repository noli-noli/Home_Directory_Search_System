/*
 * Application Insights JavaScript SDK - Core, 2.8.15
 * Copyright (c) Microsoft and contributors. All rights reserved.
 */


//  @skip-file-minify
var _a;
import { createEnumStyle } from "../JavaScriptSDK.Enums/EnumHelperFuncs";
var FAILED = "Failed";
var FAILED_MONITOR_AJAX = FAILED + "MonitorAjax";
var TRACK = "Track";
var START = "Start";
var STOP = "Stop";
var EVENT = "Event";
var AUTH_CONTEXT = "AuthContext";
var EXCEPTION = "Exception";
var LOCAL = "Local";
var SESSION = "Session";
var STORAGE = "Storage";
var BROWSER = "Browser";
var CANNOT = "Cannot";
var BUFFER = "Buffer";
var INSTRUMENTATION_KEY = "InstrumentationKey";
export var LoggingSeverity = createEnumStyle({
    CRITICAL: 1 /* eLoggingSeverity.CRITICAL */,
    WARNING: 2 /* eLoggingSeverity.WARNING */
});
/**
 * Internal message ID. Please create a new one for every conceptually different message. Please keep alphabetically ordered
 */
export var _InternalMessageId = createEnumStyle((_a = {},
    // Non user actionable
    _a[BROWSER + "DoesNotSupport" + LOCAL + STORAGE] = 0 /* _eInternalMessageId.BrowserDoesNotSupportLocalStorage */,
    _a[BROWSER + CANNOT + "Read" + LOCAL + STORAGE] = 1 /* _eInternalMessageId.BrowserCannotReadLocalStorage */,
    _a[BROWSER + CANNOT + "Read" + SESSION + STORAGE] = 2 /* _eInternalMessageId.BrowserCannotReadSessionStorage */,
    _a[BROWSER + CANNOT + "Write" + LOCAL + STORAGE] = 3 /* _eInternalMessageId.BrowserCannotWriteLocalStorage */,
    _a[BROWSER + CANNOT + "Write" + SESSION + STORAGE] = 4 /* _eInternalMessageId.BrowserCannotWriteSessionStorage */,
    _a[BROWSER + FAILED + "RemovalFrom" + LOCAL + STORAGE] = 5 /* _eInternalMessageId.BrowserFailedRemovalFromLocalStorage */,
    _a[BROWSER + FAILED + "RemovalFrom" + SESSION + STORAGE] = 6 /* _eInternalMessageId.BrowserFailedRemovalFromSessionStorage */,
    _a[CANNOT + "SendEmptyTelemetry"] = 7 /* _eInternalMessageId.CannotSendEmptyTelemetry */,
    _a.ClientPerformanceMathError = 8 /* _eInternalMessageId.ClientPerformanceMathError */,
    _a["ErrorParsingAI" + SESSION + "Cookie"] = 9 /* _eInternalMessageId.ErrorParsingAISessionCookie */,
    _a.ErrorPVCalc = 10 /* _eInternalMessageId.ErrorPVCalc */,
    _a[EXCEPTION + "WhileLoggingError"] = 11 /* _eInternalMessageId.ExceptionWhileLoggingError */,
    _a[FAILED + "AddingTelemetryTo" + BUFFER] = 12 /* _eInternalMessageId.FailedAddingTelemetryToBuffer */,
    _a[FAILED_MONITOR_AJAX + "Abort"] = 13 /* _eInternalMessageId.FailedMonitorAjaxAbort */,
    _a[FAILED_MONITOR_AJAX + "Dur"] = 14 /* _eInternalMessageId.FailedMonitorAjaxDur */,
    _a[FAILED_MONITOR_AJAX + "Open"] = 15 /* _eInternalMessageId.FailedMonitorAjaxOpen */,
    _a[FAILED_MONITOR_AJAX + "RSC"] = 16 /* _eInternalMessageId.FailedMonitorAjaxRSC */,
    _a[FAILED_MONITOR_AJAX + "Send"] = 17 /* _eInternalMessageId.FailedMonitorAjaxSend */,
    _a[FAILED_MONITOR_AJAX + "GetCorrelationHeader"] = 18 /* _eInternalMessageId.FailedMonitorAjaxGetCorrelationHeader */,
    _a[FAILED + "ToAddHandlerForOnBeforeUnload"] = 19 /* _eInternalMessageId.FailedToAddHandlerForOnBeforeUnload */,
    _a[FAILED + "ToSendQueuedTelemetry"] = 20 /* _eInternalMessageId.FailedToSendQueuedTelemetry */,
    _a[FAILED + "ToReportDataLoss"] = 21 /* _eInternalMessageId.FailedToReportDataLoss */,
    _a["Flush" + FAILED] = 22 /* _eInternalMessageId.FlushFailed */,
    _a.MessageLimitPerPVExceeded = 23 /* _eInternalMessageId.MessageLimitPerPVExceeded */,
    _a.MissingRequiredFieldSpecification = 24 /* _eInternalMessageId.MissingRequiredFieldSpecification */,
    _a.NavigationTimingNotSupported = 25 /* _eInternalMessageId.NavigationTimingNotSupported */,
    _a.OnError = 26 /* _eInternalMessageId.OnError */,
    _a[SESSION + "RenewalDateIsZero"] = 27 /* _eInternalMessageId.SessionRenewalDateIsZero */,
    _a.SenderNotInitialized = 28 /* _eInternalMessageId.SenderNotInitialized */,
    _a[START + TRACK + EVENT + FAILED] = 29 /* _eInternalMessageId.StartTrackEventFailed */,
    _a[STOP + TRACK + EVENT + FAILED] = 30 /* _eInternalMessageId.StopTrackEventFailed */,
    _a[START + TRACK + FAILED] = 31 /* _eInternalMessageId.StartTrackFailed */,
    _a[STOP + TRACK + FAILED] = 32 /* _eInternalMessageId.StopTrackFailed */,
    _a.TelemetrySampledAndNotSent = 33 /* _eInternalMessageId.TelemetrySampledAndNotSent */,
    _a[TRACK + EVENT + FAILED] = 34 /* _eInternalMessageId.TrackEventFailed */,
    _a[TRACK + EXCEPTION + FAILED] = 35 /* _eInternalMessageId.TrackExceptionFailed */,
    _a[TRACK + "Metric" + FAILED] = 36 /* _eInternalMessageId.TrackMetricFailed */,
    _a[TRACK + "PV" + FAILED] = 37 /* _eInternalMessageId.TrackPVFailed */,
    _a[TRACK + "PV" + FAILED + "Calc"] = 38 /* _eInternalMessageId.TrackPVFailedCalc */,
    _a[TRACK + "Trace" + FAILED] = 39 /* _eInternalMessageId.TrackTraceFailed */,
    _a["Transmission" + FAILED] = 40 /* _eInternalMessageId.TransmissionFailed */,
    _a[FAILED + "ToSet" + STORAGE + BUFFER] = 41 /* _eInternalMessageId.FailedToSetStorageBuffer */,
    _a[FAILED + "ToRestore" + STORAGE + BUFFER] = 42 /* _eInternalMessageId.FailedToRestoreStorageBuffer */,
    _a.InvalidBackendResponse = 43 /* _eInternalMessageId.InvalidBackendResponse */,
    _a[FAILED + "ToFixDepricatedValues"] = 44 /* _eInternalMessageId.FailedToFixDepricatedValues */,
    _a.InvalidDurationValue = 45 /* _eInternalMessageId.InvalidDurationValue */,
    _a.TelemetryEnvelopeInvalid = 46 /* _eInternalMessageId.TelemetryEnvelopeInvalid */,
    _a.CreateEnvelopeError = 47 /* _eInternalMessageId.CreateEnvelopeError */,
    // User actionable
    _a[CANNOT + "SerializeObject"] = 48 /* _eInternalMessageId.CannotSerializeObject */,
    _a[CANNOT + "SerializeObjectNonSerializable"] = 49 /* _eInternalMessageId.CannotSerializeObjectNonSerializable */,
    _a.CircularReferenceDetected = 50 /* _eInternalMessageId.CircularReferenceDetected */,
    _a["Clear" + AUTH_CONTEXT + FAILED] = 51 /* _eInternalMessageId.ClearAuthContextFailed */,
    _a[EXCEPTION + "Truncated"] = 52 /* _eInternalMessageId.ExceptionTruncated */,
    _a.IllegalCharsInName = 53 /* _eInternalMessageId.IllegalCharsInName */,
    _a.ItemNotInArray = 54 /* _eInternalMessageId.ItemNotInArray */,
    _a.MaxAjaxPerPVExceeded = 55 /* _eInternalMessageId.MaxAjaxPerPVExceeded */,
    _a.MessageTruncated = 56 /* _eInternalMessageId.MessageTruncated */,
    _a.NameTooLong = 57 /* _eInternalMessageId.NameTooLong */,
    _a.SampleRateOutOfRange = 58 /* _eInternalMessageId.SampleRateOutOfRange */,
    _a["Set" + AUTH_CONTEXT + FAILED] = 59 /* _eInternalMessageId.SetAuthContextFailed */,
    _a["Set" + AUTH_CONTEXT + FAILED + "AccountName"] = 60 /* _eInternalMessageId.SetAuthContextFailedAccountName */,
    _a.StringValueTooLong = 61 /* _eInternalMessageId.StringValueTooLong */,
    _a.StartCalledMoreThanOnce = 62 /* _eInternalMessageId.StartCalledMoreThanOnce */,
    _a.StopCalledWithoutStart = 63 /* _eInternalMessageId.StopCalledWithoutStart */,
    _a["TelemetryInitializer" + FAILED] = 64 /* _eInternalMessageId.TelemetryInitializerFailed */,
    _a.TrackArgumentsNotSpecified = 65 /* _eInternalMessageId.TrackArgumentsNotSpecified */,
    _a.UrlTooLong = 66 /* _eInternalMessageId.UrlTooLong */,
    _a[SESSION + STORAGE + BUFFER + "Full"] = 67 /* _eInternalMessageId.SessionStorageBufferFull */,
    _a[CANNOT + "AccessCookie"] = 68 /* _eInternalMessageId.CannotAccessCookie */,
    _a.IdTooLong = 69 /* _eInternalMessageId.IdTooLong */,
    _a.InvalidEvent = 70 /* _eInternalMessageId.InvalidEvent */,
    _a[FAILED_MONITOR_AJAX + "SetRequestHeader"] = 71 /* _eInternalMessageId.FailedMonitorAjaxSetRequestHeader */,
    _a["Send" + BROWSER + "InfoOnUserInit"] = 72 /* _eInternalMessageId.SendBrowserInfoOnUserInit */,
    _a["Plugin" + EXCEPTION] = 73 /* _eInternalMessageId.PluginException */,
    _a["Notification" + EXCEPTION] = 74 /* _eInternalMessageId.NotificationException */,
    _a.SnippetScriptLoadFailure = 99 /* _eInternalMessageId.SnippetScriptLoadFailure */,
    _a["Invalid" + INSTRUMENTATION_KEY] = 100 /* _eInternalMessageId.InvalidInstrumentationKey */,
    _a[CANNOT + "ParseAiBlobValue"] = 101 /* _eInternalMessageId.CannotParseAiBlobValue */,
    _a.InvalidContentBlob = 102 /* _eInternalMessageId.InvalidContentBlob */,
    _a[TRACK + "PageAction" + EVENT + FAILED] = 103 /* _eInternalMessageId.TrackPageActionEventFailed */,
    _a[FAILED + "AddingCustomDefinedRequestContext"] = 104 /* _eInternalMessageId.FailedAddingCustomDefinedRequestContext */,
    _a["InMemory" + STORAGE + BUFFER + "Full"] = 105 /* _eInternalMessageId.InMemoryStorageBufferFull */,
    _a[INSTRUMENTATION_KEY + "Deprecation"] = 106 /* _eInternalMessageId.InstrumentationKeyDeprecation */,
    _a));