/*
 * Application Insights JavaScript SDK - Core, 2.8.15
 * Copyright (c) Microsoft and contributors. All rights reserved.
 */


import { createEnumStyle } from "../JavaScriptSDK.Enums/EnumHelperFuncs";
/**
 * The EventsDiscardedReason enumeration contains a set of values that specify the reason for discarding an event.
 */
export var EventsDiscardedReason = createEnumStyle({
    /**
     * Unknown.
     */
    Unknown: 0 /* eEventsDiscardedReason.Unknown */,
    /**
     * Status set to non-retryable.
     */
    NonRetryableStatus: 1 /* eEventsDiscardedReason.NonRetryableStatus */,
    /**
     * The event is invalid.
     */
    InvalidEvent: 2 /* eEventsDiscardedReason.InvalidEvent */,
    /**
     * The size of the event is too large.
     */
    SizeLimitExceeded: 3 /* eEventsDiscardedReason.SizeLimitExceeded */,
    /**
     * The server is not accepting events from this instrumentation key.
     */
    KillSwitch: 4 /* eEventsDiscardedReason.KillSwitch */,
    /**
     * The event queue is full.
     */
    QueueFull: 5 /* eEventsDiscardedReason.QueueFull */
});