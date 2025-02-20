MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGElement/load_event)
     */
    onload: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /**
     * Occurs when media data is loaded at the current playback position.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/loadeddata_event)
     */
    onloadeddata: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /**
     * Occurs when the duration and dimensions of the media have been determined.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/loadedmetadata_event)
     */
    onloadedmetadata: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /**
     * Occurs when Internet Explorer begins looking for media data.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/loadstart_event)
     */
    onloadstart: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/lostpointercapture_event) */
    onlostpointercapture: ((this: GlobalEventHandlers, ev: PointerEvent) => any) | null;
    /**
     * Fires when the user clicks the object with either mouse button.
     * @param ev The mouse event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/mousedown_event)
     */
    onmousedown: ((this: GlobalEventHandlers, ev: MouseEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/mouseenter_event) */
    onmouseenter: ((this: GlobalEventHandlers, ev: MouseEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/mouseleave_event) */
    onmouseleave: ((this: GlobalEventHandlers, ev: MouseEvent) => any) | null;
    /**
     * Fires when the user moves the mouse over the object.
     * @param ev The mouse event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/mousemove_event)
     */
    onmousemove: ((this: GlobalEventHandlers, ev: MouseEvent) => any) | null;
    /**
     * Fires when the user moves the mouse pointer outside the boundaries of the object.
     * @param ev The mouse event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/mouseout_event)
     */
    onmouseout: ((this: GlobalEventHandlers, ev: MouseEvent) => any) | null;
    /**
     * Fires when the user moves the mouse pointer into the object.
     * @param ev The mouse event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/mouseover_event)
     */
    onmouseover: ((this: GlobalEventHandlers, ev: MouseEvent) => any) | null;
    /**
     * Fires when the user releases a mouse button while the mouse is over the object.
     * @param ev The mouse event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/mouseup_event)
     */
    onmouseup: ((this: GlobalEventHandlers, ev: MouseEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/paste_event) */
    onpaste: ((this: GlobalEventHandlers, ev: ClipboardEvent) => any) | null;
    /**
     * Occurs when playback is paused.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/pause_event)
     */
    onpause: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /**
     * Occurs when the play method is requested.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/play_event)
     */
    onplay: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /**
     * Occurs when the audio or video has started playing.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/playing_event)
     */
    onplaying: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/pointercancel_event) */
    onpointercancel: ((this: GlobalEventHandlers, ev: PointerEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/pointerdown_event) */
    onpointerdown: ((this: GlobalEventHandlers, ev: PointerEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/pointerenter_event) */
    onpointerenter: ((this: GlobalEventHandlers, ev: PointerEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/pointerleave_event) */
    onpointerleave: ((this: GlobalEventHandlers, ev: PointerEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/pointermove_event) */
    onpointermove: ((this: GlobalEventHandlers, ev: PointerEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/pointerout_event) */
    onpointerout: ((this: GlobalEventHandlers, ev: PointerEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/pointerover_event) */
    onpointerover: ((this: GlobalEventHandlers, ev: PointerEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/pointerup_event) */
    onpointerup: ((this: GlobalEventHandlers, ev: PointerEvent) => any) | null;
    /**
     * Occurs to indicate progress while downloading media data.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/progress_event)
     */
    onprogress: ((this: GlobalEventHandlers, ev: ProgressEvent) => any) | null;
    /**
     * Occurs when the playback rate is increased or decreased.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/ratechange_event)
     */
    onratechange: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /**
     * Fires when the user resets a form.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFormElement/reset_event)
     */
    onreset: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLVideoElement/resize_event) */
    onresize: ((this: GlobalEventHandlers, ev: UIEvent) => any) | null;
    /**
     * Fires when the user repositions the scroll box in the scroll bar on the object.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/scroll_event)
     */
    onscroll: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/scrollend_event) */
    onscrollend: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/securitypolicyviolation_event) */
    onsecuritypolicyviolation: ((this: GlobalEventHandlers, ev: SecurityPolicyViolationEvent) => any) | null;
    /**
     * Occurs when the seek operation ends.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/seeked_event)
     */
    onseeked: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /**
     * Occurs when the current playback position is moved.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/seeking_event)
     */
    onseeking: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /**
     * Fires when the current selection changes.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/select_event)
     */
    onselect: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/selectionchange_event) */
    onselectionchange: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/selectstart_event) */
    onselectstart: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSlotElement/slotchange_event) */
    onslotchange: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /**
     * Occurs when the download has stopped.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/stalled_event)
     */
    onstalled: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFormElement/submit_event) */
    onsubmit: ((this: GlobalEventHandlers, ev: SubmitEvent) => any) | null;
    /**
     * Occurs if the load operation has been intentionally halted.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/suspend_event)
     */
    onsuspend: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /**
     * Occurs to indicate the current playback position.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/timeupdate_event)
     */
    ontimeupdate: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLDetailsElement/toggle_event) */
    ontoggle: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/touchcancel_event) */
    ontouchcancel?: ((this: GlobalEventHandlers, ev: TouchEvent) => any) | null | undefined;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/touchend_event) */
    ontouchend?: ((this: GlobalEventHandlers, ev: TouchEvent) => any) | null | undefined;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/touchmove_event) */
    ontouchmove?: ((this: GlobalEventHandlers, ev: TouchEvent) => any) | null | undefined;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/touchstart_event) */
    ontouchstart?: ((this: GlobalEventHandlers, ev: TouchEvent) => any) | null | undefined;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/transitioncancel_event) */
    ontransitioncancel: ((this: GlobalEventHandlers, ev: TransitionEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/transitionend_event) */
    ontransitionend: ((this: GlobalEventHandlers, ev: TransitionEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/transitionrun_event) */
    ontransitionrun: ((this: GlobalEventHandlers, ev: TransitionEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/transitionstart_event) */
    ontransitionstart: ((this: GlobalEventHandlers, ev: TransitionEvent) => any) | null;
    /**
     * Occurs when the volume is changed, or playback is muted or unmuted.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/volumechange_event)
     */
    onvolumechange: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /**
     * Occurs when playback stops because the next frame of a video resource is not available.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/waiting_event)
     */
    onwaiting: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /**
     * @deprecated This is a legacy alias of `onanimationend`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/animationend_event)
     */
    onwebkitanimationend: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /**
     * @deprecated This is a legacy alias of `onanimationiteration`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/animationiteration_event)
     */
    onwebkitanimationiteration: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /**
     * @deprecated This is a legacy alias of `onanimationstart`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/animationstart_event)
     */
    onwebkitanimationstart: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /**
     * @deprecated This is a legacy alias of `ontransitionend`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/transitionend_event)
     */
    onwebkittransitionend: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/wheel_event) */
    onwheel: ((this: GlobalEventHandlers, ev: WheelEvent) => any) | null;
    addEventListener<K extends keyof GlobalEventHandlersEventMap>(type: K, listener: (this: GlobalEventHandlers, ev: GlobalEventHandlersEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof GlobalEventHandlersEventMap>(type: K, listener: (this: GlobalEventHandlers, ev: GlobalEventHandlersEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAllCollection) */
interface HTMLAllCollection {
    /**
     * Returns the number of elements in the collection.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAllCollection/length)
     */
    readonly length: number;
    /**
     * Returns the item with index index from the collection (determined by tree order).
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAllCollection/item)
     */
    item(nameOrIndex?: string): HTMLCollection | Element | null;
    /**
     * Returns the item with ID or name name from the collection.
     *
     * If there are multiple matching items, then an HTMLCollection object containing all those elements is returned.
     *
     * Only button, form, iframe, input, map, meta, object, select, and textarea elements can have a name for the purpose of this method; their name is given by the value of their name attribute.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAllCollection/namedItem)
     */
    namedItem(name: string): HTMLCollection | Element | null;
    [index: number]: Element;
}

declare var HTMLAllCollection: {
    prototype: HTMLAllCollection;
    new(): HTMLAllCollection;
};

/**
 * Hyperlink elements and provides special properties and methods (beyond those of the regular HTMLElement object interface that they inherit from) for manipulating the layout and presentation of such elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAnchorElement)
 */
interface HTMLAnchorElement extends HTMLElement, HTMLHyperlinkElementUtils {
    /**
     * Sets or retrieves the character set used to encode the object.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAnchorElement/charset)
     */
    charset: string;
    /**
     * Sets or retrieves the coordinates of the object.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAnchorElement/coords)
     */
    coords: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAnchorElement/download) */
    download: string;
    /**
     * Sets or retrieves the language code of the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAnchorElement/hreflang)
     */
    hreflang: string;
    /**
     * Sets or retrieves the shape of the object.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAnchorElement/name)
     */
    name: string;
    ping: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAnchorElement/referrerPolicy) */
    referrerPolicy: string;
    /**
     * Sets or retrieves the relationship between the object and the destination of the link.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAnchorElement/rel)
     */
    rel: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAnchorElement/relList) */
    readonly relList: DOMTokenList;
    /**
     * Sets or retrieves the relationship between the object and the destination of the link.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAnchorElement/rev)
     */
    rev: string;
    /**
     * Sets or retrieves the shape of the object.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAnchorElement/shape)
     */
    shape: string;
    /**
     * Sets or retrieves the window or frame at which to target content.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAnchorElement/target)
     */
    target: string;
    /**
     * Retrieves or sets the text of the object as a string.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAnchorElement/text)
     */
    text: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAnchorElement/type) */
    type: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLAnchorElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLAnchorElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLAnchorElement: {
    prototype: HTMLAnchorElement;
    new(): HTMLAnchorElement;
};

/**
 * Provides special properties and methods (beyond those of the regular object HTMLElement interface it also has available to it by inheritance) for manipulating the layout and presentation of <area> elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAreaElement)
 */
interface HTMLAreaElement extends HTMLElement, HTMLHyperlinkElementUtils {
    /**
     * Sets or retrieves a text alternative to the graphic.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAreaElement/alt)
     */
    alt: string;
    /**
     * Sets or retrieves the coordinates of the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAreaElement/coords)
     */
    coords: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAreaElement/download) */
    download: string;
    /**
     * Sets or gets whether clicks in this region cause action.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAreaElement/noHref)
     */
    noHref: boolean;
    ping: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAreaElement/referrerPolicy) */
    referrerPolicy: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAreaElement/rel) */
    rel: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAreaElement/relList) */
    readonly relList: DOMTokenList;
    /**
     * Sets or retrieves the shape of the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAreaElement/shape)
     */
    shape: string;
    /**
     * Sets or retrieves the window or frame at which to target content.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAreaElement/target)
     */
    target: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLAreaElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLAreaElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLAreaElement: {
    prototype: HTMLAreaElement;
    new(): HTMLAreaElement;
};

/**
 * Provides access to the properties of <audio> elements, as well as methods to manipulate them. It derives from the HTMLMediaElement interface.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAudioElement)
 */
interface HTMLAudioElement extends HTMLMediaElement {
    addEventListener<K extends keyof HTMLMediaElementEventMap>(type: K, listener: (this: HTMLAudioElement, ev: HTMLMediaElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLMediaElementEventMap>(type: K, listener: (this: HTMLAudioElement, ev: HTMLMediaElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLAudioElement: {
    prototype: HTMLAudioElement;
    new(): HTMLAudioElement;
};

/**
 * A HTML line break element (<br>). It inherits from HTMLElement.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLBRElement)
 */
interface HTMLBRElement extends HTMLElement {
    /**
     * Sets or retrieves the side on which floating objects are not to be positioned when any IHTMLBlockElement is inserted into the document.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLBRElement/clear)
     */
    clear: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLBRElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLBRElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLBRElement: {
    prototype: HTMLBRElement;
    new(): HTMLBRElement;
};

/**
 * Contains the base URI for a document. This object inherits all of the properties and methods as described in the HTMLElement interface.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLBaseElement)
 */
interface HTMLBaseElement extends HTMLElement {
    /**
     * Gets or sets the baseline URL on which relative links are based.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLBaseElement/href)
     */
    href: string;
    /**
     * Sets or retrieves the window or frame at which to target content.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLBaseElement/target)
     */
    target: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLBaseElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLBaseElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLBaseElement: {
    prototype: HTMLBaseElement;
    new(): HTMLBaseElement;
};

interface HTMLBodyElementEventMap extends HTMLElementEventMap, WindowEventHandlersEventMap {
}

/**
 * Provides special properties (beyond those inherited from the regular HTMLElement interface) for manipulating <body> elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLBodyElement)
 */
interface HTMLBodyElement extends HTMLElement, WindowEventHandlers {
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLBodyElement/aLink)
     */
    aLink: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLBodyElement/background)
     */
    background: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLBodyElement/bgColor)
     */
    bgColor: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLBodyElement/link)
     */
    link: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLBodyElement/text)
     */
    text: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLBodyElement/vLink)
     */
    vLink: string;
    addEventListener<K extends keyof HTMLBodyElementEventMap>(type: K, listener: (this: HTMLBodyElement, ev: HTMLBodyElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLBodyElementEventMap>(type: K, listener: (this: HTMLBodyElement, ev: HTMLBodyElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLBodyElement: {
    prototype: HTMLBodyElement;
    new(): HTMLBodyElement;
};

/**
 * Provides properties and methods (beyond the regular HTMLElement interface it also has available to it by inheritance) for manipulating <button> elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLButtonElement)
 */
interface HTMLButtonElement extends HTMLElement, PopoverInvokerElement {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLButtonElement/disabled) */
    disabled: boolean;
    /**
     * Retrieves a reference to the form that the object is embedded in.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLButtonElement/form)
     */
    readonly form: HTMLFormElement | null;
    /**
     * Overrides the action attribute (where the data on a form is sent) on the parent form element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLButtonElement/formAction)
     */
    formAction: string;
    /**
     * Used to override the encoding (formEnctype attribute) specified on the form element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLButtonElement/formEnctype)
     */
    formEnctype: string;
    /**
     * Overrides the submit method attribute previously specified on a form element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLButtonElement/formMethod)
     */
    formMethod: string;
    /**
     * Overrides any validation or required attributes on a form or form elements to allow it to be submitted without validation. This can be used to create a "save draft"-type submit option.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLButtonElement/formNoValidate)
     */
    formNoValidate: boolean;
    /**
     * Overrides the target attribute on a form element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLButtonElement/formTarget)
     */
    formTarget: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLButtonElement/labels) */
    readonly labels: NodeListOf<HTMLLabelElement>;
    /**
     * Sets or retrieves the name of the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLButtonElement/name)
     */
    name: string;
    /**
     * Gets the classification and default behavior of the button.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLButtonElement/type)
     */
    type: "submit" | "reset" | "button";
    /**
     * Returns the error message that would be displayed if the user submits the form, or an empty string if no error message. It also triggers the standard error message, such as "this is a required field". The result is that the user sees validation messages without actually submitting.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLButtonElement/validationMessage)
     */
    readonly validationMessage: string;
    /**
     * Returns a  ValidityState object that represents the validity states of an element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLButtonElement/validity)
     */
    readonly validity: ValidityState;
    /**
     * Sets or retrieves the default or selected value of the control.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLButtonElement/value)
     */
    value: string;
    /**
     * Returns whether an element will successfully validate based on forms validation rules and constraints.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLButtonElement/willValidate)
     */
    readonly willValidate: boolean;
    /** Returns whether a form will validate when it is submitted, without having to submit it. */
    checkValidity(): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLButtonElement/reportValidity) */
    reportValidity(): boolean;
    /**
     * Sets a custom error message that is displayed when a form is submitted.
     * @param error Sets a custom error message that is displayed when a form is submitted.
     */
    setCustomValidity(error: string): void;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLButtonElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLButtonElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLButtonElement: {
    prototype: HTMLButtonElement;
    new(): HTMLButtonElement;
};

/**
 * Provides properties and methods for manipulating the layout and presentation of <canvas> elements. The HTMLCanvasElement interface also inherits the properties and methods of the HTMLElement interface.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLCanvasElement)
 */
interface HTMLCanvasElement extends HTMLElement {
    /**
     * Gets or sets the height of a canvas element on a document.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLCanvasElement/height)
     */
    height: number;
    /**
     * Gets or sets the width of a canvas element on a document.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLCanvasElement/width)
     */
    width: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLCanvasElement/captureStream) */
    captureStream(frameRequestRate?: number): MediaStream;
    /**
     * Returns an object that provides methods and properties for drawing and manipulating images and graphics on a canvas element in a document. A context object includes information about colors, line widths, fonts, and other graphic parameters that can be drawn on a canvas.
     * @param contextId The identifier (ID) of the type of canvas to create. Internet Explorer 9 and Internet Explorer 10 support only a 2-D context using canvas.getContext("2d"); IE11 Preview also supports 3-D or WebGL context using canvas.getContext("experimental-webgl");
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLCanvasElement/getContext)
     */
    getContext(contextId: "2d", options?: CanvasRenderingContext2DSettings): CanvasRenderingContext2D | null;
    getContext(contextId: "bitmaprenderer", options?: ImageBitmapRenderingContextSettings): ImageBitmapRenderingContext | null;
    getContext(contextId: "webgl", options?: WebGLContextAttributes): WebGLRenderingContext | null;
    getContext(contextId: "webgl2", options?: WebGLContextAttributes): WebGL2RenderingContext | null;
    getContext(contextId: string, options?: any): RenderingContext | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLCanvasElement/toBlob) */
    toBlob(callback: BlobCallback, type?: string, quality?: any): void;
    /**
     * Returns the content of the current canvas as an image that you can use as a source for another canvas or an HTML element.
     * @param type The standard MIME type for the image format to return. If you do not specify this parameter, the default value is a PNG format image.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLCanvasElement/toDataURL)
     */
    toDataURL(type?: string, quality?: any): string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLCanvasElement/transferControlToOffscreen) */
    transferControlToOffscreen(): OffscreenCanvas;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLCanvasElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLCanvasElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLCanvasElement: {
    prototype: HTMLCanvasElement;
    new(): HTMLCanvasElement;
};

/**
 * A generic collection (array-like object similar to arguments) of elements (in document order) and offers methods and properties for selecting from the list.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLCollection)
 */
interface HTMLCollectionBase {
    /**
     * Sets or retrieves the number of objects in a collection.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLCollection/length)
     */
    readonly length: number;
    /**
     * Retrieves an object from various collections.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLCollection/item)
     */
    item(index: number): Element | null;
    [index: number]: Element;
}

interface HTMLCollection extends HTMLCollectionBase {
    /**
     * Retrieves a select object or an object from an options collection.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLCollection/namedItem)
     */
    namedItem(name: string): Element | null;
}

declare var HTMLCollection: {
    prototype: HTMLCollection;
    new(): HTMLCollection;
};

interface HTMLCollectionOf<T extends Element> extends HTMLCollectionBase {
    item(index: number): T | null;
    namedItem(name: string): T | null;
    [index: number]: T;
}

/**
 * Provides special properties (beyond those of the regular HTMLElement interface it also has available to it by inheritance) for manipulating definition list (<dl>) elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLDListElement)
 */
interface HTMLDListElement extends HTMLElement {
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLDListElement/compact)
     */
    compact: boolean;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLDListElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLDListElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLDListElement: {
    prototype: HTMLDListElement;
    new(): HTMLDListElement;
};

/**
 * Provides special properties (beyond the regular HTMLElement interface it also has available to it by inheritance) for manipulating <data> elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLDataElement)
 */
interface HTMLDataElement extends HTMLElement {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLDataElement/value) */
    value: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLDataElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLDataElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLDataElement: {
    prototype: HTMLDataElement;
    new(): HTMLDataElement;
};

/**
 * Provides special properties (beyond the HTMLElement object interface it also has available to it by inheritance) to manipulate <datalist> elements and their content.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLDataListElement)
 */
interface HTMLDataListElement extends HTMLElement {
    /**
     * Returns an HTMLCollection of the option elements of the datalist element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLDataListElement/options)
     */
    readonly options: HTMLCollectionOf<HTMLOptionElement>;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLDataListElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLDataListElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLDataListElement: {
    prototype: HTMLDataListElement;
    new(): HTMLDataListElement;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLDetailsElement) */
interface HTMLDetailsElement extends HTMLElement {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLDetailsElement/open) */
    open: boolean;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLDetailsElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLDetailsElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLDetailsElement: {
    prototype: HTMLDetailsElement;
    new(): HTMLDetailsElement;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLDialogElement) */
interface HTMLDialogElement extends HTMLElement {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLDialogElement/open) */
    open: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLDialogElement/returnValue) */
    returnValue: string;
    /**
     * Closes the dialog element.
     *
     * The argument, if provided, provides a return value.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLDialogElement/close)
     */
    close(returnValue?: string): void;
    /**
     * Displays the dialog element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLDialogElement/show)
     */
    show(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLDialogElement/showModal) */
    showModal(): void;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLDialogElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLDialogElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLDialogElement: {
    prototype: HTMLDialogElement;
    new(): HTMLDialogElement;
};

/** @deprecated */
interface HTMLDirectoryElement extends HTMLElement {
    /** @deprecated */
    compact: boolean;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLDirectoryElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLDirectoryElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

/** @deprecated */
declare var HTMLDirectoryElement: {
    prototype: HTMLDirectoryElement;
    new(): HTMLDirectoryElement;
};

/**
 * Provides special properties (beyond the regular HTMLElement interface it also has available to it by inheritance) for manipulating <div> elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLDivElement)
 */
interface HTMLDivElement extends HTMLElement {
    /**
     * Sets or retrieves how the object is aligned with adjacent text.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLDivElement/align)
     */
    align: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLDivElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLDivElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLDivElement: {
    prototype: HTMLDivElement;
    new(): HTMLDivElement;
};

/** @deprecated use Document */
interface HTMLDocument extends Document {
    addEventListener<K extends keyof DocumentEventMap>(type: K, listener: (this: HTMLDocument, ev: DocumentEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof DocumentEventMap>(type: K, listener: (this: HTMLDocument, ev: DocumentEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

/** @deprecated */
declare var HTMLDocument: {
    prototype: HTMLDocument;
    new(): HTMLDocument;
};

interface HTMLElementEventMap extends ElementEventMap, GlobalEventHandlersEventMap {
}

/**
 * Any HTML element. Some elements directly implement this interface, while others implement it via an interface that inherits it.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement)
 */
interface HTMLElement extends Element, ElementCSSInlineStyle, ElementContentEditable, GlobalEventHandlers, HTMLOrSVGElement {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/accessKey) */
    accessKey: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/accessKeyLabel) */
    readonly accessKeyLabel: string;
    autocapitalize: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/dir) */
    dir: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/draggable) */
    draggable: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/hidden) */
    hidden: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/inert) */
    inert: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/innerText) */
    innerText: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/lang) */
    lang: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/offsetHeight) */
    readonly offsetHeight: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/offsetLeft) */
    readonly offsetLeft: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/offsetParent) */
    readonly offsetParent: Element | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/offsetTop) */
    readonly offsetTop: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/offsetWidth) */
    readonly offsetWidth: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/outerText) */
    outerText: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/popover) */
    popover: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/spellcheck) */
    spellcheck: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/title) */
    title: string;
    translate: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/attachInternals) */
    attachInternals(): ElementInternals;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/click) */
    click(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/hidePopover) */
    hidePopover(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/showPopover) */
    showPopover(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/togglePopover) */
    togglePopover(force?: boolean): void;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLElement: {
    prototype: HTMLElement;
    new(): HTMLElement;
};

/**
 * Provides special properties (beyond the regular HTMLElement interface it also has available to it by inheritance) for manipulating <embed> elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLEmbedElement)
 */
interface HTMLEmbedElement extends HTMLElement {
    /** @deprecated */
    align: string;
    /** Sets or retrieves the height of the object. */
    height: string;
    /**
     * Sets or retrieves the name of the object.
     * @deprecated
     */
    name: string;
    /** Sets or retrieves a URL to be loaded by the object. */
    src: string;
    type: string;
    /** Sets or retrieves the width of the object. */
    width: string;
    getSVGDocument(): Document | null;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLEmbedElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLEmbedElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLEmbedElement: {
    prototype: HTMLEmbedElement;
    new(): HTMLEmbedElement;
};

/**
 * Provides special properties and methods (beyond the regular HTMLElement interface it also has available to it by inheritance) for manipulating the layout and presentation of <fieldset> elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFieldSetElement)
 */
interface HTMLFieldSetElement extends HTMLElement {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFieldSetElement/disabled) */
    disabled: boolean;
    /**
     * Returns an HTMLCollection of the form controls in the element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFieldSetElement/elements)
     */
    readonly elements: HTMLCollection;
    /**
     * Retrieves a reference to the form that the object is embedded in.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFieldSetElement/form)
     */
    readonly form: HTMLFormElement | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFieldSetElement/name) */
    name: string;
    /**
     * Returns the string "fieldset".
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFieldSetElement/type)
     */
    readonly type: string;
    /**
     * Returns the error message that would be displayed if the user submits the form, or an empty string if no error message. It also triggers the standard error message, such as "this is a required field". The result is that the user sees validation messages without actually submitting.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFieldSetElement/validationMessage)
     */
    readonly validationMessage: string;
    /**
     * Returns a  ValidityState object that represents the validity states of an element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFieldSetElement/validity)
     */
    readonly validity: ValidityState;
    /**
     * Returns whether an element will successfully validate based on forms validation rules and constraints.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFieldSetElement/willValidate)
     */
    readonly willValidate: boolean;
    /** Returns whether a form will validate when it is submitted, without having to submit it. */
    checkValidity(): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFieldSetElement/reportValidity) */
    reportValidity(): boolean;
    /**
     * Sets a custom error message that is displayed when a form is submitted.
     * @param error Sets a custom error message that is displayed when a form is submitted.
     */
    setCustomValidity(error: string): void;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLFieldSetElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLFieldSetElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLFieldSetElement: {
    prototype: HTMLFieldSetElement;
    new(): HTMLFieldSetElement;
};

/**
 * Implements the document object model (DOM) representation of the font element. The HTML Font Element <font> defines the font size, font face and color of text.
 * @deprecated
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFontElement)
 */
interface HTMLFontElement extends HTMLElement {
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFontElement/color)
     */
    color: string;
    /**
     * Sets or retrieves the current typeface family.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFontElement/face)
     */
    face: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFontElement/size)
     */
    size: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLFontElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLFontElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

/** @deprecated */
declare var HTMLFontElement: {
    prototype: HTMLFontElement;
    new(): HTMLFontElement;
};

/**
 * A collection of HTML form control elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFormControlsCollection)
 */
interface HTMLFormControlsCollection extends HTMLCollectionBase {
    /**
     * Returns the item with ID or name name from the collection.
     *
     * If there are multiple matching items, then a RadioNodeList object containing all those elements is returned.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFormControlsCollection/namedItem)
     */
    namedItem(name: string): RadioNodeList | Element | null;
}

declare var HTMLFormControlsCollection: {
    prototype: HTMLFormControlsCollection;
    new(): HTMLFormControlsCollection;
};

/**
 * A <form> element in the DOM; it allows access to and in some cases modification of aspects of the form, as well as access to its component elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFormElement)
 */
interface HTMLFormElement extends HTMLElement {
    /**
     * Sets or retrieves a list of character encodings for input data that must be accepted by the server processing the form.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFormElement/acceptCharset)
     */
    acceptCharset: string;
    /**
     * Sets or retrieves the URL to which the form content is sent for processing.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFormElement/action)
     */
    action: string;
    /**
     * Specifies whether autocomplete is applied to an editable text field.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFormElement/autocomplete)
     */
    autocomplete: AutoFillBase;
    /**
     * Retrieves a collection, in source order, of all controls in a given form.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFormElement/elements)
     */
    readonly elements: HTMLFormControlsCollection;
    /**
     * Sets or retrieves the MIME encoding for the form.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFormElement/encoding)
     */
    encoding: string;
    /**
     * Sets or retrieves the encoding type for the form.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFormElement/enctype)
     */
    enctype: string;
    /**
     * Sets or retrieves the number of objects in a collection.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFormElement/length)
     */
    readonly length: number;
    /**
     * Sets or retrieves how to send the form data to the server.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFormElement/method)
     */
    method: string;
    /**
     * Sets or retrieves the name of the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFormElement/name)
     */
    name: string;
    /**
     * Designates a form that is not validated when submitted.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFormElement/noValidate)
     */
    noValidate: boolean;
    rel: string;
    readonly relList: DOMTokenList;
    /**
     * Sets or retrieves the window or frame at which to target content.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFormElement/target)
     */
    target: string;
    /**
     * Returns whether a form will validate when it is submitted, without having to submit it.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFormElement/checkValidity)
     */
    checkValidity(): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFormElement/reportValidity) */
    reportValidity(): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFormElement/requestSubmit) */
    requestSubmit(submitter?: HTMLElement | null): void;
    /**
     * Fires when the user resets a form.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFormElement/reset)
     */
    reset(): void;
    /**
     * Fires when a FORM is about to be submitted.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFormElement/submit)
     */
    submit(): void;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLFormElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLFormElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
    [index: number]: Element;
    [name: string]: any;
}

declare var HTMLFormElement: {
    prototype: HTMLFormElement;
    new(): HTMLFormElement;
};

/**
 * @deprecated
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFrameElement)
 */
interface HTMLFrameElement extends HTMLElement {
    /**
     * Retrieves the document object of the page or frame.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFrameElement/contentDocument)
     */
    readonly contentDocument: Document | null;
    /**
     * Retrieves the object of the specified.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFrameElement/contentWindow)
     */
    readonly contentWindow: WindowProxy | null;
    /**
     * Sets or retrieves whether to display a border for the frame.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFrameElement/frameBorder)
     */
    frameBorder: string;
    /**
     * Sets or retrieves a URI to a long description of the object.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFrameElement/longDesc)
     */
    longDesc: string;
    /**
     * Sets or retrieves the top and bottom margin heights before displaying the text in a frame.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFrameElement/marginHeight)
     */
    marginHeight: string;
    /**
     * Sets or retrieves the left and right margin widths before displaying the text in a frame.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFrameElement/marginWidth)
     */
    marginWidth: string;
    /**
     * Sets or retrieves the frame name.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFrameElement/name)
     */
    name: string;
    /**
     * Sets or retrieves whether the user can resize the frame.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFrameElement/noResize)
     */
    noResize: boolean;
    /**
     * Sets or retrieves whether the frame can be scrolled.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFrameElement/scrolling)
     */
    scrolling: string;
    /**
     * Sets or retrieves a URL to be loaded by the object.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFrameElement/src)
     */
    src: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLFrameElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLFrameElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

/** @deprecated */
declare var HTMLFrameElement: {
    prototype: HTMLFrameElement;
    new(): HTMLFrameElement;
};

interface HTMLFrameSetElementEventMap extends HTMLElementEventMap, WindowEventHandlersEventMap {
}

/**
 * Provides special properties (beyond those of the regular HTMLElement interface they also inherit) for manipulating <frameset> elements.
 * @deprecated
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFrameSetElement)
 */
interface HTMLFrameSetElement extends HTMLElement, WindowEventHandlers {
    /**
     * Sets or retrieves the frame widths of the object.
     * @deprecated
     */
    cols: string;
    /**
     * Sets or retrieves the frame heights of the object.
     * @deprecated
     */
    rows: string;
    addEventListener<K extends keyof HTMLFrameSetElementEventMap>(type: K, listener: (this: HTMLFrameSetElement, ev: HTMLFrameSetElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLFrameSetElementEventMap>(type: K, listener: (this: HTMLFrameSetElement, ev: HTMLFrameSetElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

/** @deprecated */
declare var HTMLFrameSetElement: {
    prototype: HTMLFrameSetElement;
    new(): HTMLFrameSetElement;
};

/**
 * Provides special properties (beyond those of the HTMLElement interface it also has available to it by inheritance) for manipulating <hr> elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLHRElement)
 */
interface HTMLHRElement extends HTMLElement {
    /**
     * Sets or retrieves how the object is aligned with adjacent text.
     * @deprecated
     */
    align: string;
    /** @deprecated */
    color: string;
    /**
     * Sets or retrieves whether the horizontal rule is drawn with 3-D shading.
     * @deprecated
     */
    noShade: boolean;
    /** @deprecated */
    size: string;
    /**
     * Sets or retrieves the width of the object.
     * @deprecated
     */
    width: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLHRElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLHRElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLHRElement: {
    prototype: HTMLHRElement;
    new(): HTMLHRElement;
};

/**
 * Contains the descriptive information, or metadata, for a document. This object inherits all of the properties and methods described in the HTMLElement interface.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLHeadElement)
 */
interface HTMLHeadElement extends HTMLElement {
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLHeadElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLHeadElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLHeadElement: {
    prototype: HTMLHeadElement;
    new(): HTMLHeadElement;
};

/**
 * The different heading elements. It inherits methods and properties from the HTMLElement interface.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLHeadingElement)
 */
interface HTMLHeadingElement extends HTMLElement {
    /**
     * Sets or retrieves a value that indicates the table alignment.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLHeadingElement/align)
     */
    align: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLHeadingElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLHeadingElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLHeadingElement: {
    prototype: HTMLHeadingElement;
    new(): HTMLHeadingElement;
};

/**
 * Serves as the root node for a given HTML document. This object inherits the properties and methods described in the HTMLElement interface.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLHtmlElement)
 */
interface HTMLHtmlElement extends HTMLElement {
    /**
     * Sets or retrieves the DTD version that governs the current document.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLHtmlElement/version)
     */
    version: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLHtmlElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLHtmlElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLHtmlElement: {
    prototype: HTMLHtmlElement;
    new(): HTMLHtmlElement;
};

interface HTMLHyperlinkElementUtils {
    /**
     * Returns the hyperlink's URL's fragment (includes leading "#" if non-empty).
     *
     * Can be set, to change the URL's fragment (ignores leading "#").
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAnchorElement/hash)
     */
    hash: string;
    /**
     * Returns the hyperlink's URL's host and port (if different from the default port for the scheme).
     *
     * Can be set, to change the URL's host and port.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAnchorElement/host)
     */
    host: string;
    /**
     * Returns the hyperlink's URL's host.
     *
     * Can be set, to change the URL's host.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAnchorElement/hostname)
     */
    hostname: string;
    /**
     * Returns the hyperlink's URL.
     *
     * Can be set, to change the URL.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAnchorElement/href)
     */
    href: string;
    toString(): string;
    /**
     * Returns the hyperlink's URL's origin.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAnchorElement/origin)
     */
    readonly origin: string;
    /**
     * Returns the hyperlink's URL's password.
     *
     * Can be set, to change the URL's password.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAnchorElement/password)
     */
    password: string;
    /**
     * Returns the hyperlink's URL's path.
     *
     * Can be set, to change the URL's path.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAnchorElement/pathname)
     */
    pathname: string;
    /**
     * Returns the hyperlink's URL's port.
     *
     * Can be set, to change the URL's port.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAnchorElement/port)
     */
    port: string;
    /**
     * Returns the hyperlink's URL's scheme.
     *
     * Can be set, to change the URL's scheme.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAnchorElement/protocol)
     */
    protocol: string;
    /**
     * Returns the hyperlink's URL's query (includes leading "?" if non-empty).
     *
     * Can be set, to change the URL's query (ignores leading "?").
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAnchorElement/search)
     */
    search: string;
    /**
     * Returns the hyperlink's URL's username.
     *
     * Can be set, to change the URL's username.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLAnchorElement/username)
     */
    username: string;
}

/**
 * Provides special properties and methods (beyond those of the HTMLElement interface it also has available to it by inheritance) for manipulating the layout and presentation of inline frame elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLIFrameElement)
 */
interface HTMLIFrameElement extends HTMLElement {
    /**
     * Sets or retrieves how the object is aligned with adjacent text.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLIFrameElement/align)
     */
    align: string;
    allow: string;
    allowFullscreen: boolean;
    /**
     * Retrieves the document object of the page or frame.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLIFrameElement/contentDocument)
     */
    readonly contentDocument: Document | null;
    /**
     * Retrieves the object of the specified.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLIFrameElement/contentWindow)
     */
    readonly contentWindow: WindowProxy | null;
    /**
     * Sets or retrieves whether to display a border for the frame.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLIFrameElement/frameBorder)
     */
    frameBorder: string;
    /**
     * Sets or retrieves the height of the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLIFrameElement/height)
     */
    height: string;
    loading: string;
    /**
     * Sets or retrieves a URI to a long description of the object.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLIFrameElement/longDesc)
     */
    longDesc: string;
    /**
     * Sets or retrieves the top and bottom margin heights before displaying the text in a frame.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLIFrameElement/marginHeight)
     */
    marginHeight: string;
    /**
     * Sets or retrieves the left and right margin widths before displaying the text in a frame.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLIFrameElement/marginWidth)
     */
    marginWidth: string;
    /**
     * Sets or retrieves the frame name.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLIFrameElement/name)
     */
    name: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLIFrameElement/referrerPolicy) */
    referrerPolicy: ReferrerPolicy;
    readonly sandbox: DOMTokenList;
    /**
     * Sets or retrieves whether the frame can be scrolled.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLIFrameElement/scrolling)
     */
    scrolling: string;
    /**
     * Sets or retrieves a URL to be loaded by the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLIFrameElement/src)
     */
    src: string;
    /**
     * Sets or retrives the content of the page that is to contain.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLIFrameElement/srcdoc)
     */
    srcdoc: string;
    /**
     * Sets or retrieves the width of the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLIFrameElement/width)
     */
    width: string;
    getSVGDocument(): Document | null;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLIFrameElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLIFrameElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLIFrameElement: {
    prototype: HTMLIFrameElement;
    new(): HTMLIFrameElement;
};

/**
 * Provides special properties and methods for manipulating <img> elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLImageElement)
 */
interface HTMLImageElement extends HTMLElement {
    /**
     * Sets or retrieves how the object is aligned with adjacent text.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLImageElement/align)
     */
    align: string;
    /**
     * Sets or retrieves a text alternative to the graphic.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLImageElement/alt)
     */
    alt: string;
    /**
     * Specifies the properties of a border drawn around an object.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLImageElement/border)
     */
    border: string;
    /**
     * Retrieves whether the object is fully loaded.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLImageElement/complete)
     */
    readonly complete: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLImageElement/crossOrigin) */
    crossOrigin: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLImageElement/currentSrc) */
    readonly currentSrc: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLImageElement/decoding) */
    decoding: "async" | "sync" | "auto";
    /**
     * Sets or retrieves the height of the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLImageElement/height)
     */
    height: number;
    /**
     * Sets or retrieves the width of the border to draw around the object.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLImageElement/hspace)
     */
    hspace: number;
    /**
     * Sets or retrieves whether the image is a server-side image map.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLImageElement/isMap)
     */
    isMap: boolean;
    /**
     * Sets or retrieves the policy for loading image elements that are outside the viewport.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLImageElement/loading)
     */
    loading: "eager" | "lazy";
    /**
     * Sets or retrieves a Uniform Resource Identifier (URI) to a long description of the object.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLImageElement/longDesc)
     */
    longDesc: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLImageElement/lowsrc)
     */
    lowsrc: string;
    /**
     * Sets or retrieves the name of the object.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLImageElement/name)
     */
    name: string;
    /**
     * The original height of the image resource before sizing.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLImageElement/naturalHeight)
     */
    readonly naturalHeight: number;
    /**
     * The original width of the image resource before sizing.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLImageElement/naturalWidth)
     */
    readonly naturalWidth: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLImageElement/referrerPolicy) */
    referrerPolicy: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLImageElement/sizes) */
    sizes: string;
    /**
     * The address or URL of the a media resource that is to be considered.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLImageElement/src)
     */
    src: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLImageElement/srcset) */
    srcset: string;
    /**
     * Sets or retrieves the URL, often with a bookmark extension (#name), to use as a client-side image map.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLImageElement/useMap)
     */
    useMap: string;
    /**
     * Sets or retrieves the vertical margin for the object.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLImageElement/vspace)
     */
    vspace: number;
    /**
     * Sets or retrieves the width of the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLImageElement/width)
     */
    width: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLImageElement/x) */
    readonly x: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLImageElement/y) */
    readonly y: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLImageElement/decode) */
    decode(): Promise<void>;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLImageElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLImageElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLImageElement: {
    prototype: HTMLImageElement;
    new(): HTMLImageElement;
};

/**
 * Provides special properties and methods for manipulating the options, layout, and presentation of <input> elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement)
 */
interface HTMLInputElement extends HTMLElement, PopoverInvokerElement {
    /** Sets or retrieves a comma-separated list of content types. */
    accept: string;
    /**
     * Sets or retrieves how the object is aligned with adjacent text.
     * @deprecated
     */
    align: string;
    /** Sets or retrieves a text alternative to the graphic. */
    alt: string;
    /**
     * Specifies whether autocomplete is applied to an editable text field.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/autocomplete)
     */
    autocomplete: AutoFill;
    capture: string;
    /** Sets or retrieves the state of the check box or radio button. */
    checked: boolean;
    /** Sets or retrieves the state of the check box or radio button. */
    defaultChecked: boolean;
    /** Sets or retrieves the initial contents of the object. */
    defaultValue: string;
    dirName: string;
    disabled: boolean;
    /**
     * Returns a FileList object on a file type input object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/files)
     */
    files: FileList | null;
    /** Retrieves a reference to the form that the object is embedded in. */
    readonly form: HTMLFormElement | null;
    /**
     * Overrides the action attribute (where the data on a form is sent) on the parent form element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/formAction)
     */
    formAction: string;
    /**
     * Used to override the encoding (formEnctype attribute) specified on the form element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/formEnctype)
     */
    formEnctype: string;
    /**
     * Overrides the submit method attribute previously specified on a form element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/formMethod)
     */
    formMethod: string;
    /**
     * Overrides any validation or required attributes on a form or form elements to allow it to be submitted without validation. This can be used to create a "save draft"-type submit option.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/formNoValidate)
     */
    formNoValidate: boolean;
    /**
     * Overrides the target attribute on a form element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/formTarget)
     */
    formTarget: string;
    /**
     * Sets or retrieves the height of the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/height)
     */
    height: number;
    /**
     * When set, overrides the rendering of checkbox controls so that the current value is not visible.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/indeterminate)
     */
    indeterminate: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/labels) */
    readonly labels: NodeListOf<HTMLLabelElement> | null;
    /**
     * Specifies the ID of a pre-defined datalist of options for an input element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/list)
     */
    readonly list: HTMLDataListElement | null;
    /** Defines the maximum acceptable value for an input element with type="number".When used with the min and step attributes, lets you control the range and increment (such as only even numbers) that the user can enter into an input field. */
    max: string;
    /** Sets or retrieves the maximum number of characters that the user can enter in a text control. */
    maxLength: number;
    /** Defines the minimum acceptable value for an input element with type="number". When used with the max and step attributes, lets you control the range and increment (such as even numbers only) that the user can enter into an input field. */
    min: string;
    minLength: number;
    /**
     * Sets or retrieves the Boolean value indicating whether multiple items can be selected from a list.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/multiple)
     */
    multiple: boolean;
    /** Sets or retrieves the name of the object. */
    name: string;
    /**
     * Gets or sets a string containing a regular expression that the user's input must match.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/pattern)
     */
    pattern: string;
    /**
     * Gets or sets a text string that is displayed in an input field as a hint or prompt to users as the format or type of information they need to enter.The text appears in an input field until the user puts focus on the field.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/placeholder)
     */
    placeholder: string;
    readOnly: boolean;
    /**
     * When present, marks an element that can't be submitted without a value.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/required)
     */
    required: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/selectionDirection) */
    selectionDirection: "forward" | "backward" | "none" | null;
    /** Gets or sets the end position or offset of a text selection. */
    selectionEnd: number | null;
    /** Gets or sets the starting position or offset of a text selection. */
    selectionStart: number | null;
    size: number;
    /** The address or URL of the a media resource that is to be considered. */
    src: string;
    /** Defines an increment or jump between values that you want to allow the user to enter. When used with the max and min attributes, lets you control the range and increment (for example, allow only even numbers) that the user can enter into an input field. */
    step: string;
    /** Returns the content type of the object. */
    type: string;
    /**
     * Sets or retrieves the URL, often with a bookmark extension (#name), to use as a client-side image map.
     * @deprecated
     */
    useMap: string;
    /**
     * Returns the error message that would be displayed if the user submits the form, or an empty string if no error message. It also triggers the standard error message, such as "this is a required field". The result is that the user sees validation messages without actually submitting.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/validationMessage)
     */
    readonly validationMessage: string;
    /**
     * Returns a  ValidityState object that represents the validity states of an element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/validity)
     */
    readonly validity: ValidityState;
    /** Returns the value of the data at the cursor's current position. */
    value: string;
    /** Returns a Date object representing the form control's value, if applicable; otherwise, returns null. Can be set, to change the value. Throws an "InvalidStateError" DOMException if the control isn't date- or time-based. */
    valueAsDate: Date | null;
    /** Returns the input field value as a number. */
    valueAsNumber: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/webkitEntries) */
    readonly webkitEntries: ReadonlyArray<FileSystemEntry>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/webkitdirectory) */
    webkitdirectory: boolean;
    /**
     * Sets or retrieves the width of the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/width)
     */
    width: number;
    /**
     * Returns whether an element will successfully validate based on forms validation rules and constraints.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/willValidate)
     */
    readonly willValidate: boolean;
    /**
     * Returns whether a form will validate when it is submitted, without having to submit it.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/checkValidity)
     */
    checkValidity(): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/reportValidity) */
    reportValidity(): boolean;
    /**
     * Makes the selection equal to the current object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/select)
     */
    select(): void;
    /**
     * Sets a custom error message that is displayed when a form is submitted.
     * @param error Sets a custom error message that is displayed when a form is submitted.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/setCustomValidity)
     */
    setCustomValidity(error: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/setRangeText) */
    setRangeText(replacement: string): void;
    setRangeText(replacement: string, start: number, end: number, selectionMode?: SelectionMode): void;
    /**
     * Sets the start and end positions of a selection in a text field.
     * @param start The offset into the text field for the start of the selection.
     * @param end The offset into the text field for the end of the selection.
     * @param direction The direction in which the selection is performed.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/setSelectionRange)
     */
    setSelectionRange(start: number | null, end: number | null, direction?: "forward" | "backward" | "none"): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/showPicker) */
    showPicker(): void;
    /**
     * Decrements a range input control's value by the value given by the Step attribute. If the optional parameter is used, it will decrement the input control's step value multiplied by the parameter's value.
     * @param n Value to decrement the value by.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/stepDown)
     */
    stepDown(n?: number): void;
    /**
     * Increments a range input control's value by the value given by the Step attribute. If the optional parameter is used, will increment the input control's value by that value.
     * @param n Value to increment the value by.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/stepUp)
     */
    stepUp(n?: number): void;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLInputElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLInputElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLInputElement: {
    prototype: HTMLInputElement;
    new(): HTMLInputElement;
};

/**
 * Exposes specific properties and methods (beyond those defined by regular HTMLElement interface it also has available to it by inheritance) for manipulating list elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLLIElement)
 */
interface HTMLLIElement extends HTMLElement {
    /** @deprecated */
    type: string;
    /** Sets or retrieves the value of a list item. */
    value: number;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLLIElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLLIElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLLIElement: {
    prototype: HTMLLIElement;
    new(): HTMLLIElement;
};

/**
 * Gives access to properties specific to <label> elements. It inherits methods and properties from the base HTMLElement interface.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLLabelElement)
 */
interface HTMLLabelElement extends HTMLElement {
    /**
     * Returns the form control that is associated with this element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLLabelElement/control)
     */
    readonly control: HTMLElement | null;
    /**
     * Retrieves a reference to the form that the object is embedded in.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLLabelElement/form)
     */
    readonly form: HTMLFormElement | null;
    /**
     * Sets or retrieves the object to which the given label object is assigned.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLLabelElement/htmlFor)
     */
    htmlFor: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLLabelElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLLabelElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLLabelElement: {
    prototype: HTMLLabelElement;
    new(): HTMLLabelElement;
};

/**
 * The HTMLLegendElement is an interface allowing to access properties of the <legend> elements. It inherits properties and methods from the HTMLElement interface.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLLegendElement)
 */
interface HTMLLegendElement extends HTMLElement {
    /** @deprecated */
    align: string;
    /** Retrieves a reference to the form that the object is embedded in. */
    readonly form: HTMLFormElement | null;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLLegendElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLLegendElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLLegendElement: {
    prototype: HTMLLegendElement;
    new(): HTMLLegendElement;
};

/**
 * Reference information for external resources and the relationship of those resources to a document and vice-versa. This object inherits all of the properties and methods of the HTMLElement interface.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLLinkElement)
 */
interface HTMLLinkElement extends HTMLElement, LinkStyle {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLLinkElement/as) */
    as: string;
    /**
     * Sets or retrieves the character set used to encode the object.
     * @deprecated
     */
    charset: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLLinkElement/crossOrigin) */
    crossOrigin: string | null;
    disabled: boolean;
    /** Sets or retrieves a destination URL or an anchor point. */
    href: string;
    /** Sets or retrieves the language code of the object. */
    hreflang: string;
    imageSizes: string;
    imageSrcset: string;
    integrity: string;
    /** Sets or retrieves the media type. */
    media: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLLinkElement/referrerPolicy) */
    referrerPolicy: string;
    /**
     * Sets or retrieves the relationship between the object and the destination of the link.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLLinkElement/rel)
     */
    rel: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLLinkElement/relList) */
    readonly relList: DOMTokenList;
    /**
     * Sets or retrieves the relationship between the object and the destination of the link.
     * @deprecated
     */
    rev: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLLinkElement/sizes) */
    readonly sizes: DOMTokenList;
    /**
     * Sets or retrieves the window or frame at which to target content.
     * @deprecated
     */
    target: string;
    /** Sets or retrieves the MIME type of the object. */
    type: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLLinkElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLLinkElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLLinkElement: {
    prototype: HTMLLinkElement;
    new(): HTMLLinkElement;
};

/**
 * Provides special properties and methods (beyond those of the regular object HTMLElement interface it also has available to it by inheritance) for manipulating the layout and presentation of map elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMapElement)
 */
interface HTMLMapElement extends HTMLElement {
    /**
     * Retrieves a collection of the area objects defined for the given map object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMapElement/areas)
     */
    readonly areas: HTMLCollection;
    /**
     * Sets or retrieves the name of the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMapElement/name)
     */
    name: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLMapElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLMapElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLMapElement: {
    prototype: HTMLMapElement;
    new(): HTMLMapElement;
};

/**
 * Provides methods to manipulate <marquee> elements.
 * @deprecated
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMarqueeElement)
 */
interface HTMLMarqueeElement extends HTMLElement {
    /** @deprecated */
    behavior: string;
    /** @deprecated */
    bgColor: string;
    /** @deprecated */
    direction: string;
    /** @deprecated */
    height: string;
    /** @deprecated */
    hspace: number;
    /** @deprecated */
    loop: number;
    /** @deprecated */
    scrollAmount: number;
    /** @deprecated */
    scrollDelay: number;
    /** @deprecated */
    trueSpeed: boolean;
    /** @deprecated */
    vspace: number;
    /** @deprecated */
    width: string;
    /** @deprecated */
    start(): void;
    /** @deprecated */
    stop(): void;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLMarqueeElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLMarqueeElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

/** @deprecated */
declare var HTMLMarqueeElement: {
    prototype: HTMLMarqueeElement;
    new(): HTMLMarqueeElement;
};

interface HTMLMediaElementEventMap extends HTMLElementEventMap {
    "encrypted": MediaEncryptedEvent;
    "waitingforkey": Event;
}

/**
 * Adds to HTMLElement the properties and methods needed to support basic media-related capabilities that are common to audio and video.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement)
 */
interface HTMLMediaElement extends HTMLElement {
    /**
     * Gets or sets a value that indicates whether to start playing the media automatically.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/autoplay)
     */
    autoplay: boolean;
    /**
     * Gets a collection of buffered time ranges.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/buffered)
     */
    readonly buffered: TimeRanges;
    /**
     * Gets or sets a flag that indicates whether the client provides a set of controls for the media (in case the developer does not include controls for the player).
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/controls)
     */
    controls: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/crossOrigin) */
    crossOrigin: string | null;
    /**
     * Gets the address or URL of the current media resource that is selected by IHTMLMediaElement.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/currentSrc)
     */
    readonly currentSrc: string;
    /**
     * Gets or sets the current playback position, in seconds.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/currentTime)
     */
    currentTime: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/defaultMuted) */
    defaultMuted: boolean;
    /**
     * Gets or sets the default playback rate when the user is not using fast forward or reverse for a video or audio resource.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/defaultPlaybackRate)
     */
    defaultPlaybackRate: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/disableRemotePlayback) */
    disableRemotePlayback: boolean;
    /**
     * Returns the duration in seconds of the current media resource. A NaN value is returned if duration is not available, or Infinity if the media resource is streaming.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/duration)
     */
    readonly duration: number;
    /**
     * Gets information about whether the playback has ended or not.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/ended)
     */
    readonly ended: boolean;
    /**
     * Returns an object representing the current error state of the audio or video element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/error)
     */
    readonly error: MediaError | null;
    /**
     * Gets or sets a flag to specify whether playback should restart after it completes.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/loop)
     */
    loop: boolean;
    /**
     * Available only in secure contexts.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/mediaKeys)
     */
    readonly mediaKeys: MediaKeys | null;
    /**
     * Gets or sets a flag that indicates whether the audio (either audio or the audio track on video media) is muted.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/muted)
     */
    muted: boolean;
    /**
     * Gets the current network activity for the element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/networkState)
     */
    readonly networkState: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/encrypted_event) */
    onencrypted: ((this: HTMLMediaElement, ev: MediaEncryptedEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/waitingforkey_event) */
    onwaitingforkey: ((this: HTMLMediaElement, ev: Event) => any) | null;
    /**
     * Gets a flag that specifies whether playback is paused.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/paused)
     */
    readonly paused: boolean;
    /**
     * Gets or sets the current rate of speed for the media resource to play. This speed is expressed as a multiple of the normal speed of the media resource.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/playbackRate)
     */
    playbackRate: number;
    /**
     * Gets TimeRanges for the current media resource that has been played.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/played)
     */
    readonly played: TimeRanges;
    /**
     * Gets or sets a value indicating what data should be preloaded, if any.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/preload)
     */
    preload: "none" | "metadata" | "auto" | "";
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/preservesPitch) */
    preservesPitch: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/readyState) */
    readonly readyState: number;
    readonly remote: RemotePlayback;
    /**
     * Returns a TimeRanges object that represents the ranges of the current media resource that can be seeked.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/seekable)
     */
    readonly seekable: TimeRanges;
    /**
     * Gets a flag that indicates whether the client is currently moving to a new playback position in the media resource.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/seeking)
     */
    readonly seeking: boolean;
    /**
     * The address or URL of the a media resource that is to be considered.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/src)
     */
    src: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/srcObject) */
    srcObject: MediaProvider | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/textTracks) */
    readonly textTracks: TextTrackList;
    /**
     * Gets or sets the volume level for audio portions of the media element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/volume)
     */
    volume: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/addTextTrack) */
    addTextTrack(kind: TextTrackKind, label?: string, language?: string): TextTrack;
    /**
     * Returns a string that specifies whether the client can play a given media resource type.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/canPlayType)
     */
    canPlayType(type: string): CanPlayTypeResult;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/fastSeek) */
    fastSeek(time: number): void;
    /**
     * Resets the audio or video object and loads a new media resource.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/load)
     */
    load(): void;
    /**
     * Pauses the current playback and sets paused to TRUE. This can be used to test whether the media is playing or paused. You can also use the pause or play events to tell whether the media is playing or not.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/pause)
     */
    pause(): void;
    /**
     * Loads and starts playback of a media resource.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/play)
     */
    play(): Promise<void>;
    /**
     * Available only in secure contexts.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/setMediaKeys)
     */
    setMediaKeys(mediaKeys: MediaKeys | null): Promise<void>;
    readonly NETWORK_EMPTY: 0;
    readonly NETWORK_IDLE: 1;
    readonly NETWORK_LOADING: 2;
    readonly NETWORK_NO_SOURCE: 3;
    readonly HAVE_NOTHING: 0;
    readonly HAVE_METADATA: 1;
    readonly HAVE_CURRENT_DATA: 2;
    readonly HAVE_FUTURE_DATA: 3;
    readonly HAVE_ENOUGH_DATA: 4;
    addEventListener<K extends keyof HTMLMediaElementEventMap>(type: K, listener: (this: HTMLMediaElement, ev: HTMLMediaElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLMediaElementEventMap>(type: K, listener: (this: HTMLMediaElement, ev: HTMLMediaElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLMediaElement: {
    prototype: HTMLMediaElement;
    new(): HTMLMediaElement;
    readonly NETWORK_EMPTY: 0;
    readonly NETWORK_IDLE: 1;
    readonly NETWORK_LOADING: 2;
    readonly NETWORK_NO_SOURCE: 3;
    readonly HAVE_NOTHING: 0;
    readonly HAVE_METADATA: 1;
    readonly HAVE_CURRENT_DATA: 2;
    readonly HAVE_FUTURE_DATA: 3;
    readonly HAVE_ENOUGH_DATA: 4;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMenuElement) */
interface HTMLMenuElement extends HTMLElement {
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMenuElement/compact)
     */
    compact: boolean;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLMenuElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLMenuElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLMenuElement: {
    prototype: HTMLMenuElement;
    new(): HTMLMenuElement;
};

/**
 * Contains descriptive metadata about a document. It inherits all of the properties and methods described in the HTMLElement interface.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMetaElement)
 */
interface HTMLMetaElement extends HTMLElement {
    /** Gets or sets meta-information to associate with httpEquiv or name. */
    content: string;
    /** Gets or sets information used to bind the value of a content attribute of a meta element to an HTTP response header. */
    httpEquiv: string;
    media: string;
    /** Sets or retrieves the value specified in the content attribute of the meta object. */
    name: string;
    /**
     * Sets or retrieves a scheme to be used in interpreting the value of a property specified for the object.
     * @deprecated
     */
    scheme: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLMetaElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLMetaElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLMetaElement: {
    prototype: HTMLMetaElement;
    new(): HTMLMetaElement;
};

/**
 * The HTML <meter> elements expose the HTMLMeterElement interface, which provides special properties and methods (beyond the HTMLElement object interface they also have available to them by inheritance) for manipulating the layout and presentation of <meter> elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMeterElement)
 */
interface HTMLMeterElement extends HTMLElement {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMeterElement/high) */
    high: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMeterElement/labels) */
    readonly labels: NodeListOf<HTMLLabelElement>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMeterElement/low) */
    low: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMeterElement/max) */
    max: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMeterElement/min) */
    min: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMeterElement/optimum) */
    optimum: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMeterElement/value) */
    value: number;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLMeterElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLMeterElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLMeterElement: {
    prototype: HTMLMeterElement;
    new(): HTMLMeterElement;
};

/**
 * Provides special properties (beyond the regular methods and properties available through the HTMLElement interface they also have available to them by inheritance) for manipulating modification elements, that is <del> and <ins>.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLModElement)
 */
interface HTMLModElement extends HTMLElement {
    /**
     * Sets or retrieves reference information about the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLModElement/cite)
     */
    cite: string;
    /**
     * Sets or retrieves the date and time of a modification to the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLModElement/dateTime)
     */
    dateTime: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLModElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLModElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLModElement: {
    prototype: HTMLModElement;
    new(): HTMLModElement;
};

/**
 * Provides special properties (beyond those defined on the regular HTMLElement interface it also has available to it by inheritance) for manipulating ordered list elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOListElement)
 */
interface HTMLOListElement extends HTMLElement {
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOListElement/compact)
     */
    compact: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOListElement/reversed) */
    reversed: boolean;
    /**
     * The starting number.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOListElement/start)
     */
    start: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOListElement/type) */
    type: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLOListElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLOListElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLOListElement: {
    prototype: HTMLOListElement;
    new(): HTMLOListElement;
};

/**
 * Provides special properties and methods (beyond those on the HTMLElement interface it also has available to it by inheritance) for manipulating the layout and presentation of <object> element, representing external resources.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLObjectElement)
 */
interface HTMLObjectElement extends HTMLElement {
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLObjectElement/align)
     */
    align: string;
    /**
     * Sets or retrieves a character string that can be used to implement your own archive functionality for the object.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLObjectElement/archive)
     */
    archive: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLObjectElement/border)
     */
    border: string;
    /**
     * Sets or retrieves the URL of the file containing the compiled Java class.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLObjectElement/code)
     */
    code: string;
    /**
     * Sets or retrieves the URL of the component.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLObjectElement/codeBase)
     */
    codeBase: string;
    /**
     * Sets or retrieves the Internet media type for the code associated with the object.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLObjectElement/codeType)
     */
    codeType: string;
    /**
     * Retrieves the document object of the page or frame.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLObjectElement/contentDocument)
     */
    readonly contentDocument: Document | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLObjectElement/contentWindow) */
    readonly contentWindow: WindowProxy | null;
    /**
     * Sets or retrieves the URL that references the data of the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLObjectElement/data)
     */
    data: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLObjectElement/declare)
     */
    declare: boolean;
    /**
     * Retrieves a reference to the form that the object is embedded in.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLObjectElement/form)
     */
    readonly form: HTMLFormElement | null;
    /**
     * Sets or retrieves the height of the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLObjectElement/height)
     */
    height: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLObjectElement/hspace)
     */
    hspace: number;
    /**
     * Sets or retrieves the name of the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLObjectElement/name)
     */
    name: string;
    /**
     * Sets or retrieves a message to be displayed while an object is loading.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLObjectElement/standby)
     */
    standby: string;
    /**
     * Sets or retrieves the MIME type of the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLObjectElement/type)
     */
    type: string;
    /**
     * Sets or retrieves the URL, often with a bookmark extension (#name), to use as a client-side image map.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLObjectElement/useMap)
     */
    useMap: string;
    /**
     * Returns the error message that would be displayed if the user submits the form, or an empty string if no error message. It also triggers the standard error message, such as "this is a required field". The result is that the user sees validation messages without actually submitting.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLObjectElement/validationMessage)
     */
    readonly validationMessage: string;
    /**
     * Returns a  ValidityState object that represents the validity states of an element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLObjectElement/validity)
     */
    readonly validity: ValidityState;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLObjectElement/vspace)
     */
    vspace: number;
    /**
     * Sets or retrieves the width of the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLObjectElement/width)
     */
    width: string;
    /**
     * Returns whether an element will successfully validate based on forms validation rules and constraints.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLObjectElement/willValidate)
     */
    readonly willValidate: boolean;
    /**
     * Returns whether a form will validate when it is submitted, without having to submit it.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLObjectElement/checkValidity)
     */
    checkValidity(): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLObjectElement/getSVGDocument) */
    getSVGDocument(): Document | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLObjectElement/reportValidity) */
    reportValidity(): boolean;
    /**
     * Sets a custom error message that is displayed when a form is submitted.
     * @param error Sets a custom error message that is displayed when a form is submitted.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLObjectElement/setCustomValidity)
     */
    setCustomValidity(error: string): void;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLObjectElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLObjectElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLObjectElement: {
    prototype: HTMLObjectElement;
    new(): HTMLObjectElement;
};

/**
 * Provides special properties and methods (beyond the regular HTMLElement object interface they also have available to them by inheritance) for manipulating the layout and presentation of <optgroup> elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOptGroupElement)
 */
interface HTMLOptGroupElement extends HTMLElement {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOptGroupElement/disabled) */
    disabled: boolean;
    /**
     * Sets or retrieves a value that you can use to implement your own label functionality for the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOptGroupElement/label)
     */
    label: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLOptGroupElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLOptGroupElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLOptGroupElement: {
    prototype: HTMLOptGroupElement;
    new(): HTMLOptGroupElement;
};

/**
 * <option> elements and inherits all classes and methods of the HTMLElement interface.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOptionElement)
 */
interface HTMLOptionElement extends HTMLElement {
    /**
     * Sets or retrieves the status of an option.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOptionElement/defaultSelected)
     */
    defaultSelected: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOptionElement/disabled) */
    disabled: boolean;
    /**
     * Retrieves a reference to the form that the object is embedded in.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOptionElement/form)
     */
    readonly form: HTMLFormElement | null;
    /**
     * Sets or retrieves the ordinal position of an option in a list box.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOptionElement/index)
     */
    readonly index: number;
    /**
     * Sets or retrieves a value that you can use to implement your own label functionality for the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOptionElement/label)
     */
    label: string;
    /**
     * Sets or retrieves whether the option in the list box is the default item.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOptionElement/selected)
     */
    selected: boolean;
    /**
     * Sets or retrieves the text string specified by the option tag.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOptionElement/text)
     */
    text: string;
    /**
     * Sets or retrieves the value which is returned to the server when the form control is submitted.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOptionElement/value)
     */
    value: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLOptionElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLOptionElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLOptionElement: {
    prototype: HTMLOptionElement;
    new(): HTMLOptionElement;
};

/**
 * HTMLOptionsCollection is an interface representing a collection of HTML option elements (in document order) and offers methods and properties for traversing the list as well as optionally altering its items. This type is returned solely by the "options" property of select.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOptionsCollection)
 */
interface HTMLOptionsCollection extends HTMLCollectionOf<HTMLOptionElement> {
    /**
     * Returns the number of elements in the collection.
     *
     * When set to a smaller number, truncates the number of option elements in the corresponding container.
     *
     * When set to a greater number, adds new blank option elements to that container.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOptionsCollection/length)
     */
    length: number;
    /**
     * Returns the index of the first selected item, if any, or −1 if there is no selected item.
     *
     * Can be set, to change the selection.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOptionsCollection/selectedIndex)
     */
    selectedIndex: number;
    /**
     * Inserts element before the node given by before.
     *
     * The before argument can be a number, in which case element is inserted before the item with that number, or an element from the collection, in which case element is inserted before that element.
     *
     * If before is omitted, null, or a number out of range, then element will be added at the end of the list.
     *
     * This method will throw a "HierarchyRequestError" DOMException if element is an ancestor of the element into which it is to be inserted.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOptionsCollection/add)
     */
    add(element: HTMLOptionElement | HTMLOptGroupElement, before?: HTMLElement | number | null): void;
    /**
     * Removes the item with index index from the collection.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOptionsCollection/remove)
     */
    remove(index: number): void;
}

declare var HTMLOptionsCollection: {
    prototype: HTMLOptionsCollection;
    new(): HTMLOptionsCollection;
};

interface HTMLOrSVGElement {
    autofocus: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/dataset) */
    readonly dataset: DOMStringMap;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/nonce) */
    nonce?: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/tabIndex) */
    tabIndex: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/blur) */
    blur(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/focus) */
    focus(options?: FocusOptions): void;
}

/**
 * Provides properties and methods (beyond those inherited from HTMLElement) for manipulating the layout and presentation of <output> elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOutputElement)
 */
interface HTMLOutputElement extends HTMLElement {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOutputElement/defaultValue) */
    defaultValue: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOutputElement/form) */
    readonly form: HTMLFormElement | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOutputElement/htmlFor) */
    readonly htmlFor: DOMTokenList;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOutputElement/labels) */
    readonly labels: NodeListOf<HTMLLabelElement>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOutputElement/name) */
    name: string;
    /**
     * Returns the string "output".
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOutputElement/type)
     */
    readonly type: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOutputElement/validationMessage) */
    readonly validationMessage: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOutputElement/validity) */
    readonly validity: ValidityState;
    /**
     * Returns the element's current value.
     *
     * Can be set, to change the value.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOutputElement/value)
     */
    value: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOutputElement/willValidate) */
    readonly willValidate: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOutputElement/checkValidity) */
    checkValidity(): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOutputElement/reportValidity) */
    reportValidity(): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLOutputElement/setCustomValidity) */
    setCustomValidity(error: string): void;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLOutputElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLOutputElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLOutputElement: {
    prototype: HTMLOutputElement;
    new(): HTMLOutputElement;
};

/**
 * Provides special properties (beyond those of the regular HTMLElement object interface it inherits) for manipulating <p> elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLParagraphElement)
 */
interface HTMLParagraphElement extends HTMLElement {
    /**
     * Sets or retrieves how the object is aligned with adjacent text.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLParagraphElement/align)
     */
    align: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLParagraphElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLParagraphElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLParagraphElement: {
    prototype: HTMLParagraphElement;
    new(): HTMLParagraphElement;
};

/**
 * Provides special properties (beyond those of the regular HTMLElement object interface it inherits) for manipulating <param> elements, representing a pair of a key and a value that acts as a parameter for an <object> element.
 * @deprecated
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLParamElement)
 */
interface HTMLParamElement extends HTMLElement {
    /**
     * Sets or retrieves the name of an input parameter for an element.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLParamElement/name)
     */
    name: string;
    /**
     * Sets or retrieves the content type of the resource designated by the value attribute.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLParamElement/type)
     */
    type: string;
    /**
     * Sets or retrieves the value of an input parameter for an element.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLParamElement/value)
     */
    value: string;
    /**
     * Sets or retrieves the data type of the value attribute.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLParamElement/valueType)
     */
    valueType: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLParamElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLParamElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

/** @deprecated */
declare var HTMLParamElement: {
    prototype: HTMLParamElement;
    new(): HTMLParamElement;
};

/**
 * A <picture> HTML element. It doesn't implement specific properties or methods.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLPictureElement)
 */
interface HTMLPictureElement extends HTMLElement {
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLPictureElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLPictureElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLPictureElement: {
    prototype: HTMLPictureElement;
    new(): HTMLPictureElement;
};

/**
 * Exposes specific properties and methods (beyond those of the HTMLElement interface it also has available to it by inheritance) for manipulating a block of preformatted text (<pre>).
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLPreElement)
 */
interface HTMLPreElement extends HTMLElement {
    /**
     * Sets or gets a value that you can use to implement your own width functionality for the object.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLPreElement/width)
     */
    width: number;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLPreElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLPreElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLPreElement: {
    prototype: HTMLPreElement;
    new(): HTMLPreElement;
};

/**
 * Provides special properties and methods (beyond the regular HTMLElement interface it also has available to it by inheritance) for manipulating the layout and presentation of <progress> elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLProgressElement)
 */
interface HTMLProgressElement extends HTMLElement {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLProgressElement/labels) */
    readonly labels: NodeListOf<HTMLLabelElement>;
    /**
     * Defines the maximum, or "done" value for a progress element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLProgressElement/max)
     */
    max: number;
    /**
     * Returns the quotient of value/max when the value attribute is set (determinate progress bar), or -1 when the value attribute is missing (indeterminate progress bar).
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLProgressElement/position)
     */
    readonly position: number;
    /**
     * Sets or gets the current value of a progress element. The value must be a non-negative number between 0 and the max value.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLProgressElement/value)
     */
    value: number;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLProgressElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLProgressElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLProgressElement: {
    prototype: HTMLProgressElement;
    new(): HTMLProgressElement;
};

/**
 * Provides special properties and methods (beyond the regular HTMLElement interface it also has available to it by inheritance) for manipulating quoting elements, like <blockquote> and <q>, but not the <cite> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLQuoteElement)
 */
interface HTMLQuoteElement extends HTMLElement {
    /**
     * Sets or retrieves reference information about the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLQuoteElement/cite)
     */
    cite: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLQuoteElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLQuoteElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLQuoteElement: {
    prototype: HTMLQuoteElement;
    new(): HTMLQuoteElement;
};

/**
 * HTML <script> elements expose the HTMLScriptElement interface, which provides special properties and methods for manipulating the behavior and execution of <script> elements (beyond the inherited HTMLElement interface).
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLScriptElement)
 */
interface HTMLScriptElement extends HTMLElement {
    async: boolean;
    /**
     * Sets or retrieves the character set used to encode the object.
     * @deprecated
     */
    charset: string;
    crossOrigin: string | null;
    /** Sets or retrieves the status of the script. */
    defer: boolean;
    /**
     * Sets or retrieves the event for which the script is written.
     * @deprecated
     */
    event: string;
    /**
     * Sets or retrieves the object that is bound to the event script.
     * @deprecated
     */
    htmlFor: string;
    integrity: string;
    noModule: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLScriptElement/referrerPolicy) */
    referrerPolicy: string;
    /** Retrieves the URL to an external file that contains the source code or data. */
    src: string;
    /** Retrieves or sets the text of the object as a string. */
    text: string;
    /** Sets or retrieves the MIME type for the associated scripting engine. */
    type: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLScriptElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLScriptElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLScriptElement: {
    prototype: HTMLScriptElement;
    new(): HTMLScriptElement;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLScriptElement/supports_static) */
    supports(type: string): boolean;
};

/**
 * A <select> HTML Element. These elements also share all of the properties and methods of other HTML elements via the HTMLElement interface.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSelectElement)
 */
interface HTMLSelectElement extends HTMLElement {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSelectElement/autocomplete) */
    autocomplete: AutoFill;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSelectElement/disabled) */
    disabled: boolean;
    /**
     * Retrieves a reference to the form that the object is embedded in.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSelectElement/form)
     */
    readonly form: HTMLFormElement | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSelectElement/labels) */
    readonly labels: NodeListOf<HTMLLabelElement>;
    /**
     * Sets or retrieves the number of objects in a collection.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSelectElement/length)
     */
    length: number;
    /**
     * Sets or retrieves the Boolean value indicating whether multiple items can be selected from a list.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSelectElement/multiple)
     */
    multiple: boolean;
    /**
     * Sets or retrieves the name of the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSelectElement/name)
     */
    name: string;
    /**
     * Returns an HTMLOptionsCollection of the list of options.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSelectElement/options)
     */
    readonly options: HTMLOptionsCollection;
    /**
     * When present, marks an element that can't be submitted without a value.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSelectElement/required)
     */
    required: boolean;
    /**
     * Sets or retrieves the index of the selected option in a select object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSelectElement/selectedIndex)
     */
    selectedIndex: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSelectElement/selectedOptions) */
    readonly selectedOptions: HTMLCollectionOf<HTMLOptionElement>;
    /**
     * Sets or retrieves the number of rows in the list box.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSelectElement/size)
     */
    size: number;
    /**
     * Retrieves the type of select control based on the value of the MULTIPLE attribute.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSelectElement/type)
     */
    readonly type: string;
    /**
     * Returns the error message that would be displayed if the user submits the form, or an empty string if no error message. It also triggers the standard error message, such as "this is a required field". The result is that the user sees validation messages without actually submitting.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSelectElement/validationMessage)
     */
    readonly validationMessage: string;
    /**
     * Returns a  ValidityState object that represents the validity states of an element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSelectElement/validity)
     */
    readonly validity: ValidityState;
    /**
     * Sets or retrieves the value which is returned to the server when the form control is submitted.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSelectElement/value)
     */
    value: string;
    /**
     * Returns whether an element will successfully validate based on forms validation rules and constraints.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSelectElement/willValidate)
     */
    readonly willValidate: boolean;
    /**
     * Adds an element to the areas, controlRange, or options collection.
     * @param element Variant of type Number that specifies the index position in the collection where the element is placed. If no value is given, the method places the element at the end of the collection.
     * @param before Variant of type Object that specifies an element to insert before, or null to append the object to the collection.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSelectElement/add)
     */
    add(element: HTMLOptionElement | HTMLOptGroupElement, before?: HTMLElement | number | null): void;
    /**
     * Returns whether a form will validate when it is submitted, without having to submit it.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSelectElement/checkValidity)
     */
    checkValidity(): boolean;
    /**
     * Retrieves a select object or an object from an options collection.
     * @param name Variant of type Number or String that specifies the object or collection to retrieve. If this parameter is an integer, it is the zero-based index of the object. If this parameter is a string, all objects with matching name or id properties are retrieved, and a collection is returned if more than one match is made.
     * @param index Variant of type Number that specifies the zero-based index of the object to retrieve when a collection is returned.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSelectElement/item)
     */
    item(index: number): HTMLOptionElement | null;
    /**
     * Retrieves a select object or an object from an options collection.
     * @param namedItem A String that specifies the name or id property of the object to retrieve. A collection is returned if more than one match is made.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSelectElement/namedItem)
     */
    namedItem(name: string): HTMLOptionElement | null;
    /**
     * Removes an element from the collection.
     * @param index Number that specifies the zero-based index of the element to remove from the collection.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSelectElement/remove)
     */
    remove(): void;
    remove(index: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSelectElement/reportValidity) */
    reportValidity(): boolean;
    /**
     * Sets a custom error message that is displayed when a form is submitted.
     * @param error Sets a custom error message that is displayed when a form is submitted.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSelectElement/setCustomValidity)
     */
    setCustomValidity(error: string): void;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLSelectElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLSelectElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
    [name: number]: HTMLOptionElement | HTMLOptGroupElement;
}

declare var HTMLSelectElement: {
    prototype: HTMLSelectElement;
    new(): HTMLSelectElement;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSlotElement) */
interface HTMLSlotElement extends HTMLElement {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSlotElement/name) */
    name: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSlotElement/assign) */
    assign(...nodes: (Element | Text)[]): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSlotElement/assignedElements) */
    assignedElements(options?: AssignedNodesOptions): Element[];
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSlotElement/assignedNodes) */
    assignedNodes(options?: AssignedNodesOptions): Node[];
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLSlotElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLSlotElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLSlotElement: {
    prototype: HTMLSlotElement;
    new(): HTMLSlotElement;
};

/**
 * Provides special properties (beyond the regular HTMLElement object interface it also has available to it by inheritance) for manipulating <source> elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSourceElement)
 */
interface HTMLSourceElement extends HTMLElement {
    height: number;
    /**
     * Gets or sets the intended media type of the media source.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSourceElement/media)
     */
    media: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSourceElement/sizes) */
    sizes: string;
    /**
     * The address or URL of the a media resource that is to be considered.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSourceElement/src)
     */
    src: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSourceElement/srcset) */
    srcset: string;
    /**
     * Gets or sets the MIME type of a media resource.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSourceElement/type)
     */
    type: string;
    width: number;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLSourceElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLSourceElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLSourceElement: {
    prototype: HTMLSourceElement;
    new(): HTMLSourceElement;
};

/**
 * A <span> element and derives from the HTMLElement interface, but without implementing any additional properties or methods.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSpanElement)
 */
interface HTMLSpanElement extends HTMLElement {
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLSpanElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLSpanElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLSpanElement: {
    prototype: HTMLSpanElement;
    new(): HTMLSpanElement;
};

/**
 * A <style> element. It inherits properties and methods from its parent, HTMLElement, and from LinkStyle.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLStyleElement)
 */
interface HTMLStyleElement extends HTMLElement, LinkStyle {
    /**
     * Enables or disables the style sheet.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLStyleElement/disabled)
     */
    disabled: boolean;
    /**
     * Sets or retrieves the media type.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLStyleElement/media)
     */
    media: string;
    /**
     * Retrieves the CSS language in which the style sheet is written.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLStyleElement/type)
     */
    type: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLStyleElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLStyleElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLStyleElement: {
    prototype: HTMLStyleElement;
    new(): HTMLStyleElement;
};

/**
 * Special properties (beyond the regular HTMLElement interface it also has available to it by inheritance) for manipulating table caption elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableCaptionElement)
 */
interface HTMLTableCaptionElement extends HTMLElement {
    /**
     * Sets or retrieves the alignment of the caption or legend.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableCaptionElement/align)
     */
    align: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLTableCaptionElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLTableCaptionElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLTableCaptionElement: {
    prototype: HTMLTableCaptionElement;
    new(): HTMLTableCaptionElement;
};

/**
 * Provides special properties and methods (beyond the regular HTMLElement interface it also has available to it by inheritance) for manipulating the layout and presentation of table cells, either header or data cells, in an HTML document.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableCellElement)
 */
interface HTMLTableCellElement extends HTMLElement {
    /**
     * Sets or retrieves abbreviated text for the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableCellElement/abbr)
     */
    abbr: string;
    /**
     * Sets or retrieves how the object is aligned with adjacent text.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableCellElement/align)
     */
    align: string;
    /**
     * Sets or retrieves a comma-delimited list of conceptual categories associated with the object.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableCellElement/axis)
     */
    axis: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableCellElement/bgColor)
     */
    bgColor: string;
    /**
     * Retrieves the position of the object in the cells collection of a row.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableCellElement/cellIndex)
     */
    readonly cellIndex: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableCellElement/ch)
     */
    ch: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableCellElement/chOff)
     */
    chOff: string;
    /**
     * Sets or retrieves the number columns in the table that the object should span.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableCellElement/colSpan)
     */
    colSpan: number;
    /**
     * Sets or retrieves a list of header cells that provide information for the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableCellElement/headers)
     */
    headers: string;
    /**
     * Sets or retrieves the height of the object.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableCellElement/height)
     */
    height: string;
    /**
     * Sets or retrieves whether the browser automatically performs wordwrap.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableCellElement/noWrap)
     */
    noWrap: boolean;
    /**
     * Sets or retrieves how many rows in a table the cell should span.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableCellElement/rowSpan)
     */
    rowSpan: number;
    /**
     * Sets or retrieves the group of cells in a table to which the object's information applies.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableCellElement/scope)
     */
    scope: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableCellElement/vAlign)
     */
    vAlign: string;
    /**
     * Sets or retrieves the width of the object.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableCellElement/width)
     */
    width: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLTableCellElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLTableCellElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLTableCellElement: {
    prototype: HTMLTableCellElement;
    new(): HTMLTableCellElement;
};

/**
 * Provides special properties (beyond the HTMLElement interface it also has available to it inheritance) for manipulating single or grouped table column elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableColElement)
 */
interface HTMLTableColElement extends HTMLElement {
    /**
     * Sets or retrieves the alignment of the object relative to the display or table.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableColElement/align)
     */
    align: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableColElement/ch)
     */
    ch: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableColElement/chOff)
     */
    chOff: string;
    /**
     * Sets or retrieves the number of columns in the group.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableColElement/span)
     */
    span: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableColElement/vAlign)
     */
    vAlign: string;
    /**
     * Sets or retrieves the width of the object.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableColElement/width)
     */
    width: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLTableColElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLTableColElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLTableColElement: {
    prototype: HTMLTableColElement;
    new(): HTMLTableColElement;
};

/** @deprecated prefer HTMLTableCellElement */
interface HTMLTableDataCellElement extends HTMLTableCellElement {
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLTableDataCellElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLTableDataCellElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

/**
 * Provides special properties and methods (beyond the regular HTMLElement object interface it also has available to it by inheritance) for manipulating the layout and presentation of tables in an HTML document.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableElement)
 */
interface HTMLTableElement extends HTMLElement {
    /**
     * Sets or retrieves a value that indicates the table alignment.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableElement/align)
     */
    align: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableElement/bgColor)
     */
    bgColor: string;
    /**
     * Sets or retrieves the width of the border to draw around the object.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableElement/border)
     */
    border: string;
    /**
     * Retrieves the caption object of a table.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableElement/caption)
     */
    caption: HTMLTableCaptionElement | null;
    /**
     * Sets or retrieves the amount of space between the border of the cell and the content of the cell.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableElement/cellPadding)
     */
    cellPadding: string;
    /**
     * Sets or retrieves the amount of space between cells in a table.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableElement/cellSpacing)
     */
    cellSpacing: string;
    /**
     * Sets or retrieves the way the border frame around the table is displayed.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableElement/frame)
     */
    frame: string;
    /**
     * Sets or retrieves the number of horizontal rows contained in the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableElement/rows)
     */
    readonly rows: HTMLCollectionOf<HTMLTableRowElement>;
    /**
     * Sets or retrieves which dividing lines (inner borders) are displayed.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableElement/rules)
     */
    rules: string;
    /**
     * Sets or retrieves a description and/or structure of the object.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableElement/summary)
     */
    summary: string;
    /**
     * Retrieves a collection of all tBody objects in the table. Objects in this collection are in source order.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableElement/tBodies)
     */
    readonly tBodies: HTMLCollectionOf<HTMLTableSectionElement>;
    /**
     * Retrieves the tFoot object of the table.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableElement/tFoot)
     */
    tFoot: HTMLTableSectionElement | null;
    /**
     * Retrieves the tHead object of the table.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableElement/tHead)
     */
    tHead: HTMLTableSectionElement | null;
    /**
     * Sets or retrieves the width of the object.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableElement/width)
     */
    width: string;
    /**
     * Creates an empty caption element in the table.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableElement/createCaption)
     */
    createCaption(): HTMLTableCaptionElement;
    /**
     * Creates an empty tBody element in the table.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableElement/createTBody)
     */
    createTBody(): HTMLTableSectionElement;
    /**
     * Creates an empty tFoot element in the table.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableElement/createTFoot)
     */
    createTFoot(): HTMLTableSectionElement;
    /**
     * Returns the tHead element object if successful, or null otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableElement/createTHead)
     */
    createTHead(): HTMLTableSectionElement;
    /**
     * Deletes the caption element and its contents from the table.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableElement/deleteCaption)
     */
    deleteCaption(): void;
    /**
     * Removes the specified row (tr) from the element and from the rows collection.
     * @param index Number that specifies the zero-based position in the rows collection of the row to remove.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableElement/deleteRow)
     */
    deleteRow(index: number): void;
    /**
     * Deletes the tFoot element and its contents from the table.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableElement/deleteTFoot)
     */
    deleteTFoot(): void;
    /**
     * Deletes the tHead element and its contents from the table.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableElement/deleteTHead)
     */
    deleteTHead(): void;
    /**
     * Creates a new row (tr) in the table, and adds the row to the rows collection.
     * @param index Number that specifies where to insert the row in the rows collection. The default value is -1, which appends the new row to the end of the rows collection.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableElement/insertRow)
     */
    insertRow(index?: number): HTMLTableRowElement;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLTableElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLTableElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLTableElement: {
    prototype: HTMLTableElement;
    new(): HTMLTableElement;
};

/** @deprecated prefer HTMLTableCellElement */
interface HTMLTableHeaderCellElement extends HTMLTableCellElement {
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLTableHeaderCellElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLTableHeaderCellElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

/**
 * Provides special properties and methods (beyond the HTMLElement interface it also has available to it by inheritance) for manipulating the layout and presentation of rows in an HTML table.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableRowElement)
 */
interface HTMLTableRowElement extends HTMLElement {
    /**
     * Sets or retrieves how the object is aligned with adjacent text.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableRowElement/align)
     */
    align: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableRowElement/bgColor)
     */
    bgColor: string;
    /**
     * Retrieves a collection of all cells in the table row.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableRowElement/cells)
     */
    readonly cells: HTMLCollectionOf<HTMLTableCellElement>;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableRowElement/ch)
     */
    ch: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableRowElement/chOff)
     */
    chOff: string;
    /**
     * Retrieves the position of the object in the rows collection for the table.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableRowElement/rowIndex)
     */
    readonly rowIndex: number;
    /**
     * Retrieves the position of the object in the collection.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableRowElement/sectionRowIndex)
     */
    readonly sectionRowIndex: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableRowElement/vAlign)
     */
    vAlign: string;
    /**
     * Removes the specified cell from the table row, as well as from the cells collection.
     * @param index Number that specifies the zero-based position of the cell to remove from the table row. If no value is provided, the last cell in the cells collection is deleted.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableRowElement/deleteCell)
     */
    deleteCell(index: number): void;
    /**
     * Creates a new cell in the table row, and adds the cell to the cells collection.
     * @param index Number that specifies where to insert the cell in the tr. The default value is -1, which appends the new cell to the end of the cells collection.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableRowElement/insertCell)
     */
    insertCell(index?: number): HTMLTableCellElement;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLTableRowElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLTableRowElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLTableRowElement: {
    prototype: HTMLTableRowElement;
    new(): HTMLTableRowElement;
};

/**
 * Provides special properties and methods (beyond the HTMLElement interface it also has available to it by inheritance) for manipulating the layout and presentation of sections, that is headers, footers and bodies, in an HTML table.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableSectionElement)
 */
interface HTMLTableSectionElement extends HTMLElement {
    /**
     * Sets or retrieves a value that indicates the table alignment.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableSectionElement/align)
     */
    align: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableSectionElement/ch)
     */
    ch: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableSectionElement/chOff)
     */
    chOff: string;
    /**
     * Sets or retrieves the number of horizontal rows contained in the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableSectionElement/rows)
     */
    readonly rows: HTMLCollectionOf<HTMLTableRowElement>;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableSectionElement/vAlign)
     */
    vAlign: string;
    /**
     * Removes the specified row (tr) from the element and from the rows collection.
     * @param index Number that specifies the zero-based position in the rows collection of the row to remove.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableSectionElement/deleteRow)
     */
    deleteRow(index: number): void;
    /**
     * Creates a new row (tr) in the table, and adds the row to the rows collection.
     * @param index Number that specifies where to insert the row in the rows collection. The default value is -1, which appends the new row to the end of the rows collection.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTableSectionElement/insertRow)
     */
    insertRow(index?: number): HTMLTableRowElement;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLTableSectionElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLTableSectionElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLTableSectionElement: {
    prototype: HTMLTableSectionElement;
    new(): HTMLTableSectionElement;
};

/**
 * Enables access to the contents of an HTML <template> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTemplateElement)
 */
interface HTMLTemplateElement extends HTMLElement {
    /**
     * Returns the template contents (a DocumentFragment).
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTemplateElement/content)
     */
    readonly content: DocumentFragment;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLTemplateElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLTemplateElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLTemplateElement: {
    prototype: HTMLTemplateElement;
    new(): HTMLTemplateElement;
};

/**
 * Provides special properties and methods for manipulating the layout and presentation of <textarea> elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTextAreaElement)
 */
interface HTMLTextAreaElement extends HTMLElement {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTextAreaElement/autocomplete) */
    autocomplete: AutoFill;
    /** Sets or retrieves the width of the object. */
    cols: number;
    /** Sets or retrieves the initial contents of the object. */
    defaultValue: string;
    dirName: string;
    disabled: boolean;
    /** Retrieves a reference to the form that the object is embedded in. */
    readonly form: HTMLFormElement | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTextAreaElement/labels) */
    readonly labels: NodeListOf<HTMLLabelElement>;
    /** Sets or retrieves the maximum number of characters that the user can enter in a text control. */
    maxLength: number;
    minLength: number;
    /** Sets or retrieves the name of the object. */
    name: string;
    /** Gets or sets a text string that is displayed in an input field as a hint or prompt to users as the format or type of information they need to enter.The text appears in an input field until the user puts focus on the field. */
    placeholder: string;
    /** Sets or retrieves the value indicated whether the content of the object is read-only. */
    readOnly: boolean;
    /** When present, marks an element that can't be submitted without a value. */
    required: boolean;
    /** Sets or retrieves the number of horizontal rows contained in the object. */
    rows: number;
    selectionDirection: "forward" | "backward" | "none";
    /** Gets or sets the end position or offset of a text selection. */
    selectionEnd: number;
    /** Gets or sets the starting position or offset of a text selection. */
    selectionStart: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTextAreaElement/textLength) */
    readonly textLength: number;
    /** Retrieves the type of control. */
    readonly type: string;
    /** Returns the error message that would be displayed if the user submits the form, or an empty string if no error message. It also triggers the standard error message, such as "this is a required field". The result is that the user sees validation messages without actually submitting. */
    readonly validationMessage: string;
    /** Returns a  ValidityState object that represents the validity states of an element. */
    readonly validity: ValidityState;
    /** Retrieves or sets the text in the entry field of the textArea element. */
    value: string;
    /** Returns whether an element will successfully validate based on forms validation rules and constraints. */
    readonly willValidate: boolean;
    /** Sets or retrieves how to handle wordwrapping in the object. */
    wrap: string;
    /** Returns whether a form will validate when it is submitted, without having to submit it. */
    checkValidity(): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTextAreaElement/reportValidity) */
    reportValidity(): boolean;
    /** Highlights the input area of a form element. */
    select(): void;
    /**
     * Sets a custom error message that is displayed when a form is submitted.
     * @param error Sets a custom error message that is displayed when a form is submitted.
     */
    setCustomValidity(error: string): void;
    setRangeText(replacement: string): void;
    setRangeText(replacement: string, start: number, end: number, selectionMode?: SelectionMode): void;
    /**
     * Sets the start and end positions of a selection in a text field.
     * @param start The offset into the text field for the start of the selection.
     * @param end The offset into the text field for the end of the selection.
     * @param direction The direction in which the selection is performed.
     */
    setSelectionRange(start: number | null, end: number | null, direction?: "forward" | "backward" | "none"): void;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLTextAreaElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLTextAreaElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLTextAreaElement: {
    prototype: HTMLTextAreaElement;
    new(): HTMLTextAreaElement;
};

/**
 * Provides special properties (beyond the regular HTMLElement interface it also has available to it by inheritance) for manipulating <time> elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTimeElement)
 */
interface HTMLTimeElement extends HTMLElement {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTimeElement/dateTime) */
    dateTime: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLTimeElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLTimeElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLTimeElement: {
    prototype: HTMLTimeElement;
    new(): HTMLTimeElement;
};

/**
 * Contains the title for a document. This element inherits all of the properties and methods of the HTMLElement interface.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTitleElement)
 */
interface HTMLTitleElement extends HTMLElement {
    /**
     * Retrieves or sets the text of the object as a string.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTitleElement/text)
     */
    text: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLTitleElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLTitleElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLTitleElement: {
    prototype: HTMLTitleElement;
    new(): HTMLTitleElement;
};

/**
 * The HTMLTrackElement
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTrackElement)
 */
interface HTMLTrackElement extends HTMLElement {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTrackElement/default) */
    default: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTrackElement/kind) */
    kind: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTrackElement/label) */
    label: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTrackElement/readyState) */
    readonly readyState: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTrackElement/src) */
    src: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTrackElement/srclang) */
    srclang: string;
    /**
     * Returns the TextTrack object corresponding to the text track of the track element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTrackElement/track)
     */
    readonly track: TextTrack;
    readonly NONE: 0;
    readonly LOADING: 1;
    readonly LOADED: 2;
    readonly ERROR: 3;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLTrackElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLTrackElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLTrackElement: {
    prototype: HTMLTrackElement;
    new(): HTMLTrackElement;
    readonly NONE: 0;
    readonly LOADING: 1;
    readonly LOADED: 2;
    readonly ERROR: 3;
};

/**
 * Provides special properties (beyond those defined on the regular HTMLElement interface it also has available to it by inheritance) for manipulating unordered list elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLUListElement)
 */
interface HTMLUListElement extends HTMLElement {
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLUListElement/compact)
     */
    compact: boolean;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLUListElement/type)
     */
    type: string;
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLUListElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLUListElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLUListElement: {
    prototype: HTMLUListElement;
    new(): HTMLUListElement;
};

/**
 * An invalid HTML element and derives from the HTMLElement interface, but without implementing any additional properties or methods.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLUnknownElement)
 */
interface HTMLUnknownElement extends HTMLElement {
    addEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLUnknownElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLElementEventMap>(type: K, listener: (this: HTMLUnknownElement, ev: HTMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLUnknownElement: {
    prototype: HTMLUnknownElement;
    new(): HTMLUnknownElement;
};

interface HTMLVideoElementEventMap extends HTMLMediaElementEventMap {
    "enterpictureinpicture": Event;
    "leavepictureinpicture": Event;
}

/**
 * Provides special properties and methods for manipulating video objects. It also inherits properties and methods of HTMLMediaElement and HTMLElement.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLVideoElement)
 */
interface HTMLVideoElement extends HTMLMediaElement {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLVideoElement/disablePictureInPicture) */
    disablePictureInPicture: boolean;
    /**
     * Gets or sets the height of the video element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLVideoElement/height)
     */
    height: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLVideoElement/enterpictureinpicture_event) */
    onenterpictureinpicture: ((this: HTMLVideoElement, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLVideoElement/leavepictureinpicture_event) */
    onleavepictureinpicture: ((this: HTMLVideoElement, ev: Event) => any) | null;
    /** Gets or sets the playsinline of the video element. for example, On iPhone, video elements will now be allowed to play inline, and will not automatically enter fullscreen mode when playback begins. */
    playsInline: boolean;
    /**
     * Gets or sets a URL of an image to display, for example, like a movie poster. This can be a still frame from the video, or another image if no video data is available.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLVideoElement/poster)
     */
    poster: string;
    /**
     * Gets the intrinsic height of a video in CSS pixels, or zero if the dimensions are not known.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLVideoElement/videoHeight)
     */
    readonly videoHeight: number;
    /**
     * Gets the intrinsic width of a video in CSS pixels, or zero if the dimensions are not known.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLVideoElement/videoWidth)
     */
    readonly videoWidth: number;
    /**
     * Gets or sets the width of the video element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLVideoElement/width)
     */
    width: number;
    cancelVideoFrameCallback(handle: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLVideoElement/getVideoPlaybackQuality) */
    getVideoPlaybackQuality(): VideoPlaybackQuality;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLVideoElement/requestPictureInPicture) */
    requestPictureInPicture(): Promise<PictureInPictureWindow>;
    requestVideoFrameCallback(callback: VideoFrameRequestCallback): number;
    addEventListener<K extends keyof HTMLVideoElementEventMap>(type: K, listener: (this: HTMLVideoElement, ev: HTMLVideoElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof HTMLVideoElementEventMap>(type: K, listener: (this: HTMLVideoElement, ev: HTMLVideoElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var HTMLVideoElement: {
    prototype: HTMLVideoElement;
    new(): HTMLVideoElement;
};

/**
 * Events that fire when the fragment identifier of the URL has changed.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HashChangeEvent)
 */
interface HashChangeEvent extends Event {
    /**
     * Returns the URL of the session history entry that is now current.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HashChangeEvent/newURL)
     */
    readonly newURL: string;
    /**
     * Returns the URL of the session history entry that was previously current.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HashChangeEvent/oldURL)
     */
    readonly oldURL: string;
}

declare var HashChangeEvent: {
    prototype: HashChangeEvent;
    new(type: string, eventInitDict?: HashChangeEventInit): HashChangeEvent;
};

/**
 * This Fetch API interface allows you to perform various actions on HTTP request and response headers. These actions include retrieving, setting, adding to, and removing. A Headers object has an associated header list, which is initially empty and consists of zero or more name and value pairs.  You can add to this using methods like append() (see Examples.) In all methods of this interface, header names are matched by case-insensitive byte sequence.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Headers)
 */
interface Headers {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Headers/append) */
    append(name: string, value: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Headers/delete) */
    delete(name: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Headers/get) */
    get(name: string): string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Headers/getSetCookie) */
    getSetCookie(): string[];
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Headers/has) */
    has(name: string): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Headers/set) */
    set(name: string, value: string): void;
    forEach(callbackfn: (value: string, key: string, parent: Headers) => void, thisArg?: any): void;
}

declare var Headers: {
    prototype: Headers;
    new(init?: HeadersInit): Headers;
};

/**
 * Allows manipulation of the browser session history, that is the pages visited in the tab or frame that the current page is loaded in.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/History)
 */
interface History {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/History/length) */
    readonly length: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/History/scrollRestoration) */
    scrollRestoration: ScrollRestoration;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/History/state) */
    readonly state: any;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/History/back) */
    back(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/History/forward) */
    forward(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/History/go) */
    go(delta?: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/History/pushState) */
    pushState(data: any, unused: string, url?: string | URL | null): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/History/replaceState) */
    replaceState(data: any, unused: string, url?: string | URL | null): void;
}

declare var History: {
    prototype: History;
    new(): History;
};

/**
 * This IndexedDB API interface represents a cursor for traversing or iterating over multiple records in a database.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBCursor)
 */
interface IDBCursor {
    /**
     * Returns the direction ("next", "nextunique", "prev" or "prevunique") of the cursor.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBCursor/direction)
     */
    readonly direction: IDBCursorDirection;
    /**
     * Returns the key of the cursor. Throws a "InvalidStateError" DOMException if the cursor is advancing or is finished.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBCursor/key)
     */
    readonly key: IDBValidKey;
    /**
     * Returns the effective key of the cursor. Throws a "InvalidStateError" DOMException if the cursor is advancing or is finished.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBCursor/primaryKey)
     */
    readonly primaryKey: IDBValidKey;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBCursor/request) */
    readonly request: IDBRequest;
    /**
     * Returns the IDBObjectStore or IDBIndex the cursor was opened from.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBCursor/source)
     */
    readonly source: IDBObjectStore | IDBIndex;
    /**
     * Advances the cursor through the next count records in range.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBCursor/advance)
     */
    advance(count: number): void;
    /**
     * Advances the cursor to the next record in range.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBCursor/continue)
     */
    continue(key?: IDBValidKey): void;
    /**
     * Advances the cursor to the next record in range matching or after key and primaryKey. Throws an "InvalidAccessError" DOMException if the source is not an index.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBCursor/continuePrimaryKey)
     */
    continuePrimaryKey(key: IDBValidKey, primaryKey: IDBValidKey): void;
    /**
     * Delete the record pointed at by the cursor with a new value.
     *
     * If successful, request's result will be undefined.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBCursor/delete)
     */
    delete(): IDBRequest<undefined>;
    /**
     * Updated the record pointed at by the cursor with a new value.
     *
     * Throws a "DataError" DOMException if the effective object store uses in-line keys and the key would have changed.
     *
     * If successful, request's result will be the record's key.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBCursor/update)
     */
    update(value: any): IDBRequest<IDBValidKey>;
}

declare var IDBCursor: {
    prototype: IDBCursor;
    new(): IDBCursor;
};

/**
 * This IndexedDB API interface represents a cursor for traversing or iterating over multiple records in a database. It is the same as the IDBCursor, except that it includes the value property.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBCursorWithValue)
 */
interface IDBCursorWithValue extends IDBCursor {
    /**
     * Returns the cursor's current value.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBCursorWithValue/value)
     */
    readonly value: any;
}

declare var IDBCursorWithValue: {
    prototype: IDBCursorWithValue;
    new(): IDBCursorWithValue;
};

interface IDBDatabaseEventMap {
    "abort": Event;
    "close": Event;
    "error": Event;
    "versionchange": IDBVersionChangeEvent;
}

/**
 * This IndexedDB API interface provides a connection to a database; you can use an IDBDatabase object to open a transaction on your database then create, manipulate, and delete objects (data) in that database. The interface provides the only way to get and manage versions of the database.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBDatabase)
 */
interface IDBDatabase extends EventTarget {
    /**
     * Returns the name of the database.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBDatabase/name)
     */
    readonly name: string;
    /**
     * Returns a list of the names of object stores in the database.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBDatabase/objectStoreNames)
     */
    readonly objectStoreNames: DOMStringList;
    onabort: ((this: IDBDatabase, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBDatabase/close_event) */
    onclose: ((this: IDBDatabase, ev: Event) => any) | null;
    onerror: ((this: IDBDatabase, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBDatabase/versionchange_event) */
    onversionchange: ((this: IDBDatabase, ev: IDBVersionChangeEvent) => any) | null;
    /**
     * Returns the version of the database.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBDatabase/version)
     */
    readonly version: number;
    /**
     * Closes the connection once all running transactions have finished.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBDatabase/close)
     */
    close(): void;
    /**
     * Creates a new object store with the given name and options and returns a new IDBObjectStore.
     *
     * Throws a "InvalidStateError" DOMException if not called within an upgrade transaction.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBDatabase/createObjectStore)
     */
    createObjectStore(name: string, options?: IDBObjectStoreParameters): IDBObjectStore;
    /**
     * Deletes the object store with the given name.
     *
     * Throws a "InvalidStateError" DOMException if not called within an upgrade transaction.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBDatabase/deleteObjectStore)
     */
    deleteObjectStore(name: string): void;
    /**
     * Returns a new transaction with the given mode ("readonly" or "readwrite") and scope which can be a single object store name or an array of names.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBDatabase/transaction)
     */
    transaction(storeNames: string | string[], mode?: IDBTransactionMode, options?: IDBTransactionOptions): IDBTransaction;
    addEventListener<K extends keyof IDBDatabaseEventMap>(type: K, listener: (this: IDBDatabase, ev: IDBDatabaseEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof IDBDatabaseEventMap>(type: K, listener: (this: IDBDatabase, ev: IDBDatabaseEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var IDBDatabase: {
    prototype: IDBDatabase;
    new(): IDBDatabase;
};

/**
 * In the following code snippet, we make a request to open a database, and include handlers for the success and error cases. For a full working example, see our To-do Notifications app (view example live.)
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBFactory)
 */
interface IDBFactory {
    /**
     * Compares two values as keys. Returns -1 if key1 precedes key2, 1 if key2 precedes key1, and 0 if the keys are equal.
     *
     * Throws a "DataError" DOMException if either input is not a valid key.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBFactory/cmp)
     */
    cmp(first: any, second: any): number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBFactory/databases) */
    databases(): Promise<IDBDatabaseInfo[]>;
    /**
     * Attempts to delete the named database. If the database already exists and there are open connections that don't close in response to a versionchange event, the request will be blocked until all they close. If the request is successful request's result will be null.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBFactory/deleteDatabase)
     */
    deleteDatabase(name: string): IDBOpenDBRequest;
    /**
     * Attempts to open a connection to the named database with the current version, or 1 if it does not already exist. If the request is successful request's result will be the connection.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBFactory/open)
     */
    open(name: string, version?: number): IDBOpenDBRequest;
}

declare var IDBFactory: {
    prototype: IDBFactory;
    new(): IDBFactory;
};

/**
 * IDBIndex interface of the IndexedDB API provides asynchronous access to an index in a database. An index is a kind of object store for looking up records in another object store, called the referenced object store. You use this interface to retrieve data.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBIndex)
 */
interface IDBIndex {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBIndex/keyPath) */
    readonly keyPath: string | string[];
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBIndex/multiEntry) */
    readonly multiEntry: boolean;
    /**
     * Returns the name of the index.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBIndex/name)
     */
    name: string;
    /**
     * Returns the IDBObjectStore the index belongs to.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBIndex/objectStore)
     */
    readonly objectStore: IDBObjectStore;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBIndex/unique) */
    readonly unique: boolean;
    /**
     * Retrieves the number of records matching the given key or key range in query.
     *
     * If successful, request's result will be the count.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBIndex/count)
     */
    count(query?: IDBValidKey | IDBKeyRange): IDBRequest<number>;
    /**
     * Retrieves the value of the first record matching the given key or key range in query.
     *
     * If successful, request's result will be the value, or undefined if there was no matching record.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBIndex/get)
     */
    get(query: IDBValidKey | IDBKeyRange): IDBRequest<any>;
    /**
     * Retrieves the values of the records matching the given key or key range in query (up to count if given).
     *
     * If successful, request's result will be an Array of the values.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBIndex/getAll)
     */
    getAll(query?: IDBValidKey | IDBKeyRange | null, count?: number): IDBRequest<any[]>;
    /**
     * Retrieves the keys of records matching the given key or key range in query (up to count if given).
     *
     * If successful, request's result will be an Array of the keys.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBIndex/getAllKeys)
     */
    getAllKeys(query?: IDBValidKey | IDBKeyRange | null, count?: number): IDBRequest<IDBValidKey[]>;
    /**
     * Retrieves the key of the first record matching the given key or key range in query.
     *
     * If successful, request's result will be the key, or undefined if there was no matching record.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBIndex/getKey)
     */
    getKey(query: IDBValidKey | IDBKeyRange): IDBRequest<IDBValidKey | undefined>;
    /**
     * Opens a cursor over the records matching query, ordered by direction. If query is null, all records in index are matched.
     *
     * If successful, request's result will be an IDBCursorWithValue, or null if there were no matching records.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBIndex/openCursor)
     */
    openCursor(query?: IDBValidKey | IDBKeyRange | null, direction?: IDBCursorDirection): IDBRequest<IDBCursorWithValue | null>;
    /**
     * Opens a cursor with key only flag set over the records matching query, ordered by direction. If query is null, all records in index are matched.
     *
     * If successful, request's result will be an IDBCursor, or null if there were no matching records.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBIndex/openKeyCursor)
     */
    openKeyCursor(query?: IDBValidKey | IDBKeyRange | null, direction?: IDBCursorDirection): IDBRequest<IDBCursor | null>;
}

declare var IDBIndex: {
    prototype: IDBIndex;
    new(): IDBIndex;
};

/**
 * A key range can be a single value or a range with upper and lower bounds or endpoints. If the key range has both upper and lower bounds, then it is bounded; if it has no bounds, it is unbounded. A bounded key range can either be open (the endpoints are excluded) or closed (the endpoints are included). To retrieve all keys within a certain range, you can use the following code constructs:
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBKeyRange)
 */
interface IDBKeyRange {
    /**
     * Returns lower bound, or undefined if none.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBKeyRange/lower)
     */
    readonly lower: any;
    /**
     * Returns true if the lower open flag is set, and false otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBKeyRange/lowerOpen)
     */
    readonly lowerOpen: boolean;
    /**
     * Returns upper bound, or undefined if none.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBKeyRange/upper)
     */
    readonly upper: any;
    /**
     * Returns true if the upper open flag is set, and false otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBKeyRange/upperOpen)
     */
    readonly upperOpen: boolean;
    /**
     * Returns true if key is included in the range, and false otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBKeyRange/includes)
     */
    includes(key: any): boolean;
}

declare var IDBKeyRange: {
    prototype: IDBKeyRange;
    new(): IDBKeyRange;
    /**
     * Returns a new IDBKeyRange spanning from lower to upper. If lowerOpen is true, lower is not included in the range. If upperOpen is true, upper is not included in the range.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBKeyRange/bound_static)
     */
    bound(lower: any, upper: any, lowerOpen?: boolean, upperOpen?: boolean): IDBKeyRange;
    /**
     * Returns a new IDBKeyRange starting at key with no upper bound. If open is true, key is not included in the range.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBKeyRange/lowerBound_static)
     */
    lowerBound(lower: any, open?: boolean): IDBKeyRange;
    /**
     * Returns a new IDBKeyRange spanning only key.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBKeyRange/only_static)
     */
    only(value: any): IDBKeyRange;
    /**
     * Returns a new IDBKeyRange with no lower bound and ending at key. If open is true, key is not included in the range.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBKeyRange/upperBound_static)
     */
    upperBound(upper: any, open?: boolean): IDBKeyRange;
};

/**
 * This example shows a variety of different uses of object stores, from updating the data structure with IDBObjectStore.createIndex inside an onupgradeneeded function, to adding a new item to our object store with IDBObjectStore.add. For a full working example, see our To-do Notifications app (view example live.)
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBObjectStore)
 */
interface IDBObjectStore {
    /**
     * Returns true if the store has a key generator, and false otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBObjectStore/autoIncrement)
     */
    readonly autoIncrement: boolean;
    /**
     * Returns a list of the names of indexes in the store.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBObjectStore/indexNames)
     */
    readonly indexNames: DOMStringList;
    /**
     * Returns the key path of the store, or null if none.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBObjectStore/keyPath)
     */
    readonly keyPath: string | string[];
    /**
     * Returns the name of the store.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBObjectStore/name)
     */
    name: string;
    /**
     * Returns the associated transaction.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBObjectStore/transaction)
     */
    readonly transaction: IDBTransaction;
    /**
     * Adds or updates a record in store with the given value and key.
     *
     * If the store uses in-line keys and key is specified a "DataError" DOMException will be thrown.
     *
     * If put() is used, any existing record with the key will be replaced. If add() is used, and if a record with the key already exists the request will fail, with request's error set to a "ConstraintError" DOMException.
     *
     * If successful, request's result will be the record's key.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBObjectStore/add)
     */
    add(value: any, key?: IDBValidKey): IDBRequest<IDBValidKey>;
    /**
     * Deletes all records in store.
     *
     * If successful, request's result will be undefined.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBObjectStore/clear)
     */
    clear(): IDBRequest<undefined>;
    /**
     * Retrieves the number of records matching the given key or key range in query.
     *
     * If successful, request's result will be the count.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBObjectStore/count)
     */
    count(query?: IDBValidKey | IDBKeyRange): IDBRequest<number>;
    /**
     * Creates a new index in store with the given name, keyPath and options and returns a new IDBIndex. If the keyPath and options define constraints that cannot be satisfied with the data already in store the upgrade transaction will abort with a "ConstraintError" DOMException.
     *
     * Throws an "InvalidStateError" DOMException if not called within an upgrade transaction.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBObjectStore/createIndex)
     */
    createIndex(name: string, keyPath: string | string[], options?: IDBIndexParameters): IDBIndex;
    /**
     * Deletes records in store with the given key or in the given key range in query.
     *
     * If successful, request's result will be undefined.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBObjectStore/delete)
     */
    delete(query: IDBValidKey | IDBKeyRange): IDBRequest<undefined>;
    /**
     * Deletes the index in store with the given name.
     *
     * Throws an "InvalidStateError" DOMException if not called within an upgrade transaction.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBObjectStore/deleteIndex)
     */
    deleteIndex(name: string): void;
    /**
     * Retrieves the value of the first record matching the given key or key range in query.
     *
     * If successful, request's result will be the value, or undefined if there was no matching record.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBObjectStore/get)
     */
    get(query: IDBValidKey | IDBKeyRange): IDBRequest<any>;
    /**
     * Retrieves the values of the records matching the given key or key range in query (up to count if given).
     *
     * If successful, request's result will be an Array of the values.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBObjectStore/getAll)
     */
    getAll(query?: IDBValidKey | IDBKeyRange | null, count?: number): IDBRequest<any[]>;
    /**
     * Retrieves the keys of records matching the given key or key range in query (up to count if given).
     *
     * If successful, request's result will be an Array of the keys.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBObjectStore/getAllKeys)
     */
    getAllKeys(query?: IDBValidKey | IDBKeyRange | null, count?: number): IDBRequest<IDBValidKey[]>;
    /**
     * Retrieves the key of the first record matching the given key or key range in query.
     *
     * If successful, request's result will be the key, or undefined if there was no matching record.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBObjectStore/getKey)
     */
    getKey(query: IDBValidKey | IDBKeyRange): IDBRequest<IDBValidKey | undefined>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBObjectStore/index) */
    index(name: string): IDBIndex;
    /**
     * Opens a cursor over the records matching query, ordered by direction. If query is null, all records in store are matched.
     *
     * If successful, request's result will be an IDBCursorWithValue pointing at the first matching record, or null if there were no matching records.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBObjectStore/openCursor)
     */
    openCursor(query?: IDBValidKey | IDBKeyRange | null, direction?: IDBCursorDirection): IDBRequest<IDBCursorWithValue | null>;
    /**
     * Opens a cursor with key only flag set over the records matching query, ordered by direction. If query is null, all records in store are matched.
     *
     * If successful, request's result will be an IDBCursor pointing at the first matching record, or null if there were no matching records.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBObjectStore/openKeyCursor)
     */
    openKeyCursor(query?: IDBValidKey | IDBKeyRange | null, direction?: IDBCursorDirection): IDBRequest<IDBCursor | null>;
    /**
     * Adds or updates a record in store with the given value and key.
     *
     * If the store uses in-line keys and key is specified a "DataError" DOMException will be thrown.
     *
     * If put() is used, any existing record with the key will be replaced. If add() is used, and if a record with the key already exists the request will fail, with request's error set to a "ConstraintError" DOMException.
     *
     * If successful, request's result will be the record's key.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBObjectStore/put)
     */
    put(value: any, key?: IDBValidKey): IDBRequest<IDBValidKey>;
}

declare var IDBObjectStore: {
    prototype: IDBObjectStore;
    new(): IDBObjectStore;
};

interface IDBOpenDBRequestEventMap extends IDBRequestEventMap {
    "blocked": IDBVersionChangeEvent;
    "upgradeneeded": IDBVersionChangeEvent;
}

/**
 * Also inherits methods from its parents IDBRequest and EventTarget.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBOpenDBRequest)
 */
interface IDBOpenDBRequest extends IDBRequest<IDBDatabase> {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBOpenDBRequest/blocked_event) */
    onblocked: ((this: IDBOpenDBRequest, ev: IDBVersionChangeEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBOpenDBRequest/upgradeneeded_event) */
    onupgradeneeded: ((this: IDBOpenDBRequest, ev: IDBVersionChangeEvent) => any) | null;
    addEventListener<K extends keyof IDBOpenDBRequestEventMap>(type: K, listener: (this: IDBOpenDBRequest, ev: IDBOpenDBRequestEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof IDBOpenDBRequestEventMap>(type: K, listener: (this: IDBOpenDBRequest, ev: IDBOpenDBRequestEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var IDBOpenDBRequest: {
    prototype: IDBOpenDBRequest;
    new(): IDBOpenDBRequest;
};

interface IDBRequestEventMap {
    "error": Event;
    "success": Event;
}

/**
 * The request object does not initially contain any information about the result of the operation, but once information becomes available, an event is fired on the request, and the information becomes available through the properties of the IDBRequest instance.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBRequest)
 */
interface IDBRequest<T = any> extends EventTarget {
    /**
     * When a request is completed, returns the error (a DOMException), or null if the request succeeded. Throws a "InvalidStateError" DOMException if the request is still pending.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBRequest/error)
     */
    readonly error: DOMException | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBRequest/error_event) */
    onerror: ((this: IDBRequest<T>, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBRequest/success_event) */
    onsuccess: ((this: IDBRequest<T>, ev: Event) => any) | null;
    /**
     * Returns "pending" until a request is complete, then returns "done".
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBRequest/readyState)
     */
    readonly readyState: IDBRequestReadyState;
    /**
     * When a request is completed, returns the result, or undefined if the request failed. Throws a "InvalidStateError" DOMException if the request is still pending.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBRequest/result)
     */
    readonly result: T;
    /**
     * Returns the IDBObjectStore, IDBIndex, or IDBCursor the request was made against, or null if is was an open request.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBRequest/source)
     */
    readonly source: IDBObjectStore | IDBIndex | IDBCursor;
    /**
     * Returns the IDBTransaction the request was made within. If this as an open request, then it returns an upgrade transaction while it is running, or null otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBRequest/transaction)
     */
    readonly transaction: IDBTransaction | null;
    addEventListener<K extends keyof IDBRequestEventMap>(type: K, listener: (this: IDBRequest<T>, ev: IDBRequestEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof IDBRequestEventMap>(type: K, listener: (this: IDBRequest<T>, ev: IDBRequestEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var IDBRequest: {
    prototype: IDBRequest;
    new(): IDBRequest;
};

interface IDBTransactionEventMap {
    "abort": Event;
    "complete": Event;
    "error": Event;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBTransaction) */
interface IDBTransaction extends EventTarget {
    /**
     * Returns the transaction's connection.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBTransaction/db)
     */
    readonly db: IDBDatabase;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBTransaction/durability) */
    readonly durability: IDBTransactionDurability;
    /**
     * If the transaction was aborted, returns the error (a DOMException) providing the reason.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBTransaction/error)
     */
    readonly error: DOMException | null;
    /**
     * Returns the mode the transaction was created with ("readonly" or "readwrite"), or "versionchange" for an upgrade transaction.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBTransaction/mode)
     */
    readonly mode: IDBTransactionMode;
    /**
     * Returns a list of the names of object stores in the transaction's scope. For an upgrade transaction this is all object stores in the database.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBTransaction/objectStoreNames)
     */
    readonly objectStoreNames: DOMStringList;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBTransaction/abort_event) */
    onabort: ((this: IDBTransaction, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBTransaction/complete_event) */
    oncomplete: ((this: IDBTransaction, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBTransaction/error_event) */
    onerror: ((this: IDBTransaction, ev: Event) => any) | null;
    /**
     * Aborts the transaction. All pending requests will fail with a "AbortError" DOMException and all changes made to the database will be reverted.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBTransaction/abort)
     */
    abort(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBTransaction/commit) */
    commit(): void;
    /**
     * Returns an IDBObjectStore in the transaction's scope.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBTransaction/objectStore)
     */
    objectStore(name: string): IDBObjectStore;
    addEventListener<K extends keyof IDBTransactionEventMap>(type: K, listener: (this: IDBTransaction, ev: IDBTransactionEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof IDBTransactionEventMap>(type: K, listener: (this: IDBTransaction, ev: IDBTransactionEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var IDBTransaction: {
    prototype: IDBTransaction;
    new(): IDBTransaction;
};

/**
 * This IndexedDB API interface indicates that the version of the database has changed, as the result of an IDBOpenDBRequest.onupgradeneeded event handler function.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBVersionChangeEvent)
 */
interface IDBVersionChangeEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBVersionChangeEvent/newVersion) */
    readonly newVersion: number | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IDBVersionChangeEvent/oldVersion) */
    readonly oldVersion: number;
}

declare var IDBVersionChangeEvent: {
    prototype: IDBVersionChangeEvent;
    new(type: string, eventInitDict?: IDBVersionChangeEventInit): IDBVersionChangeEvent;
};

/**
 * The IIRFilterNode interface of the Web Audio API is a AudioNode processor which implements a general infinite impulse response (IIR)  filter; this type of filter can be used to implement tone control devices and graphic equalizers as well. It lets the parameters of the filter response be specified, so that it can be tuned as needed.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IIRFilterNode)
 */
interface IIRFilterNode extends AudioNode {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IIRFilterNode/getFrequencyResponse) */
    getFrequencyResponse(frequencyHz: Float32Array, magResponse: Float32Array, phaseResponse: Float32Array): void;
}

declare var IIRFilterNode: {
    prototype: IIRFilterNode;
    new(context: BaseAudioContext, options: IIRFilterOptions): IIRFilterNode;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IdleDeadline) */
interface IdleDeadline {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IdleDeadline/didTimeout) */
    readonly didTimeout: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IdleDeadline/timeRemaining) */
    timeRemaining(): DOMHighResTimeStamp;
}

declare var IdleDeadline: {
    prototype: IdleDeadline;
    new(): IdleDeadline;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ImageBitmap) */
interface ImageBitmap {
    /**
     * Returns the intrinsic height of the image, in CSS pixels.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ImageBitmap/height)
     */
    readonly height: number;
    /**
     * Returns the intrinsic width of the image, in CSS pixels.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ImageBitmap/width)
     */
    readonly width: number;
    /**
     * Releases imageBitmap's underlying bitmap data.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ImageBitmap/close)
     */
    close(): void;
}

declare var ImageBitmap: {
    prototype: ImageBitmap;
    new(): ImageBitmap;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ImageBitmapRenderingContext) */
interface ImageBitmapRenderingContext {
    /** Returns the canvas element that the context is bound to. */
    readonly canvas: HTMLCanvasElement | OffscreenCanvas;
    /**
     * Transfers the underlying bitmap data from imageBitmap to context, and the bitmap becomes the contents of the canvas element to which context is bound.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ImageBitmapRenderingContext/transferFromImageBitmap)
     */
    transferFromImageBitmap(bitmap: ImageBitmap | null): void;
}

declare var ImageBitmapRenderingContext: {
    prototype: ImageBitmapRenderingContext;
    new(): ImageBitmapRenderingContext;
};

/**
 * The underlying pixel data of an area of a <canvas> element. It is created using the ImageData() constructor or creator methods on the CanvasRenderingContext2D object associated with a canvas: createImageData() and getImageData(). It can also be used to set a part of the canvas by using putImageData().
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ImageData)
 */
interface ImageData {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ImageData/colorSpace) */
    readonly colorSpace: PredefinedColorSpace;
    /**
     * Returns the one-dimensional array containing the data in RGBA order, as integers in the range 0 to 255.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ImageData/data)
     */
    readonly data: Uint8ClampedArray;
    /**
     * Returns the actual dimensions of the data in the ImageData object, in pixels.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ImageData/height)
     */
    readonly height: number;
    /**
     * Returns the actual dimensions of the data in the ImageData object, in pixels.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ImageData/width)
     */
    readonly width: number;
}

declare var ImageData: {
    prototype: ImageData;
    new(sw: number, sh: number, settings?: ImageDataSettings): ImageData;
    new(data: Uint8ClampedArray, sw: number, sh?: number, settings?: ImageDataSettings): ImageData;
};

interface InnerHTML {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/innerHTML) */
    innerHTML: string;
}

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/InputDeviceInfo)
 */
interface InputDeviceInfo extends MediaDeviceInfo {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/InputDeviceInfo/getCapabilities) */
    getCapabilities(): MediaTrackCapabilities;
}

declare var InputDeviceInfo: {
    prototype: InputDeviceInfo;
    new(): InputDeviceInfo;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/InputEvent) */
interface InputEvent extends UIEvent {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/InputEvent/data) */
    readonly data: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/InputEvent/dataTransfer) */
    readonly dataTransfer: DataTransfer | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/InputEvent/inputType) */
    readonly inputType: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/InputEvent/isComposing) */
    readonly isComposing: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/InputEvent/getTargetRanges) */
    getTargetRanges(): StaticRange[];
}

declare var InputEvent: {
    prototype: InputEvent;
    new(type: string, eventInitDict?: InputEventInit): InputEvent;
};

/**
 * provides a way to asynchronously observe changes in the intersection of a target element with an ancestor element or with a top-level document's viewport.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IntersectionObserver)
 */
interface IntersectionObserver {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IntersectionObserver/root) */
    readonly root: Element | Document | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IntersectionObserver/rootMargin) */
    readonly rootMargin: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IntersectionObserver/thresholds) */
    readonly thresholds: ReadonlyArray<number>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IntersectionObserver/disconnect) */
    disconnect(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IntersectionObserver/observe) */
    observe(target: Element): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IntersectionObserver/takeRecords) */
    takeRecords(): IntersectionObserverEntry[];
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IntersectionObserver/unobserve) */
    unobserve(target: Element): void;
}

declare var IntersectionObserver: {
    prototype: IntersectionObserver;
    new(callback: IntersectionObserverCallback, options?: IntersectionObserverInit): IntersectionObserver;
};

/**
 * This Intersection Observer API interface describes the intersection between the target element and its root container at a specific moment of transition.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/IntersectionObserverEntry)
 */
interface IntersectionObserverEntry {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IntersectionObserverEntry/boundingClientRect) */
    readonly boundingClientRect: DOMRectReadOnly;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IntersectionObserverEntry/intersectionRatio) */
    readonly intersectionRatio: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IntersectionObserverEntry/intersectionRect) */
    readonly intersectionRect: DOMRectReadOnly;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IntersectionObserverEntry/isIntersecting) */
    readonly isIntersecting: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IntersectionObserverEntry/rootBounds) */
    readonly rootBounds: DOMRectReadOnly | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IntersectionObserverEntry/target) */
    readonly target: Element;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/IntersectionObserverEntry/time) */
    readonly time: DOMHighResTimeStamp;
}

declare var IntersectionObserverEntry: {
    prototype: IntersectionObserverEntry;
    new(intersectionObserverEntryInit: IntersectionObserverEntryInit): IntersectionObserverEntry;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/KHR_parallel_shader_compile) */
interface KHR_parallel_shader_compile {
    readonly COMPLETION_STATUS_KHR: 0x91B1;
}

/**
 * KeyboardEvent objects describe a user interaction with the keyboard; each event describes a single interaction between the user and a key (or combination of a key with modifier keys) on the keyboard.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/KeyboardEvent)
 */
interface KeyboardEvent extends UIEvent {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/KeyboardEvent/altKey) */
    readonly altKey: boolean;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/KeyboardEvent/charCode)
     */
    readonly charCode: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/KeyboardEvent/code) */
    readonly code: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/KeyboardEvent/ctrlKey) */
    readonly ctrlKey: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/KeyboardEvent/isComposing) */
    readonly isComposing: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/KeyboardEvent/key) */
    readonly key: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/KeyboardEvent/keyCode)
     */
    readonly keyCode: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/KeyboardEvent/location) */
    readonly location: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/KeyboardEvent/metaKey) */
    readonly metaKey: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/KeyboardEvent/repeat) */
    readonly repeat: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/KeyboardEvent/shiftKey) */
    readonly shiftKey: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/KeyboardEvent/getModifierState) */
    getModifierState(keyArg: string): boolean;
    /** @deprecated */
    initKeyboardEvent(typeArg: string, bubblesArg?: boolean, cancelableArg?: boolean, viewArg?: Window | null, keyArg?: string, locationArg?: number, ctrlKey?: boolean, altKey?: boolean, shiftKey?: boolean, metaKey?: boolean): void;
    readonly DOM_KEY_LOCATION_STANDARD: 0x00;
    readonly DOM_KEY_LOCATION_LEFT: 0x01;
    readonly DOM_KEY_LOCATION_RIGHT: 0x02;
    readonly DOM_KEY_LOCATION_NUMPAD: 0x03;
}

declare var KeyboardEvent: {
    prototype: KeyboardEvent;
    new(type: string, eventInitDict?: KeyboardEventInit): KeyboardEvent;
    readonly DOM_KEY_LOCATION_STANDARD: 0x00;
    readonly DOM_KEY_LOCATION_LEFT: 0x01;
    readonly DOM_KEY_LOCATION_RIGHT: 0x02;
    readonly DOM_KEY_LOCATION_NUMPAD: 0x03;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/KeyframeEffect) */
interface KeyframeEffect extends AnimationEffect {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/KeyframeEffect/composite) */
    composite: CompositeOperation;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/KeyframeEffect/iterationComposite) */
    iterationComposite: IterationCompositeOperation;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/KeyframeEffect/pseudoElement) */
    pseudoElement: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/KeyframeEffect/target) */
    target: Element | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/KeyframeEffect/getKeyframes) */
    getKeyframes(): ComputedKeyframe[];
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/KeyframeEffect/setKeyframes) */
    setKeyframes(keyframes: Keyframe[] | PropertyIndexedKeyframes | null): void;
}

declare var KeyframeEffect: {
    prototype: KeyframeEffect;
    new(target: Element | null, keyframes: Keyframe[] | PropertyIndexedKeyframes | null, options?: number | KeyframeEffectOptions): KeyframeEffect;
    new(source: KeyframeEffect): KeyframeEffect;
};

interface LinkStyle {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLLinkElement/sheet) */
    readonly sheet: CSSStyleSheet | null;
}

/**
 * The location (URL) of the object it is linked to. Changes done on it are reflected on the object it relates to. Both the Document and Window interface have such a linked Location, accessible via Document.location and Window.location respectively.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Location)
 */
interface Location {
    /**
     * Returns a DOMStringList object listing the origins of the ancestor browsing contexts, from the parent browsing context to the top-level browsing context.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Location/ancestorOrigins)
     */
    readonly ancestorOrigins: DOMStringList;
    /**
     * Returns the Location object's URL's fragment (includes leading "#" if non-empty).
     *
     * Can be set, to navigate to the same URL with a changed fragment (ignores leading "#").
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Location/hash)
     */
    hash: string;
    /**
     * Returns the Location object's URL's host and port (if different from the default port for the scheme).
     *
     * Can be set, to navigate to the same URL with a changed host and port.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Location/host)
     */
    host: string;
    /**
     * Returns the Location object's URL's host.
     *
     * Can be set, to navigate to the same URL with a changed host.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Location/hostname)
     */
    hostname: string;
    /**
     * Returns the Location object's URL.
     *
     * Can be set, to navigate to the given URL.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Location/href)
     */
    href: string;
    toString(): string;
    /**
     * Returns the Location object's URL's origin.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Location/origin)
     */
    readonly origin: string;
    /**
     * Returns the Location object's URL's path.
     *
     * Can be set, to navigate to the same URL with a changed path.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Location/pathname)
     */
    pathname: string;
    /**
     * Returns the Location object's URL's port.
     *
     * Can be set, to navigate to the same URL with a changed port.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Location/port)
     */
    port: string;
    /**
     * Returns the Location object's URL's scheme.
     *
     * Can be set, to navigate to the same URL with a changed scheme.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Location/protocol)
     */
    protocol: string;
    /**
     * Returns the Location object's URL's query (includes leading "?" if non-empty).
     *
     * Can be set, to navigate to the same URL with a changed query (ignores leading "?").
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Location/search)
     */
    search: string;
    /**
     * Navigates to the given URL.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Location/assign)
     */
    assign(url: string | URL): void;
    /**
     * Reloads the current page.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Location/reload)
     */
    reload(): void;
    /**
     * Removes the current page from the session history and navigates to the given URL.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Location/replace)
     */
    replace(url: string | URL): void;
}

declare var Location: {
    prototype: Location;
    new(): Location;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Lock)
 */
interface Lock {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Lock/mode) */
    readonly mode: LockMode;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Lock/name) */
    readonly name: string;
}

declare var Lock: {
    prototype: Lock;
    new(): Lock;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/LockManager)
 */
interface LockManager {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/LockManager/query) */
    query(): Promise<LockManagerSnapshot>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/LockManager/request) */
    request(name: string, callback: LockGrantedCallback): Promise<any>;
    request(name: string, options: LockOptions, callback: LockGrantedCallback): Promise<any>;
}

declare var LockManager: {
    prototype: LockManager;
    new(): LockManager;
};

interface MIDIAccessEventMap {
    "statechange": Event;
}

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MIDIAccess)
 */
interface MIDIAccess extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MIDIAccess/inputs) */
    readonly inputs: MIDIInputMap;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MIDIAccess/statechange_event) */
    onstatechange: ((this: MIDIAccess, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MIDIAccess/outputs) */
    readonly outputs: MIDIOutputMap;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MIDIAccess/sysexEnabled) */
    readonly sysexEnabled: boolean;
    addEventListener<K extends keyof MIDIAccessEventMap>(type: K, listener: (this: MIDIAccess, ev: MIDIAccessEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof MIDIAccessEventMap>(type: K, listener: (this: MIDIAccess, ev: MIDIAccessEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var MIDIAccess: {
    prototype: MIDIAccess;
    new(): MIDIAccess;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MIDIConnectionEvent)
 */
interface MIDIConnectionEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MIDIConnectionEvent/port) */
    readonly port: MIDIPort;
}

declare var MIDIConnectionEvent: {
    prototype: MIDIConnectionEvent;
    new(type: string, eventInitDict?: MIDIConnectionEventInit): MIDIConnectionEvent;
};

interface MIDIInputEventMap extends MIDIPortEventMap {
    "midimessage": Event;
}

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MIDIInput)
 */
interface MIDIInput extends MIDIPort {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MIDIInput/midimessage_event) */
    onmidimessage: ((this: MIDIInput, ev: Event) => any) | null;
    addEventListener<K extends keyof MIDIInputEventMap>(type: K, listener: (this: MIDIInput, ev: MIDIInputEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof MIDIInputEventMap>(type: K, listener: (this: MIDIInput, ev: MIDIInputEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var MIDIInput: {
    prototype: MIDIInput;
    new(): MIDIInput;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MIDIInputMap)
 */
interface MIDIInputMap {
    forEach(callbackfn: (value: MIDIInput, key: string, parent: MIDIInputMap) => void, thisArg?: any): void;
}

declare var MIDIInputMap: {
    prototype: MIDIInputMap;
    new(): MIDIInputMap;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MIDIMessageEvent)
 */
interface MIDIMessageEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MIDIMessageEvent/data) */
    readonly data: Uint8Array;
}

declare var MIDIMessageEvent: {
    prototype: MIDIMessageEvent;
    new(type: string, eventInitDict?: MIDIMessageEventInit): MIDIMessageEvent;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MIDIOutput)
 */
interface MIDIOutput extends MIDIPort {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MIDIOutput/send) */
    send(data: number[], timestamp?: DOMHighResTimeStamp): void;
    addEventListener<K extends keyof MIDIPortEventMap>(type: K, listener: (this: MIDIOutput, ev: MIDIPortEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof MIDIPortEventMap>(type: K, listener: (this: MIDIOutput, ev: MIDIPortEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var MIDIOutput: {
    prototype: MIDIOutput;
    new(): MIDIOutput;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MIDIOutputMap)
 */
interface MIDIOutputMap {
    forEach(callbackfn: (value: MIDIOutput, key: string, parent: MIDIOutputMap) => void, thisArg?: any): void;
}

declare var MIDIOutputMap: {
    prototype: MIDIOutputMap;
    new(): MIDIOutputMap;
};

interface MIDIPortEventMap {
    "statechange": Event;
}

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MIDIPort)
 */
interface MIDIPort extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MIDIPort/connection) */
    readonly connection: MIDIPortConnectionState;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MIDIPort/id) */
    readonly id: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MIDIPort/manufacturer) */
    readonly manufacturer: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MIDIPort/name) */
    readonly name: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MIDIPort/statechange_event) */
    onstatechange: ((this: MIDIPort, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MIDIPort/state) */
    readonly state: MIDIPortDeviceState;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MIDIPort/type) */
    readonly type: MIDIPortType;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MIDIPort/version) */
    readonly version: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MIDIPort/close) */
    close(): Promise<MIDIPort>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MIDIPort/open) */
    open(): Promise<MIDIPort>;
    addEventListener<K extends keyof MIDIPortEventMap>(type: K, listener: (this: MIDIPort, ev: MIDIPortEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof MIDIPortEventMap>(type: K, listener: (this: MIDIPort, ev: MIDIPortEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var MIDIPort: {
    prototype: MIDIPort;
    new(): MIDIPort;
};

interface MathMLElementEventMap extends ElementEventMap, GlobalEventHandlersEventMap {
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MathMLElement) */
interface MathMLElement extends Element, ElementCSSInlineStyle, GlobalEventHandlers, HTMLOrSVGElement {
    addEventListener<K extends keyof MathMLElementEventMap>(type: K, listener: (this: MathMLElement, ev: MathMLElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof MathMLElementEventMap>(type: K, listener: (this: MathMLElement, ev: MathMLElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var MathMLElement: {
    prototype: MathMLElement;
    new(): MathMLElement;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaCapabilities) */
interface MediaCapabilities {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaCapabilities/decodingInfo) */
    decodingInfo(configuration: MediaDecodingConfiguration): Promise<MediaCapabilitiesDecodingInfo>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaCapabilities/encodingInfo) */
    encodingInfo(configuration: MediaEncodingConfiguration): Promise<MediaCapabilitiesEncodingInfo>;
}

declare var MediaCapabilities: {
    prototype: MediaCapabilities;
    new(): MediaCapabilities;
};

/**
 * The MediaDevicesInfo interface contains information that describes a single media input or output device.
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaDeviceInfo)
 */
interface MediaDeviceInfo {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaDeviceInfo/deviceId) */
    readonly deviceId: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaDeviceInfo/groupId) */
    readonly groupId: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaDeviceInfo/kind) */
    readonly kind: MediaDeviceKind;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaDeviceInfo/label) */
    readonly label: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaDeviceInfo/toJSON) */
    toJSON(): any;
}

declare var MediaDeviceInfo: {
    prototype: MediaDeviceInfo;
    new(): MediaDeviceInfo;
};

interface MediaDevicesEventMap {
    "devicechange": Event;
}

/**
 * Provides access to connected media input devices like cameras and microphones, as well as screen sharing. In essence, it lets you obtain access to any hardware source of media data.
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaDevices)
 */
interface MediaDevices extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaDevices/devicechange_event) */
    ondevicechange: ((this: MediaDevices, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaDevices/enumerateDevices) */
    enumerateDevices(): Promise<MediaDeviceInfo[]>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaDevices/getDisplayMedia) */
    getDisplayMedia(options?: DisplayMediaStreamOptions): Promise<MediaStream>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaDevices/getSupportedConstraints) */
    getSupportedConstraints(): MediaTrackSupportedConstraints;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaDevices/getUserMedia) */
    getUserMedia(constraints?: MediaStreamConstraints): Promise<MediaStream>;
    addEventListener<K extends keyof MediaDevicesEventMap>(type: K, listener: (this: MediaDevices, ev: MediaDevicesEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof MediaDevicesEventMap>(type: K, listener: (this: MediaDevices, ev: MediaDevicesEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var MediaDevices: {
    prototype: MediaDevices;
    new(): MediaDevices;
};

/**
 * A MediaElementSourceNode has no inputs and exactly one output, and is created using the AudioContext.createMediaElementSource method. The amount of channels in the output equals the number of channels of the audio referenced by the HTMLMediaElement used in the creation of the node, or is 1 if the HTMLMediaElement has no audio.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaElementAudioSourceNode)
 */
interface MediaElementAudioSourceNode extends AudioNode {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaElementAudioSourceNode/mediaElement) */
    readonly mediaElement: HTMLMediaElement;
}

declare var MediaElementAudioSourceNode: {
    prototype: MediaElementAudioSourceNode;
    new(context: AudioContext, options: MediaElementAudioSourceOptions): MediaElementAudioSourceNode;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaEncryptedEvent) */
interface MediaEncryptedEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaEncryptedEvent/initData) */
    readonly initData: ArrayBuffer | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaEncryptedEvent/initDataType) */
    readonly initDataType: string;
}

declare var MediaEncryptedEvent: {
    prototype: MediaEncryptedEvent;
    new(type: string, eventInitDict?: MediaEncryptedEventInit): MediaEncryptedEvent;
};

/**
 * An error which occurred while handling media in an HTML media element based on HTMLMediaElement, such as <audio> or <video>.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaError)
 */
interface MediaError {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaError/code) */
    readonly code: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaError/message) */
    readonly message: string;
    readonly MEDIA_ERR_ABORTED: 1;
    readonly MEDIA_ERR_NETWORK: 2;
    readonly MEDIA_ERR_DECODE: 3;
    readonly MEDIA_ERR_SRC_NOT_SUPPORTED: 4;
}

declare var MediaError: {
    prototype: MediaError;
    new(): MediaError;
    readonly MEDIA_ERR_ABORTED: 1;
    readonly MEDIA_ERR_NETWORK: 2;
    readonly MEDIA_ERR_DECODE: 3;
    readonly MEDIA_ERR_SRC_NOT_SUPPORTED: 4;
};

/**
 * This EncryptedMediaExtensions API interface contains the content and related data when the content decryption module generates a message for the session.
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaKeyMessageEvent)
 */
interface MediaKeyMessageEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaKeyMessageEvent/message) */
    readonly message: ArrayBuffer;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaKeyMessageEvent/messageType) */
    readonly messageType: MediaKeyMessageType;
}

declare var MediaKeyMessageEvent: {
    prototype: MediaKeyMessageEvent;
    new(type: string, eventInitDict: MediaKeyMessageEventInit): MediaKeyMessageEvent;
};

interface MediaKeySessionEventMap {
    "keystatuseschange": Event;
    "message": MediaKeyMessageEvent;
}

/**
 * This EncryptedMediaExtensions API interface represents a context for message exchange with a content decryption module (CDM).
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaKeySession)
 */
interface MediaKeySession extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaKeySession/closed) */
    readonly closed: Promise<MediaKeySessionClosedReason>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaKeySession/expiration) */
    readonly expiration: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaKeySession/keyStatuses) */
    readonly keyStatuses: MediaKeyStatusMap;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaKeySession/keystatuseschange_event) */
    onkeystatuseschange: ((this: MediaKeySession, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaKeySession/message_event) */
    onmessage: ((this: MediaKeySession, ev: MediaKeyMessageEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaKeySession/sessionId) */
    readonly sessionId: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaKeySession/close) */
    close(): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaKeySession/generateRequest) */
    generateRequest(initDataType: string, initData: BufferSource): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaKeySession/load) */
    load(sessionId: string): Promise<boolean>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaKeySession/remove) */
    remove(): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaKeySession/update) */
    update(response: BufferSource): Promise<void>;
    addEventListener<K extends keyof MediaKeySessionEventMap>(type: K, listener: (this: MediaKeySession, ev: MediaKeySessionEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof MediaKeySessionEventMap>(type: K, listener: (this: MediaKeySession, ev: MediaKeySessionEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var MediaKeySession: {
    prototype: MediaKeySession;
    new(): MediaKeySession;
};

/**
 * This EncryptedMediaExtensions API interface is a read-only map of media key statuses by key IDs.
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaKeyStatusMap)
 */
interface MediaKeyStatusMap {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaKeyStatusMap/size) */
    readonly size: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaKeyStatusMap/get) */
    get(keyId: BufferSource): MediaKeyStatus | undefined;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaKeyStatusMap/has) */
    has(keyId: BufferSource): boolean;
    forEach(callbackfn: (value: MediaKeyStatus, key: BufferSource, parent: MediaKeyStatusMap) => void, thisArg?: any): void;
}

declare var MediaKeyStatusMap: {
    prototype: MediaKeyStatusMap;
    new(): MediaKeyStatusMap;
};

/**
 * This EncryptedMediaExtensions API interface provides access to a Key System for decryption and/or a content protection provider. You can request an instance of this object using the Navigator.requestMediaKeySystemAccess method.
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaKeySystemAccess)
 */
interface MediaKeySystemAccess {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaKeySystemAccess/keySystem) */
    readonly keySystem: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaKeySystemAccess/createMediaKeys) */
    createMediaKeys(): Promise<MediaKeys>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaKeySystemAccess/getConfiguration) */
    getConfiguration(): MediaKeySystemConfiguration;
}

declare var MediaKeySystemAccess: {
    prototype: MediaKeySystemAccess;
    new(): MediaKeySystemAccess;
};

/**
 * This EncryptedMediaExtensions API interface the represents a set of keys that an associated HTMLMediaElement can use for decryption of media data during playback.
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaKeys)
 */
interface MediaKeys {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaKeys/createSession) */
    createSession(sessionType?: MediaKeySessionType): MediaKeySession;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaKeys/setServerCertificate) */
    setServerCertificate(serverCertificate: BufferSource): Promise<boolean>;
}

declare var MediaKeys: {
    prototype: MediaKeys;
    new(): MediaKeys;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaList) */
interface MediaList {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaList/length) */
    readonly length: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaList/mediaText) */
    mediaText: string;
    toString(): string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaList/appendMedium) */
    appendMedium(medium: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaList/deleteMedium) */
    deleteMedium(medium: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaList/item) */
    item(index: number): string | null;
    [index: number]: string;
}

declare var MediaList: {
    prototype: MediaList;
    new(): MediaList;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaMetadata) */
interface MediaMetadata {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaMetadata/album) */
    album: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaMetadata/artist) */
    artist: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaMetadata/artwork) */
    artwork: ReadonlyArray<MediaImage>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaMetadata/title) */
    title: string;
}

declare var MediaMetadata: {
    prototype: MediaMetadata;
    new(init?: MediaMetadataInit): MediaMetadata;
};

interface MediaQueryListEventMap {
    "change": MediaQueryListEvent;
}

/**
 * Stores information on a media query applied to a document, and handles sending notifications to listeners when the media query state change (i.e. when the media query test starts or stops evaluating to true).
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaQueryList)
 */
interface MediaQueryList extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaQueryList/matches) */
    readonly matches: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaQueryList/media) */
    readonly media: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaQueryList/change_event) */
    onchange: ((this: MediaQueryList, ev: MediaQueryListEvent) => any) | null;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaQueryList/addListener)
     */
    addListener(callback: ((this: MediaQueryList, ev: MediaQueryListEvent) => any) | null): void;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaQueryList/removeListener)
     */
    removeListener(callback: ((this: MediaQueryList, ev: MediaQueryListEvent) => any) | null): void;
    addEventListener<K extends keyof MediaQueryListEventMap>(type: K, listener: (this: MediaQueryList, ev: MediaQueryListEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof MediaQueryListEventMap>(type: K, listener: (this: MediaQueryList, ev: MediaQueryListEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var MediaQueryList: {
    prototype: MediaQueryList;
    new(): MediaQueryList;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaQueryListEvent) */
interface MediaQueryListEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaQueryListEvent/matches) */
    readonly matches: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaQueryListEvent/media) */
    readonly media: string;
}

declare var MediaQueryListEvent: {
    prototype: MediaQueryListEvent;
    new(type: string, eventInitDict?: MediaQueryListEventInit): MediaQueryListEvent;
};

interface MediaRecorderEventMap {
    "dataavailable": BlobEvent;
    "error": Event;
    "pause": Event;
    "resume": Event;
    "start": Event;
    "stop": Event;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaRecorder) */
interface MediaRecorder extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaRecorder/audioBitsPerSecond) */
    readonly audioBitsPerSecond: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaRecorder/mimeType) */
    readonly mimeType: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaRecorder/dataavailable_event) */
    ondataavailable: ((this: MediaRecorder, ev: BlobEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaRecorder/error_event) */
    onerror: ((this: MediaRecorder, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaRecorder/pause_event) */
    onpause: ((this: MediaRecorder, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaRecorder/resume_event) */
    onresume: ((this: MediaRecorder, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaRecorder/start_event) */
    onstart: ((this: MediaRecorder, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaRecorder/stop_event) */
    onstop: ((this: MediaRecorder, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaRecorder/state) */
    readonly state: RecordingState;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaRecorder/stream) */
    readonly stream: MediaStream;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaRecorder/videoBitsPerSecond) */
    readonly videoBitsPerSecond: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaRecorder/pause) */
    pause(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaRecorder/requestData) */
    requestData(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaRecorder/resume) */
    resume(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaRecorder/start) */
    start(timeslice?: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaRecorder/stop) */
    stop(): void;
    addEventListener<K extends keyof MediaRecorderEventMap>(type: K, listener: (this: MediaRecorder, ev: MediaRecorderEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof MediaRecorderEventMap>(type: K, listener: (this: MediaRecorder, ev: MediaRecorderEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var MediaRecorder: {
    prototype: MediaRecorder;
    new(stream: MediaStream, options?: MediaRecorderOptions): MediaRecorder;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaRecorder/isTypeSupported_static) */
    isTypeSupported(type: string): boolean;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaSession) */
interface MediaSession {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaSession/metadata) */
    metadata: MediaMetadata | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaSession/playbackState) */
    playbackState: MediaSessionPlaybackState;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaSession/setActionHandler) */
    setActionHandler(action: MediaSessionAction, handler: MediaSessionActionHandler | null): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaSession/setPositionState) */
    setPositionState(state?: MediaPositionState): void;
}

declare var MediaSession: {
    prototype: MediaSession;
    new(): MediaSession;
};

interface MediaSourceEventMap {
    "sourceclose": Event;
    "sourceended": Event;
    "sourceopen": Event;
}

/**
 * This Media Source Extensions API interface represents a source of media data for an HTMLMediaElement object. A MediaSource object can be attached to a HTMLMediaElement to be played in the user agent.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaSource)
 */
interface MediaSource extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaSource/activeSourceBuffers) */
    readonly activeSourceBuffers: SourceBufferList;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaSource/duration) */
    duration: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaSource/sourceclose_event) */
    onsourceclose: ((this: MediaSource, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaSource/sourceended_event) */
    onsourceended: ((this: MediaSource, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaSource/sourceopen_event) */
    onsourceopen: ((this: MediaSource, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaSource/readyState) */
    readonly readyState: ReadyState;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaSource/sourceBuffers) */
    readonly sourceBuffers: SourceBufferList;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaSource/addSourceBuffer) */
    addSourceBuffer(type: string): SourceBuffer;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaSource/clearLiveSeekableRange) */
    clearLiveSeekableRange(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaSource/endOfStream) */
    endOfStream(error?: EndOfStreamError): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaSource/removeSourceBuffer) */
    removeSourceBuffer(sourceBuffer: SourceBuffer): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaSource/setLiveSeekableRange) */
    setLiveSeekableRange(start: number, end: number): void;
    addEventListener<K extends keyof MediaSourceEventMap>(type: K, listener: (this: MediaSource, ev: MediaSourceEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof MediaSourceEventMap>(type: K, listener: (this: MediaSource, ev: MediaSourceEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var MediaSource: {
    prototype: MediaSource;
    new(): MediaSource;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaSource/isTypeSupported_static) */
    isTypeSupported(type: string): boolean;
};

interface MediaStreamEventMap {
    "addtrack": MediaStreamTrackEvent;
    "removetrack": MediaStreamTrackEvent;
}

/**
 * A stream of media content. A stream consists of several tracks such as video or audio tracks. Each track is specified as an instance of MediaStreamTrack.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStream)
 */
interface MediaStream extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStream/active) */
    readonly active: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStream/id) */
    readonly id: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStream/addtrack_event) */
    onaddtrack: ((this: MediaStream, ev: MediaStreamTrackEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStream/removetrack_event) */
    onremovetrack: ((this: MediaStream, ev: MediaStreamTrackEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStream/addTrack) */
    addTrack(track: MediaStreamTrack): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStream/clone) */
    clone(): MediaStream;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStream/getAudioTracks) */
    getAudioTracks(): MediaStreamTrack[];
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStream/getTrackById) */
    getTrackById(trackId: string): MediaStreamTrack | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStream/getTracks) */
    getTracks(): MediaStreamTrack[];
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStream/getVideoTracks) */
    getVideoTracks(): MediaStreamTrack[];
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStream/removeTrack) */
    removeTrack(track: MediaStreamTrack): void;
    addEventListener<K extends keyof MediaStreamEventMap>(type: K, listener: (this: MediaStream, ev: MediaStreamEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof MediaStreamEventMap>(type: K, listener: (this: MediaStream, ev: MediaStreamEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var MediaStream: {
    prototype: MediaStream;
    new(): MediaStream;
    new(stream: MediaStream): MediaStream;
    new(tracks: MediaStreamTrack[]): MediaStream;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStreamAudioDestinationNode) */
interface MediaStreamAudioDestinationNode extends AudioNode {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStreamAudioDestinationNode/stream) */
    readonly stream: MediaStream;
}

declare var MediaStreamAudioDestinationNode: {
    prototype: MediaStreamAudioDestinationNode;
    new(context: AudioContext, options?: AudioNodeOptions): MediaStreamAudioDestinationNode;
};

/**
 * A type of AudioNode which operates as an audio source whose media is received from a MediaStream obtained using the WebRTC or Media Capture and Streams APIs.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStreamAudioSourceNode)
 */
interface MediaStreamAudioSourceNode extends AudioNode {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStreamAudioSourceNode/mediaStream) */
    readonly mediaStream: MediaStream;
}

declare var MediaStreamAudioSourceNode: {
    prototype: MediaStreamAudioSourceNode;
    new(context: AudioContext, options: MediaStreamAudioSourceOptions): MediaStreamAudioSourceNode;
};

interface MediaStreamTrackEventMap {
    "ended": Event;
    "mute": Event;
    "unmute": Event;
}

/**
 * A single media track within a stream; typically, these are audio or video tracks, but other track types may exist as well.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStreamTrack)
 */
interface MediaStreamTrack extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStreamTrack/contentHint) */
    contentHint: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStreamTrack/enabled) */
    enabled: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStreamTrack/id) */
    readonly id: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStreamTrack/kind) */
    readonly kind: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStreamTrack/label) */
    readonly label: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStreamTrack/muted) */
    readonly muted: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStreamTrack/ended_event) */
    onended: ((this: MediaStreamTrack, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStreamTrack/mute_event) */
    onmute: ((this: MediaStreamTrack, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStreamTrack/unmute_event) */
    onunmute: ((this: MediaStreamTrack, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStreamTrack/readyState) */
    readonly readyState: MediaStreamTrackState;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStreamTrack/applyConstraints) */
    applyConstraints(constraints?: MediaTrackConstraints): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStreamTrack/clone) */
    clone(): MediaStreamTrack;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStreamTrack/getCapabilities) */
    getCapabilities(): MediaTrackCapabilities;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStreamTrack/getConstraints) */
    getConstraints(): MediaTrackConstraints;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStreamTrack/getSettings) */
    getSettings(): MediaTrackSettings;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStreamTrack/stop) */
    stop(): void;
    addEventListener<K extends keyof MediaStreamTrackEventMap>(type: K, listener: (this: MediaStreamTrack, ev: MediaStreamTrackEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof MediaStreamTrackEventMap>(type: K, listener: (this: MediaStreamTrack, ev: MediaStreamTrackEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var MediaStreamTrack: {
    prototype: MediaStreamTrack;
    new(): MediaStreamTrack;
};

/**
 * Events which indicate that a MediaStream has had tracks added to or removed from the stream through calls to Media Stream API methods. These events are sent to the stream when these changes occur.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStreamTrackEvent)
 */
interface MediaStreamTrackEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MediaStreamTrackEvent/track) */
    readonly track: MediaStreamTrack;
}

declare var MediaStreamTrackEvent: {
    prototype: MediaStreamTrackEvent;
    new(type: string, eventInitDict: MediaStreamTrackEventInit): MediaStreamTrackEvent;
};

/**
 * This Channel Messaging API interface allows us to create a new message channel and send data through it via its two MessagePort properties.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MessageChannel)
 */
interface MessageChannel {
    /**
     * Returns the first MessagePort object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MessageChannel/port1)
     */
    readonly port1: MessagePort;
    /**
     * Returns the second MessagePort object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MessageChannel/port2)
     */
    readonly port2: MessagePort;
}

declare var MessageChannel: {
    prototype: MessageChannel;
    new(): MessageChannel;
};

/**
 * A message received by a target object.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MessageEvent)
 */
interface MessageEvent<T = any> extends Event {
    /**
     * Returns the data of the message.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MessageEvent/data)
     */
    readonly data: T;
    /**
     * Returns the last event ID string, for server-sent events.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MessageEvent/lastEventId)
     */
    readonly lastEventId: string;
    /**
     * Returns the origin of the message, for server-sent events and cross-document messaging.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MessageEvent/origin)
     */
    readonly origin: string;
    /**
     * Returns the MessagePort array sent with the message, for cross-document messaging and channel messaging.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MessageEvent/ports)
     */
    readonly ports: ReadonlyArray<MessagePort>;
    /**
     * Returns the WindowProxy of the source window, for cross-document messaging, and the MessagePort being attached, in the connect event fired at SharedWorkerGlobalScope objects.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MessageEvent/source)
     */
    readonly source: MessageEventSource | null;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MessageEvent/initMessageEvent)
     */
    initMessageEvent(type: string, bubbles?: boolean, cancelable?: boolean, data?: any, origin?: string, lastEventId?: string, source?: MessageEventSource | null, ports?: MessagePort[]): void;
}

declare var MessageEvent: {
    prototype: MessageEvent;
    new<T>(type: string, eventInitDict?: MessageEventInit<T>): MessageEvent<T>;
};

interface MessagePortEventMap {
    "message": MessageEvent;
    "messageerror": MessageEvent;
}

/**
 * This Channel Messaging API interface represents one of the two ports of a MessageChannel, allowing messages to be sent from one port and listening out for them arriving at the other.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MessagePort)
 */
interface MessagePort extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MessagePort/message_event) */
    onmessage: ((this: MessagePort, ev: MessageEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MessagePort/messageerror_event) */
    onmessageerror: ((this: MessagePort, ev: MessageEvent) => any) | null;
    /**
     * Disconnects the port, so that it is no longer active.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MessagePort/close)
     */
    close(): void;
    /**
     * Posts a message through the channel. Objects listed in transfer are transferred, not just cloned, meaning that they are no longer usable on the sending side.
     *
     * Throws a "DataCloneError" DOMException if transfer contains duplicate objects or port, or if message could not be cloned.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MessagePort/postMessage)
     */
    postMessage(message: any, transfer: Transferable[]): void;
    postMessage(message: any, options?: StructuredSerializeOptions): void;
    /**
     * Begins dispatching messages received on the port.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MessagePort/start)
     */
    start(): void;
    addEventListener<K extends keyof MessagePortEventMap>(type: K, listener: (this: MessagePort, ev: MessagePortEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof MessagePortEventMap>(type: K, listener: (this: MessagePort, ev: MessagePortEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var MessagePort: {
    prototype: MessagePort;
    new(): MessagePort;
};

/**
 * Provides contains information about a MIME type associated with a particular plugin. NavigatorPlugins.mimeTypes returns an array of this object.
 * @deprecated
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MimeType)
 */
interface MimeType {
    /**
     * Returns the MIME type's description.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MimeType/description)
     */
    readonly description: string;
    /**
     * Returns the Plugin object that implements this MIME type.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MimeType/enabledPlugin)
     */
    readonly enabledPlugin: Plugin;
    /**
     * Returns the MIME type's typical file extensions, in a comma-separated list.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MimeType/suffixes)
     */
    readonly suffixes: string;
    /**
     * Returns the MIME type.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MimeType/type)
     */
    readonly type: string;
}

/** @deprecated */
declare var MimeType: {
    prototype: MimeType;
    new(): MimeType;
};

/**
 * Returns an array of MimeType instances, each of which contains information about a supported browser plugins. This object is returned by NavigatorPlugins.mimeTypes.
 * @deprecated
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MimeTypeArray)
 */
interface MimeTypeArray {
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MimeTypeArray/length)
     */
    readonly length: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MimeTypeArray/item)
     */
    item(index: number): MimeType | null;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MimeTypeArray/namedItem)
     */
    namedItem(name: string): MimeType | null;
    [index: number]: MimeType;
}

/** @deprecated */
declare var MimeTypeArray: {
    prototype: MimeTypeArray;
    new(): MimeTypeArray;
};

/**
 * Events that occur due to the user interacting with a pointing device (such as a mouse). Common events using this interface include click, dblclick, mouseup, mousedown.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MouseEvent)
 */
interface MouseEvent extends UIEvent {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MouseEvent/altKey) */
    readonly altKey: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MouseEvent/button) */
    readonly button: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MouseEvent/buttons) */
    readonly buttons: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MouseEvent/clientX) */
    readonly clientX: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MouseEvent/clientY) */
    readonly clientY: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MouseEvent/ctrlKey) */
    readonly ctrlKey: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MouseEvent/metaKey) */
    readonly metaKey: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MouseEvent/movementX) */
    readonly movementX: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MouseEvent/movementY) */
    readonly movementY: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MouseEvent/offsetX) */
    readonly offsetX: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MouseEvent/offsetY) */
    readonly offsetY: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MouseEvent/pageX) */
    readonly pageX: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MouseEvent/pageY) */
    readonly pageY: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MouseEvent/relatedTarget) */
    readonly relatedTarget: EventTarget | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MouseEvent/screenX) */
    readonly screenX: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MouseEvent/screenY) */
    readonly screenY: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MouseEvent/shiftKey) */
    readonly shiftKey: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MouseEvent/x) */
    readonly x: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MouseEvent/y) */
    readonly y: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/MouseEvent/getModifierState) */
    getModifierState(keyArg: string): boolean;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MouseEvent/initMouseEvent)
     */
    initMouseEvent(typeArg: string, canBubbleArg: boolean, cancelableArg: boolean, viewArg: Window, detailArg: number, screenXArg: number, screenYArg: number, clientXArg: number, clientYArg: number, ctrlKeyArg: boolean, altKeyArg: boolean, shiftKeyArg: boolean, metaKeyArg: boolean, buttonArg: number, relatedTargetArg: EventTarget | null): void;
}

declare var MouseEvent: {
    prototype: MouseEvent;
    new(type: string, eventInitDict?: MouseEventInit): MouseEvent;
};

/**
 * Provides event properties that are specific to modifications to the Document Object Model (DOM) hierarchy and nodes.
 * @deprecated DOM4 [DOM] provides a new mechanism using a MutationObserver interface which addresses the use cases that mutation events solve, but in a more performant manner. Thus, this specification describes mutation events for reference and completeness of legacy behavior, but deprecates the use of the MutationEvent interface.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MutationEvent)
 */
interface MutationEvent extends Event {
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MutationEvent/attrChange)
     */
    readonly attrChange: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MutationEvent/attrName)
     */
    readonly attrName: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MutationEvent/newValue)
     */
    readonly newValue: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MutationEvent/prevValue)
     */
    readonly prevValue: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MutationEvent/relatedNode)
     */
    readonly relatedNode: Node | null;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MutationEvent/initMutationEvent)
     */
    initMutationEvent(typeArg: string, bubblesArg?: boolean, cancelableArg?: boolean, relatedNodeArg?: Node | null, prevValueArg?: string, newValueArg?: string, attrNameArg?: string, attrChangeArg?: number): void;
    readonly MODIFICATION: 1;
    readonly ADDITION: 2;
    readonly REMOVAL: 3;
}

/** @deprecated */
declare var MutationEvent: {
    prototype: MutationEvent;
    new(): MutationEvent;
    readonly MODIFICATION: 1;
    readonly ADDITION: 2;
    readonly REMOVAL: 3;
};

/**
 * Provides the ability to watch for changes being made to the DOM tree. It is designed as a replacement for the older Mutation Events feature which was part of the DOM3 Events specification.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MutationObserver)
 */
interface MutationObserver {
    /**
     * Stops observer from observing any mutations. Until the observe() method is used again, observer's callback will not be invoked.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MutationObserver/disconnect)
     */
    disconnect(): void;
    /**
     * Instructs the user agent to observe a given target (a node) and report any mutations based on the criteria given by options (an object).
     *
     * The options argument allows for setting mutation observation options via object members.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MutationObserver/observe)
     */
    observe(target: Node, options?: MutationObserverInit): void;
    /**
     * Empties the record queue and returns what was in there.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MutationObserver/takeRecords)
     */
    takeRecords(): MutationRecord[];
}

declare var MutationObserver: {
    prototype: MutationObserver;
    new(callback: MutationCallback): MutationObserver;
};

/**
 * A MutationRecord represents an individual DOM mutation. It is the object that is passed to MutationObserver's callback.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MutationRecord)
 */
interface MutationRecord {
    /**
     * Return the nodes added and removed respectively.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MutationRecord/addedNodes)
     */
    readonly addedNodes: NodeList;
    /**
     * Returns the local name of the changed attribute, and null otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MutationRecord/attributeName)
     */
    readonly attributeName: string | null;
    /**
     * Returns the namespace of the changed attribute, and null otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MutationRecord/attributeNamespace)
     */
    readonly attributeNamespace: string | null;
    /**
     * Return the previous and next sibling respectively of the added or removed nodes, and null otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MutationRecord/nextSibling)
     */
    readonly nextSibling: Node | null;
    /**
     * The return value depends on type. For "attributes", it is the value of the changed attribute before the change. For "characterData", it is the data of the changed node before the change. For "childList", it is null.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MutationRecord/oldValue)
     */
    readonly oldValue: string | null;
    /**
     * Return the previous and next sibling respectively of the added or removed nodes, and null otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MutationRecord/previousSibling)
     */
    readonly previousSibling: Node | null;
    /**
     * Return the nodes added and removed respectively.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MutationRecord/removedNodes)
     */
    readonly removedNodes: NodeList;
    /**
     * Returns the node the mutation affected, depending on the type. For "attributes", it is the element whose attribute changed. For "characterData", it is the CharacterData node. For "childList", it is the node whose children changed.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MutationRecord/target)
     */
    readonly target: Node;
    /**
     * Returns "attributes" if it was an attribute mutation. "characterData" if it was a mutation to a CharacterData node. And "childList" if it was a mutation to the tree of nodes.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/MutationRecord/type)
     */
    readonly type: MutationRecordType;
}

declare var MutationRecord: {
    prototype: MutationRecord;
    new(): MutationRecord;
};

/**
 * A collection of Attr objects. Objects inside a NamedNodeMap are not in any particular order, unlike NodeList, although they may be accessed by an index as in an array.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/NamedNodeMap)
 */
interface NamedNodeMap {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/NamedNodeMap/length) */
    readonly length: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/NamedNodeMap/getNamedItem) */
    getNamedItem(qualifiedName: string): Attr | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/NamedNodeMap/getNamedItemNS) */
    getNamedItemNS(namespace: string | null, localName: string): Attr | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/NamedNodeMap/item) */
    item(index: number): Attr | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/NamedNodeMap/removeNamedItem) */
    removeNamedItem(qualifiedName: string): Attr;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/NamedNodeMap/removeNamedItemNS) */
    removeNamedItemNS(namespace: string | null, localName: string): Attr;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/NamedNodeMap/setNamedItem) */
    setNamedItem(attr: Attr): Attr | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/NamedNodeMap/setNamedItemNS) */
    setNamedItemNS(attr: Attr): Attr | null;
    [index: number]: Attr;
}

declare var NamedNodeMap: {
    prototype: NamedNodeMap;
    new(): NamedNodeMap;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/NavigationPreloadManager)
 */
interface NavigationPreloadManager {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/NavigationPreloadManager/disable) */
    disable(): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/NavigationPreloadManager/enable) */
    enable(): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/NavigationPreloadManager/getState) */
    getState(): Promise<NavigationPreloadState>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/NavigationPreloadManager/setHeaderValue) */
    setHeaderValue(value: string): Promise<void>;
}

declare var NavigationPreloadManager: {
    prototype: NavigationPreloadManager;
    new(): NavigationPreloadManager;
};

/**
 * The state and the identity of the user agent. It allows scripts to query it and to register themselves to carry on some activities.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator)
 */
interface Navigator extends NavigatorAutomationInformation, NavigatorBadge, NavigatorConcurrentHardware, NavigatorContentUtils, NavigatorCookies, NavigatorID, NavigatorLanguage, NavigatorLocks, NavigatorOnLine, NavigatorPlugins, NavigatorStorage {
    /**
     * Available only in secure contexts.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/clipboard)
     */
    readonly clipboard: Clipboard;
    /**
     * Available only in secure contexts.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/credentials)
     */
    readonly credentials: CredentialsContainer;
    readonly doNotTrack: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/geolocation) */
    readonly geolocation: Geolocation;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/maxTouchPoints) */
    readonly maxTouchPoints: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/mediaCapabilities) */
    readonly mediaCapabilities: MediaCapabilities;
    /**
     * Available only in secure contexts.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/mediaDevices)
     */
    readonly mediaDevices: MediaDevices;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/mediaSession) */
    readonly mediaSession: MediaSession;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/permissions) */
    readonly permissions: Permissions;
    /**
     * Available only in secure contexts.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/serviceWorker)
     */
    readonly serviceWorker: ServiceWorkerContainer;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/userActivation) */
    readonly userActivation: UserActivation;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/wakeLock) */
    readonly wakeLock: WakeLock;
    /**
     * Available only in secure contexts.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/canShare)
     */
    canShare(data?: ShareData): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/getGamepads) */
    getGamepads(): (Gamepad | null)[];
    /**
     * Available only in secure contexts.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/requestMIDIAccess)
     */
    requestMIDIAccess(options?: MIDIOptions): Promise<MIDIAccess>;
    /**
     * Available only in secure contexts.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/requestMediaKeySystemAccess)
     */
    requestMediaKeySystemAccess(keySystem: string, supportedConfigurations: MediaKeySystemConfiguration[]): Promise<MediaKeySystemAccess>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/sendBeacon) */
    sendBeacon(url: string | URL, data?: BodyInit | null): boolean;
    /**
     * Available only in secure contexts.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/share)
     */
    share(data?: ShareData): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/vibrate) */
    vibrate(pattern: VibratePattern): boolean;
}

declare var Navigator: {
    prototype: Navigator;
    new(): Navigator;
};

interface NavigatorAutomationInformation {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/webdriver) */
    readonly webdriver: boolean;
}

/** Available only in secure contexts. */
interface NavigatorBadge {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/clearAppBadge) */
    clearAppBadge(): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/setAppBadge) */
    setAppBadge(contents?: number): Promise<void>;
}

interface NavigatorConcurrentHardware {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/hardwareConcurrency) */
    readonly hardwareConcurrency: number;
}

interface NavigatorContentUtils {
    /**
     * Available only in secure contexts.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/registerProtocolHandler)
     */
    registerProtocolHandler(scheme: string, url: string | URL): void;
}

interface NavigatorCookies {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/cookieEnabled) */
    readonly cookieEnabled: boolean;
}

interface NavigatorID {
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/appCodeName)
     */
    readonly appCodeName: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/appName)
     */
    readonly appName: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/appVersion)
     */
    readonly appVersion: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/platform)
     */
    readonly platform: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/product)
     */
    readonly product: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/productSub)
     */
    readonly productSub: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/userAgent) */
    readonly userAgent: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/vendor)
     */
    readonly vendor: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/vendorSub)
     */
    readonly vendorSub: string;
}

interface NavigatorLanguage {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/language) */
    readonly language: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/languages) */
    readonly languages: ReadonlyArray<string>;
}

/** Available only in secure contexts. */
interface NavigatorLocks {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/locks) */
    readonly locks: LockManager;
}

interface NavigatorOnLine {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/onLine) */
    readonly onLine: boolean;
}

interface NavigatorPlugins {
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/NavigatorPlugins/mimeTypes)
     */
    readonly mimeTypes: MimeTypeArray;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/pdfViewerEnabled) */
    readonly pdfViewerEnabled: boolean;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/plugins)
     */
    readonly plugins: PluginArray;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/javaEnabled)
     */
    javaEnabled(): boolean;
}

/** Available only in secure contexts. */
interface NavigatorStorage {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Navigator/storage) */
    readonly storage: StorageManager;
}

/**
 * Node is an interface from which a number of DOM API object types inherit. It allows those types to be treated similarly; for example, inheriting the same set of methods, or being tested in the same way.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node)
 */
interface Node extends EventTarget {
    /**
     * Returns node's node document's document base URL.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/baseURI)
     */
    readonly baseURI: string;
    /**
     * Returns the children.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/childNodes)
     */
    readonly childNodes: NodeListOf<ChildNode>;
    /**
     * Returns the first child.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/firstChild)
     */
    readonly firstChild: ChildNode | null;
    /**
     * Returns true if node is connected and false otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/isConnected)
     */
    readonly isConnected: boolean;
    /**
     * Returns the last child.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/lastChild)
     */
    readonly lastChild: ChildNode | null;
    /**
     * Returns the next sibling.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/nextSibling)
     */
    readonly nextSibling: ChildNode | null;
    /**
     * Returns a string appropriate for the type of node.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/nodeName)
     */
    readonly nodeName: string;
    /**
     * Returns the type of node.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/nodeType)
     */
    readonly nodeType: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/nodeValue) */
    nodeValue: string | null;
    /**
     * Returns the node document. Returns null for documents.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/ownerDocument)
     */
    readonly ownerDocument: Document | null;
    /**
     * Returns the parent element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/parentElement)
     */
    readonly parentElement: HTMLElement | null;
    /**
     * Returns the parent.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/parentNode)
     */
    readonly parentNode: ParentNode | null;
    /**
     * Returns the previous sibling.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/previousSibling)
     */
    readonly previousSibling: ChildNode | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/textContent) */
    textContent: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/appendChild) */
    appendChild<T extends Node>(node: T): T;
    /**
     * Returns a copy of node. If deep is true, the copy also includes the node's descendants.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/cloneNode)
     */
    cloneNode(deep?: boolean): Node;
    /**
     * Returns a bitmask indicating the position of other relative to node.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/compareDocumentPosition)
     */
    compareDocumentPosition(other: Node): number;
    /**
     * Returns true if other is an inclusive descendant of node, and false otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/contains)
     */
    contains(other: Node | null): boolean;
    /**
     * Returns node's root.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/getRootNode)
     */
    getRootNode(options?: GetRootNodeOptions): Node;
    /**
     * Returns whether node has children.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/hasChildNodes)
     */
    hasChildNodes(): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/insertBefore) */
    insertBefore<T extends Node>(node: T, child: Node | null): T;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/isDefaultNamespace) */
    isDefaultNamespace(namespace: string | null): boolean;
    /**
     * Returns whether node and otherNode have the same properties.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/isEqualNode)
     */
    isEqualNode(otherNode: Node | null): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/isSameNode) */
    isSameNode(otherNode: Node | null): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/lookupNamespaceURI) */
    lookupNamespaceURI(prefix: string | null): string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/lookupPrefix) */
    lookupPrefix(namespace: string | null): string | null;
    /**
     * Removes empty exclusive Text nodes and concatenates the data of remaining contiguous exclusive Text nodes into the first of their nodes.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/normalize)
     */
    normalize(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/removeChild) */
    removeChild<T extends Node>(child: T): T;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/replaceChild) */
    replaceChild<T extends Node>(node: Node, child: T): T;
    /** node is an element. */
    readonly ELEMENT_NODE: 1;
    readonly ATTRIBUTE_NODE: 2;
    /** node is a Text node. */
    readonly TEXT_NODE: 3;
    /** node is a CDATASection node. */
    readonly CDATA_SECTION_NODE: 4;
    readonly ENTITY_REFERENCE_NODE: 5;
    readonly ENTITY_NODE: 6;
    /** node is a ProcessingInstruction node. */
    readonly PROCESSING_INSTRUCTION_NODE: 7;
    /** node is a Comment node. */
    readonly COMMENT_NODE: 8;
    /** node is a document. */
    readonly DOCUMENT_NODE: 9;
    /** node is a doctype. */
    readonly DOCUMENT_TYPE_NODE: 10;
    /** node is a DocumentFragment node. */
    readonly DOCUMENT_FRAGMENT_NODE: 11;
    readonly NOTATION_NODE: 12;
    /** Set when node and other are not in the same tree. */
    readonly DOCUMENT_POSITION_DISCONNECTED: 0x01;
    /** Set when other is preceding node. */
    readonly DOCUMENT_POSITION_PRECEDING: 0x02;
    /** Set when other is following node. */
    readonly DOCUMENT_POSITION_FOLLOWING: 0x04;
    /** Set when other is an ancestor of node. */
    readonly DOCUMENT_POSITION_CONTAINS: 0x08;
    /** Set when other is a descendant of node. */
    readonly DOCUMENT_POSITION_CONTAINED_BY: 0x10;
    readonly DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC: 0x20;
}

declare var Node: {
    prototype: Node;
    new(): Node;
    /** node is an element. */
    readonly ELEMENT_NODE: 1;
    readonly ATTRIBUTE_NODE: 2;
    /** node is a Text node. */
    readonly TEXT_NODE: 3;
    /** node is a CDATASection node. */
    readonly CDATA_SECTION_NODE: 4;
    readonly ENTITY_REFERENCE_NODE: 5;
    readonly ENTITY_NODE: 6;
    /** node is a ProcessingInstruction node. */
    readonly PROCESSING_INSTRUCTION_NODE: 7;
    /** node is a Comment node. */
    readonly COMMENT_NODE: 8;
    /** node is a document. */
    readonly DOCUMENT_NODE: 9;
    /** node is a doctype. */
    readonly DOCUMENT_TYPE_NODE: 10;
    /** node is a DocumentFragment node. */
    readonly DOCUMENT_FRAGMENT_NODE: 11;
    readonly NOTATION_NODE: 12;
    /** Set when node and other are not in the same tree. */
    readonly DOCUMENT_POSITION_DISCONNECTED: 0x01;
    /** Set when other is preceding node. */
    readonly DOCUMENT_POSITION_PRECEDING: 0x02;
    /** Set when other is following node. */
    readonly DOCUMENT_POSITION_FOLLOWING: 0x04;
    /** Set when other is an ancestor of node. */
    readonly DOCUMENT_POSITION_CONTAINS: 0x08;
    /** Set when other is a descendant of node. */
    readonly DOCUMENT_POSITION_CONTAINED_BY: 0x10;
    readonly DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC: 0x20;
};

/**
 * An iterator over the members of a list of the nodes in a subtree of the DOM. The nodes will be returned in document order.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/NodeIterator)
 */
interface NodeIterator {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/NodeIterator/filter) */
    readonly filter: NodeFilter | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/NodeIterator/pointerBeforeReferenceNode) */
    readonly pointerBeforeReferenceNode: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/NodeIterator/referenceNode) */
    readonly referenceNode: Node;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/NodeIterator/root) */
    readonly root: Node;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/NodeIterator/whatToShow) */
    readonly whatToShow: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/NodeIterator/detach)
     */
    detach(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/NodeIterator/nextNode) */
    nextNode(): Node | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/NodeIterator/previousNode) */
    previousNode(): Node | null;
}

declare var NodeIterator: {
    prototype: NodeIterator;
    new(): NodeIterator;
};

/**
 * NodeList objects are collections of nodes, usually returned by properties such as Node.childNodes and methods such as document.querySelectorAll().
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/NodeList)
 */
interface NodeList {
    /**
     * Returns the number of nodes in the collection.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/NodeList/length)
     */
    readonly length: number;
    /**
     * Returns the node with index index from the collection. The nodes are sorted in tree order.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/NodeList/item)
     */
    item(index: number): Node | null;
    /**
     * Performs the specified action for each node in an list.
     * @param callbackfn  A function that accepts up to three arguments. forEach calls the callbackfn function one time for each element in the list.
     * @param thisArg  An object to which the this keyword can refer in the callbackfn function. If thisArg is omitted, undefined is used as the this value.
     */
    forEach(callbackfn: (value: Node, key: number, parent: NodeList) => void, thisArg?: any): void;
    [index: number]: Node;
}

declare var NodeList: {
    prototype: NodeList;
    new(): NodeList;
};

interface NodeListOf<TNode extends Node> extends NodeList {
    item(index: number): TNode;
    /**
     * Performs the specified action for each node in an list.
     * @param callbackfn  A function that accepts up to three arguments. forEach calls the callbackfn function one time for each element in the list.
     * @param thisArg  An object to which the this keyword can refer in the callbackfn function. If thisArg is omitted, undefined is used as the this value.
     */
    forEach(callbackfn: (value: TNode, key: number, parent: NodeListOf<TNode>) => void, thisArg?: any): void;
    [index: number]: TNode;
}

interface NonDocumentTypeChildNode {
    /**
     * Returns the first following sibling that is an element, and null otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CharacterData/nextElementSibling)
     */
    readonly nextElementSibling: Element | null;
    /**
     * Returns the first preceding sibling that is an element, and null otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CharacterData/previousElementSibling)
     */
    readonly previousElementSibling: Element | null;
}

interface NonElementParentNode {
    /**
     * Returns the first element within node's descendants whose ID is elementId.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/getElementById)
     */
    getElementById(elementId: string): Element | null;
}

interface NotificationEventMap {
    "click": Event;
    "close": Event;
    "error": Event;
    "show": Event;
}

/**
 * This Notifications API interface is used to configure and display desktop notifications to the user.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Notification)
 */
interface Notification extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Notification/body) */
    readonly body: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Notification/data) */
    readonly data: any;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Notification/dir) */
    readonly dir: NotificationDirection;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Notification/icon) */
    readonly icon: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Notification/lang) */
    readonly lang: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Notification/click_event) */
    onclick: ((this: Notification, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Notification/close_event) */
    onclose: ((this: Notification, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Notification/error_event) */
    onerror: ((this: Notification, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Notification/show_event) */
    onshow: ((this: Notification, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Notification/silent) */
    readonly silent: boolean | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Notification/tag) */
    readonly tag: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Notification/title) */
    readonly title: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Notification/close) */
    close(): void;
    addEventListener<K extends keyof NotificationEventMap>(type: K, listener: (this: Notification, ev: NotificationEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof NotificationEventMap>(type: K, listener: (this: Notification, ev: NotificationEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var Notification: {
    prototype: Notification;
    new(title: string, options?: NotificationOptions): Notification;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Notification/permission_static) */
    readonly permission: NotificationPermission;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Notification/requestPermission_static) */
    requestPermission(deprecatedCallback?: NotificationPermissionCallback): Promise<NotificationPermission>;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OES_draw_buffers_indexed) */
interface OES_draw_buffers_indexed {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OES_draw_buffers_indexed/blendEquationSeparateiOES) */
    blendEquationSeparateiOES(buf: GLuint, modeRGB: GLenum, modeAlpha: GLenum): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OES_draw_buffers_indexed/blendEquationiOES) */
    blendEquationiOES(buf: GLuint, mode: GLenum): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OES_draw_buffers_indexed/blendFuncSeparateiOES) */
    blendFuncSeparateiOES(buf: GLuint, srcRGB: GLenum, dstRGB: GLenum, srcAlpha: GLenum, dstAlpha: GLenum): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OES_draw_buffers_indexed/blendFunciOES) */
    blendFunciOES(buf: GLuint, src: GLenum, dst: GLenum): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OES_draw_buffers_indexed/colorMaskiOES) */
    colorMaskiOES(buf: GLuint, r: GLboolean, g: GLboolean, b: GLboolean, a: GLboolean): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OES_draw_buffers_indexed/disableiOES) */
    disableiOES(target: GLenum, index: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OES_draw_buffers_indexed/enableiOES) */
    enableiOES(target: GLenum, index: GLuint): void;
}

/**
 * The OES_element_index_uint extension is part of the WebGL API and adds support for gl.UNSIGNED_INT types to WebGLRenderingContext.drawElements().
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/OES_element_index_uint)
 */
interface OES_element_index_uint {
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OES_fbo_render_mipmap) */
interface OES_fbo_render_mipmap {
}

/**
 * The OES_standard_derivatives extension is part of the WebGL API and adds the GLSL derivative functions dFdx, dFdy, and fwidth.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/OES_standard_derivatives)
 */
interface OES_standard_derivatives {
    readonly FRAGMENT_SHADER_DERIVATIVE_HINT_OES: 0x8B8B;
}

/**
 * The OES_texture_float extension is part of the WebGL API and exposes floating-point pixel types for textures.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/OES_texture_float)
 */
interface OES_texture_float {
}

/**
 * The OES_texture_float_linear extension is part of the WebGL API and allows linear filtering with floating-point pixel types for textures.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/OES_texture_float_linear)
 */
interface OES_texture_float_linear {
}

/**
 * The OES_texture_half_float extension is part of the WebGL API and adds texture formats with 16- (aka half float) and 32-bit floating-point components.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/OES_texture_half_float)
 */
interface OES_texture_half_float {
    readonly HALF_FLOAT_OES: 0x8D61;
}

/**
 * The OES_texture_half_float_linear extension is part of the WebGL API and allows linear filtering with half floating-point pixel types for textures.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/OES_texture_half_float_linear)
 */
interface OES_texture_half_float_linear {
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OES_vertex_array_object) */
interface OES_vertex_array_object {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OES_vertex_array_object/bindVertexArrayOES) */
    bindVertexArrayOES(arrayObject: WebGLVertexArrayObjectOES | null): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OES_vertex_array_object/createVertexArrayOES) */
    createVertexArrayOES(): WebGLVertexArrayObjectOES | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OES_vertex_array_object/deleteVertexArrayOES) */
    deleteVertexArrayOES(arrayObject: WebGLVertexArrayObjectOES | null): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OES_vertex_array_object/isVertexArrayOES) */
    isVertexArrayOES(arrayObject: WebGLVertexArrayObjectOES | null): GLboolean;
    readonly VERTEX_ARRAY_BINDING_OES: 0x85B5;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OVR_multiview2) */
interface OVR_multiview2 {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OVR_multiview2/framebufferTextureMultiviewOVR) */
    framebufferTextureMultiviewOVR(target: GLenum, attachment: GLenum, texture: WebGLTexture | null, level: GLint, baseViewIndex: GLint, numViews: GLsizei): void;
    readonly FRAMEBUFFER_ATTACHMENT_TEXTURE_NUM_VIEWS_OVR: 0x9630;
    readonly FRAMEBUFFER_ATTACHMENT_TEXTURE_BASE_VIEW_INDEX_OVR: 0x9632;
    readonly MAX_VIEWS_OVR: 0x9631;
    readonly FRAMEBUFFER_INCOMPLETE_VIEW_TARGETS_OVR: 0x9633;
}

/**
 * The Web Audio API OfflineAudioCompletionEvent interface represents events that occur when the processing of an OfflineAudioContext is terminated. The complete event implements this interface.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/OfflineAudioCompletionEvent)
 */
interface OfflineAudioCompletionEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OfflineAudioCompletionEvent/renderedBuffer) */
    readonly renderedBuffer: AudioBuffer;
}

declare var OfflineAudioCompletionEvent: {
    prototype: OfflineAudioCompletionEvent;
    new(type: string, eventInitDict: OfflineAudioCompletionEventInit): OfflineAudioCompletionEvent;
};

interface OfflineAudioContextEventMap extends BaseAudioContextEventMap {
    "complete": OfflineAudioCompletionEvent;
}

/**
 * An AudioContext interface representing an audio-processing graph built from linked together AudioNodes. In contrast with a standard AudioContext, an OfflineAudioContext doesn't render the audio to the device hardware; instead, it generates it, as fast as it can, and outputs the result to an AudioBuffer.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/OfflineAudioContext)
 */
interface OfflineAudioContext extends BaseAudioContext {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OfflineAudioContext/length) */
    readonly length: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OfflineAudioContext/complete_event) */
    oncomplete: ((this: OfflineAudioContext, ev: OfflineAudioCompletionEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OfflineAudioContext/resume) */
    resume(): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OfflineAudioContext/startRendering) */
    startRendering(): Promise<AudioBuffer>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OfflineAudioContext/suspend) */
    suspend(suspendTime: number): Promise<void>;
    addEventListener<K extends keyof OfflineAudioContextEventMap>(type: K, listener: (this: OfflineAudioContext, ev: OfflineAudioContextEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof OfflineAudioContextEventMap>(type: K, listener: (this: OfflineAudioContext, ev: OfflineAudioContextEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var OfflineAudioContext: {
    prototype: OfflineAudioContext;
    new(contextOptions: OfflineAudioContextOptions): OfflineAudioContext;
    new(numberOfChannels: number, length: number, sampleRate: number): OfflineAudioContext;
};

interface OffscreenCanvasEventMap {
    "contextlost": Event;
    "contextrestored": Event;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OffscreenCanvas) */
interface OffscreenCanvas extends EventTarget {
    /**
     * These attributes return the dimensions of the OffscreenCanvas object's bitmap.
     *
     * They can be set, to replace the bitmap with a new, transparent black bitmap of the specified dimensions (effectively resizing it).
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/OffscreenCanvas/height)
     */
    height: number;
    oncontextlost: ((this: OffscreenCanvas, ev: Event) => any) | null;
    oncontextrestored: ((this: OffscreenCanvas, ev: Event) => any) | null;
    /**
     * These attributes return the dimensions of the OffscreenCanvas object's bitmap.
     *
     * They can be set, to replace the bitmap with a new, transparent black bitmap of the specified dimensions (effectively resizing it).
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/OffscreenCanvas/width)
     */
    width: number;
    /**
     * Returns a promise that will fulfill with a new Blob object representing a file containing the image in the OffscreenCanvas object.
     *
     * The argument, if provided, is a dictionary that controls the encoding options of the image file to be created. The type field specifies the file format and has a default value of "image/png"; that type is also used if the requested type isn't supported. If the image format supports variable quality (such as "image/jpeg"), then the quality field is a number in the range 0.0 to 1.0 inclusive indicating the desired quality level for the resulting image.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/OffscreenCanvas/convertToBlob)
     */
    convertToBlob(options?: ImageEncodeOptions): Promise<Blob>;
    /**
     * Returns an object that exposes an API for drawing on the OffscreenCanvas object. contextId specifies the desired API: "2d", "bitmaprenderer", "webgl", or "webgl2". options is handled by that API.
     *
     * This specification defines the "2d" context below, which is similar but distinct from the "2d" context that is created from a canvas element. The WebGL specifications define the "webgl" and "webgl2" contexts. [WEBGL]
     *
     * Returns null if the canvas has already been initialized with another context type (e.g., trying to get a "2d" context after getting a "webgl" context).
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/OffscreenCanvas/getContext)
     */
    getContext(contextId: "2d", options?: any): OffscreenCanvasRenderingContext2D | null;
    getContext(contextId: "bitmaprenderer", options?: any): ImageBitmapRenderingContext | null;
    getContext(contextId: "webgl", options?: any): WebGLRenderingContext | null;
    getContext(contextId: "webgl2", options?: any): WebGL2RenderingContext | null;
    getContext(contextId: OffscreenRenderingContextId, options?: any): OffscreenRenderingContext | null;
    /**
     * Returns a newly created ImageBitmap object with the image in the OffscreenCanvas object. The image in the OffscreenCanvas object is replaced with a new blank image.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/OffscreenCanvas/transferToImageBitmap)
     */
    transferToImageBitmap(): ImageBitmap;
    addEventListener<K extends keyof OffscreenCanvasEventMap>(type: K, listener: (this: OffscreenCanvas, ev: OffscreenCanvasEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof OffscreenCanvasEventMap>(type: K, listener: (this: OffscreenCanvas, ev: OffscreenCanvasEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var OffscreenCanvas: {
    prototype: OffscreenCanvas;
    new(width: number, height: number): OffscreenCanvas;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OffscreenCanvasRenderingContext2D) */
interface OffscreenCanvasRenderingContext2D extends CanvasCompositing, CanvasDrawImage, CanvasDrawPath, CanvasFillStrokeStyles, CanvasFilters, CanvasImageData, CanvasImageSmoothing, CanvasPath, CanvasPathDrawingStyles, CanvasRect, CanvasShadowStyles, CanvasState, CanvasText, CanvasTextDrawingStyles, CanvasTransform {
    readonly canvas: OffscreenCanvas;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OffscreenCanvasRenderingContext2D/commit) */
    commit(): void;
}

declare var OffscreenCanvasRenderingContext2D: {
    prototype: OffscreenCanvasRenderingContext2D;
    new(): OffscreenCanvasRenderingContext2D;
};

/**
 * The OscillatorNode interface represents a periodic waveform, such as a sine wave. It is an AudioScheduledSourceNode audio-processing module that causes a specified frequency of a given wave to be created—in effect, a constant tone.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/OscillatorNode)
 */
interface OscillatorNode extends AudioScheduledSourceNode {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OscillatorNode/detune) */
    readonly detune: AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OscillatorNode/frequency) */
    readonly frequency: AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OscillatorNode/type) */
    type: OscillatorType;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OscillatorNode/setPeriodicWave) */
    setPeriodicWave(periodicWave: PeriodicWave): void;
    addEventListener<K extends keyof AudioScheduledSourceNodeEventMap>(type: K, listener: (this: OscillatorNode, ev: AudioScheduledSourceNodeEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof AudioScheduledSourceNodeEventMap>(type: K, listener: (this: OscillatorNode, ev: AudioScheduledSourceNodeEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var OscillatorNode: {
    prototype: OscillatorNode;
    new(context: BaseAudioContext, options?: OscillatorOptions): OscillatorNode;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OverconstrainedError) */
interface OverconstrainedError extends Error {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/OverconstrainedError/constraint) */
    readonly constraint: string;
}

declare var OverconstrainedError: {
    prototype: OverconstrainedError;
    new(constraint: string, message?: string): OverconstrainedError;
};

/**
 * The PageTransitionEvent is fired when a document is being loaded or unloaded.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PageTransitionEvent)
 */
interface PageTransitionEvent extends Event {
    /**
     * For the pageshow event, returns false if the page is newly being loaded (and the load event will fire). Otherwise, returns true.
     *
     * For the pagehide event, returns false if the page is going away for the last time. Otherwise, returns true, meaning that (if nothing conspires to make the page unsalvageable) the page might be reused if the user navigates back to this page.
     *
     * Things that can cause the page to be unsalvageable include:
     *
     * The user agent decided to not keep the Document alive in a session history entry after unload
     * Having iframes that are not salvageable
     * Active WebSocket objects
     * Aborting a Document
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PageTransitionEvent/persisted)
     */
    readonly persisted: boolean;
}

declare var PageTransitionEvent: {
    prototype: PageTransitionEvent;
    new(type: string, eventInitDict?: PageTransitionEventInit): PageTransitionEvent;
};

/**
 * A PannerNode always has exactly one input and one output: the input can be mono or stereo but the output is always stereo (2 channels); you can't have panning effects without at least two audio channels!
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PannerNode)
 */
interface PannerNode extends AudioNode {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PannerNode/coneInnerAngle) */
    coneInnerAngle: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PannerNode/coneOuterAngle) */
    coneOuterAngle: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PannerNode/coneOuterGain) */
    coneOuterGain: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PannerNode/distanceModel) */
    distanceModel: DistanceModelType;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PannerNode/maxDistance) */
    maxDistance: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PannerNode/orientationX) */
    readonly orientationX: AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PannerNode/orientationY) */
    readonly orientationY: AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PannerNode/orientationZ) */
    readonly orientationZ: AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PannerNode/panningModel) */
    panningModel: PanningModelType;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PannerNode/positionX) */
    readonly positionX: AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PannerNode/positionY) */
    readonly positionY: AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PannerNode/positionZ) */
    readonly positionZ: AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PannerNode/refDistance) */
    refDistance: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PannerNode/rolloffFactor) */
    rolloffFactor: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PannerNode/setOrientation)
     */
    setOrientation(x: number, y: number, z: number): void;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PannerNode/setPosition)
     */
    setPosition(x: number, y: number, z: number): void;
}

declare var PannerNode: {
    prototype: PannerNode;
    new(context: BaseAudioContext, options?: PannerOptions): PannerNode;
};

interface ParentNode extends Node {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/childElementCount) */
    readonly childElementCount: number;
    /**
     * Returns the child elements.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/children)
     */
    readonly children: HTMLCollection;
    /**
     * Returns the first child that is an element, and null otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/firstElementChild)
     */
    readonly firstElementChild: Element | null;
    /**
     * Returns the last child that is an element, and null otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/lastElementChild)
     */
    readonly lastElementChild: Element | null;
    /**
     * Inserts nodes after the last child of node, while replacing strings in nodes with equivalent Text nodes.
     *
     * Throws a "HierarchyRequestError" DOMException if the constraints of the node tree are violated.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/append)
     */
    append(...nodes: (Node | string)[]): void;
    /**
     * Inserts nodes before the first child of node, while replacing strings in nodes with equivalent Text nodes.
     *
     * Throws a "HierarchyRequestError" DOMException if the constraints of the node tree are violated.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/prepend)
     */
    prepend(...nodes: (Node | string)[]): void;
    /**
     * Returns the first element that is a descendant of node that matches selectors.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/querySelector)
     */
    querySelector<K extends keyof HTMLElementTagNameMap>(selectors: K): HTMLElementTagNameMap[K] | null;
    querySelector<K extends keyof SVGElementTagNameMap>(selectors: K): SVGElementTagNameMap[K] | null;
    querySelector<K extends keyof MathMLElementTagNameMap>(selectors: K): MathMLElementTagNameMap[K] | null;
    /** @deprecated */
    querySelector<K extends keyof HTMLElementDeprecatedTagNameMap>(selectors: K): HTMLElementDeprecatedTagNameMap[K] | null;
    querySelector<E extends Element = Element>(selectors: string): E | null;
    /**
     * Returns all element descendants of node that match selectors.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/querySelectorAll)
     */
    querySelectorAll<K extends keyof HTMLElementTagNameMap>(selectors: K): NodeListOf<HTMLElementTagNameMap[K]>;
    querySelectorAll<K extends keyof SVGElementTagNameMap>(selectors: K): NodeListOf<SVGElementTagNameMap[K]>;
    querySelectorAll<K extends keyof MathMLElementTagNameMap>(selectors: K): NodeListOf<MathMLElementTagNameMap[K]>;
    /** @deprecated */
    querySelectorAll<K extends keyof HTMLElementDeprecatedTagNameMap>(selectors: K): NodeListOf<HTMLElementDeprecatedTagNameMap[K]>;
    querySelectorAll<E extends Element = Element>(selectors: string): NodeListOf<E>;
    /**
     * Replace all children of node with nodes, while replacing strings in nodes with equivalent Text nodes.
     *
     * Throws a "HierarchyRequestError" DOMException if the constraints of the node tree are violated.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/replaceChildren)
     */
    replaceChildren(...nodes: (Node | string)[]): void;
}

/**
 * This Canvas 2D API interface is used to declare a path that can then be used on a CanvasRenderingContext2D object. The path methods of the CanvasRenderingContext2D interface are also present on this interface, which gives you the convenience of being able to retain and replay your path whenever desired.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Path2D)
 */
interface Path2D extends CanvasPath {
    /**
     * Adds to the path the path given by the argument.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Path2D/addPath)
     */
    addPath(path: Path2D, transform?: DOMMatrix2DInit): void;
}

declare var Path2D: {
    prototype: Path2D;
    new(path?: Path2D | string): Path2D;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PaymentMethodChangeEvent)
 */
interface PaymentMethodChangeEvent extends PaymentRequestUpdateEvent {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PaymentMethodChangeEvent/methodDetails) */
    readonly methodDetails: any;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PaymentMethodChangeEvent/methodName) */
    readonly methodName: string;
}

declare var PaymentMethodChangeEvent: {
    prototype: PaymentMethodChangeEvent;
    new(type: string, eventInitDict?: PaymentMethodChangeEventInit): PaymentMethodChangeEvent;
};

interface PaymentRequestEventMap {
    "paymentmethodchange": Event;
}

/**
 * This Payment Request API interface is the primary access point into the API, and lets web content and apps accept payments from the end user.
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PaymentRequest)
 */
interface PaymentRequest extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PaymentRequest/id) */
    readonly id: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PaymentRequest/paymentmethodchange_event) */
    onpaymentmethodchange: ((this: PaymentRequest, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PaymentRequest/abort) */
    abort(): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PaymentRequest/canMakePayment) */
    canMakePayment(): Promise<boolean>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PaymentRequest/show) */
    show(detailsPromise?: PaymentDetailsUpdate | PromiseLike<PaymentDetailsUpdate>): Promise<PaymentResponse>;
    addEventListener<K extends keyof PaymentRequestEventMap>(type: K, listener: (this: PaymentRequest, ev: PaymentRequestEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof PaymentRequestEventMap>(type: K, listener: (this: PaymentRequest, ev: PaymentRequestEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var PaymentRequest: {
    prototype: PaymentRequest;
    new(methodData: PaymentMethodData[], details: PaymentDetailsInit): PaymentRequest;
};

/**
 * This Payment Request API interface enables a web page to update the details of a PaymentRequest in response to a user action.
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PaymentRequestUpdateEvent)
 */
interface PaymentRequestUpdateEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PaymentRequestUpdateEvent/updateWith) */
    updateWith(detailsPromise: PaymentDetailsUpdate | PromiseLike<PaymentDetailsUpdate>): void;
}

declare var PaymentRequestUpdateEvent: {
    prototype: PaymentRequestUpdateEvent;
    new(type: string, eventInitDict?: PaymentRequestUpdateEventInit): PaymentRequestUpdateEvent;
};

/**
 * This Payment Request API interface is returned after a user selects a payment method and approves a payment request.
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PaymentResponse)
 */
interface PaymentResponse extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PaymentResponse/details) */
    readonly details: any;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PaymentResponse/methodName) */
    readonly methodName: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PaymentResponse/requestId) */
    readonly requestId: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PaymentResponse/complete) */
    complete(result?: PaymentComplete): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PaymentResponse/retry) */
    retry(errorFields?: PaymentValidationErrors): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PaymentResponse/toJSON) */
    toJSON(): any;
}

declare var PaymentResponse: {
    prototype: PaymentResponse;
    new(): PaymentResponse;
};

interface PerformanceEventMap {
    "resourcetimingbufferfull": Event;
}

/**
 * Provides access to performance-related information for the current page. It's part of the High Resolution Time API, but is enhanced by the Performance Timeline API, the Navigation Timing API, the User Timing API, and the Resource Timing API.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Performance)
 */
interface Performance extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Performance/eventCounts) */
    readonly eventCounts: EventCounts;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Performance/navigation)
     */
    readonly navigation: PerformanceNavigation;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Performance/resourcetimingbufferfull_event) */
    onresourcetimingbufferfull: ((this: Performance, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Performance/timeOrigin) */
    readonly timeOrigin: DOMHighResTimeStamp;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Performance/timing)
     */
    readonly timing: PerformanceTiming;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Performance/clearMarks) */
    clearMarks(markName?: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Performance/clearMeasures) */
    clearMeasures(measureName?: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Performance/clearResourceTimings) */
    clearResourceTimings(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Performance/getEntries) */
    getEntries(): PerformanceEntryList;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Performance/getEntriesByName) */
    getEntriesByName(name: string, type?: string): PerformanceEntryList;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Performance/getEntriesByType) */
    getEntriesByType(type: string): PerformanceEntryList;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Performance/mark) */
    mark(markName: string, markOptions?: PerformanceMarkOptions): PerformanceMark;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Performance/measure) */
    measure(measureName: string, startOrMeasureOptions?: string | PerformanceMeasureOptions, endMark?: string): PerformanceMeasure;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Performance/now) */
    now(): DOMHighResTimeStamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Performance/setResourceTimingBufferSize) */
    setResourceTimingBufferSize(maxSize: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Performance/toJSON) */
    toJSON(): any;
    addEventListener<K extends keyof PerformanceEventMap>(type: K, listener: (this: Performance, ev: PerformanceEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof PerformanceEventMap>(type: K, listener: (this: Performance, ev: PerformanceEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var Performance: {
    prototype: Performance;
    new(): Performance;
};

/**
 * Encapsulates a single performance metric that is part of the performance timeline. A performance entry can be directly created by making a performance mark or measure (for example by calling the mark() method) at an explicit point in an application. Performance entries are also created in indirect ways such as loading a resource (such as an image).
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceEntry)
 */
interface PerformanceEntry {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceEntry/duration) */
    readonly duration: DOMHighResTimeStamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceEntry/entryType) */
    readonly entryType: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceEntry/name) */
    readonly name: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceEntry/startTime) */
    readonly startTime: DOMHighResTimeStamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceEntry/toJSON) */
    toJSON(): any;
}

declare var PerformanceEntry: {
    prototype: PerformanceEntry;
    new(): PerformanceEntry;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceEventTiming) */
interface PerformanceEventTiming extends PerformanceEntry {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceEventTiming/cancelable) */
    readonly cancelable: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceEventTiming/processingEnd) */
    readonly processingEnd: DOMHighResTimeStamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceEventTiming/processingStart) */
    readonly processingStart: DOMHighResTimeStamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceEventTiming/target) */
    readonly target: Node | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceEventTiming/toJSON) */
    toJSON(): any;
}

declare var PerformanceEventTiming: {
    prototype: PerformanceEventTiming;
    new(): PerformanceEventTiming;
};

/**
 * PerformanceMark is an abstract interface for PerformanceEntry objects with an entryType of "mark". Entries of this type are created by calling performance.mark() to add a named DOMHighResTimeStamp (the mark) to the browser's performance timeline.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceMark)
 */
interface PerformanceMark extends PerformanceEntry {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceMark/detail) */
    readonly detail: any;
}

declare var PerformanceMark: {
    prototype: PerformanceMark;
    new(markName: string, markOptions?: PerformanceMarkOptions): PerformanceMark;
};

/**
 * PerformanceMeasure is an abstract interface for PerformanceEntry objects with an entryType of "measure". Entries of this type are created by calling performance.measure() to add a named DOMHighResTimeStamp (the measure) between two marks to the browser's performance timeline.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceMeasure)
 */
interface PerformanceMeasure extends PerformanceEntry {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceMeasure/detail) */
    readonly detail: any;
}

declare var PerformanceMeasure: {
    prototype: PerformanceMeasure;
    new(): PerformanceMeasure;
};

/**
 * The legacy PerformanceNavigation interface represents information about how the navigation to the current document was done.
 * @deprecated This interface is deprecated in the Navigation Timing Level 2 specification. Please use the PerformanceNavigationTiming interface instead.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceNavigation)
 */
interface PerformanceNavigation {
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceNavigation/redirectCount)
     */
    readonly redirectCount: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceNavigation/type)
     */
    readonly type: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceNavigation/toJSON)
     */
    toJSON(): any;
    readonly TYPE_NAVIGATE: 0;
    readonly TYPE_RELOAD: 1;
    readonly TYPE_BACK_FORWARD: 2;
    readonly TYPE_RESERVED: 255;
}

/** @deprecated */
declare var PerformanceNavigation: {
    prototype: PerformanceNavigation;
    new(): PerformanceNavigation;
    readonly TYPE_NAVIGATE: 0;
    readonly TYPE_RELOAD: 1;
    readonly TYPE_BACK_FORWARD: 2;
    readonly TYPE_RESERVED: 255;
};

/**
 * Provides methods and properties to store and retrieve metrics regarding the browser's document navigation events. For example, this interface can be used to determine how much time it takes to load or unload a document.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceNavigationTiming)
 */
interface PerformanceNavigationTiming extends PerformanceResourceTiming {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceNavigationTiming/domComplete) */
    readonly domComplete: DOMHighResTimeStamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceNavigationTiming/domContentLoadedEventEnd) */
    readonly domContentLoadedEventEnd: DOMHighResTimeStamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceNavigationTiming/domContentLoadedEventStart) */
    readonly domContentLoadedEventStart: DOMHighResTimeStamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceNavigationTiming/domInteractive) */
    readonly domInteractive: DOMHighResTimeStamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceNavigationTiming/loadEventEnd) */
    readonly loadEventEnd: DOMHighResTimeStamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceNavigationTiming/loadEventStart) */
    readonly loadEventStart: DOMHighResTimeStamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceNavigationTiming/redirectCount) */
    readonly redirectCount: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceNavigationTiming/type) */
    readonly type: NavigationTimingType;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceNavigationTiming/unloadEventEnd) */
    readonly unloadEventEnd: DOMHighResTimeStamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceNavigationTiming/unloadEventStart) */
    readonly unloadEventStart: DOMHighResTimeStamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceNavigationTiming/toJSON) */
    toJSON(): any;
}

declare var PerformanceNavigationTiming: {
    prototype: PerformanceNavigationTiming;
    new(): PerformanceNavigationTiming;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceObserver) */
interface PerformanceObserver {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceObserver/disconnect) */
    disconnect(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceObserver/observe) */
    observe(options?: PerformanceObserverInit): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceObserver/takeRecords) */
    takeRecords(): PerformanceEntryList;
}

declare var PerformanceObserver: {
    prototype: PerformanceObserver;
    new(callback: PerformanceObserverCallback): PerformanceObserver;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceObserver/supportedEntryTypes_static) */
    readonly supportedEntryTypes: ReadonlyArray<string>;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceObserverEntryList) */
interface PerformanceObserverEntryList {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceObserverEntryList/getEntries) */
    getEntries(): PerformanceEntryList;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceObserverEntryList/getEntriesByName) */
    getEntriesByName(name: string, type?: string): PerformanceEntryList;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceObserverEntryList/getEntriesByType) */
    getEntriesByType(type: string): PerformanceEntryList;
}

declare var PerformanceObserverEntryList: {
    prototype: PerformanceObserverEntryList;
    new(): PerformanceObserverEntryList;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformancePaintTiming) */
interface PerformancePaintTiming extends PerformanceEntry {
}

declare var PerformancePaintTiming: {
    prototype: PerformancePaintTiming;
    new(): PerformancePaintTiming;
};

/**
 * Enables retrieval and analysis of detailed network timing data regarding the loading of an application's resources. An application can use the timing metrics to determine, for example, the length of time it takes to fetch a specific resource, such as an XMLHttpRequest, <SVG>, image, or script.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceResourceTiming)
 */
interface PerformanceResourceTiming extends PerformanceEntry {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceResourceTiming/connectEnd) */
    readonly connectEnd: DOMHighResTimeStamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceResourceTiming/connectStart) */
    readonly connectStart: DOMHighResTimeStamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceResourceTiming/decodedBodySize) */
    readonly decodedBodySize: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceResourceTiming/domainLookupEnd) */
    readonly domainLookupEnd: DOMHighResTimeStamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceResourceTiming/domainLookupStart) */
    readonly domainLookupStart: DOMHighResTimeStamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceResourceTiming/encodedBodySize) */
    readonly encodedBodySize: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceResourceTiming/fetchStart) */
    readonly fetchStart: DOMHighResTimeStamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceResourceTiming/initiatorType) */
    readonly initiatorType: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceResourceTiming/nextHopProtocol) */
    readonly nextHopProtocol: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceResourceTiming/redirectEnd) */
    readonly redirectEnd: DOMHighResTimeStamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceResourceTiming/redirectStart) */
    readonly redirectStart: DOMHighResTimeStamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceResourceTiming/requestStart) */
    readonly requestStart: DOMHighResTimeStamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceResourceTiming/responseEnd) */
    readonly responseEnd: DOMHighResTimeStamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceResourceTiming/responseStart) */
    readonly responseStart: DOMHighResTimeStamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceResourceTiming/secureConnectionStart) */
    readonly secureConnectionStart: DOMHighResTimeStamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceResourceTiming/serverTiming) */
    readonly serverTiming: ReadonlyArray<PerformanceServerTiming>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceResourceTiming/transferSize) */
    readonly transferSize: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceResourceTiming/workerStart) */
    readonly workerStart: DOMHighResTimeStamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceResourceTiming/toJSON) */
    toJSON(): any;
}

declare var PerformanceResourceTiming: {
    prototype: PerformanceResourceTiming;
    new(): PerformanceResourceTiming;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceServerTiming) */
interface PerformanceServerTiming {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceServerTiming/description) */
    readonly description: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceServerTiming/duration) */
    readonly duration: DOMHighResTimeStamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceServerTiming/name) */
    readonly name: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceServerTiming/toJSON) */
    toJSON(): any;
}

declare var PerformanceServerTiming: {
    prototype: PerformanceServerTiming;
    new(): PerformanceServerTiming;
};

/**
 * A legacy interface kept for backwards compatibility and contains properties that offer performance timing information for various events which occur during the loading and use of the current page. You get a PerformanceTiming object describing your page using the window.performance.timing property.
 * @deprecated This interface is deprecated in the Navigation Timing Level 2 specification. Please use the PerformanceNavigationTiming interface instead.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceTiming)
 */
interface PerformanceTiming {
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceTiming/connectEnd)
     */
    readonly connectEnd: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceTiming/connectStart)
     */
    readonly connectStart: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceTiming/domComplete)
     */
    readonly domComplete: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceTiming/domContentLoadedEventEnd)
     */
    readonly domContentLoadedEventEnd: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceTiming/domContentLoadedEventStart)
     */
    readonly domContentLoadedEventStart: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceTiming/domInteractive)
     */
    readonly domInteractive: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceTiming/domLoading)
     */
    readonly domLoading: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceTiming/domainLookupEnd)
     */
    readonly domainLookupEnd: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceTiming/domainLookupStart)
     */
    readonly domainLookupStart: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceTiming/fetchStart)
     */
    readonly fetchStart: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceTiming/loadEventEnd)
     */
    readonly loadEventEnd: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceTiming/loadEventStart)
     */
    readonly loadEventStart: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceTiming/navigationStart)
     */
    readonly navigationStart: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceTiming/redirectEnd)
     */
    readonly redirectEnd: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceTiming/redirectStart)
     */
    readonly redirectStart: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceTiming/requestStart)
     */
    readonly requestStart: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceTiming/responseEnd)
     */
    readonly responseEnd: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceTiming/responseStart)
     */
    readonly responseStart: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceTiming/secureConnectionStart)
     */
    readonly secureConnectionStart: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceTiming/unloadEventEnd)
     */
    readonly unloadEventEnd: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceTiming/unloadEventStart)
     */
    readonly unloadEventStart: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PerformanceTiming/toJSON)
     */
    toJSON(): any;
}

/** @deprecated */
declare var PerformanceTiming: {
    prototype: PerformanceTiming;
    new(): PerformanceTiming;
};

/**
 * PeriodicWave has no inputs or outputs; it is used to define custom oscillators when calling OscillatorNode.setPeriodicWave(). The PeriodicWave itself is created/returned by AudioContext.createPeriodicWave().
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PeriodicWave)
 */
interface PeriodicWave {
}

declare var PeriodicWave: {
    prototype: PeriodicWave;
    new(context: BaseAudioContext, options?: PeriodicWaveOptions): PeriodicWave;
};

interface PermissionStatusEventMap {
    "change": Event;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PermissionStatus) */
interface PermissionStatus extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PermissionStatus/name) */
    readonly name: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PermissionStatus/change_event) */
    onchange: ((this: PermissionStatus, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PermissionStatus/state) */
    readonly state: PermissionState;
    addEventListener<K extends keyof PermissionStatusEventMap>(type: K, listener: (this: PermissionStatus, ev: PermissionStatusEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof PermissionStatusEventMap>(type: K, listener: (this: PermissionStatus, ev: PermissionStatusEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var PermissionStatus: {
    prototype: PermissionStatus;
    new(): PermissionStatus;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Permissions) */
interface Permissions {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Permissions/query) */
    query(permissionDesc: PermissionDescriptor): Promise<PermissionStatus>;
}

declare var Permissions: {
    prototype: Permissions;
    new(): Permissions;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PictureInPictureEvent) */
interface PictureInPictureEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PictureInPictureEvent/pictureInPictureWindow) */
    readonly pictureInPictureWindow: PictureInPictureWindow;
}

declare var PictureInPictureEvent: {
    prototype: PictureInPictureEvent;
    new(type: string, eventInitDict: PictureInPictureEventInit): PictureInPictureEvent;
};

interface PictureInPictureWindowEventMap {
    "resize": Event;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PictureInPictureWindow) */
interface PictureInPictureWindow extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PictureInPictureWindow/height) */
    readonly height: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PictureInPictureWindow/resize_event) */
    onresize: ((this: PictureInPictureWindow, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PictureInPictureWindow/width) */
    readonly width: number;
    addEventListener<K extends keyof PictureInPictureWindowEventMap>(type: K, listener: (this: PictureInPictureWindow, ev: PictureInPictureWindowEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof PictureInPictureWindowEventMap>(type: K, listener: (this: PictureInPictureWindow, ev: PictureInPictureWindowEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var PictureInPictureWindow: {
    prototype: PictureInPictureWindow;
    new(): PictureInPictureWindow;
};

/**
 * Provides information about a browser plugin.
 * @deprecated
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Plugin)
 */
interface Plugin {
    /**
     * Returns the plugin's description.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Plugin/description)
     */
    readonly description: string;
    /**
     * Returns the plugin library's filename, if applicable on the current platform.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Plugin/filename)
     */
    readonly filename: string;
    /**
     * Returns the number of MIME types, represented by MimeType objects, supported by the plugin.
     * @deprecated
     */
    readonly length: number;
    /**
     * Returns the plugin's name.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Plugin/name)
     */
    readonly name: string;
    /**
     * Returns the specified MimeType object.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Plugin/item)
     */
    item(index: number): MimeType | null;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Plugin/namedItem)
     */
    namedItem(name: string): MimeType | null;
    [index: number]: MimeType;
}

/** @deprecated */
declare var Plugin: {
    prototype: Plugin;
    new(): Plugin;
};

/**
 * Used to store a list of Plugin objects describing the available plugins; it's returned by the window.navigator.plugins property. The PluginArray is not a JavaScript array, but has the length property and supports accessing individual items using bracket notation (plugins[2]), as well as via item(index) and namedItem("name") methods.
 * @deprecated
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PluginArray)
 */
interface PluginArray {
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PluginArray/length)
     */
    readonly length: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PluginArray/item)
     */
    item(index: number): Plugin | null;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PluginArray/namedItem)
     */
    namedItem(name: string): Plugin | null;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PluginArray/refresh)
     */
    refresh(): void;
    [index: number]: Plugin;
}

/** @deprecated */
declare var PluginArray: {
    prototype: PluginArray;
    new(): PluginArray;
};

/**
 * The state of a DOM event produced by a pointer such as the geometry of the contact point, the device type that generated the event, the amount of pressure that was applied on the contact surface, etc.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PointerEvent)
 */
interface PointerEvent extends MouseEvent {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PointerEvent/height) */
    readonly height: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PointerEvent/isPrimary) */
    readonly isPrimary: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PointerEvent/pointerId) */
    readonly pointerId: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PointerEvent/pointerType) */
    readonly pointerType: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PointerEvent/pressure) */
    readonly pressure: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PointerEvent/tangentialPressure) */
    readonly tangentialPressure: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PointerEvent/tiltX) */
    readonly tiltX: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PointerEvent/tiltY) */
    readonly tiltY: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PointerEvent/twist) */
    readonly twist: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PointerEvent/width) */
    readonly width: number;
    /**
     * Available only in secure contexts.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PointerEvent/getCoalescedEvents)
     */
    getCoalescedEvents(): PointerEvent[];
    getPredictedEvents(): PointerEvent[];
}

declare var PointerEvent: {
    prototype: PointerEvent;
    new(type: string, eventInitDict?: PointerEventInit): PointerEvent;
};

/**
 * PopStateEvent is an event handler for the popstate event on the window.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PopStateEvent)
 */
interface PopStateEvent extends Event {
    /**
     * Returns a copy of the information that was provided to pushState() or replaceState().
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PopStateEvent/state)
     */
    readonly state: any;
}

declare var PopStateEvent: {
    prototype: PopStateEvent;
    new(type: string, eventInitDict?: PopStateEventInit): PopStateEvent;
};

interface PopoverInvokerElement {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLButtonElement/popoverTargetAction) */
    popoverTargetAction: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLButtonElement/popoverTargetElement) */
    popoverTargetElement: Element | null;
}

/**
 * A processing instruction embeds application-specific instructions in XML which can be ignored by other applications that don't recognize them.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ProcessingInstruction)
 */
interface ProcessingInstruction extends CharacterData, LinkStyle {
    readonly ownerDocument: Document;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ProcessingInstruction/target) */
    readonly target: string;
}

declare var ProcessingInstruction: {
    prototype: ProcessingInstruction;
    new(): ProcessingInstruction;
};

/**
 * Events measuring progress of an underlying process, like an HTTP request (for an XMLHttpRequest, or the loading of the underlying resource of an <img>, <audio>, <video>, <style> or <link>).
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ProgressEvent)
 */
interface ProgressEvent<T extends EventTarget = EventTarget> extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ProgressEvent/lengthComputable) */
    readonly lengthComputable: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ProgressEvent/loaded) */
    readonly loaded: number;
    readonly target: T | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ProgressEvent/total) */
    readonly total: number;
}

declare var ProgressEvent: {
    prototype: ProgressEvent;
    new(type: string, eventInitDict?: ProgressEventInit): ProgressEvent;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PromiseRejectionEvent) */
interface PromiseRejectionEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PromiseRejectionEvent/promise) */
    readonly promise: Promise<any>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PromiseRejectionEvent/reason) */
    readonly reason: any;
}

declare var PromiseRejectionEvent: {
    prototype: PromiseRejectionEvent;
    new(type: string, eventInitDict: PromiseRejectionEventInit): PromiseRejectionEvent;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PublicKeyCredential)
 */
interface PublicKeyCredential extends Credential {
    readonly authenticatorAttachment: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PublicKeyCredential/rawId) */
    readonly rawId: ArrayBuffer;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PublicKeyCredential/response) */
    readonly response: AuthenticatorResponse;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PublicKeyCredential/getClientExtensionResults) */
    getClientExtensionResults(): AuthenticationExtensionsClientOutputs;
}

declare var PublicKeyCredential: {
    prototype: PublicKeyCredential;
    new(): PublicKeyCredential;
    isConditionalMediationAvailable(): Promise<boolean>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PublicKeyCredential/isUserVerifyingPlatformAuthenticatorAvailable_static) */
    isUserVerifyingPlatformAuthenticatorAvailable(): Promise<boolean>;
};

/**
 * This Push API interface provides a way to receive notifications from third-party servers as well as request URLs for push notifications.
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PushManager)
 */
interface PushManager {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PushManager/getSubscription) */
    getSubscription(): Promise<PushSubscription | null>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PushManager/permissionState) */
    permissionState(options?: PushSubscriptionOptionsInit): Promise<PermissionState>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PushManager/subscribe) */
    subscribe(options?: PushSubscriptionOptionsInit): Promise<PushSubscription>;
}

declare var PushManager: {
    prototype: PushManager;
    new(): PushManager;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PushManager/supportedContentEncodings_static) */
    readonly supportedContentEncodings: ReadonlyArray<string>;
};

/**
 * This Push API interface provides a subcription's URL endpoint and allows unsubscription from a push service.
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PushSubscription)
 */
interface PushSubscription {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PushSubscription/endpoint) */
    readonly endpoint: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PushSubscription/expirationTime) */
    readonly expirationTime: EpochTimeStamp | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PushSubscription/options) */
    readonly options: PushSubscriptionOptions;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PushSubscription/getKey) */
    getKey(name: PushEncryptionKeyName): ArrayBuffer | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PushSubscription/toJSON) */
    toJSON(): PushSubscriptionJSON;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PushSubscription/unsubscribe) */
    unsubscribe(): Promise<boolean>;
}

declare var PushSubscription: {
    prototype: PushSubscription;
    new(): PushSubscription;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/PushSubscriptionOptions)
 */
interface PushSubscriptionOptions {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PushSubscriptionOptions/applicationServerKey) */
    readonly applicationServerKey: ArrayBuffer | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/PushSubscriptionOptions/userVisibleOnly) */
    readonly userVisibleOnly: boolean;
}

declare var PushSubscriptionOptions: {
    prototype: PushSubscriptionOptions;
    new(): PushSubscriptionOptions;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCCertificate) */
interface RTCCertificate {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCCertificate/expires) */
    readonly expires: EpochTimeStamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCCertificate/getFingerprints) */
    getFingerprints(): RTCDtlsFingerprint[];
}

declare var RTCCertificate: {
    prototype: RTCCertificate;
    new(): RTCCertificate;
};

interface RTCDTMFSenderEventMap {
    "tonechange": RTCDTMFToneChangeEvent;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDTMFSender) */
interface RTCDTMFSender extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDTMFSender/canInsertDTMF) */
    readonly canInsertDTMF: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDTMFSender/tonechange_event) */
    ontonechange: ((this: RTCDTMFSender, ev: RTCDTMFToneChangeEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDTMFSender/toneBuffer) */
    readonly toneBuffer: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDTMFSender/insertDTMF) */
    insertDTMF(tones: string, duration?: number, interToneGap?: number): void;
    addEventListener<K extends keyof RTCDTMFSenderEventMap>(type: K, listener: (this: RTCDTMFSender, ev: RTCDTMFSenderEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof RTCDTMFSenderEventMap>(type: K, listener: (this: RTCDTMFSender, ev: RTCDTMFSenderEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var RTCDTMFSender: {
    prototype: RTCDTMFSender;
    new(): RTCDTMFSender;
};

/**
 * Events sent to indicate that DTMF tones have started or finished playing. This interface is used by the tonechange event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDTMFToneChangeEvent)
 */
interface RTCDTMFToneChangeEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDTMFToneChangeEvent/tone) */
    readonly tone: string;
}

declare var RTCDTMFToneChangeEvent: {
    prototype: RTCDTMFToneChangeEvent;
    new(type: string, eventInitDict?: RTCDTMFToneChangeEventInit): RTCDTMFToneChangeEvent;
};

interface RTCDataChannelEventMap {
    "bufferedamountlow": Event;
    "close": Event;
    "closing": Event;
    "error": Event;
    "message": MessageEvent;
    "open": Event;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDataChannel) */
interface RTCDataChannel extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDataChannel/binaryType) */
    binaryType: BinaryType;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDataChannel/bufferedAmount) */
    readonly bufferedAmount: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDataChannel/bufferedAmountLowThreshold) */
    bufferedAmountLowThreshold: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDataChannel/id) */
    readonly id: number | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDataChannel/label) */
    readonly label: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDataChannel/maxPacketLifeTime) */
    readonly maxPacketLifeTime: number | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDataChannel/maxRetransmits) */
    readonly maxRetransmits: number | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDataChannel/negotiated) */
    readonly negotiated: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDataChannel/bufferedamountlow_event) */
    onbufferedamountlow: ((this: RTCDataChannel, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDataChannel/close_event) */
    onclose: ((this: RTCDataChannel, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDataChannel/closing_event) */
    onclosing: ((this: RTCDataChannel, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDataChannel/error_event) */
    onerror: ((this: RTCDataChannel, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDataChannel/message_event) */
    onmessage: ((this: RTCDataChannel, ev: MessageEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDataChannel/open_event) */
    onopen: ((this: RTCDataChannel, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDataChannel/ordered) */
    readonly ordered: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDataChannel/protocol) */
    readonly protocol: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDataChannel/readyState) */
    readonly readyState: RTCDataChannelState;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDataChannel/close) */
    close(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDataChannel/send) */
    send(data: string): void;
    send(data: Blob): void;
    send(data: ArrayBuffer): void;
    send(data: ArrayBufferView): void;
    addEventListener<K extends keyof RTCDataChannelEventMap>(type: K, listener: (this: RTCDataChannel, ev: RTCDataChannelEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof RTCDataChannelEventMap>(type: K, listener: (this: RTCDataChannel, ev: RTCDataChannelEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var RTCDataChannel: {
    prototype: RTCDataChannel;
    new(): RTCDataChannel;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDataChannelEvent) */
interface RTCDataChannelEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDataChannelEvent/channel) */
    readonly channel: RTCDataChannel;
}

declare var RTCDataChannelEvent: {
    prototype: RTCDataChannelEvent;
    new(type: string, eventInitDict: RTCDataChannelEventInit): RTCDataChannelEvent;
};

interface RTCDtlsTransportEventMap {
    "error": Event;
    "statechange": Event;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDtlsTransport) */
interface RTCDtlsTransport extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDtlsTransport/iceTransport) */
    readonly iceTransport: RTCIceTransport;
    onerror: ((this: RTCDtlsTransport, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDtlsTransport/statechange_event) */
    onstatechange: ((this: RTCDtlsTransport, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDtlsTransport/state) */
    readonly state: RTCDtlsTransportState;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCDtlsTransport/getRemoteCertificates) */
    getRemoteCertificates(): ArrayBuffer[];
    addEventListener<K extends keyof RTCDtlsTransportEventMap>(type: K, listener: (this: RTCDtlsTransport, ev: RTCDtlsTransportEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof RTCDtlsTransportEventMap>(type: K, listener: (this: RTCDtlsTransport, ev: RTCDtlsTransportEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var RTCDtlsTransport: {
    prototype: RTCDtlsTransport;
    new(): RTCDtlsTransport;
};

interface RTCEncodedAudioFrame {
    data: ArrayBuffer;
    readonly timestamp: number;
    getMetadata(): RTCEncodedAudioFrameMetadata;
}

declare var RTCEncodedAudioFrame: {
    prototype: RTCEncodedAudioFrame;
    new(): RTCEncodedAudioFrame;
};

interface RTCEncodedVideoFrame {
    data: ArrayBuffer;
    readonly timestamp: number;
    readonly type: RTCEncodedVideoFrameType;
    getMetadata(): RTCEncodedVideoFrameMetadata;
}

declare var RTCEncodedVideoFrame: {
    prototype: RTCEncodedVideoFrame;
    new(): RTCEncodedVideoFrame;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCError) */
interface RTCError extends DOMException {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCError/errorDetail) */
    readonly errorDetail: RTCErrorDetailType;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCError/receivedAlert) */
    readonly receivedAlert: number | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCError/sctpCauseCode) */
    readonly sctpCauseCode: number | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCError/sdpLineNumber) */
    readonly sdpLineNumber: number | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCError/sentAlert) */
    readonly sentAlert: number | null;
}

declare var RTCError: {
    prototype: RTCError;
    new(init: RTCErrorInit, message?: string): RTCError;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCErrorEvent) */
interface RTCErrorEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCErrorEvent/error) */
    readonly error: RTCError;
}

declare var RTCErrorEvent: {
    prototype: RTCErrorEvent;
    new(type: string, eventInitDict: RTCErrorEventInit): RTCErrorEvent;
};

/**
 * The RTCIceCandidate interface—part of the WebRTC API—represents a candidate Internet Connectivity Establishment (ICE) configuration which may be used to establish an RTCPeerConnection.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCIceCandidate)
 */
interface RTCIceCandidate {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCIceCandidate/address) */
    readonly address: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCIceCandidate/candidate) */
    readonly candidate: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCIceCandidate/component) */
    readonly component: RTCIceComponent | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCIceCandidate/foundation) */
    readonly foundation: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCIceCandidate/port) */
    readonly port: number | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCIceCandidate/priority) */
    readonly priority: number | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCIceCandidate/protocol) */
    readonly protocol: RTCIceProtocol | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCIceCandidate/relatedAddress) */
    readonly relatedAddress: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCIceCandidate/relatedPort) */
    readonly relatedPort: number | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCIceCandidate/sdpMLineIndex) */
    readonly sdpMLineIndex: number | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCIceCandidate/sdpMid) */
    readonly sdpMid: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCIceCandidate/tcpType) */
    readonly tcpType: RTCIceTcpCandidateType | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCIceCandidate/type) */
    readonly type: RTCIceCandidateType | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCIceCandidate/usernameFragment) */
    readonly usernameFragment: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCIceCandidate/toJSON) */
    toJSON(): RTCIceCandidateInit;
}

declare var RTCIceCandidate: {
    prototype: RTCIceCandidate;
    new(candidateInitDict?: RTCIceCandidateInit): RTCIceCandidate;
};

interface RTCIceTransportEventMap {
    "gatheringstatechange": Event;
    "selectedcandidatepairchange": Event;
    "statechange": Event;
}

/**
 * Provides access to information about the ICE transport layer over which the data is being sent and received.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCIceTransport)
 */
interface RTCIceTransport extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCIceTransport/gatheringState) */
    readonly gatheringState: RTCIceGathererState;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCIceTransport/gatheringstatechange_event) */
    ongatheringstatechange: ((this: RTCIceTransport, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCIceTransport/selectedcandidatepairchange_event) */
    onselectedcandidatepairchange: ((this: RTCIceTransport, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCIceTransport/statechange_event) */
    onstatechange: ((this: RTCIceTransport, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCIceTransport/state) */
    readonly state: RTCIceTransportState;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCIceTransport/getSelectedCandidatePair) */
    getSelectedCandidatePair(): RTCIceCandidatePair | null;
    addEventListener<K extends keyof RTCIceTransportEventMap>(type: K, listener: (this: RTCIceTransport, ev: RTCIceTransportEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof RTCIceTransportEventMap>(type: K, listener: (this: RTCIceTransport, ev: RTCIceTransportEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var RTCIceTransport: {
    prototype: RTCIceTransport;
    new(): RTCIceTransport;
};

interface RTCPeerConnectionEventMap {
    "connectionstatechange": Event;
    "datachannel": RTCDataChannelEvent;
    "icecandidate": RTCPeerConnectionIceEvent;
    "icecandidateerror": Event;
    "iceconnectionstatechange": Event;
    "icegatheringstatechange": Event;
    "negotiationneeded": Event;
    "signalingstatechange": Event;
    "track": RTCTrackEvent;
}

/**
 * A WebRTC connection between the local computer and a remote peer. It provides methods to connect to a remote peer, maintain and monitor the connection, and close the connection once it's no longer needed.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection)
 */
interface RTCPeerConnection extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/canTrickleIceCandidates) */
    readonly canTrickleIceCandidates: boolean | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/connectionState) */
    readonly connectionState: RTCPeerConnectionState;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/currentLocalDescription) */
    readonly currentLocalDescription: RTCSessionDescription | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/currentRemoteDescription) */
    readonly currentRemoteDescription: RTCSessionDescription | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/iceConnectionState) */
    readonly iceConnectionState: RTCIceConnectionState;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/iceGatheringState) */
    readonly iceGatheringState: RTCIceGatheringState;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/localDescription) */
    readonly localDescription: RTCSessionDescription | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/connectionstatechange_event) */
    onconnectionstatechange: ((this: RTCPeerConnection, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/datachannel_event) */
    ondatachannel: ((this: RTCPeerConnection, ev: RTCDataChannelEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/icecandidate_event) */
    onicecandidate: ((this: RTCPeerConnection, ev: RTCPeerConnectionIceEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/icecandidateerror_event) */
    onicecandidateerror: ((this: RTCPeerConnection, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/iceconnectionstatechange_event) */
    oniceconnectionstatechange: ((this: RTCPeerConnection, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/icegatheringstatechange_event) */
    onicegatheringstatechange: ((this: RTCPeerConnection, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/negotiationneeded_event) */
    onnegotiationneeded: ((this: RTCPeerConnection, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/signalingstatechange_event) */
    onsignalingstatechange: ((this: RTCPeerConnection, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/track_event) */
    ontrack: ((this: RTCPeerConnection, ev: RTCTrackEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/pendingLocalDescription) */
    readonly pendingLocalDescription: RTCSessionDescription | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/pendingRemoteDescription) */
    readonly pendingRemoteDescription: RTCSessionDescription | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/remoteDescription) */
    readonly remoteDescription: RTCSessionDescription | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/sctp) */
    readonly sctp: RTCSctpTransport | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/signalingState) */
    readonly signalingState: RTCSignalingState;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/addIceCandidate) */
    addIceCandidate(candidate?: RTCIceCandidateInit): Promise<void>;
    /** @deprecated */
    addIceCandidate(candidate: RTCIceCandidateInit, successCallback: VoidFunction, failureCallback: RTCPeerConnectionErrorCallback): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/addTrack) */
    addTrack(track: MediaStreamTrack, ...streams: MediaStream[]): RTCRtpSender;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/addTransceiver) */
    addTransceiver(trackOrKind: MediaStreamTrack | string, init?: RTCRtpTransceiverInit): RTCRtpTransceiver;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/close) */
    close(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/createAnswer) */
    createAnswer(options?: RTCAnswerOptions): Promise<RTCSessionDescriptionInit>;
    /** @deprecated */
    createAnswer(successCallback: RTCSessionDescriptionCallback, failureCallback: RTCPeerConnectionErrorCallback): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/createDataChannel) */
    createDataChannel(label: string, dataChannelDict?: RTCDataChannelInit): RTCDataChannel;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/createOffer) */
    createOffer(options?: RTCOfferOptions): Promise<RTCSessionDescriptionInit>;
    /** @deprecated */
    createOffer(successCallback: RTCSessionDescriptionCallback, failureCallback: RTCPeerConnectionErrorCallback, options?: RTCOfferOptions): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/getConfiguration) */
    getConfiguration(): RTCConfiguration;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/getReceivers) */
    getReceivers(): RTCRtpReceiver[];
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/getSenders) */
    getSenders(): RTCRtpSender[];
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/getStats) */
    getStats(selector?: MediaStreamTrack | null): Promise<RTCStatsReport>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/getTransceivers) */
    getTransceivers(): RTCRtpTransceiver[];
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/removeTrack) */
    removeTrack(sender: RTCRtpSender): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/restartIce) */
    restartIce(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/setConfiguration) */
    setConfiguration(configuration?: RTCConfiguration): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/setLocalDescription) */
    setLocalDescription(description?: RTCLocalSessionDescriptionInit): Promise<void>;
    /** @deprecated */
    setLocalDescription(description: RTCLocalSessionDescriptionInit, successCallback: VoidFunction, failureCallback: RTCPeerConnectionErrorCallback): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/setRemoteDescription) */
    setRemoteDescription(description: RTCSessionDescriptionInit): Promise<void>;
    /** @deprecated */
    setRemoteDescription(description: RTCSessionDescriptionInit, successCallback: VoidFunction, failureCallback: RTCPeerConnectionErrorCallback): Promise<void>;
    addEventListener<K extends keyof RTCPeerConnectionEventMap>(type: K, listener: (this: RTCPeerConnection, ev: RTCPeerConnectionEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof RTCPeerConnectionEventMap>(type: K, listener: (this: RTCPeerConnection, ev: RTCPeerConnectionEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var RTCPeerConnection: {
    prototype: RTCPeerConnection;
    new(configuration?: RTCConfiguration): RTCPeerConnection;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnection/generateCertificate_static) */
    generateCertificate(keygenAlgorithm: AlgorithmIdentifier): Promise<RTCCertificate>;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnectionIceErrorEvent) */
interface RTCPeerConnectionIceErrorEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnectionIceErrorEvent/address) */
    readonly address: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnectionIceErrorEvent/errorCode) */
    readonly errorCode: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnectionIceErrorEvent/errorText) */
    readonly errorText: string;
    readonly port: number | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnectionIceErrorEvent/url) */
    readonly url: string;
}

declare var RTCPeerConnectionIceErrorEvent: {
    prototype: RTCPeerConnectionIceErrorEvent;
    new(type: string, eventInitDict: RTCPeerConnectionIceErrorEventInit): RTCPeerConnectionIceErrorEvent;
};

/**
 * Events that occurs in relation to ICE candidates with the target, usually an RTCPeerConnection. Only one event is of this type: icecandidate.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnectionIceEvent)
 */
interface RTCPeerConnectionIceEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCPeerConnectionIceEvent/candidate) */
    readonly candidate: RTCIceCandidate | null;
}

declare var RTCPeerConnectionIceEvent: {
    prototype: RTCPeerConnectionIceEvent;
    new(type: string, eventInitDict?: RTCPeerConnectionIceEventInit): RTCPeerConnectionIceEvent;
};

/**
 * This WebRTC API interface manages the reception and decoding of data for a MediaStreamTrack on an RTCPeerConnection.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCRtpReceiver)
 */
interface RTCRtpReceiver {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCRtpReceiver/track) */
    readonly track: MediaStreamTrack;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCRtpReceiver/transport) */
    readonly transport: RTCDtlsTransport | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCRtpReceiver/getContributingSources) */
    getContributingSources(): RTCRtpContributingSource[];
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCRtpReceiver/getParameters) */
    getParameters(): RTCRtpReceiveParameters;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCRtpReceiver/getStats) */
    getStats(): Promise<RTCStatsReport>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCRtpReceiver/getSynchronizationSources) */
    getSynchronizationSources(): RTCRtpSynchronizationSource[];
}

declare var RTCRtpReceiver: {
    prototype: RTCRtpReceiver;
    new(): RTCRtpReceiver;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCRtpReceiver/getCapabilities_static) */
    getCapabilities(kind: string): RTCRtpCapabilities | null;
};

/**
 * Provides the ability to control and obtain details about how a particular MediaStreamTrack is encoded and sent to a remote peer.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCRtpSender)
 */
interface RTCRtpSender {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCRtpSender/dtmf) */
    readonly dtmf: RTCDTMFSender | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCRtpSender/track) */
    readonly track: MediaStreamTrack | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCRtpSender/transport) */
    readonly transport: RTCDtlsTransport | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCRtpSender/getParameters) */
    getParameters(): RTCRtpSendParameters;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCRtpSender/getStats) */
    getStats(): Promise<RTCStatsReport>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCRtpSender/replaceTrack) */
    replaceTrack(withTrack: MediaStreamTrack | null): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCRtpSender/setParameters) */
    setParameters(parameters: RTCRtpSendParameters): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCRtpSender/setStreams) */
    setStreams(...streams: MediaStream[]): void;
}

declare var RTCRtpSender: {
    prototype: RTCRtpSender;
    new(): RTCRtpSender;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCRtpSender/getCapabilities_static) */
    getCapabilities(kind: string): RTCRtpCapabilities | null;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCRtpTransceiver) */
interface RTCRtpTransceiver {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCRtpTransceiver/currentDirection) */
    readonly currentDirection: RTCRtpTransceiverDirection | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCRtpTransceiver/direction) */
    direction: RTCRtpTransceiverDirection;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCRtpTransceiver/mid) */
    readonly mid: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCRtpTransceiver/receiver) */
    readonly receiver: RTCRtpReceiver;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCRtpTransceiver/sender) */
    readonly sender: RTCRtpSender;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCRtpTransceiver/setCodecPreferences) */
    setCodecPreferences(codecs: RTCRtpCodecCapability[]): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCRtpTransceiver/stop) */
    stop(): void;
}

declare var RTCRtpTransceiver: {
    prototype: RTCRtpTransceiver;
    new(): RTCRtpTransceiver;
};

interface RTCSctpTransportEventMap {
    "statechange": Event;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCSctpTransport) */
interface RTCSctpTransport extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCSctpTransport/maxChannels) */
    readonly maxChannels: number | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCSctpTransport/maxMessageSize) */
    readonly maxMessageSize: number;
    onstatechange: ((this: RTCSctpTransport, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCSctpTransport/state) */
    readonly state: RTCSctpTransportState;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCSctpTransport/transport) */
    readonly transport: RTCDtlsTransport;
    addEventListener<K extends keyof RTCSctpTransportEventMap>(type: K, listener: (this: RTCSctpTransport, ev: RTCSctpTransportEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof RTCSctpTransportEventMap>(type: K, listener: (this: RTCSctpTransport, ev: RTCSctpTransportEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var RTCSctpTransport: {
    prototype: RTCSctpTransport;
    new(): RTCSctpTransport;
};

/**
 * One end of a connection—or potential connection—and how it's configured. Each RTCSessionDescription consists of a description type indicating which part of the offer/answer negotiation process it describes and of the SDP descriptor of the session.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCSessionDescription)
 */
interface RTCSessionDescription {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCSessionDescription/sdp) */
    readonly sdp: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCSessionDescription/type) */
    readonly type: RTCSdpType;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCSessionDescription/toJSON) */
    toJSON(): any;
}

declare var RTCSessionDescription: {
    prototype: RTCSessionDescription;
    new(descriptionInitDict: RTCSessionDescriptionInit): RTCSessionDescription;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCStatsReport) */
interface RTCStatsReport {
    forEach(callbackfn: (value: any, key: string, parent: RTCStatsReport) => void, thisArg?: any): void;
}

declare var RTCStatsReport: {
    prototype: RTCStatsReport;
    new(): RTCStatsReport;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCTrackEvent) */
interface RTCTrackEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCTrackEvent/receiver) */
    readonly receiver: RTCRtpReceiver;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCTrackEvent/streams) */
    readonly streams: ReadonlyArray<MediaStream>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCTrackEvent/track) */
    readonly track: MediaStreamTrack;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RTCTrackEvent/transceiver) */
    readonly transceiver: RTCRtpTransceiver;
}

declare var RTCTrackEvent: {
    prototype: RTCTrackEvent;
    new(type: string, eventInitDict: RTCTrackEventInit): RTCTrackEvent;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RadioNodeList) */
interface RadioNodeList extends NodeList {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RadioNodeList/value) */
    value: string;
}

declare var RadioNodeList: {
    prototype: RadioNodeList;
    new(): RadioNodeList;
};

/**
 * A fragment of a document that can contain nodes and parts of text nodes.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Range)
 */
interface Range extends AbstractRange {
    /**
     * Returns the node, furthest away from the document, that is an ancestor of both range's start node and end node.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Range/commonAncestorContainer)
     */
    readonly commonAncestorContainer: Node;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Range/cloneContents) */
    cloneContents(): DocumentFragment;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Range/cloneRange) */
    cloneRange(): Range;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Range/collapse) */
    collapse(toStart?: boolean): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Range/compareBoundaryPoints) */
    compareBoundaryPoints(how: number, sourceRange: Range): number;
    /**
     * Returns −1 if the point is before the range, 0 if the point is in the range, and 1 if the point is after the range.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Range/comparePoint)
     */
    comparePoint(node: Node, offset: number): number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Range/createContextualFragment) */
    createContextualFragment(fragment: string): DocumentFragment;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Range/deleteContents) */
    deleteContents(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Range/detach) */
    detach(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Range/extractContents) */
    extractContents(): DocumentFragment;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Range/getBoundingClientRect) */
    getBoundingClientRect(): DOMRect;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Range/getClientRects) */
    getClientRects(): DOMRectList;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Range/insertNode) */
    insertNode(node: Node): void;
    /**
     * Returns whether range intersects node.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Range/intersectsNode)
     */
    intersectsNode(node: Node): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Range/isPointInRange) */
    isPointInRange(node: Node, offset: number): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Range/selectNode) */
    selectNode(node: Node): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Range/selectNodeContents) */
    selectNodeContents(node: Node): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Range/setEnd) */
    setEnd(node: Node, offset: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Range/setEndAfter) */
    setEndAfter(node: Node): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Range/setEndBefore) */
    setEndBefore(node: Node): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Range/setStart) */
    setStart(node: Node, offset: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Range/setStartAfter) */
    setStartAfter(node: Node): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Range/setStartBefore) */
    setStartBefore(node: Node): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Range/surroundContents) */
    surroundContents(newParent: Node): void;
    toString(): string;
    readonly START_TO_START: 0;
    readonly START_TO_END: 1;
    readonly END_TO_END: 2;
    readonly END_TO_START: 3;
}

declare var Range: {
    prototype: Range;
    new(): Range;
    readonly START_TO_START: 0;
    readonly START_TO_END: 1;
    readonly END_TO_END: 2;
    readonly END_TO_START: 3;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableByteStreamController) */
interface ReadableByteStreamController {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableByteStreamController/byobRequest) */
    readonly byobRequest: ReadableStreamBYOBRequest | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableByteStreamController/desiredSize) */
    readonly desiredSize: number | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableByteStreamController/close) */
    close(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableByteStreamController/enqueue) */
    enqueue(chunk: ArrayBufferView): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableByteStreamController/error) */
    error(e?: any): void;
}

declare var ReadableByteStreamController: {
    prototype: ReadableByteStreamController;
    new(): ReadableByteStreamController;
};

/**
 * This Streams API interface represents a readable stream of byte data. The Fetch API offers a concrete instance of a ReadableStream through the body property of a Response object.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableStream)
 */
interface ReadableStream<R = any> {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableStream/locked) */
    readonly locked: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableStream/cancel) */
    cancel(reason?: any): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableStream/getReader) */
    getReader(options: { mode: "byob" }): ReadableStreamBYOBReader;
    getReader(): ReadableStreamDefaultReader<R>;
    getReader(options?: ReadableStreamGetReaderOptions): ReadableStreamReader<R>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableStream/pipeThrough) */
    pipeThrough<T>(transform: ReadableWritablePair<T, R>, options?: StreamPipeOptions): ReadableStream<T>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableStream/pipeTo) */
    pipeTo(destination: WritableStream<R>, options?: StreamPipeOptions): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableStream/tee) */
    tee(): [ReadableStream<R>, ReadableStream<R>];
}

declare var ReadableStream: {
    prototype: ReadableStream;
    new(underlyingSource: UnderlyingByteSource, strategy?: { highWaterMark?: number }): ReadableStream<Uint8Array>;
    new<R = any>(underlyingSource: UnderlyingDefaultSource<R>, strategy?: QueuingStrategy<R>): ReadableStream<R>;
    new<R = any>(underlyingSource?: UnderlyingSource<R>, strategy?: QueuingStrategy<R>): ReadableStream<R>;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableStreamBYOBReader) */
interface ReadableStreamBYOBReader extends ReadableStreamGenericReader {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableStreamBYOBReader/read) */
    read<T extends ArrayBufferView>(view: T): Promise<ReadableStreamReadResult<T>>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableStreamBYOBReader/releaseLock) */
    releaseLock(): void;
}

declare var ReadableStreamBYOBReader: {
    prototype: ReadableStreamBYOBReader;
    new(stream: ReadableStream): ReadableStreamBYOBReader;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableStreamBYOBRequest) */
interface ReadableStreamBYOBRequest {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableStreamBYOBRequest/view) */
    readonly view: ArrayBufferView | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableStreamBYOBRequest/respond) */
    respond(bytesWritten: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableStreamBYOBRequest/respondWithNewView) */
    respondWithNewView(view: ArrayBufferView): void;
}

declare var ReadableStreamBYOBRequest: {
    prototype: ReadableStreamBYOBRequest;
    new(): ReadableStreamBYOBRequest;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableStreamDefaultController) */
interface ReadableStreamDefaultController<R = any> {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableStreamDefaultController/desiredSize) */
    readonly desiredSize: number | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableStreamDefaultController/close) */
    close(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableStreamDefaultController/enqueue) */
    enqueue(chunk?: R): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableStreamDefaultController/error) */
    error(e?: any): void;
}

declare var ReadableStreamDefaultController: {
    prototype: ReadableStreamDefaultController;
    new(): ReadableStreamDefaultController;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableStreamDefaultReader) */
interface ReadableStreamDefaultReader<R = any> extends ReadableStreamGenericReader {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableStreamDefaultReader/read) */
    read(): Promise<ReadableStreamReadResult<R>>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableStreamDefaultReader/releaseLock) */
    releaseLock(): void;
}

declare var ReadableStreamDefaultReader: {
    prototype: ReadableStreamDefaultReader;
    new<R = any>(stream: ReadableStream<R>): ReadableStreamDefaultReader<R>;
};

interface ReadableStreamGenericReader {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableStreamBYOBReader/closed) */
    readonly closed: Promise<undefined>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReadableStreamBYOBReader/cancel) */
    cancel(reason?: any): Promise<void>;
}

interface RemotePlaybackEventMap {
    "connect": Event;
    "connecting": Event;
    "disconnect": Event;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RemotePlayback) */
interface RemotePlayback extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RemotePlayback/connect_event) */
    onconnect: ((this: RemotePlayback, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RemotePlayback/connecting_event) */
    onconnecting: ((this: RemotePlayback, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RemotePlayback/disconnect_event) */
    ondisconnect: ((this: RemotePlayback, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RemotePlayback/state) */
    readonly state: RemotePlaybackState;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RemotePlayback/cancelWatchAvailability) */
    cancelWatchAvailability(id?: number): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RemotePlayback/prompt) */
    prompt(): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/RemotePlayback/watchAvailability) */
    watchAvailability(callback: RemotePlaybackAvailabilityCallback): Promise<number>;
    addEventListener<K extends keyof RemotePlaybackEventMap>(type: K, listener: (this: RemotePlayback, ev: RemotePlaybackEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof RemotePlaybackEventMap>(type: K, listener: (this: RemotePlayback, ev: RemotePlaybackEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var RemotePlayback: {
    prototype: RemotePlayback;
    new(): RemotePlayback;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Report) */
interface Report {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Report/body) */
    readonly body: ReportBody | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Report/type) */
    readonly type: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Report/url) */
    readonly url: string;
    toJSON(): any;
}

declare var Report: {
    prototype: Report;
    new(): Report;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReportBody) */
interface ReportBody {
    toJSON(): any;
}

declare var ReportBody: {
    prototype: ReportBody;
    new(): ReportBody;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReportingObserver) */
interface ReportingObserver {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReportingObserver/disconnect) */
    disconnect(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReportingObserver/observe) */
    observe(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ReportingObserver/takeRecords) */
    takeRecords(): ReportList;
}

declare var ReportingObserver: {
    prototype: ReportingObserver;
    new(callback: ReportingObserverCallback, options?: ReportingObserverOptions): ReportingObserver;
};

/**
 * This Fetch API interface represents a resource request.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Request)
 */
interface Request extends Body {
    /**
     * Returns the cache mode associated with request, which is a string indicating how the request will interact with the browser's cache when fetching.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Request/cache)
     */
    readonly cache: RequestCache;
    /**
     * Returns the credentials mode associated with request, which is a string indicating whether credentials will be sent with the request always, never, or only when sent to a same-origin URL.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Request/credentials)
     */
    readonly credentials: RequestCredentials;
    /**
     * Returns the kind of resource requested by request, e.g., "document" or "script".
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Request/destination)
     */
    readonly destination: RequestDestination;
    /**
     * Returns a Headers object consisting of the headers associated with request. Note that headers added in the network layer by the user agent will not be accounted for in this object, e.g., the "Host" header.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Request/headers)
     */
    readonly headers: Headers;
    /**
     * Returns request's subresource integrity metadata, which is a cryptographic hash of the resource being fetched. Its value consists of multiple hashes separated by whitespace. [SRI]
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Request/integrity)
     */
    readonly integrity: string;
    /**
     * Returns a boolean indicating whether or not request can outlive the global in which it was created.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Request/keepalive)
     */
    readonly keepalive: boolean;
    /**
     * Returns request's HTTP method, which is "GET" by default.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Request/method)
     */
    readonly method: string;
    /**
     * Returns the mode associated with request, which is a string indicating whether the request will use CORS, or will be restricted to same-origin URLs.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Request/mode)
     */
    readonly mode: RequestMode;
    /**
     * Returns the redirect mode associated with request, which is a string indicating how redirects for the request will be handled during fetching. A request will follow redirects by default.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Request/redirect)
     */
    readonly redirect: RequestRedirect;
    /**
     * Returns the referrer of request. Its value can be a same-origin URL if explicitly set in init, the empty string to indicate no referrer, and "about:client" when defaulting to the global's default. This is used during fetching to determine the value of the `Referer` header of the request being made.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Request/referrer)
     */
    readonly referrer: string;
    /**
     * Returns the referrer policy associated with request. This is used during fetching to compute the value of the request's referrer.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Request/referrerPolicy)
     */
    readonly referrerPolicy: ReferrerPolicy;
    /**
     * Returns the signal associated with request, which is an AbortSignal object indicating whether or not request has been aborted, and its abort event handler.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Request/signal)
     */
    readonly signal: AbortSignal;
    /**
     * Returns the URL of request as a string.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Request/url)
     */
    readonly url: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Request/clone) */
    clone(): Request;
}

declare var Request: {
    prototype: Request;
    new(input: RequestInfo | URL, init?: RequestInit): Request;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ResizeObserver) */
interface ResizeObserver {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ResizeObserver/disconnect) */
    disconnect(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ResizeObserver/observe) */
    observe(target: Element, options?: ResizeObserverOptions): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ResizeObserver/unobserve) */
    unobserve(target: Element): void;
}

declare var ResizeObserver: {
    prototype: ResizeObserver;
    new(callback: ResizeObserverCallback): ResizeObserver;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ResizeObserverEntry) */
interface ResizeObserverEntry {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ResizeObserverEntry/borderBoxSize) */
    readonly borderBoxSize: ReadonlyArray<ResizeObserverSize>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ResizeObserverEntry/contentBoxSize) */
    readonly contentBoxSize: ReadonlyArray<ResizeObserverSize>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ResizeObserverEntry/contentRect) */
    readonly contentRect: DOMRectReadOnly;
    readonly devicePixelContentBoxSize: ReadonlyArray<ResizeObserverSize>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ResizeObserverEntry/target) */
    readonly target: Element;
}

declare var ResizeObserverEntry: {
    prototype: ResizeObserverEntry;
    new(): ResizeObserverEntry;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ResizeObserverSize) */
interface ResizeObserverSize {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ResizeObserverSize/blockSize) */
    readonly blockSize: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ResizeObserverSize/inlineSize) */
    readonly inlineSize: number;
}

declare var ResizeObserverSize: {
    prototype: ResizeObserverSize;
    new(): ResizeObserverSize;
};

/**
 * This Fetch API interface represents the response to a request.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Response)
 */
interface Response extends Body {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Response/headers) */
    readonly headers: Headers;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Response/ok) */
    readonly ok: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Response/redirected) */
    readonly redirected: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Response/status) */
    readonly status: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Response/statusText) */
    readonly statusText: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Response/type) */
    readonly type: ResponseType;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Response/url) */
    readonly url: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Response/clone) */
    clone(): Response;
}

declare var Response: {
    prototype: Response;
    new(body?: BodyInit | null, init?: ResponseInit): Response;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Response/error_static) */
    error(): Response;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Response/json_static) */
    json(data: any, init?: ResponseInit): Response;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Response/redirect_static) */
    redirect(url: string | URL, status?: number): Response;
};

/**
 * Provides access to the properties of <a> element, as well as methods to manipulate them.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGAElement)
 */
interface SVGAElement extends SVGGraphicsElement, SVGURIReference {
    rel: string;
    readonly relList: DOMTokenList;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGAElement/target) */
    readonly target: SVGAnimatedString;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGAElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGAElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGAElement: {
    prototype: SVGAElement;
    new(): SVGAElement;
};

/**
 * Used to represent a value that can be an <angle> or <number> value. An SVGAngle reflected through the animVal attribute is always read only.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGAngle)
 */
interface SVGAngle {
    readonly unitType: number;
    value: number;
    valueAsString: string;
    valueInSpecifiedUnits: number;
    convertToSpecifiedUnits(unitType: number): void;
    newValueSpecifiedUnits(unitType: number, valueInSpecifiedUnits: number): void;
    readonly SVG_ANGLETYPE_UNKNOWN: 0;
    readonly SVG_ANGLETYPE_UNSPECIFIED: 1;
    readonly SVG_ANGLETYPE_DEG: 2;
    readonly SVG_ANGLETYPE_RAD: 3;
    readonly SVG_ANGLETYPE_GRAD: 4;
}

declare var SVGAngle: {
    prototype: SVGAngle;
    new(): SVGAngle;
    readonly SVG_ANGLETYPE_UNKNOWN: 0;
    readonly SVG_ANGLETYPE_UNSPECIFIED: 1;
    readonly SVG_ANGLETYPE_DEG: 2;
    readonly SVG_ANGLETYPE_RAD: 3;
    readonly SVG_ANGLETYPE_GRAD: 4;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGAnimateElement) */
interface SVGAnimateElement extends SVGAnimationElement {
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGAnimateElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGAnimateElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGAnimateElement: {
    prototype: SVGAnimateElement;
    new(): SVGAnimateElement;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGAnimateMotionElement) */
interface SVGAnimateMotionElement extends SVGAnimationElement {
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGAnimateMotionElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGAnimateMotionElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGAnimateMotionElement: {
    prototype: SVGAnimateMotionElement;
    new(): SVGAnimateMotionElement;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGAnimateTransformElement) */
interface SVGAnimateTransformElement extends SVGAnimationElement {
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGAnimateTransformElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGAnimateTransformElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGAnimateTransformElement: {
    prototype: SVGAnimateTransformElement;
    new(): SVGAnimateTransformElement;
};

/**
 * Used for attributes of basic type <angle> which can be animated.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGAnimatedAngle)
 */
interface SVGAnimatedAngle {
    readonly animVal: SVGAngle;
    readonly baseVal: SVGAngle;
}

declare var SVGAnimatedAngle: {
    prototype: SVGAnimatedAngle;
    new(): SVGAnimatedAngle;
};

/**
 * Used for attributes of type boolean which can be animated.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGAnimatedBoolean)
 */
interface SVGAnimatedBoolean {
    readonly animVal: boolean;
    baseVal: boolean;
}

declare var SVGAnimatedBoolean: {
    prototype: SVGAnimatedBoolean;
    new(): SVGAnimatedBoolean;
};

/**
 * Used for attributes whose value must be a constant from a particular enumeration and which can be animated.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGAnimatedEnumeration)
 */
interface SVGAnimatedEnumeration {
    readonly animVal: number;
    baseVal: number;
}

declare var SVGAnimatedEnumeration: {
    prototype: SVGAnimatedEnumeration;
    new(): SVGAnimatedEnumeration;
};

/**
 * Used for attributes of basic type <integer> which can be animated.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGAnimatedInteger)
 */
interface SVGAnimatedInteger {
    readonly animVal: number;
    baseVal: number;
}

declare var SVGAnimatedInteger: {
    prototype: SVGAnimatedInteger;
    new(): SVGAnimatedInteger;
};

/**
 * Used for attributes of basic type <length> which can be animated.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGAnimatedLength)
 */
interface SVGAnimatedLength {
    readonly animVal: SVGLength;
    readonly baseVal: SVGLength;
}

declare var SVGAnimatedLength: {
    prototype: SVGAnimatedLength;
    new(): SVGAnimatedLength;
};

/**
 * Used for attributes of type SVGLengthList which can be animated.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGAnimatedLengthList)
 */
interface SVGAnimatedLengthList {
    readonly animVal: SVGLengthList;
    readonly baseVal: SVGLengthList;
}

declare var SVGAnimatedLengthList: {
    prototype: SVGAnimatedLengthList;
    new(): SVGAnimatedLengthList;
};

/**
 * Used for attributes of basic type <Number> which can be animated.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGAnimatedNumber)
 */
interface SVGAnimatedNumber {
    readonly animVal: number;
    baseVal: number;
}

declare var SVGAnimatedNumber: {
    prototype: SVGAnimatedNumber;
    new(): SVGAnimatedNumber;
};

/**
 * The SVGAnimatedNumber interface is used for attributes which take a list of numbers and which can be animated.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGAnimatedNumberList)
 */
interface SVGAnimatedNumberList {
    readonly animVal: SVGNumberList;
    readonly baseVal: SVGNumberList;
}

declare var SVGAnimatedNumberList: {
    prototype: SVGAnimatedNumberList;
    new(): SVGAnimatedNumberList;
};

interface SVGAnimatedPoints {
    readonly animatedPoints: SVGPointList;
    readonly points: SVGPointList;
}

/**
 * Used for attributes of type SVGPreserveAspectRatio which can be animated.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGAnimatedPreserveAspectRatio)
 */
interface SVGAnimatedPreserveAspectRatio {
    readonly animVal: SVGPreserveAspectRatio;
    readonly baseVal: SVGPreserveAspectRatio;
}

declare var SVGAnimatedPreserveAspectRatio: {
    prototype: SVGAnimatedPreserveAspectRatio;
    new(): SVGAnimatedPreserveAspectRatio;
};

/**
 * Used for attributes of basic SVGRect which can be animated.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGAnimatedRect)
 */
interface SVGAnimatedRect {
    readonly animVal: DOMRectReadOnly;
    readonly baseVal: DOMRect;
}

declare var SVGAnimatedRect: {
    prototype: SVGAnimatedRect;
    new(): SVGAnimatedRect;
};

/**
 * The SVGAnimatedString interface represents string attributes which can be animated from each SVG declaration. You need to create SVG attribute before doing anything else, everything should be declared inside this.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGAnimatedString)
 */
interface SVGAnimatedString {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGAnimatedString/animVal) */
    readonly animVal: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGAnimatedString/baseVal) */
    baseVal: string;
}

declare var SVGAnimatedString: {
    prototype: SVGAnimatedString;
    new(): SVGAnimatedString;
};

/**
 * Used for attributes which take a list of numbers and which can be animated.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGAnimatedTransformList)
 */
interface SVGAnimatedTransformList {
    readonly animVal: SVGTransformList;
    readonly baseVal: SVGTransformList;
}

declare var SVGAnimatedTransformList: {
    prototype: SVGAnimatedTransformList;
    new(): SVGAnimatedTransformList;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGAnimationElement) */
interface SVGAnimationElement extends SVGElement, SVGTests {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGAnimationElement/targetElement) */
    readonly targetElement: SVGElement | null;
    beginElement(): void;
    beginElementAt(offset: number): void;
    endElement(): void;
    endElementAt(offset: number): void;
    getCurrentTime(): number;
    getSimpleDuration(): number;
    getStartTime(): number;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGAnimationElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGAnimationElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGAnimationElement: {
    prototype: SVGAnimationElement;
    new(): SVGAnimationElement;
};

/**
 * An interface for the <circle> element. The circle element is defined by the cx and cy attributes that denote the coordinates of the centre of the circle.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGCircleElement)
 */
interface SVGCircleElement extends SVGGeometryElement {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGCircleElement/cx) */
    readonly cx: SVGAnimatedLength;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGCircleElement/cy) */
    readonly cy: SVGAnimatedLength;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGCircleElement/r) */
    readonly r: SVGAnimatedLength;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGCircleElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGCircleElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGCircleElement: {
    prototype: SVGCircleElement;
    new(): SVGCircleElement;
};

/**
 * Provides access to the properties of <clipPath> elements, as well as methods to manipulate them.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGClipPathElement)
 */
interface SVGClipPathElement extends SVGElement {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGClipPathElement/clipPathUnits) */
    readonly clipPathUnits: SVGAnimatedEnumeration;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGClipPathElement/transform) */
    readonly transform: SVGAnimatedTransformList;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGClipPathElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGClipPathElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGClipPathElement: {
    prototype: SVGClipPathElement;
    new(): SVGClipPathElement;
};

/**
 * A base interface used by the component transfer function interfaces.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGComponentTransferFunctionElement)
 */
interface SVGComponentTransferFunctionElement extends SVGElement {
    readonly amplitude: SVGAnimatedNumber;
    readonly exponent: SVGAnimatedNumber;
    readonly intercept: SVGAnimatedNumber;
    readonly offset: SVGAnimatedNumber;
    readonly slope: SVGAnimatedNumber;
    readonly tableValues: SVGAnimatedNumberList;
    readonly type: SVGAnimatedEnumeration;
    readonly SVG_FECOMPONENTTRANSFER_TYPE_UNKNOWN: 0;
    readonly SVG_FECOMPONENTTRANSFER_TYPE_IDENTITY: 1;
    readonly SVG_FECOMPONENTTRANSFER_TYPE_TABLE: 2;
    readonly SVG_FECOMPONENTTRANSFER_TYPE_DISCRETE: 3;
    readonly SVG_FECOMPONENTTRANSFER_TYPE_LINEAR: 4;
    readonly SVG_FECOMPONENTTRANSFER_TYPE_GAMMA: 5;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGComponentTransferFunctionElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGComponentTransferFunctionElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGComponentTransferFunctionElement: {
    prototype: SVGComponentTransferFunctionElement;
    new(): SVGComponentTransferFunctionElement;
    readonly SVG_FECOMPONENTTRANSFER_TYPE_UNKNOWN: 0;
    readonly SVG_FECOMPONENTTRANSFER_TYPE_IDENTITY: 1;
    readonly SVG_FECOMPONENTTRANSFER_TYPE_TABLE: 2;
    readonly SVG_FECOMPONENTTRANSFER_TYPE_DISCRETE: 3;
    readonly SVG_FECOMPONENTTRANSFER_TYPE_LINEAR: 4;
    readonly SVG_FECOMPONENTTRANSFER_TYPE_GAMMA: 5;
};

/**
 * Corresponds to the <defs> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGDefsElement)
 */
interface SVGDefsElement extends SVGGraphicsElement {
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGDefsElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGDefsElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGDefsElement: {
    prototype: SVGDefsElement;
    new(): SVGDefsElement;
};

/**
 * Corresponds to the <desc> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGDescElement)
 */
interface SVGDescElement extends SVGElement {
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGDescElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGDescElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGDescElement: {
    prototype: SVGDescElement;
    new(): SVGDescElement;
};

interface SVGElementEventMap extends ElementEventMap, GlobalEventHandlersEventMap {
}

/**
 * All of the SVG DOM interfaces that correspond directly to elements in the SVG language derive from the SVGElement interface.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGElement)
 */
interface SVGElement extends Element, ElementCSSInlineStyle, GlobalEventHandlers, HTMLOrSVGElement {
    /** @deprecated */
    readonly className: any;
    readonly ownerSVGElement: SVGSVGElement | null;
    readonly viewportElement: SVGElement | null;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGElement: {
    prototype: SVGElement;
    new(): SVGElement;
};

/**
 * Provides access to the properties of <ellipse> elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGEllipseElement)
 */
interface SVGEllipseElement extends SVGGeometryElement {
    readonly cx: SVGAnimatedLength;
    readonly cy: SVGAnimatedLength;
    readonly rx: SVGAnimatedLength;
    readonly ry: SVGAnimatedLength;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGEllipseElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGEllipseElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGEllipseElement: {
    prototype: SVGEllipseElement;
    new(): SVGEllipseElement;
};

/**
 * Corresponds to the <feBlend> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFEBlendElement)
 */
interface SVGFEBlendElement extends SVGElement, SVGFilterPrimitiveStandardAttributes {
    readonly in1: SVGAnimatedString;
    readonly in2: SVGAnimatedString;
    readonly mode: SVGAnimatedEnumeration;
    readonly SVG_FEBLEND_MODE_UNKNOWN: 0;
    readonly SVG_FEBLEND_MODE_NORMAL: 1;
    readonly SVG_FEBLEND_MODE_MULTIPLY: 2;
    readonly SVG_FEBLEND_MODE_SCREEN: 3;
    readonly SVG_FEBLEND_MODE_DARKEN: 4;
    readonly SVG_FEBLEND_MODE_LIGHTEN: 5;
    readonly SVG_FEBLEND_MODE_OVERLAY: 6;
    readonly SVG_FEBLEND_MODE_COLOR_DODGE: 7;
    readonly SVG_FEBLEND_MODE_COLOR_BURN: 8;
    readonly SVG_FEBLEND_MODE_HARD_LIGHT: 9;
    readonly SVG_FEBLEND_MODE_SOFT_LIGHT: 10;
    readonly SVG_FEBLEND_MODE_DIFFERENCE: 11;
    readonly SVG_FEBLEND_MODE_EXCLUSION: 12;
    readonly SVG_FEBLEND_MODE_HUE: 13;
    readonly SVG_FEBLEND_MODE_SATURATION: 14;
    readonly SVG_FEBLEND_MODE_COLOR: 15;
    readonly SVG_FEBLEND_MODE_LUMINOSITY: 16;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEBlendElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEBlendElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGFEBlendElement: {
    prototype: SVGFEBlendElement;
    new(): SVGFEBlendElement;
    readonly SVG_FEBLEND_MODE_UNKNOWN: 0;
    readonly SVG_FEBLEND_MODE_NORMAL: 1;
    readonly SVG_FEBLEND_MODE_MULTIPLY: 2;
    readonly SVG_FEBLEND_MODE_SCREEN: 3;
    readonly SVG_FEBLEND_MODE_DARKEN: 4;
    readonly SVG_FEBLEND_MODE_LIGHTEN: 5;
    readonly SVG_FEBLEND_MODE_OVERLAY: 6;
    readonly SVG_FEBLEND_MODE_COLOR_DODGE: 7;
    readonly SVG_FEBLEND_MODE_COLOR_BURN: 8;
    readonly SVG_FEBLEND_MODE_HARD_LIGHT: 9;
    readonly SVG_FEBLEND_MODE_SOFT_LIGHT: 10;
    readonly SVG_FEBLEND_MODE_DIFFERENCE: 11;
    readonly SVG_FEBLEND_MODE_EXCLUSION: 12;
    readonly SVG_FEBLEND_MODE_HUE: 13;
    readonly SVG_FEBLEND_MODE_SATURATION: 14;
    readonly SVG_FEBLEND_MODE_COLOR: 15;
    readonly SVG_FEBLEND_MODE_LUMINOSITY: 16;
};

/**
 * Corresponds to the <feColorMatrix> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFEColorMatrixElement)
 */
interface SVGFEColorMatrixElement extends SVGElement, SVGFilterPrimitiveStandardAttributes {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFEColorMatrixElement/in1) */
    readonly in1: SVGAnimatedString;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFEColorMatrixElement/type) */
    readonly type: SVGAnimatedEnumeration;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFEColorMatrixElement/values) */
    readonly values: SVGAnimatedNumberList;
    readonly SVG_FECOLORMATRIX_TYPE_UNKNOWN: 0;
    readonly SVG_FECOLORMATRIX_TYPE_MATRIX: 1;
    readonly SVG_FECOLORMATRIX_TYPE_SATURATE: 2;
    readonly SVG_FECOLORMATRIX_TYPE_HUEROTATE: 3;
    readonly SVG_FECOLORMATRIX_TYPE_LUMINANCETOALPHA: 4;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEColorMatrixElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEColorMatrixElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGFEColorMatrixElement: {
    prototype: SVGFEColorMatrixElement;
    new(): SVGFEColorMatrixElement;
    readonly SVG_FECOLORMATRIX_TYPE_UNKNOWN: 0;
    readonly SVG_FECOLORMATRIX_TYPE_MATRIX: 1;
    readonly SVG_FECOLORMATRIX_TYPE_SATURATE: 2;
    readonly SVG_FECOLORMATRIX_TYPE_HUEROTATE: 3;
    readonly SVG_FECOLORMATRIX_TYPE_LUMINANCETOALPHA: 4;
};

/**
 * Corresponds to the <feComponentTransfer> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFEComponentTransferElement)
 */
interface SVGFEComponentTransferElement extends SVGElement, SVGFilterPrimitiveStandardAttributes {
    readonly in1: SVGAnimatedString;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEComponentTransferElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEComponentTransferElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGFEComponentTransferElement: {
    prototype: SVGFEComponentTransferElement;
    new(): SVGFEComponentTransferElement;
};

/**
 * Corresponds to the <feComposite> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFECompositeElement)
 */
interface SVGFECompositeElement extends SVGElement, SVGFilterPrimitiveStandardAttributes {
    readonly in1: SVGAnimatedString;
    readonly in2: SVGAnimatedString;
    readonly k1: SVGAnimatedNumber;
    readonly k2: SVGAnimatedNumber;
    readonly k3: SVGAnimatedNumber;
    readonly k4: SVGAnimatedNumber;
    readonly operator: SVGAnimatedEnumeration;
    readonly SVG_FECOMPOSITE_OPERATOR_UNKNOWN: 0;
    readonly SVG_FECOMPOSITE_OPERATOR_OVER: 1;
    readonly SVG_FECOMPOSITE_OPERATOR_IN: 2;
    readonly SVG_FECOMPOSITE_OPERATOR_OUT: 3;
    readonly SVG_FECOMPOSITE_OPERATOR_ATOP: 4;
    readonly SVG_FECOMPOSITE_OPERATOR_XOR: 5;
    readonly SVG_FECOMPOSITE_OPERATOR_ARITHMETIC: 6;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFECompositeElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFECompositeElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGFECompositeElement: {
    prototype: SVGFECompositeElement;
    new(): SVGFECompositeElement;
    readonly SVG_FECOMPOSITE_OPERATOR_UNKNOWN: 0;
    readonly SVG_FECOMPOSITE_OPERATOR_OVER: 1;
    readonly SVG_FECOMPOSITE_OPERATOR_IN: 2;
    readonly SVG_FECOMPOSITE_OPERATOR_OUT: 3;
    readonly SVG_FECOMPOSITE_OPERATOR_ATOP: 4;
    readonly SVG_FECOMPOSITE_OPERATOR_XOR: 5;
    readonly SVG_FECOMPOSITE_OPERATOR_ARITHMETIC: 6;
};

/**
 * Corresponds to the <feConvolveMatrix> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFEConvolveMatrixElement)
 */
interface SVGFEConvolveMatrixElement extends SVGElement, SVGFilterPrimitiveStandardAttributes {
    readonly bias: SVGAnimatedNumber;
    readonly divisor: SVGAnimatedNumber;
    readonly edgeMode: SVGAnimatedEnumeration;
    readonly in1: SVGAnimatedString;
    readonly kernelMatrix: SVGAnimatedNumberList;
    readonly kernelUnitLengthX: SVGAnimatedNumber;
    readonly kernelUnitLengthY: SVGAnimatedNumber;
    readonly orderX: SVGAnimatedInteger;
    readonly orderY: SVGAnimatedInteger;
    readonly preserveAlpha: SVGAnimatedBoolean;
    readonly targetX: SVGAnimatedInteger;
    readonly targetY: SVGAnimatedInteger;
    readonly SVG_EDGEMODE_UNKNOWN: 0;
    readonly SVG_EDGEMODE_DUPLICATE: 1;
    readonly SVG_EDGEMODE_WRAP: 2;
    readonly SVG_EDGEMODE_NONE: 3;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEConvolveMatrixElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEConvolveMatrixElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGFEConvolveMatrixElement: {
    prototype: SVGFEConvolveMatrixElement;
    new(): SVGFEConvolveMatrixElement;
    readonly SVG_EDGEMODE_UNKNOWN: 0;
    readonly SVG_EDGEMODE_DUPLICATE: 1;
    readonly SVG_EDGEMODE_WRAP: 2;
    readonly SVG_EDGEMODE_NONE: 3;
};

/**
 * Corresponds to the <feDiffuseLighting> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFEDiffuseLightingElement)
 */
interface SVGFEDiffuseLightingElement extends SVGElement, SVGFilterPrimitiveStandardAttributes {
    readonly diffuseConstant: SVGAnimatedNumber;
    readonly in1: SVGAnimatedString;
    readonly kernelUnitLengthX: SVGAnimatedNumber;
    readonly kernelUnitLengthY: SVGAnimatedNumber;
    readonly surfaceScale: SVGAnimatedNumber;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEDiffuseLightingElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEDiffuseLightingElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGFEDiffuseLightingElement: {
    prototype: SVGFEDiffuseLightingElement;
    new(): SVGFEDiffuseLightingElement;
};

/**
 * Corresponds to the <feDisplacementMap> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFEDisplacementMapElement)
 */
interface SVGFEDisplacementMapElement extends SVGElement, SVGFilterPrimitiveStandardAttributes {
    readonly in1: SVGAnimatedString;
    readonly in2: SVGAnimatedString;
    readonly scale: SVGAnimatedNumber;
    readonly xChannelSelector: SVGAnimatedEnumeration;
    readonly yChannelSelector: SVGAnimatedEnumeration;
    readonly SVG_CHANNEL_UNKNOWN: 0;
    readonly SVG_CHANNEL_R: 1;
    readonly SVG_CHANNEL_G: 2;
    readonly SVG_CHANNEL_B: 3;
    readonly SVG_CHANNEL_A: 4;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEDisplacementMapElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEDisplacementMapElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGFEDisplacementMapElement: {
    prototype: SVGFEDisplacementMapElement;
    new(): SVGFEDisplacementMapElement;
    readonly SVG_CHANNEL_UNKNOWN: 0;
    readonly SVG_CHANNEL_R: 1;
    readonly SVG_CHANNEL_G: 2;
    readonly SVG_CHANNEL_B: 3;
    readonly SVG_CHANNEL_A: 4;
};

/**
 * Corresponds to the <feDistantLight> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFEDistantLightElement)
 */
interface SVGFEDistantLightElement extends SVGElement {
    readonly azimuth: SVGAnimatedNumber;
    readonly elevation: SVGAnimatedNumber;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEDistantLightElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEDistantLightElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGFEDistantLightElement: {
    prototype: SVGFEDistantLightElement;
    new(): SVGFEDistantLightElement;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFEDropShadowElement) */
interface SVGFEDropShadowElement extends SVGElement, SVGFilterPrimitiveStandardAttributes {
    readonly dx: SVGAnimatedNumber;
    readonly dy: SVGAnimatedNumber;
    readonly in1: SVGAnimatedString;
    readonly stdDeviationX: SVGAnimatedNumber;
    readonly stdDeviationY: SVGAnimatedNumber;
    setStdDeviation(stdDeviationX: number, stdDeviationY: number): void;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEDropShadowElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEDropShadowElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGFEDropShadowElement: {
    prototype: SVGFEDropShadowElement;
    new(): SVGFEDropShadowElement;
};

/**
 * Corresponds to the <feFlood> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFEFloodElement)
 */
interface SVGFEFloodElement extends SVGElement, SVGFilterPrimitiveStandardAttributes {
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEFloodElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEFloodElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGFEFloodElement: {
    prototype: SVGFEFloodElement;
    new(): SVGFEFloodElement;
};

/**
 * Corresponds to the <feFuncA> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFEFuncAElement)
 */
interface SVGFEFuncAElement extends SVGComponentTransferFunctionElement {
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEFuncAElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEFuncAElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGFEFuncAElement: {
    prototype: SVGFEFuncAElement;
    new(): SVGFEFuncAElement;
};

/**
 * Corresponds to the <feFuncB> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFEFuncBElement)
 */
interface SVGFEFuncBElement extends SVGComponentTransferFunctionElement {
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEFuncBElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEFuncBElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGFEFuncBElement: {
    prototype: SVGFEFuncBElement;
    new(): SVGFEFuncBElement;
};

/**
 * Corresponds to the <feFuncG> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFEFuncGElement)
 */
interface SVGFEFuncGElement extends SVGComponentTransferFunctionElement {
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEFuncGElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEFuncGElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGFEFuncGElement: {
    prototype: SVGFEFuncGElement;
    new(): SVGFEFuncGElement;
};

/**
 * Corresponds to the <feFuncR> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFEFuncRElement)
 */
interface SVGFEFuncRElement extends SVGComponentTransferFunctionElement {
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEFuncRElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEFuncRElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGFEFuncRElement: {
    prototype: SVGFEFuncRElement;
    new(): SVGFEFuncRElement;
};

/**
 * Corresponds to the <feGaussianBlur> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFEGaussianBlurElement)
 */
interface SVGFEGaussianBlurElement extends SVGElement, SVGFilterPrimitiveStandardAttributes {
    readonly in1: SVGAnimatedString;
    readonly stdDeviationX: SVGAnimatedNumber;
    readonly stdDeviationY: SVGAnimatedNumber;
    setStdDeviation(stdDeviationX: number, stdDeviationY: number): void;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEGaussianBlurElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEGaussianBlurElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGFEGaussianBlurElement: {
    prototype: SVGFEGaussianBlurElement;
    new(): SVGFEGaussianBlurElement;
};

/**
 * Corresponds to the <feImage> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFEImageElement)
 */
interface SVGFEImageElement extends SVGElement, SVGFilterPrimitiveStandardAttributes, SVGURIReference {
    readonly preserveAspectRatio: SVGAnimatedPreserveAspectRatio;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEImageElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEImageElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGFEImageElement: {
    prototype: SVGFEImageElement;
    new(): SVGFEImageElement;
};

/**
 * Corresponds to the <feMerge> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFEMergeElement)
 */
interface SVGFEMergeElement extends SVGElement, SVGFilterPrimitiveStandardAttributes {
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEMergeElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEMergeElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGFEMergeElement: {
    prototype: SVGFEMergeElement;
    new(): SVGFEMergeElement;
};

/**
 * Corresponds to the <feMergeNode> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFEMergeNodeElement)
 */
interface SVGFEMergeNodeElement extends SVGElement {
    readonly in1: SVGAnimatedString;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEMergeNodeElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEMergeNodeElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGFEMergeNodeElement: {
    prototype: SVGFEMergeNodeElement;
    new(): SVGFEMergeNodeElement;
};

/**
 * Corresponds to the <feMorphology> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFEMorphologyElement)
 */
interface SVGFEMorphologyElement extends SVGElement, SVGFilterPrimitiveStandardAttributes {
    readonly in1: SVGAnimatedString;
    readonly operator: SVGAnimatedEnumeration;
    readonly radiusX: SVGAnimatedNumber;
    readonly radiusY: SVGAnimatedNumber;
    readonly SVG_MORPHOLOGY_OPERATOR_UNKNOWN: 0;
    readonly SVG_MORPHOLOGY_OPERATOR_ERODE: 1;
    readonly SVG_MORPHOLOGY_OPERATOR_DILATE: 2;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEMorphologyElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEMorphologyElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGFEMorphologyElement: {
    prototype: SVGFEMorphologyElement;
    new(): SVGFEMorphologyElement;
    readonly SVG_MORPHOLOGY_OPERATOR_UNKNOWN: 0;
    readonly SVG_MORPHOLOGY_OPERATOR_ERODE: 1;
    readonly SVG_MORPHOLOGY_OPERATOR_DILATE: 2;
};

/**
 * Corresponds to the <feOffset> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFEOffsetElement)
 */
interface SVGFEOffsetElement extends SVGElement, SVGFilterPrimitiveStandardAttributes {
    readonly dx: SVGAnimatedNumber;
    readonly dy: SVGAnimatedNumber;
    readonly in1: SVGAnimatedString;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEOffsetElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEOffsetElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGFEOffsetElement: {
    prototype: SVGFEOffsetElement;
    new(): SVGFEOffsetElement;
};

/**
 * Corresponds to the <fePointLight> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFEPointLightElement)
 */
interface SVGFEPointLightElement extends SVGElement {
    readonly x: SVGAnimatedNumber;
    readonly y: SVGAnimatedNumber;
    readonly z: SVGAnimatedNumber;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEPointLightElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFEPointLightElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGFEPointLightElement: {
    prototype: SVGFEPointLightElement;
    new(): SVGFEPointLightElement;
};

/**
 * Corresponds to the <feSpecularLighting> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFESpecularLightingElement)
 */
interface SVGFESpecularLightingElement extends SVGElement, SVGFilterPrimitiveStandardAttributes {
    readonly in1: SVGAnimatedString;
    readonly kernelUnitLengthX: SVGAnimatedNumber;
    readonly kernelUnitLengthY: SVGAnimatedNumber;
    readonly specularConstant: SVGAnimatedNumber;
    readonly specularExponent: SVGAnimatedNumber;
    readonly surfaceScale: SVGAnimatedNumber;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFESpecularLightingElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFESpecularLightingElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGFESpecularLightingElement: {
    prototype: SVGFESpecularLightingElement;
    new(): SVGFESpecularLightingElement;
};

/**
 * Corresponds to the <feSpotLight> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFESpotLightElement)
 */
interface SVGFESpotLightElement extends SVGElement {
    readonly limitingConeAngle: SVGAnimatedNumber;
    readonly pointsAtX: SVGAnimatedNumber;
    readonly pointsAtY: SVGAnimatedNumber;
    readonly pointsAtZ: SVGAnimatedNumber;
    readonly specularExponent: SVGAnimatedNumber;
    readonly x: SVGAnimatedNumber;
    readonly y: SVGAnimatedNumber;
    readonly z: SVGAnimatedNumber;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFESpotLightElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFESpotLightElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGFESpotLightElement: {
    prototype: SVGFESpotLightElement;
    new(): SVGFESpotLightElement;
};

/**
 * Corresponds to the <feTile> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFETileElement)
 */
interface SVGFETileElement extends SVGElement, SVGFilterPrimitiveStandardAttributes {
    readonly in1: SVGAnimatedString;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFETileElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFETileElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGFETileElement: {
    prototype: SVGFETileElement;
    new(): SVGFETileElement;
};

/**
 * Corresponds to the <feTurbulence> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFETurbulenceElement)
 */
interface SVGFETurbulenceElement extends SVGElement, SVGFilterPrimitiveStandardAttributes {
    readonly baseFrequencyX: SVGAnimatedNumber;
    readonly baseFrequencyY: SVGAnimatedNumber;
    readonly numOctaves: SVGAnimatedInteger;
    readonly seed: SVGAnimatedNumber;
    readonly stitchTiles: SVGAnimatedEnumeration;
    readonly type: SVGAnimatedEnumeration;
    readonly SVG_TURBULENCE_TYPE_UNKNOWN: 0;
    readonly SVG_TURBULENCE_TYPE_FRACTALNOISE: 1;
    readonly SVG_TURBULENCE_TYPE_TURBULENCE: 2;
    readonly SVG_STITCHTYPE_UNKNOWN: 0;
    readonly SVG_STITCHTYPE_STITCH: 1;
    readonly SVG_STITCHTYPE_NOSTITCH: 2;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFETurbulenceElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFETurbulenceElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGFETurbulenceElement: {
    prototype: SVGFETurbulenceElement;
    new(): SVGFETurbulenceElement;
    readonly SVG_TURBULENCE_TYPE_UNKNOWN: 0;
    readonly SVG_TURBULENCE_TYPE_FRACTALNOISE: 1;
    readonly SVG_TURBULENCE_TYPE_TURBULENCE: 2;
    readonly SVG_STITCHTYPE_UNKNOWN: 0;
    readonly SVG_STITCHTYPE_STITCH: 1;
    readonly SVG_STITCHTYPE_NOSTITCH: 2;
};

/**
 * Provides access to the properties of <filter> elements, as well as methods to manipulate them.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGFilterElement)
 */
interface SVGFilterElement extends SVGElement, SVGURIReference {
    readonly filterUnits: SVGAnimatedEnumeration;
    readonly height: SVGAnimatedLength;
    readonly primitiveUnits: SVGAnimatedEnumeration;
    readonly width: SVGAnimatedLength;
    readonly x: SVGAnimatedLength;
    readonly y: SVGAnimatedLength;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFilterElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGFilterElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGFilterElement: {
    prototype: SVGFilterElement;
    new(): SVGFilterElement;
};

interface SVGFilterPrimitiveStandardAttributes {
    readonly height: SVGAnimatedLength;
    readonly result: SVGAnimatedString;
    readonly width: SVGAnimatedLength;
    readonly x: SVGAnimatedLength;
    readonly y: SVGAnimatedLength;
}

interface SVGFitToViewBox {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGMarkerElement/preserveAspectRatio) */
    readonly preserveAspectRatio: SVGAnimatedPreserveAspectRatio;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGMarkerElement/viewBox) */
    readonly viewBox: SVGAnimatedRect;
}

/**
 * Provides access to the properties of <foreignObject> elements, as well as methods to manipulate them.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGForeignObjectElement)
 */
interface SVGForeignObjectElement extends SVGGraphicsElement {
    readonly height: SVGAnimatedLength;
    readonly width: SVGAnimatedLength;
    readonly x: SVGAnimatedLength;
    readonly y: SVGAnimatedLength;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGForeignObjectElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGForeignObjectElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGForeignObjectElement: {
    prototype: SVGForeignObjectElement;
    new(): SVGForeignObjectElement;
};

/**
 * Corresponds to the <g> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGGElement)
 */
interface SVGGElement extends SVGGraphicsElement {
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGGElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGGElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGGElement: {
    prototype: SVGGElement;
    new(): SVGGElement;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGGeometryElement) */
interface SVGGeometryElement extends SVGGraphicsElement {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGGeometryElement/pathLength) */
    readonly pathLength: SVGAnimatedNumber;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGGeometryElement/getPointAtLength) */
    getPointAtLength(distance: number): DOMPoint;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGGeometryElement/getTotalLength) */
    getTotalLength(): number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGGeometryElement/isPointInFill) */
    isPointInFill(point?: DOMPointInit): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGGeometryElement/isPointInStroke) */
    isPointInStroke(point?: DOMPointInit): boolean;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGGeometryElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGGeometryElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGGeometryElement: {
    prototype: SVGGeometryElement;
    new(): SVGGeometryElement;
};

/**
 * The SVGGradient interface is a base interface used by SVGLinearGradientElement and SVGRadialGradientElement.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGGradientElement)
 */
interface SVGGradientElement extends SVGElement, SVGURIReference {
    readonly gradientTransform: SVGAnimatedTransformList;
    readonly gradientUnits: SVGAnimatedEnumeration;
    readonly spreadMethod: SVGAnimatedEnumeration;
    readonly SVG_SPREADMETHOD_UNKNOWN: 0;
    readonly SVG_SPREADMETHOD_PAD: 1;
    readonly SVG_SPREADMETHOD_REFLECT: 2;
    readonly SVG_SPREADMETHOD_REPEAT: 3;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGGradientElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGGradientElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGGradientElement: {
    prototype: SVGGradientElement;
    new(): SVGGradientElement;
    readonly SVG_SPREADMETHOD_UNKNOWN: 0;
    readonly SVG_SPREADMETHOD_PAD: 1;
    readonly SVG_SPREADMETHOD_REFLECT: 2;
    readonly SVG_SPREADMETHOD_REPEAT: 3;
};

/**
 * SVG elements whose primary purpose is to directly render graphics into a group.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGGraphicsElement)
 */
interface SVGGraphicsElement extends SVGElement, SVGTests {
    readonly transform: SVGAnimatedTransformList;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGGraphicsElement/getBBox) */
    getBBox(options?: SVGBoundingBoxOptions): DOMRect;
    getCTM(): DOMMatrix | null;
    getScreenCTM(): DOMMatrix | null;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGGraphicsElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGGraphicsElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGGraphicsElement: {
    prototype: SVGGraphicsElement;
    new(): SVGGraphicsElement;
};

/**
 * Corresponds to the <image> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGImageElement)
 */
interface SVGImageElement extends SVGGraphicsElement, SVGURIReference {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGImageElement/height) */
    readonly height: SVGAnimatedLength;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGImageElement/preserveAspectRatio) */
    readonly preserveAspectRatio: SVGAnimatedPreserveAspectRatio;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGImageElement/width) */
    readonly width: SVGAnimatedLength;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGImageElement/x) */
    readonly x: SVGAnimatedLength;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGImageElement/y) */
    readonly y: SVGAnimatedLength;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGImageElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGImageElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGImageElement: {
    prototype: SVGImageElement;
    new(): SVGImageElement;
};

/**
 * Correspond to the <length> basic data type.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGLength)
 */
interface SVGLength {
    readonly unitType: number;
    value: number;
    valueAsString: string;
    valueInSpecifiedUnits: number;
    convertToSpecifiedUnits(unitType: number): void;
    newValueSpecifiedUnits(unitType: number, valueInSpecifiedUnits: number): void;
    readonly SVG_LENGTHTYPE_UNKNOWN: 0;
    readonly SVG_LENGTHTYPE_NUMBER: 1;
    readonly SVG_LENGTHTYPE_PERCENTAGE: 2;
    readonly SVG_LENGTHTYPE_EMS: 3;
    readonly SVG_LENGTHTYPE_EXS: 4;
    readonly SVG_LENGTHTYPE_PX: 5;
    readonly SVG_LENGTHTYPE_CM: 6;
    readonly SVG_LENGTHTYPE_MM: 7;
    readonly SVG_LENGTHTYPE_IN: 8;
    readonly SVG_LENGTHTYPE_PT: 9;
    readonly SVG_LENGTHTYPE_PC: 10;
}

declare var SVGLength: {
    prototype: SVGLength;
    new(): SVGLength;
    readonly SVG_LENGTHTYPE_UNKNOWN: 0;
    readonly SVG_LENGTHTYPE_NUMBER: 1;
    readonly SVG_LENGTHTYPE_PERCENTAGE: 2;
    readonly SVG_LENGTHTYPE_EMS: 3;
    readonly SVG_LENGTHTYPE_EXS: 4;
    readonly SVG_LENGTHTYPE_PX: 5;
    readonly SVG_LENGTHTYPE_CM: 6;
    readonly SVG_LENGTHTYPE_MM: 7;
    readonly SVG_LENGTHTYPE_IN: 8;
    readonly SVG_LENGTHTYPE_PT: 9;
    readonly SVG_LENGTHTYPE_PC: 10;
};

/**
 * The SVGLengthList defines a list of SVGLength objects.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGLengthList)
 */
interface SVGLengthList {
    readonly length: number;
    readonly numberOfItems: number;
    appendItem(newItem: SVGLength): SVGLength;
    clear(): void;
    getItem(index: number): SVGLength;
    initialize(newItem: SVGLength): SVGLength;
    insertItemBefore(newItem: SVGLength, index: number): SVGLength;
    removeItem(index: number): SVGLength;
    replaceItem(newItem: SVGLength, index: number): SVGLength;
    [index: number]: SVGLength;
}

declare var SVGLengthList: {
    prototype: SVGLengthList;
    new(): SVGLengthList;
};

/**
 * Provides access to the properties of <line> elements, as well as methods to manipulate them.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGLineElement)
 */
interface SVGLineElement extends SVGGeometryElement {
    readonly x1: SVGAnimatedLength;
    readonly x2: SVGAnimatedLength;
    readonly y1: SVGAnimatedLength;
    readonly y2: SVGAnimatedLength;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGLineElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGLineElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGLineElement: {
    prototype: SVGLineElement;
    new(): SVGLineElement;
};

/**
 * Corresponds to the <linearGradient> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGLinearGradientElement)
 */
interface SVGLinearGradientElement extends SVGGradientElement {
    readonly x1: SVGAnimatedLength;
    readonly x2: SVGAnimatedLength;
    readonly y1: SVGAnimatedLength;
    readonly y2: SVGAnimatedLength;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGLinearGradientElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGLinearGradientElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGLinearGradientElement: {
    prototype: SVGLinearGradientElement;
    new(): SVGLinearGradientElement;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGMPathElement) */
interface SVGMPathElement extends SVGElement, SVGURIReference {
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGMPathElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGMPathElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGMPathElement: {
    prototype: SVGMPathElement;
    new(): SVGMPathElement;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGMarkerElement) */
interface SVGMarkerElement extends SVGElement, SVGFitToViewBox {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGMarkerElement/markerHeight) */
    readonly markerHeight: SVGAnimatedLength;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGMarkerElement/markerUnits) */
    readonly markerUnits: SVGAnimatedEnumeration;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGMarkerElement/markerWidth) */
    readonly markerWidth: SVGAnimatedLength;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGMarkerElement/orientAngle) */
    readonly orientAngle: SVGAnimatedAngle;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGMarkerElement/orientType) */
    readonly orientType: SVGAnimatedEnumeration;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGMarkerElement/refX) */
    readonly refX: SVGAnimatedLength;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGMarkerElement/refY) */
    readonly refY: SVGAnimatedLength;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGMarkerElement/setOrientToAngle) */
    setOrientToAngle(angle: SVGAngle): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGMarkerElement/setOrientToAuto) */
    setOrientToAuto(): void;
    readonly SVG_MARKERUNITS_UNKNOWN: 0;
    readonly SVG_MARKERUNITS_USERSPACEONUSE: 1;
    readonly SVG_MARKERUNITS_STROKEWIDTH: 2;
    readonly SVG_MARKER_ORIENT_UNKNOWN: 0;
    readonly SVG_MARKER_ORIENT_AUTO: 1;
    readonly SVG_MARKER_ORIENT_ANGLE: 2;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGMarkerElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGMarkerElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGMarkerElement: {
    prototype: SVGMarkerElement;
    new(): SVGMarkerElement;
    readonly SVG_MARKERUNITS_UNKNOWN: 0;
    readonly SVG_MARKERUNITS_USERSPACEONUSE: 1;
    readonly SVG_MARKERUNITS_STROKEWIDTH: 2;
    readonly SVG_MARKER_ORIENT_UNKNOWN: 0;
    readonly SVG_MARKER_ORIENT_AUTO: 1;
    readonly SVG_MARKER_ORIENT_ANGLE: 2;
};

/**
 * Provides access to the properties of <mask> elements, as well as methods to manipulate them.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGMaskElement)
 */
interface SVGMaskElement extends SVGElement {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGMaskElement/height) */
    readonly height: SVGAnimatedLength;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGMaskElement/maskContentUnits) */
    readonly maskContentUnits: SVGAnimatedEnumeration;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGMaskElement/maskUnits) */
    readonly maskUnits: SVGAnimatedEnumeration;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGMaskElement/width) */
    readonly width: SVGAnimatedLength;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGMaskElement/x) */
    readonly x: SVGAnimatedLength;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGMaskElement/y) */
    readonly y: SVGAnimatedLength;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGMaskElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGMaskElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGMaskElement: {
    prototype: SVGMaskElement;
    new(): SVGMaskElement;
};

/**
 * Corresponds to the <metadata> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGMetadataElement)
 */
interface SVGMetadataElement extends SVGElement {
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGMetadataElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGMetadataElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGMetadataElement: {
    prototype: SVGMetadataElement;
    new(): SVGMetadataElement;
};

/**
 * Corresponds to the <number> basic data type.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGNumber)
 */
interface SVGNumber {
    value: number;
}

declare var SVGNumber: {
    prototype: SVGNumber;
    new(): SVGNumber;
};

/**
 * The SVGNumberList defines a list of SVGNumber objects.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGNumberList)
 */
interface SVGNumberList {
    readonly length: number;
    readonly numberOfItems: number;
    appendItem(newItem: SVGNumber): SVGNumber;
    clear(): void;
    getItem(index: number): SVGNumber;
    initialize(newItem: SVGNumber): SVGNumber;
    insertItemBefore(newItem: SVGNumber, index: number): SVGNumber;
    removeItem(index: number): SVGNumber;
    replaceItem(newItem: SVGNumber, index: number): SVGNumber;
    [index: number]: SVGNumber;
}

declare var SVGNumberList: {
    prototype: SVGNumberList;
    new(): SVGNumberList;
};

/**
 * Corresponds to the <path> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGPathElement)
 */
interface SVGPathElement extends SVGGeometryElement {
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGPathElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGPathElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGPathElement: {
    prototype: SVGPathElement;
    new(): SVGPathElement;
};

/**
 * Corresponds to the <pattern> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGPatternElement)
 */
interface SVGPatternElement extends SVGElement, SVGFitToViewBox, SVGURIReference {
    readonly height: SVGAnimatedLength;
    readonly patternContentUnits: SVGAnimatedEnumeration;
    readonly patternTransform: SVGAnimatedTransformList;
    readonly patternUnits: SVGAnimatedEnumeration;
    readonly width: SVGAnimatedLength;
    readonly x: SVGAnimatedLength;
    readonly y: SVGAnimatedLength;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGPatternElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGPatternElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGPatternElement: {
    prototype: SVGPatternElement;
    new(): SVGPatternElement;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGPointList) */
interface SVGPointList {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGPointList/length) */
    readonly length: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGPointList/numberOfItems) */
    readonly numberOfItems: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGPointList/appendItem) */
    appendItem(newItem: DOMPoint): DOMPoint;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGPointList/clear) */
    clear(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGPointList/getItem) */
    getItem(index: number): DOMPoint;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGPointList/initialize) */
    initialize(newItem: DOMPoint): DOMPoint;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGPointList/insertItemBefore) */
    insertItemBefore(newItem: DOMPoint, index: number): DOMPoint;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGPointList/removeItem) */
    removeItem(index: number): DOMPoint;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGPointList/replaceItem) */
    replaceItem(newItem: DOMPoint, index: number): DOMPoint;
    [index: number]: DOMPoint;
}

declare var SVGPointList: {
    prototype: SVGPointList;
    new(): SVGPointList;
};

/**
 * Provides access to the properties of <polygon> elements, as well as methods to manipulate them.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGPolygonElement)
 */
interface SVGPolygonElement extends SVGGeometryElement, SVGAnimatedPoints {
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGPolygonElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGPolygonElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGPolygonElement: {
    prototype: SVGPolygonElement;
    new(): SVGPolygonElement;
};

/**
 * Provides access to the properties of <polyline> elements, as well as methods to manipulate them.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGPolylineElement)
 */
interface SVGPolylineElement extends SVGGeometryElement, SVGAnimatedPoints {
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGPolylineElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGPolylineElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGPolylineElement: {
    prototype: SVGPolylineElement;
    new(): SVGPolylineElement;
};

/**
 * Corresponds to the preserveAspectRatio attribute, which is available for some of SVG's elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGPreserveAspectRatio)
 */
interface SVGPreserveAspectRatio {
    align: number;
    meetOrSlice: number;
    readonly SVG_PRESERVEASPECTRATIO_UNKNOWN: 0;
    readonly SVG_PRESERVEASPECTRATIO_NONE: 1;
    readonly SVG_PRESERVEASPECTRATIO_XMINYMIN: 2;
    readonly SVG_PRESERVEASPECTRATIO_XMIDYMIN: 3;
    readonly SVG_PRESERVEASPECTRATIO_XMAXYMIN: 4;
    readonly SVG_PRESERVEASPECTRATIO_XMINYMID: 5;
    readonly SVG_PRESERVEASPECTRATIO_XMIDYMID: 6;
    readonly SVG_PRESERVEASPECTRATIO_XMAXYMID: 7;
    readonly SVG_PRESERVEASPECTRATIO_XMINYMAX: 8;
    readonly SVG_PRESERVEASPECTRATIO_XMIDYMAX: 9;
    readonly SVG_PRESERVEASPECTRATIO_XMAXYMAX: 10;
    readonly SVG_MEETORSLICE_UNKNOWN: 0;
    readonly SVG_MEETORSLICE_MEET: 1;
    readonly SVG_MEETORSLICE_SLICE: 2;
}

declare var SVGPreserveAspectRatio: {
    prototype: SVGPreserveAspectRatio;
    new(): SVGPreserveAspectRatio;
    readonly SVG_PRESERVEASPECTRATIO_UNKNOWN: 0;
    readonly SVG_PRESERVEASPECTRATIO_NONE: 1;
    readonly SVG_PRESERVEASPECTRATIO_XMINYMIN: 2;
    readonly SVG_PRESERVEASPECTRATIO_XMIDYMIN: 3;
    readonly SVG_PRESERVEASPECTRATIO_XMAXYMIN: 4;
    readonly SVG_PRESERVEASPECTRATIO_XMINYMID: 5;
    readonly SVG_PRESERVEASPECTRATIO_XMIDYMID: 6;
    readonly SVG_PRESERVEASPECTRATIO_XMAXYMID: 7;
    readonly SVG_PRESERVEASPECTRATIO_XMINYMAX: 8;
    readonly SVG_PRESERVEASPECTRATIO_XMIDYMAX: 9;
    readonly SVG_PRESERVEASPECTRATIO_XMAXYMAX: 10;
    readonly SVG_MEETORSLICE_UNKNOWN: 0;
    readonly SVG_MEETORSLICE_MEET: 1;
    readonly SVG_MEETORSLICE_SLICE: 2;
};

/**
 * Corresponds to the <RadialGradient> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGRadialGradientElement)
 */
interface SVGRadialGradientElement extends SVGGradientElement {
    readonly cx: SVGAnimatedLength;
    readonly cy: SVGAnimatedLength;
    readonly fr: SVGAnimatedLength;
    readonly fx: SVGAnimatedLength;
    readonly fy: SVGAnimatedLength;
    readonly r: SVGAnimatedLength;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGRadialGradientElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGRadialGradientElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGRadialGradientElement: {
    prototype: SVGRadialGradientElement;
    new(): SVGRadialGradientElement;
};

/**
 * Provides access to the properties of <rect> elements, as well as methods to manipulate them.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGRectElement)
 */
interface SVGRectElement extends SVGGeometryElement {
    readonly height: SVGAnimatedLength;
    readonly rx: SVGAnimatedLength;
    readonly ry: SVGAnimatedLength;
    readonly width: SVGAnimatedLength;
    readonly x: SVGAnimatedLength;
    readonly y: SVGAnimatedLength;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGRectElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGRectElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGRectElement: {
    prototype: SVGRectElement;
    new(): SVGRectElement;
};

interface SVGSVGElementEventMap extends SVGElementEventMap, WindowEventHandlersEventMap {
}

/**
 * Provides access to the properties of <svg> elements, as well as methods to manipulate them. This interface contains also various miscellaneous commonly-used utility methods, such as matrix operations and the ability to control the time of redraw on visual rendering devices.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGSVGElement)
 */
interface SVGSVGElement extends SVGGraphicsElement, SVGFitToViewBox, WindowEventHandlers {
    currentScale: number;
    readonly currentTranslate: DOMPointReadOnly;
    readonly height: SVGAnimatedLength;
    readonly width: SVGAnimatedLength;
    readonly x: SVGAnimatedLength;
    readonly y: SVGAnimatedLength;
    animationsPaused(): boolean;
    checkEnclosure(element: SVGElement, rect: DOMRectReadOnly): boolean;
    checkIntersection(element: SVGElement, rect: DOMRectReadOnly): boolean;
    createSVGAngle(): SVGAngle;
    createSVGLength(): SVGLength;
    createSVGMatrix(): DOMMatrix;
    createSVGNumber(): SVGNumber;
    createSVGPoint(): DOMPoint;
    createSVGRect(): DOMRect;
    createSVGTransform(): SVGTransform;
    createSVGTransformFromMatrix(matrix?: DOMMatrix2DInit): SVGTransform;
    deselectAll(): void;
    /** @deprecated */
    forceRedraw(): void;
    getCurrentTime(): number;
    getElementById(elementId: string): Element;
    getEnclosureList(rect: DOMRectReadOnly, referenceElement: SVGElement | null): NodeListOf<SVGCircleElement | SVGEllipseElement | SVGImageElement | SVGLineElement | SVGPathElement | SVGPolygonElement | SVGPolylineElement | SVGRectElement | SVGTextElement | SVGUseElement>;
    getIntersectionList(rect: DOMRectReadOnly, referenceElement: SVGElement | null): NodeListOf<SVGCircleElement | SVGEllipseElement | SVGImageElement | SVGLineElement | SVGPathElement | SVGPolygonElement | SVGPolylineElement | SVGRectElement | SVGTextElement | SVGUseElement>;
    pauseAnimations(): void;
    setCurrentTime(seconds: number): void;
    /** @deprecated */
    suspendRedraw(maxWaitMilliseconds: number): number;
    unpauseAnimations(): void;
    /** @deprecated */
    unsuspendRedraw(suspendHandleID: number): void;
    /** @deprecated */
    unsuspendRedrawAll(): void;
    addEventListener<K extends keyof SVGSVGElementEventMap>(type: K, listener: (this: SVGSVGElement, ev: SVGSVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGSVGElementEventMap>(type: K, listener: (this: SVGSVGElement, ev: SVGSVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGSVGElement: {
    prototype: SVGSVGElement;
    new(): SVGSVGElement;
};

/**
 * Corresponds to the SVG <script> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGScriptElement)
 */
interface SVGScriptElement extends SVGElement, SVGURIReference {
    type: string;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGScriptElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGScriptElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGScriptElement: {
    prototype: SVGScriptElement;
    new(): SVGScriptElement;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGSetElement) */
interface SVGSetElement extends SVGAnimationElement {
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGSetElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGSetElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGSetElement: {
    prototype: SVGSetElement;
    new(): SVGSetElement;
};

/**
 * Corresponds to the <stop> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGStopElement)
 */
interface SVGStopElement extends SVGElement {
    readonly offset: SVGAnimatedNumber;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGStopElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGStopElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGStopElement: {
    prototype: SVGStopElement;
    new(): SVGStopElement;
};

/**
 * The SVGStringList defines a list of DOMString objects.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGStringList)
 */
interface SVGStringList {
    readonly length: number;
    readonly numberOfItems: number;
    appendItem(newItem: string): string;
    clear(): void;
    getItem(index: number): string;
    initialize(newItem: string): string;
    insertItemBefore(newItem: string, index: number): string;
    removeItem(index: number): string;
    replaceItem(newItem: string, index: number): string;
    [index: number]: string;
}

declare var SVGStringList: {
    prototype: SVGStringList;
    new(): SVGStringList;
};

/**
 * Corresponds to the SVG <style> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGStyleElement)
 */
interface SVGStyleElement extends SVGElement, LinkStyle {
    disabled: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGStyleElement/media) */
    media: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGStyleElement/title) */
    title: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGStyleElement/type)
     */
    type: string;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGStyleElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGStyleElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGStyleElement: {
    prototype: SVGStyleElement;
    new(): SVGStyleElement;
};

/**
 * Corresponds to the <switch> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGSwitchElement)
 */
interface SVGSwitchElement extends SVGGraphicsElement {
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGSwitchElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGSwitchElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGSwitchElement: {
    prototype: SVGSwitchElement;
    new(): SVGSwitchElement;
};

/**
 * Corresponds to the <symbol> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGSymbolElement)
 */
interface SVGSymbolElement extends SVGElement, SVGFitToViewBox {
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGSymbolElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGSymbolElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGSymbolElement: {
    prototype: SVGSymbolElement;
    new(): SVGSymbolElement;
};

/**
 * A <tspan> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGTSpanElement)
 */
interface SVGTSpanElement extends SVGTextPositioningElement {
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGTSpanElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGTSpanElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGTSpanElement: {
    prototype: SVGTSpanElement;
    new(): SVGTSpanElement;
};

interface SVGTests {
    readonly requiredExtensions: SVGStringList;
    readonly systemLanguage: SVGStringList;
}

/**
 * Implemented by elements that support rendering child text content. It is inherited by various text-related interfaces, such as SVGTextElement, SVGTSpanElement, SVGTRefElement, SVGAltGlyphElement and SVGTextPathElement.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGTextContentElement)
 */
interface SVGTextContentElement extends SVGGraphicsElement {
    readonly lengthAdjust: SVGAnimatedEnumeration;
    readonly textLength: SVGAnimatedLength;
    getCharNumAtPosition(point?: DOMPointInit): number;
    getComputedTextLength(): number;
    getEndPositionOfChar(charnum: number): DOMPoint;
    getExtentOfChar(charnum: number): DOMRect;
    getNumberOfChars(): number;
    getRotationOfChar(charnum: number): number;
    getStartPositionOfChar(charnum: number): DOMPoint;
    getSubStringLength(charnum: number, nchars: number): number;
    /** @deprecated */
    selectSubString(charnum: number, nchars: number): void;
    readonly LENGTHADJUST_UNKNOWN: 0;
    readonly LENGTHADJUST_SPACING: 1;
    readonly LENGTHADJUST_SPACINGANDGLYPHS: 2;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGTextContentElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGTextContentElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGTextContentElement: {
    prototype: SVGTextContentElement;
    new(): SVGTextContentElement;
    readonly LENGTHADJUST_UNKNOWN: 0;
    readonly LENGTHADJUST_SPACING: 1;
    readonly LENGTHADJUST_SPACINGANDGLYPHS: 2;
};

/**
 * Corresponds to the <text> elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGTextElement)
 */
interface SVGTextElement extends SVGTextPositioningElement {
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGTextElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGTextElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGTextElement: {
    prototype: SVGTextElement;
    new(): SVGTextElement;
};

/**
 * Corresponds to the <textPath> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGTextPathElement)
 */
interface SVGTextPathElement extends SVGTextContentElement, SVGURIReference {
    readonly method: SVGAnimatedEnumeration;
    readonly spacing: SVGAnimatedEnumeration;
    readonly startOffset: SVGAnimatedLength;
    readonly TEXTPATH_METHODTYPE_UNKNOWN: 0;
    readonly TEXTPATH_METHODTYPE_ALIGN: 1;
    readonly TEXTPATH_METHODTYPE_STRETCH: 2;
    readonly TEXTPATH_SPACINGTYPE_UNKNOWN: 0;
    readonly TEXTPATH_SPACINGTYPE_AUTO: 1;
    readonly TEXTPATH_SPACINGTYPE_EXACT: 2;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGTextPathElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGTextPathElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGTextPathElement: {
    prototype: SVGTextPathElement;
    new(): SVGTextPathElement;
    readonly TEXTPATH_METHODTYPE_UNKNOWN: 0;
    readonly TEXTPATH_METHODTYPE_ALIGN: 1;
    readonly TEXTPATH_METHODTYPE_STRETCH: 2;
    readonly TEXTPATH_SPACINGTYPE_UNKNOWN: 0;
    readonly TEXTPATH_SPACINGTYPE_AUTO: 1;
    readonly TEXTPATH_SPACINGTYPE_EXACT: 2;
};

/**
 * Implemented by elements that support attributes that position individual text glyphs. It is inherited by SVGTextElement, SVGTSpanElement, SVGTRefElement and SVGAltGlyphElement.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGTextPositioningElement)
 */
interface SVGTextPositioningElement extends SVGTextContentElement {
    readonly dx: SVGAnimatedLengthList;
    readonly dy: SVGAnimatedLengthList;
    readonly rotate: SVGAnimatedNumberList;
    readonly x: SVGAnimatedLengthList;
    readonly y: SVGAnimatedLengthList;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGTextPositioningElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGTextPositioningElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGTextPositioningElement: {
    prototype: SVGTextPositioningElement;
    new(): SVGTextPositioningElement;
};

/**
 * Corresponds to the <title> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGTitleElement)
 */
interface SVGTitleElement extends SVGElement {
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGTitleElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGTitleElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGTitleElement: {
    prototype: SVGTitleElement;
    new(): SVGTitleElement;
};

/**
 * SVGTransform is the interface for one of the component transformations within an SVGTransformList; thus, an SVGTransform object corresponds to a single component (e.g., scale(…) or matrix(…)) within a transform attribute.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGTransform)
 */
interface SVGTransform {
    readonly angle: number;
    readonly matrix: DOMMatrix;
    readonly type: number;
    setMatrix(matrix?: DOMMatrix2DInit): void;
    setRotate(angle: number, cx: number, cy: number): void;
    setScale(sx: number, sy: number): void;
    setSkewX(angle: number): void;
    setSkewY(angle: number): void;
    setTranslate(tx: number, ty: number): void;
    readonly SVG_TRANSFORM_UNKNOWN: 0;
    readonly SVG_TRANSFORM_MATRIX: 1;
    readonly SVG_TRANSFORM_TRANSLATE: 2;
    readonly SVG_TRANSFORM_SCALE: 3;
    readonly SVG_TRANSFORM_ROTATE: 4;
    readonly SVG_TRANSFORM_SKEWX: 5;
    readonly SVG_TRANSFORM_SKEWY: 6;
}

declare var SVGTransform: {
    prototype: SVGTransform;
    new(): SVGTransform;
    readonly SVG_TRANSFORM_UNKNOWN: 0;
    readonly SVG_TRANSFORM_MATRIX: 1;
    readonly SVG_TRANSFORM_TRANSLATE: 2;
    readonly SVG_TRANSFORM_SCALE: 3;
    readonly SVG_TRANSFORM_ROTATE: 4;
    readonly SVG_TRANSFORM_SKEWX: 5;
    readonly SVG_TRANSFORM_SKEWY: 6;
};

/**
 * The SVGTransformList defines a list of SVGTransform objects.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGTransformList)
 */
interface SVGTransformList {
    readonly length: number;
    readonly numberOfItems: number;
    appendItem(newItem: SVGTransform): SVGTransform;
    clear(): void;
    consolidate(): SVGTransform | null;
    createSVGTransformFromMatrix(matrix?: DOMMatrix2DInit): SVGTransform;
    getItem(index: number): SVGTransform;
    initialize(newItem: SVGTransform): SVGTransform;
    insertItemBefore(newItem: SVGTransform, index: number): SVGTransform;
    removeItem(index: number): SVGTransform;
    replaceItem(newItem: SVGTransform, index: number): SVGTransform;
    [index: number]: SVGTransform;
}

declare var SVGTransformList: {
    prototype: SVGTransformList;
    new(): SVGTransformList;
};

interface SVGURIReference {
    readonly href: SVGAnimatedString;
}

/**
 * A commonly used set of constants used for reflecting gradientUnits, patternContentUnits and other similar attributes.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGUnitTypes)
 */
interface SVGUnitTypes {
    readonly SVG_UNIT_TYPE_UNKNOWN: 0;
    readonly SVG_UNIT_TYPE_USERSPACEONUSE: 1;
    readonly SVG_UNIT_TYPE_OBJECTBOUNDINGBOX: 2;
}

declare var SVGUnitTypes: {
    prototype: SVGUnitTypes;
    new(): SVGUnitTypes;
    readonly SVG_UNIT_TYPE_UNKNOWN: 0;
    readonly SVG_UNIT_TYPE_USERSPACEONUSE: 1;
    readonly SVG_UNIT_TYPE_OBJECTBOUNDINGBOX: 2;
};

/**
 * Corresponds to the <use> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGUseElement)
 */
interface SVGUseElement extends SVGGraphicsElement, SVGURIReference {
    readonly height: SVGAnimatedLength;
    readonly width: SVGAnimatedLength;
    readonly x: SVGAnimatedLength;
    readonly y: SVGAnimatedLength;
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGUseElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGUseElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGUseElement: {
    prototype: SVGUseElement;
    new(): SVGUseElement;
};

/**
 * Provides access to the properties of <view> elements, as well as methods to manipulate them.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGViewElement)
 */
interface SVGViewElement extends SVGElement, SVGFitToViewBox {
    addEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGViewElement, ev: SVGElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SVGElementEventMap>(type: K, listener: (this: SVGViewElement, ev: SVGElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SVGViewElement: {
    prototype: SVGViewElement;
    new(): SVGViewElement;
};

/**
 * A screen, usually the one on which the current window is being rendered, and is obtained using window.screen.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Screen)
 */
interface Screen {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Screen/availHeight) */
    readonly availHeight: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Screen/availWidth) */
    readonly availWidth: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Screen/colorDepth) */
    readonly colorDepth: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Screen/height) */
    readonly height: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Screen/orientation) */
    readonly orientation: ScreenOrientation;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Screen/pixelDepth) */
    readonly pixelDepth: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Screen/width) */
    readonly width: number;
}

declare var Screen: {
    prototype: Screen;
    new(): Screen;
};

interface ScreenOrientationEventMap {
    "change": Event;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ScreenOrientation) */
interface ScreenOrientation extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ScreenOrientation/angle) */
    readonly angle: number;
    onchange: ((this: ScreenOrientation, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ScreenOrientation/type) */
    readonly type: OrientationType;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ScreenOrientation/unlock) */
    unlock(): void;
    addEventListener<K extends keyof ScreenOrientationEventMap>(type: K, listener: (this: ScreenOrientation, ev: ScreenOrientationEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof ScreenOrientationEventMap>(type: K, listener: (this: ScreenOrientation, ev: ScreenOrientationEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var ScreenOrientation: {
    prototype: ScreenOrientation;
    new(): ScreenOrientation;
};

interface ScriptProcessorNodeEventMap {
    "audioprocess": AudioProcessingEvent;
}

/**
 * Allows the generation, processing, or analyzing of audio using JavaScript.
 * @deprecated As of the August 29 2014 Web Audio API spec publication, this feature has been marked as deprecated, and was replaced by AudioWorklet (see AudioWorkletNode).
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ScriptProcessorNode)
 */
interface ScriptProcessorNode extends AudioNode {
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ScriptProcessorNode/bufferSize)
     */
    readonly bufferSize: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ScriptProcessorNode/audioprocess_event)
     */
    onaudioprocess: ((this: ScriptProcessorNode, ev: AudioProcessingEvent) => any) | null;
    addEventListener<K extends keyof ScriptProcessorNodeEventMap>(type: K, listener: (this: ScriptProcessorNode, ev: ScriptProcessorNodeEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof ScriptProcessorNodeEventMap>(type: K, listener: (this: ScriptProcessorNode, ev: ScriptProcessorNodeEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

/** @deprecated */
declare var ScriptProcessorNode: {
    prototype: ScriptProcessorNode;
    new(): ScriptProcessorNode;
};

/**
 * Inherits from Event, and represents the event object of an event sent on a document or worker when its content security policy is violated.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SecurityPolicyViolationEvent)
 */
interface SecurityPolicyViolationEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SecurityPolicyViolationEvent/blockedURI) */
    readonly blockedURI: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SecurityPolicyViolationEvent/columnNumber) */
    readonly columnNumber: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SecurityPolicyViolationEvent/disposition) */
    readonly disposition: SecurityPolicyViolationEventDisposition;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SecurityPolicyViolationEvent/documentURI) */
    readonly documentURI: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SecurityPolicyViolationEvent/effectiveDirective) */
    readonly effectiveDirective: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SecurityPolicyViolationEvent/lineNumber) */
    readonly lineNumber: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SecurityPolicyViolationEvent/originalPolicy) */
    readonly originalPolicy: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SecurityPolicyViolationEvent/referrer) */
    readonly referrer: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SecurityPolicyViolationEvent/sample) */
    readonly sample: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SecurityPolicyViolationEvent/sourceFile) */
    readonly sourceFile: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SecurityPolicyViolationEvent/statusCode) */
    readonly statusCode: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SecurityPolicyViolationEvent/violatedDirective) */
    readonly violatedDirective: string;
}

declare var SecurityPolicyViolationEvent: {
    prototype: SecurityPolicyViolationEvent;
    new(type: string, eventInitDict?: SecurityPolicyViolationEventInit): SecurityPolicyViolationEvent;
};

/**
 * A Selection object represents the range of text selected by the user or the current position of the caret. To obtain a Selection object for examination or modification, call Window.getSelection().
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Selection)
 */
interface Selection {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Selection/anchorNode) */
    readonly anchorNode: Node | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Selection/anchorOffset) */
    readonly anchorOffset: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Selection/focusNode) */
    readonly focusNode: Node | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Selection/focusOffset) */
    readonly focusOffset: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Selection/isCollapsed) */
    readonly isCollapsed: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Selection/rangeCount) */
    readonly rangeCount: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Selection/type) */
    readonly type: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Selection/addRange) */
    addRange(range: Range): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Selection/collapse) */
    collapse(node: Node | null, offset?: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Selection/collapseToEnd) */
    collapseToEnd(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Selection/collapseToStart) */
    collapseToStart(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Selection/containsNode) */
    containsNode(node: Node, allowPartialContainment?: boolean): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Selection/deleteFromDocument) */
    deleteFromDocument(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Selection/removeAllRanges) */
    empty(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Selection/extend) */
    extend(node: Node, offset?: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Selection/getRangeAt) */
    getRangeAt(index: number): Range;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Selection/modify) */
    modify(alter?: string, direction?: string, granularity?: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Selection/removeAllRanges) */
    removeAllRanges(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Selection/removeRange) */
    removeRange(range: Range): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Selection/selectAllChildren) */
    selectAllChildren(node: Node): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Selection/setBaseAndExtent) */
    setBaseAndExtent(anchorNode: Node, anchorOffset: number, focusNode: Node, focusOffset: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Selection/collapse) */
    setPosition(node: Node | null, offset?: number): void;
    toString(): string;
}

declare var Selection: {
    prototype: Selection;
    new(): Selection;
};

interface ServiceWorkerEventMap extends AbstractWorkerEventMap {
    "statechange": Event;
}

/**
 * This ServiceWorker API interface provides a reference to a service worker. Multiple browsing contexts (e.g. pages, workers, etc.) can be associated with the same service worker, each through a unique ServiceWorker object.
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ServiceWorker)
 */
interface ServiceWorker extends EventTarget, AbstractWorker {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ServiceWorker/statechange_event) */
    onstatechange: ((this: ServiceWorker, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ServiceWorker/scriptURL) */
    readonly scriptURL: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ServiceWorker/state) */
    readonly state: ServiceWorkerState;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ServiceWorker/postMessage) */
    postMessage(message: any, transfer: Transferable[]): void;
    postMessage(message: any, options?: StructuredSerializeOptions): void;
    addEventListener<K extends keyof ServiceWorkerEventMap>(type: K, listener: (this: ServiceWorker, ev: ServiceWorkerEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof ServiceWorkerEventMap>(type: K, listener: (this: ServiceWorker, ev: ServiceWorkerEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var ServiceWorker: {
    prototype: ServiceWorker;
    new(): ServiceWorker;
};

interface ServiceWorkerContainerEventMap {
    "controllerchange": Event;
    "message": MessageEvent;
    "messageerror": MessageEvent;
}

/**
 * The ServiceWorkerContainer interface of the ServiceWorker API provides an object representing the service worker as an overall unit in the network ecosystem, including facilities to register, unregister and update service workers, and access the state of service workers and their registrations.
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ServiceWorkerContainer)
 */
interface ServiceWorkerContainer extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ServiceWorkerContainer/controller) */
    readonly controller: ServiceWorker | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ServiceWorkerContainer/controllerchange_event) */
    oncontrollerchange: ((this: ServiceWorkerContainer, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ServiceWorkerContainer/message_event) */
    onmessage: ((this: ServiceWorkerContainer, ev: MessageEvent) => any) | null;
    onmessageerror: ((this: ServiceWorkerContainer, ev: MessageEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ServiceWorkerContainer/ready) */
    readonly ready: Promise<ServiceWorkerRegistration>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ServiceWorkerContainer/getRegistration) */
    getRegistration(clientURL?: string | URL): Promise<ServiceWorkerRegistration | undefined>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ServiceWorkerContainer/getRegistrations) */
    getRegistrations(): Promise<ReadonlyArray<ServiceWorkerRegistration>>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ServiceWorkerContainer/register) */
    register(scriptURL: string | URL, options?: RegistrationOptions): Promise<ServiceWorkerRegistration>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ServiceWorkerContainer/startMessages) */
    startMessages(): void;
    addEventListener<K extends keyof ServiceWorkerContainerEventMap>(type: K, listener: (this: ServiceWorkerContainer, ev: ServiceWorkerContainerEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof ServiceWorkerContainerEventMap>(type: K, listener: (this: ServiceWorkerContainer, ev: ServiceWorkerContainerEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var ServiceWorkerContainer: {
    prototype: ServiceWorkerContainer;
    new(): ServiceWorkerContainer;
};

interface ServiceWorkerRegistrationEventMap {
    "updatefound": Event;
}

/**
 * This ServiceWorker API interface represents the service worker registration. You register a service worker to control one or more pages that share the same origin.
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ServiceWorkerRegistration)
 */
interface ServiceWorkerRegistration extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ServiceWorkerRegistration/active) */
    readonly active: ServiceWorker | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ServiceWorkerRegistration/installing) */
    readonly installing: ServiceWorker | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ServiceWorkerRegistration/navigationPreload) */
    readonly navigationPreload: NavigationPreloadManager;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ServiceWorkerRegistration/updatefound_event) */
    onupdatefound: ((this: ServiceWorkerRegistration, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ServiceWorkerRegistration/pushManager) */
    readonly pushManager: PushManager;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ServiceWorkerRegistration/scope) */
    readonly scope: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ServiceWorkerRegistration/updateViaCache) */
    readonly updateViaCache: ServiceWorkerUpdateViaCache;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ServiceWorkerRegistration/waiting) */
    readonly waiting: ServiceWorker | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ServiceWorkerRegistration/getNotifications) */
    getNotifications(filter?: GetNotificationOptions): Promise<Notification[]>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ServiceWorkerRegistration/showNotification) */
    showNotification(title: string, options?: NotificationOptions): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ServiceWorkerRegistration/unregister) */
    unregister(): Promise<boolean>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ServiceWorkerRegistration/update) */
    update(): Promise<void>;
    addEventListener<K extends keyof ServiceWorkerRegistrationEventMap>(type: K, listener: (this: ServiceWorkerRegistration, ev: ServiceWorkerRegistrationEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof ServiceWorkerRegistrationEventMap>(type: K, listener: (this: ServiceWorkerRegistration, ev: ServiceWorkerRegistrationEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var ServiceWorkerRegistration: {
    prototype: ServiceWorkerRegistration;
    new(): ServiceWorkerRegistration;
};

interface ShadowRootEventMap {
    "slotchange": Event;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ShadowRoot) */
interface ShadowRoot extends DocumentFragment, DocumentOrShadowRoot, InnerHTML {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ShadowRoot/delegatesFocus) */
    readonly delegatesFocus: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ShadowRoot/host) */
    readonly host: Element;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ShadowRoot/mode) */
    readonly mode: ShadowRootMode;
    onslotchange: ((this: ShadowRoot, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ShadowRoot/slotAssignment) */
    readonly slotAssignment: SlotAssignmentMode;
    /** Throws a "NotSupportedError" DOMException if context object is a shadow root. */
    addEventListener<K extends keyof ShadowRootEventMap>(type: K, listener: (this: ShadowRoot, ev: ShadowRootEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof ShadowRootEventMap>(type: K, listener: (this: ShadowRoot, ev: ShadowRootEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var ShadowRoot: {
    prototype: ShadowRoot;
    new(): ShadowRoot;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SharedWorker) */
interface SharedWorker extends EventTarget, AbstractWorker {
    /**
     * Returns sharedWorker's MessagePort object which can be used to communicate with the global environment.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SharedWorker/port)
     */
    readonly port: MessagePort;
    addEventListener<K extends keyof AbstractWorkerEventMap>(type: K, listener: (this: SharedWorker, ev: AbstractWorkerEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof AbstractWorkerEventMap>(type: K, listener: (this: SharedWorker, ev: AbstractWorkerEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SharedWorker: {
    prototype: SharedWorker;
    new(scriptURL: string | URL, options?: string | WorkerOptions): SharedWorker;
};

interface Slottable {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/assignedSlot) */
    readonly assignedSlot: HTMLSlotElement | null;
}

interface SourceBufferEventMap {
    "abort": Event;
    "error": Event;
    "update": Event;
    "updateend": Event;
    "updatestart": Event;
}

/**
 * A chunk of media to be passed into an HTMLMediaElement and played, via a MediaSource object. This can be made up of one or several media segments.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SourceBuffer)
 */
interface SourceBuffer extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SourceBuffer/appendWindowEnd) */
    appendWindowEnd: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SourceBuffer/appendWindowStart) */
    appendWindowStart: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SourceBuffer/buffered) */
    readonly buffered: TimeRanges;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SourceBuffer/mode) */
    mode: AppendMode;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SourceBuffer/abort_event) */
    onabort: ((this: SourceBuffer, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SourceBuffer/error_event) */
    onerror: ((this: SourceBuffer, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SourceBuffer/update_event) */
    onupdate: ((this: SourceBuffer, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SourceBuffer/updateend_event) */
    onupdateend: ((this: SourceBuffer, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SourceBuffer/updatestart_event) */
    onupdatestart: ((this: SourceBuffer, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SourceBuffer/timestampOffset) */
    timestampOffset: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SourceBuffer/updating) */
    readonly updating: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SourceBuffer/abort) */
    abort(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SourceBuffer/appendBuffer) */
    appendBuffer(data: BufferSource): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SourceBuffer/changeType) */
    changeType(type: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SourceBuffer/remove) */
    remove(start: number, end: number): void;
    addEventListener<K extends keyof SourceBufferEventMap>(type: K, listener: (this: SourceBuffer, ev: SourceBufferEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SourceBufferEventMap>(type: K, listener: (this: SourceBuffer, ev: SourceBufferEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SourceBuffer: {
    prototype: SourceBuffer;
    new(): SourceBuffer;
};

interface SourceBufferListEventMap {
    "addsourcebuffer": Event;
    "removesourcebuffer": Event;
}

/**
 * A simple container list for multiple SourceBuffer objects.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SourceBufferList)
 */
interface SourceBufferList extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SourceBufferList/length) */
    readonly length: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SourceBufferList/addsourcebuffer_event) */
    onaddsourcebuffer: ((this: SourceBufferList, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SourceBufferList/removesourcebuffer_event) */
    onremovesourcebuffer: ((this: SourceBufferList, ev: Event) => any) | null;
    addEventListener<K extends keyof SourceBufferListEventMap>(type: K, listener: (this: SourceBufferList, ev: SourceBufferListEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SourceBufferListEventMap>(type: K, listener: (this: SourceBufferList, ev: SourceBufferListEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
    [index: number]: SourceBuffer;
}

declare var SourceBufferList: {
    prototype: SourceBufferList;
    new(): SourceBufferList;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechRecognitionAlternative) */
interface SpeechRecognitionAlternative {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechRecognitionAlternative/confidence) */
    readonly confidence: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechRecognitionAlternative/transcript) */
    readonly transcript: string;
}

declare var SpeechRecognitionAlternative: {
    prototype: SpeechRecognitionAlternative;
    new(): SpeechRecognitionAlternative;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechRecognitionResult) */
interface SpeechRecognitionResult {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechRecognitionResult/isFinal) */
    readonly isFinal: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechRecognitionResult/length) */
    readonly length: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechRecognitionResult/item) */
    item(index: number): SpeechRecognitionAlternative;
    [index: number]: SpeechRecognitionAlternative;
}

declare var SpeechRecognitionResult: {
    prototype: SpeechRecognitionResult;
    new(): SpeechRecognitionResult;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechRecognitionResultList) */
interface SpeechRecognitionResultList {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechRecognitionResultList/length) */
    readonly length: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechRecognitionResultList/item) */
    item(index: number): SpeechRecognitionResult;
    [index: number]: SpeechRecognitionResult;
}

declare var SpeechRecognitionResultList: {
    prototype: SpeechRecognitionResultList;
    new(): SpeechRecognitionResultList;
};

interface SpeechSynthesisEventMap {
    "voiceschanged": Event;
}

/**
 * This Web Speech API interface is the controller interface for the speech service; this can be used to retrieve information about the synthesis voices available on the device, start and pause speech, and other commands besides.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesis)
 */
interface SpeechSynthesis extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesis/voiceschanged_event) */
    onvoiceschanged: ((this: SpeechSynthesis, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesis/paused) */
    readonly paused: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesis/pending) */
    readonly pending: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesis/speaking) */
    readonly speaking: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesis/cancel) */
    cancel(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesis/getVoices) */
    getVoices(): SpeechSynthesisVoice[];
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesis/pause) */
    pause(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesis/resume) */
    resume(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesis/speak) */
    speak(utterance: SpeechSynthesisUtterance): void;
    addEventListener<K extends keyof SpeechSynthesisEventMap>(type: K, listener: (this: SpeechSynthesis, ev: SpeechSynthesisEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SpeechSynthesisEventMap>(type: K, listener: (this: SpeechSynthesis, ev: SpeechSynthesisEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SpeechSynthesis: {
    prototype: SpeechSynthesis;
    new(): SpeechSynthesis;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesisErrorEvent) */
interface SpeechSynthesisErrorEvent extends SpeechSynthesisEvent {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesisErrorEvent/error) */
    readonly error: SpeechSynthesisErrorCode;
}

declare var SpeechSynthesisErrorEvent: {
    prototype: SpeechSynthesisErrorEvent;
    new(type: string, eventInitDict: SpeechSynthesisErrorEventInit): SpeechSynthesisErrorEvent;
};

/**
 * This Web Speech API interface contains information about the current state of SpeechSynthesisUtterance objects that have been processed in the speech service.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesisEvent)
 */
interface SpeechSynthesisEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesisEvent/charIndex) */
    readonly charIndex: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesisEvent/charLength) */
    readonly charLength: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesisEvent/elapsedTime) */
    readonly elapsedTime: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesisEvent/name) */
    readonly name: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesisEvent/utterance) */
    readonly utterance: SpeechSynthesisUtterance;
}

declare var SpeechSynthesisEvent: {
    prototype: SpeechSynthesisEvent;
    new(type: string, eventInitDict: SpeechSynthesisEventInit): SpeechSynthesisEvent;
};

interface SpeechSynthesisUtteranceEventMap {
    "boundary": SpeechSynthesisEvent;
    "end": SpeechSynthesisEvent;
    "error": SpeechSynthesisErrorEvent;
    "mark": SpeechSynthesisEvent;
    "pause": SpeechSynthesisEvent;
    "resume": SpeechSynthesisEvent;
    "start": SpeechSynthesisEvent;
}

/**
 * This Web Speech API interface represents a speech request. It contains the content the speech service should read and information about how to read it (e.g. language, pitch and volume.)
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesisUtterance)
 */
interface SpeechSynthesisUtterance extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesisUtterance/lang) */
    lang: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesisUtterance/boundary_event) */
    onboundary: ((this: SpeechSynthesisUtterance, ev: SpeechSynthesisEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesisUtterance/end_event) */
    onend: ((this: SpeechSynthesisUtterance, ev: SpeechSynthesisEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesisUtterance/error_event) */
    onerror: ((this: SpeechSynthesisUtterance, ev: SpeechSynthesisErrorEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesisUtterance/mark_event) */
    onmark: ((this: SpeechSynthesisUtterance, ev: SpeechSynthesisEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesisUtterance/pause_event) */
    onpause: ((this: SpeechSynthesisUtterance, ev: SpeechSynthesisEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesisUtterance/resume_event) */
    onresume: ((this: SpeechSynthesisUtterance, ev: SpeechSynthesisEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesisUtterance/start_event) */
    onstart: ((this: SpeechSynthesisUtterance, ev: SpeechSynthesisEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesisUtterance/pitch) */
    pitch: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesisUtterance/rate) */
    rate: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesisUtterance/text) */
    text: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesisUtterance/voice) */
    voice: SpeechSynthesisVoice | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesisUtterance/volume) */
    volume: number;
    addEventListener<K extends keyof SpeechSynthesisUtteranceEventMap>(type: K, listener: (this: SpeechSynthesisUtterance, ev: SpeechSynthesisUtteranceEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof SpeechSynthesisUtteranceEventMap>(type: K, listener: (this: SpeechSynthesisUtterance, ev: SpeechSynthesisUtteranceEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var SpeechSynthesisUtterance: {
    prototype: SpeechSynthesisUtterance;
    new(text?: string): SpeechSynthesisUtterance;
};

/**
 * This Web Speech API interface represents a voice that the system supports. Every SpeechSynthesisVoice has its own relative speech service including information about language, name and URI.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesisVoice)
 */
interface SpeechSynthesisVoice {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesisVoice/default) */
    readonly default: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesisVoice/lang) */
    readonly lang: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesisVoice/localService) */
    readonly localService: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesisVoice/name) */
    readonly name: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SpeechSynthesisVoice/voiceURI) */
    readonly voiceURI: string;
}

declare var SpeechSynthesisVoice: {
    prototype: SpeechSynthesisVoice;
    new(): SpeechSynthesisVoice;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/StaticRange) */
interface StaticRange extends AbstractRange {
}

declare var StaticRange: {
    prototype: StaticRange;
    new(init: StaticRangeInit): StaticRange;
};

/**
 * The pan property takes a unitless value between -1 (full left pan) and 1 (full right pan). This interface was introduced as a much simpler way to apply a simple panning effect than having to use a full PannerNode.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/StereoPannerNode)
 */
interface StereoPannerNode extends AudioNode {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/StereoPannerNode/pan) */
    readonly pan: AudioParam;
}

declare var StereoPannerNode: {
    prototype: StereoPannerNode;
    new(context: BaseAudioContext, options?: StereoPannerOptions): StereoPannerNode;
};

/**
 * This Web Storage API interface provides access to a particular domain's session or local storage. It allows, for example, the addition, modification, or deletion of stored data items.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Storage)
 */
interface Storage {
    /**
     * Returns the number of key/value pairs.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Storage/length)
     */
    readonly length: number;
    /**
     * Removes all key/value pairs, if there are any.
     *
     * Dispatches a storage event on Window objects holding an equivalent Storage object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Storage/clear)
     */
    clear(): void;
    /**
     * Returns the current value associated with the given key, or null if the given key does not exist.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Storage/getItem)
     */
    getItem(key: string): string | null;
    /**
     * Returns the name of the nth key, or null if n is greater than or equal to the number of key/value pairs.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Storage/key)
     */
    key(index: number): string | null;
    /**
     * Removes the key/value pair with the given key, if a key/value pair with the given key exists.
     *
     * Dispatches a storage event on Window objects holding an equivalent Storage object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Storage/removeItem)
     */
    removeItem(key: string): void;
    /**
     * Sets the value of the pair identified by key to value, creating a new key/value pair if none existed for key previously.
     *
     * Throws a "QuotaExceededError" DOMException exception if the new value couldn't be set. (Setting could fail if, e.g., the user has disabled storage for the site, or if the quota has been exceeded.)
     *
     * Dispatches a storage event on Window objects holding an equivalent Storage object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Storage/setItem)
     */
    setItem(key: string, value: string): void;
    [name: string]: any;
}

declare var Storage: {
    prototype: Storage;
    new(): Storage;
};

/**
 * A StorageEvent is sent to a window when a storage area it has access to is changed within the context of another document.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/StorageEvent)
 */
interface StorageEvent extends Event {
    /**
     * Returns the key of the storage item being changed.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/StorageEvent/key)
     */
    readonly key: string | null;
    /**
     * Returns the new value of the key of the storage item whose value is being changed.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/StorageEvent/newValue)
     */
    readonly newValue: string | null;
    /**
     * Returns the old value of the key of the storage item whose value is being changed.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/StorageEvent/oldValue)
     */
    readonly oldValue: string | null;
    /**
     * Returns the Storage object that was affected.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/StorageEvent/storageArea)
     */
    readonly storageArea: Storage | null;
    /**
     * Returns the URL of the document whose storage item changed.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/StorageEvent/url)
     */
    readonly url: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/StorageEvent/initStorageEvent)
     */
    initStorageEvent(type: string, bubbles?: boolean, cancelable?: boolean, key?: string | null, oldValue?: string | null, newValue?: string | null, url?: string | URL, storageArea?: Storage | null): void;
}

declare var StorageEvent: {
    prototype: StorageEvent;
    new(type: string, eventInitDict?: StorageEventInit): StorageEvent;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/StorageManager)
 */
interface StorageManager {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/StorageManager/estimate) */
    estimate(): Promise<StorageEstimate>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/StorageManager/getDirectory) */
    getDirectory(): Promise<FileSystemDirectoryHandle>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/StorageManager/persist) */
    persist(): Promise<boolean>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/StorageManager/persisted) */
    persisted(): Promise<boolean>;
}

declare var StorageManager: {
    prototype: StorageManager;
    new(): StorageManager;
};

/** @deprecated */
interface StyleMedia {
    type: string;
    matchMedium(mediaquery: string): boolean;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/StylePropertyMap) */
interface StylePropertyMap extends StylePropertyMapReadOnly {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/StylePropertyMap/append) */
    append(property: string, ...values: (CSSStyleValue | string)[]): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/StylePropertyMap/clear) */
    clear(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/StylePropertyMap/delete) */
    delete(property: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/StylePropertyMap/set) */
    set(property: string, ...values: (CSSStyleValue | string)[]): void;
}

declare var StylePropertyMap: {
    prototype: StylePropertyMap;
    new(): StylePropertyMap;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/StylePropertyMapReadOnly) */
interface StylePropertyMapReadOnly {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/StylePropertyMapReadOnly/size) */
    readonly size: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/StylePropertyMapReadOnly/get) */
    get(property: string): undefined | CSSStyleValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/StylePropertyMapReadOnly/getAll) */
    getAll(property: string): CSSStyleValue[];
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/StylePropertyMapReadOnly/has) */
    has(property: string): boolean;
    forEach(callbackfn: (value: CSSStyleValue[], key: string, parent: StylePropertyMapReadOnly) => void, thisArg?: any): void;
}

declare var StylePropertyMapReadOnly: {
    prototype: StylePropertyMapReadOnly;
    new(): StylePropertyMapReadOnly;
};

/**
 * A single style sheet. CSS style sheets will further implement the more specialized CSSStyleSheet interface.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/StyleSheet)
 */
interface StyleSheet {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/StyleSheet/disabled) */
    disabled: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/StyleSheet/href) */
    readonly href: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/StyleSheet/media) */
    readonly media: MediaList;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/StyleSheet/ownerNode) */
    readonly ownerNode: Element | ProcessingInstruction | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/StyleSheet/parentStyleSheet) */
    readonly parentStyleSheet: CSSStyleSheet | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/StyleSheet/title) */
    readonly title: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/StyleSheet/type) */
    readonly type: string;
}

declare var StyleSheet: {
    prototype: StyleSheet;
    new(): StyleSheet;
};

/**
 * A list of StyleSheet.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/StyleSheetList)
 */
interface StyleSheetList {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/StyleSheetList/length) */
    readonly length: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/StyleSheetList/item) */
    item(index: number): CSSStyleSheet | null;
    [index: number]: CSSStyleSheet;
}

declare var StyleSheetList: {
    prototype: StyleSheetList;
    new(): StyleSheetList;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SubmitEvent) */
interface SubmitEvent extends Event {
    /**
     * Returns the element representing the submit button that triggered the form submission, or null if the submission was not triggered by a button.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SubmitEvent/submitter)
     */
    readonly submitter: HTMLElement | null;
}

declare var SubmitEvent: {
    prototype: SubmitEvent;
    new(type: string, eventInitDict?: SubmitEventInit): SubmitEvent;
};

/**
 * This Web Crypto API interface provides a number of low-level cryptographic functions. It is accessed via the Crypto.subtle properties available in a window context (via Window.crypto).
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SubtleCrypto)
 */
interface SubtleCrypto {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SubtleCrypto/decrypt) */
    decrypt(algorithm: AlgorithmIdentifier | RsaOaepParams | AesCtrParams | AesCbcParams | AesGcmParams, key: CryptoKey, data: BufferSource): Promise<ArrayBuffer>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SubtleCrypto/deriveBits) */
    deriveBits(algorithm: AlgorithmIdentifier | EcdhKeyDeriveParams | HkdfParams | Pbkdf2Params, baseKey: CryptoKey, length: number): Promise<ArrayBuffer>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SubtleCrypto/deriveKey) */
    deriveKey(algorithm: AlgorithmIdentifier | EcdhKeyDeriveParams | HkdfParams | Pbkdf2Params, baseKey: CryptoKey, derivedKeyType: AlgorithmIdentifier | AesDerivedKeyParams | HmacImportParams | HkdfParams | Pbkdf2Params, extractable: boolean, keyUsages: KeyUsage[]): Promise<CryptoKey>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SubtleCrypto/digest) */
    digest(algorithm: AlgorithmIdentifier, data: BufferSource): Promise<ArrayBuffer>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SubtleCrypto/encrypt) */
    encrypt(algorithm: AlgorithmIdentifier | RsaOaepParams | AesCtrParams | AesCbcParams | AesGcmParams, key: CryptoKey, data: BufferSource): Promise<ArrayBuffer>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SubtleCrypto/exportKey) */
    exportKey(format: "jwk", key: CryptoKey): Promise<JsonWebKey>;
    exportKey(format: Exclude<KeyFormat, "jwk">, key: CryptoKey): Promise<ArrayBuffer>;
    exportKey(format: KeyFormat, key: CryptoKey): Promise<ArrayBuffer | JsonWebKey>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SubtleCrypto/generateKey) */
    generateKey(algorithm: "Ed25519", extractable: boolean, keyUsages: ReadonlyArray<"sign" | "verify">): Promise<CryptoKeyPair>;
    generateKey(algorithm: RsaHashedKeyGenParams | EcKeyGenParams, extractable: boolean, keyUsages: ReadonlyArray<KeyUsage>): Promise<CryptoKeyPair>;
    generateKey(algorithm: AesKeyGenParams | HmacKeyGenParams | Pbkdf2Params, extractable: boolean, keyUsages: ReadonlyArray<KeyUsage>): Promise<CryptoKey>;
    generateKey(algorithm: AlgorithmIdentifier, extractable: boolean, keyUsages: KeyUsage[]): Promise<CryptoKeyPair | CryptoKey>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SubtleCrypto/importKey) */
    importKey(format: "jwk", keyData: JsonWebKey, algorithm: AlgorithmIdentifier | RsaHashedImportParams | EcKeyImportParams | HmacImportParams | AesKeyAlgorithm, extractable: boolean, keyUsages: ReadonlyArray<KeyUsage>): Promise<CryptoKey>;
    importKey(format: Exclude<KeyFormat, "jwk">, keyData: BufferSource, algorithm: AlgorithmIdentifier | RsaHashedImportParams | EcKeyImportParams | HmacImportParams | AesKeyAlgorithm, extractable: boolean, keyUsages: KeyUsage[]): Promise<CryptoKey>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SubtleCrypto/sign) */
    sign(algorithm: AlgorithmIdentifier | RsaPssParams | EcdsaParams, key: CryptoKey, data: BufferSource): Promise<ArrayBuffer>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SubtleCrypto/unwrapKey) */
    unwrapKey(format: KeyFormat, wrappedKey: BufferSource, unwrappingKey: CryptoKey, unwrapAlgorithm: AlgorithmIdentifier | RsaOaepParams | AesCtrParams | AesCbcParams | AesGcmParams, unwrappedKeyAlgorithm: AlgorithmIdentifier | RsaHashedImportParams | EcKeyImportParams | HmacImportParams | AesKeyAlgorithm, extractable: boolean, keyUsages: KeyUsage[]): Promise<CryptoKey>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SubtleCrypto/verify) */
    verify(algorithm: AlgorithmIdentifier | RsaPssParams | EcdsaParams, key: CryptoKey, signature: BufferSource, data: BufferSource): Promise<boolean>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/SubtleCrypto/wrapKey) */
    wrapKey(format: KeyFormat, key: CryptoKey, wrappingKey: CryptoKey, wrapAlgorithm: AlgorithmIdentifier | RsaOaepParams | AesCtrParams | AesCbcParams | AesGcmParams): Promise<ArrayBuffer>;
}

declare var SubtleCrypto: {
    prototype: SubtleCrypto;
    new(): SubtleCrypto;
};

/**
 * The textual content of Element or Attr. If an element has no markup within its content, it has a single child implementing Text that contains the element's text. However, if the element contains markup, it is parsed into information items and Text nodes that form its children.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Text)
 */
interface Text extends CharacterData, Slottable {
    /**
     * Returns the combined data of all direct Text node siblings.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Text/wholeText)
     */
    readonly wholeText: string;
    /**
     * Splits data at the given offset and returns the remainder as Text node.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Text/splitText)
     */
    splitText(offset: number): Text;
}

declare var Text: {
    prototype: Text;
    new(data?: string): Text;
};

/**
 * A decoder for a specific method, that is a specific character encoding, like utf-8, iso-8859-2, koi8, cp1261, gbk, etc. A decoder takes a stream of bytes as input and emits a stream of code points. For a more scalable, non-native library, see StringView – a C-like representation of strings based on typed arrays.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextDecoder)
 */
interface TextDecoder extends TextDecoderCommon {
    /**
     * Returns the result of running encoding's decoder. The method can be invoked zero or more times with options's stream set to true, and then once without options's stream (or set to false), to process a fragmented input. If the invocation without options's stream (or set to false) has no input, it's clearest to omit both arguments.
     *
     * ```
     * var string = "", decoder = new TextDecoder(encoding), buffer;
     * while(buffer = next_chunk()) {
     *   string += decoder.decode(buffer, {stream:true});
     * }
     * string += decoder.decode(); // end-of-queue
     * ```
     *
     * If the error mode is "fatal" and encoding's decoder returns error, throws a TypeError.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextDecoder/decode)
     */
    decode(input?: AllowSharedBufferSource, options?: TextDecodeOptions): string;
}

declare var TextDecoder: {
    prototype: TextDecoder;
    new(label?: string, options?: TextDecoderOptions): TextDecoder;
};

interface TextDecoderCommon {
    /**
     * Returns encoding's name, lowercased.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextDecoder/encoding)
     */
    readonly encoding: string;
    /**
     * Returns true if error mode is "fatal", otherwise false.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextDecoder/fatal)
     */
    readonly fatal: boolean;
    /**
     * Returns the value of ignore BOM.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextDecoder/ignoreBOM)
     */
    readonly ignoreBOM: boolean;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextDecoderStream) */
interface TextDecoderStream extends GenericTransformStream, TextDecoderCommon {
    readonly readable: ReadableStream<string>;
    readonly writable: WritableStream<BufferSource>;
}

declare var TextDecoderStream: {
    prototype: TextDecoderStream;
    new(label?: string, options?: TextDecoderOptions): TextDecoderStream;
};

/**
 * TextEncoder takes a stream of code points as input and emits a stream of bytes. For a more scalable, non-native library, see StringView – a C-like representation of strings based on typed arrays.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextEncoder)
 */
interface TextEncoder extends TextEncoderCommon {
    /**
     * Returns the result of running UTF-8's encoder.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextEncoder/encode)
     */
    encode(input?: string): Uint8Array;
    /**
     * Runs the UTF-8 encoder on source, stores the result of that operation into destination, and returns the progress made as an object wherein read is the number of converted code units of source and written is the number of bytes modified in destination.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextEncoder/encodeInto)
     */
    encodeInto(source: string, destination: Uint8Array): TextEncoderEncodeIntoResult;
}

declare var TextEncoder: {
    prototype: TextEncoder;
    new(): TextEncoder;
};

interface TextEncoderCommon {
    /**
     * Returns "utf-8".
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextEncoder/encoding)
     */
    readonly encoding: string;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextEncoderStream) */
interface TextEncoderStream extends GenericTransformStream, TextEncoderCommon {
    readonly readable: ReadableStream<Uint8Array>;
    readonly writable: WritableStream<string>;
}

declare var TextEncoderStream: {
    prototype: TextEncoderStream;
    new(): TextEncoderStream;
};

/**
 * The dimensions of a piece of text in the canvas, as created by the CanvasRenderingContext2D.measureText() method.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextMetrics)
 */
interface TextMetrics {
    /**
     * Returns the measurement described below.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextMetrics/actualBoundingBoxAscent)
     */
    readonly actualBoundingBoxAscent: number;
    /**
     * Returns the measurement described below.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextMetrics/actualBoundingBoxDescent)
     */
    readonly actualBoundingBoxDescent: number;
    /**
     * Returns the measurement described below.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextMetrics/actualBoundingBoxLeft)
     */
    readonly actualBoundingBoxLeft: number;
    /**
     * Returns the measurement described below.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextMetrics/actualBoundingBoxRight)
     */
    readonly actualBoundingBoxRight: number;
    /**
     * Returns the measurement described below.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextMetrics/fontBoundingBoxAscent)
     */
    readonly fontBoundingBoxAscent: number;
    /**
     * Returns the measurement described below.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextMetrics/fontBoundingBoxDescent)
     */
    readonly fontBoundingBoxDescent: number;
    /**
     * Returns the measurement described below.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextMetrics/width)
     */
    readonly width: number;
}

declare var TextMetrics: {
    prototype: TextMetrics;
    new(): TextMetrics;
};

interface TextTrackEventMap {
    "cuechange": Event;
}

/**
 * This interface also inherits properties from EventTarget.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrack)
 */
interface TextTrack extends EventTarget {
    /**
     * Returns the text track cues from the text track list of cues that are currently active (i.e. that start before the current playback position and end after it), as a TextTrackCueList object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrack/activeCues)
     */
    readonly activeCues: TextTrackCueList | null;
    /**
     * Returns the text track list of cues, as a TextTrackCueList object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrack/cues)
     */
    readonly cues: TextTrackCueList | null;
    /**
     * Returns the ID of the given track.
     *
     * For in-band tracks, this is the ID that can be used with a fragment if the format supports media fragment syntax, and that can be used with the getTrackById() method.
     *
     * For TextTrack objects corresponding to track elements, this is the ID of the track element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrack/id)
     */
    readonly id: string;
    /**
     * Returns the text track in-band metadata track dispatch type string.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrack/inBandMetadataTrackDispatchType)
     */
    readonly inBandMetadataTrackDispatchType: string;
    /**
     * Returns the text track kind string.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrack/kind)
     */
    readonly kind: TextTrackKind;
    /**
     * Returns the text track label, if there is one, or the empty string otherwise (indicating that a custom label probably needs to be generated from the other attributes of the object if the object is exposed to the user).
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrack/label)
     */
    readonly label: string;
    /**
     * Returns the text track language string.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrack/language)
     */
    readonly language: string;
    /**
     * Returns the text track mode, represented by a string from the following list:
     *
     * Can be set, to change the mode.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrack/mode)
     */
    mode: TextTrackMode;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrack/cuechange_event) */
    oncuechange: ((this: TextTrack, ev: Event) => any) | null;
    /**
     * Adds the given cue to textTrack's text track list of cues.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrack/addCue)
     */
    addCue(cue: TextTrackCue): void;
    /**
     * Removes the given cue from textTrack's text track list of cues.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrack/removeCue)
     */
    removeCue(cue: TextTrackCue): void;
    addEventListener<K extends keyof TextTrackEventMap>(type: K, listener: (this: TextTrack, ev: TextTrackEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof TextTrackEventMap>(type: K, listener: (this: TextTrack, ev: TextTrackEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var TextTrack: {
    prototype: TextTrack;
    new(): TextTrack;
};

interface TextTrackCueEventMap {
    "enter": Event;
    "exit": Event;
}

/**
 * TextTrackCues represent a string of text that will be displayed for some duration of time on a TextTrack. This includes the start and end times that the cue will be displayed. A TextTrackCue cannot be used directly, instead one of the derived types (e.g. VTTCue) must be used.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrackCue)
 */
interface TextTrackCue extends EventTarget {
    /**
     * Returns the text track cue end time, in seconds.
     *
     * Can be set.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrackCue/endTime)
     */
    endTime: number;
    /**
     * Returns the text track cue identifier.
     *
     * Can be set.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrackCue/id)
     */
    id: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrackCue/enter_event) */
    onenter: ((this: TextTrackCue, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrackCue/exit_event) */
    onexit: ((this: TextTrackCue, ev: Event) => any) | null;
    /**
     * Returns true if the text track cue pause-on-exit flag is set, false otherwise.
     *
     * Can be set.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrackCue/pauseOnExit)
     */
    pauseOnExit: boolean;
    /**
     * Returns the text track cue start time, in seconds.
     *
     * Can be set.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrackCue/startTime)
     */
    startTime: number;
    /**
     * Returns the TextTrack object to which this text track cue belongs, if any, or null otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrackCue/track)
     */
    readonly track: TextTrack | null;
    addEventListener<K extends keyof TextTrackCueEventMap>(type: K, listener: (this: TextTrackCue, ev: TextTrackCueEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof TextTrackCueEventMap>(type: K, listener: (this: TextTrackCue, ev: TextTrackCueEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var TextTrackCue: {
    prototype: TextTrackCue;
    new(): TextTrackCue;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrackCueList) */
interface TextTrackCueList {
    /**
     * Returns the number of cues in the list.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrackCueList/length)
     */
    readonly length: number;
    /**
     * Returns the first text track cue (in text track cue order) with text track cue identifier id.
     *
     * Returns null if none of the cues have the given identifier or if the argument is the empty string.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrackCueList/getCueById)
     */
    getCueById(id: string): TextTrackCue | null;
    [index: number]: TextTrackCue;
}

declare var TextTrackCueList: {
    prototype: TextTrackCueList;
    new(): TextTrackCueList;
};

interface TextTrackListEventMap {
    "addtrack": TrackEvent;
    "change": Event;
    "removetrack": TrackEvent;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrackList) */
interface TextTrackList extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrackList/length) */
    readonly length: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrackList/addtrack_event) */
    onaddtrack: ((this: TextTrackList, ev: TrackEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrackList/change_event) */
    onchange: ((this: TextTrackList, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrackList/removetrack_event) */
    onremovetrack: ((this: TextTrackList, ev: TrackEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TextTrackList/getTrackById) */
    getTrackById(id: string): TextTrack | null;
    addEventListener<K extends keyof TextTrackListEventMap>(type: K, listener: (this: TextTrackList, ev: TextTrackListEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof TextTrackListEventMap>(type: K, listener: (this: TextTrackList, ev: TextTrackListEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
    [index: number]: TextTrack;
}

declare var TextTrackList: {
    prototype: TextTrackList;
    new(): TextTrackList;
};

/**
 * Used to represent a set of time ranges, primarily for the purpose of tracking which portions of media have been buffered when loading it for use by the <audio> and <video> elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TimeRanges)
 */
interface TimeRanges {
    /**
     * Returns the number of ranges in the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TimeRanges/length)
     */
    readonly length: number;
    /**
     * Returns the time for the end of the range with the given index.
     *
     * Throws an "IndexSizeError" DOMException if the index is out of range.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TimeRanges/end)
     */
    end(index: number): number;
    /**
     * Returns the time for the start of the range with the given index.
     *
     * Throws an "IndexSizeError" DOMException if the index is out of range.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TimeRanges/start)
     */
    start(index: number): number;
}

declare var TimeRanges: {
    prototype: TimeRanges;
    new(): TimeRanges;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ToggleEvent) */
interface ToggleEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ToggleEvent/newState) */
    readonly newState: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ToggleEvent/oldState) */
    readonly oldState: string;
}

declare var ToggleEvent: {
    prototype: ToggleEvent;
    new(type: string, eventInitDict?: ToggleEventInit): ToggleEvent;
};

/**
 * A single contact point on a touch-sensitive device. The contact point is commonly a finger or stylus and the device may be a touchscreen or trackpad.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Touch)
 */
interface Touch {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Touch/clientX) */
    readonly clientX: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Touch/clientY) */
    readonly clientY: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Touch/force) */
    readonly force: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Touch/identifier) */
    readonly identifier: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Touch/pageX) */
    readonly pageX: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Touch/pageY) */
    readonly pageY: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Touch/radiusX) */
    readonly radiusX: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Touch/radiusY) */
    readonly radiusY: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Touch/rotationAngle) */
    readonly rotationAngle: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Touch/screenX) */
    readonly screenX: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Touch/screenY) */
    readonly screenY: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Touch/target) */
    readonly target: EventTarget;
}

declare var Touch: {
    prototype: Touch;
    new(touchInitDict: TouchInit): Touch;
};

/**
 * An event sent when the state of contacts with a touch-sensitive surface changes. This surface can be a touch screen or trackpad, for example. The event can describe one or more points of contact with the screen and includes support for detecting movement, addition and removal of contact points, and so forth.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TouchEvent)
 */
interface TouchEvent extends UIEvent {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TouchEvent/altKey) */
    readonly altKey: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TouchEvent/changedTouches) */
    readonly changedTouches: TouchList;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TouchEvent/ctrlKey) */
    readonly ctrlKey: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TouchEvent/metaKey) */
    readonly metaKey: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TouchEvent/shiftKey) */
    readonly shiftKey: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TouchEvent/targetTouches) */
    readonly targetTouches: TouchList;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TouchEvent/touches) */
    readonly touches: TouchList;
}

declare var TouchEvent: {
    prototype: TouchEvent;
    new(type: string, eventInitDict?: TouchEventInit): TouchEvent;
};

/**
 * A list of contact points on a touch surface. For example, if the user has three fingers on the touch surface (such as a screen or trackpad), the corresponding TouchList object would have one Touch object for each finger, for a total of three entries.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TouchList)
 */
interface TouchList {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TouchList/length) */
    readonly length: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TouchList/item) */
    item(index: number): Touch | null;
    [index: number]: Touch;
}

declare var TouchList: {
    prototype: TouchList;
    new(): TouchList;
};

/**
 * The TrackEvent interface, part of the HTML DOM specification, is used for events which represent changes to the set of available tracks on an HTML media element; these events are addtrack and removetrack.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TrackEvent)
 */
interface TrackEvent extends Event {
    /**
     * Returns the track object (TextTrack, AudioTrack, or VideoTrack) to which the event relates.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TrackEvent/track)
     */
    readonly track: TextTrack | null;
}

declare var TrackEvent: {
    prototype: TrackEvent;
    new(type: string, eventInitDict?: TrackEventInit): TrackEvent;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TransformStream) */
interface TransformStream<I = any, O = any> {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TransformStream/readable) */
    readonly readable: ReadableStream<O>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TransformStream/writable) */
    readonly writable: WritableStream<I>;
}

declare var TransformStream: {
    prototype: TransformStream;
    new<I = any, O = any>(transformer?: Transformer<I, O>, writableStrategy?: QueuingStrategy<I>, readableStrategy?: QueuingStrategy<O>): TransformStream<I, O>;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TransformStreamDefaultController) */
interface TransformStreamDefaultController<O = any> {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TransformStreamDefaultController/desiredSize) */
    readonly desiredSize: number | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TransformStreamDefaultController/enqueue) */
    enqueue(chunk?: O): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TransformStreamDefaultController/error) */
    error(reason?: any): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TransformStreamDefaultController/terminate) */
    terminate(): void;
}

declare var TransformStreamDefaultController: {
    prototype: TransformStreamDefaultController;
    new(): TransformStreamDefaultController;
};

/**
 * Events providing information related to transitions.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TransitionEvent)
 */
interface TransitionEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TransitionEvent/elapsedTime) */
    readonly elapsedTime: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TransitionEvent/propertyName) */
    readonly propertyName: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TransitionEvent/pseudoElement) */
    readonly pseudoElement: string;
}

declare var TransitionEvent: {
    prototype: TransitionEvent;
    new(type: string, transitionEventInitDict?: TransitionEventInit): TransitionEvent;
};

/**
 * The nodes of a document subtree and a position within them.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/TreeWalker)
 */
interface TreeWalker {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TreeWalker/currentNode) */
    currentNode: Node;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TreeWalker/filter) */
    readonly filter: NodeFilter | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TreeWalker/root) */
    readonly root: Node;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TreeWalker/whatToShow) */
    readonly whatToShow: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TreeWalker/firstChild) */
    firstChild(): Node | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TreeWalker/lastChild) */
    lastChild(): Node | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TreeWalker/nextNode) */
    nextNode(): Node | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TreeWalker/nextSibling) */
    nextSibling(): Node | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TreeWalker/parentNode) */
    parentNode(): Node | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TreeWalker/previousNode) */
    previousNode(): Node | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/TreeWalker/previousSibling) */
    previousSibling(): Node | null;
}

declare var TreeWalker: {
    prototype: TreeWalker;
    new(): TreeWalker;
};

/**
 * Simple user interface events.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/UIEvent)
 */
interface UIEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/UIEvent/detail) */
    readonly detail: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/UIEvent/view) */
    readonly view: Window | null;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/UIEvent/which)
     */
    readonly which: number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/UIEvent/initUIEvent)
     */
    initUIEvent(typeArg: string, bubblesArg?: boolean, cancelableArg?: boolean, viewArg?: Window | null, detailArg?: number): void;
}

declare var UIEvent: {
    prototype: UIEvent;
    new(type: string, eventInitDict?: UIEventInit): UIEvent;
};

/**
 * The URL interface represents an object providing static methods used for creating object URLs.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/URL)
 */
interface URL {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/URL/hash) */
    hash: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/URL/host) */
    host: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/URL/hostname) */
    hostname: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/URL/href) */
    href: string;
    toString(): string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/URL/origin) */
    readonly origin: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/URL/password) */
    password: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/URL/pathname) */
    pathname: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/URL/port) */
    port: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/URL/protocol) */
    protocol: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/URL/search) */
    search: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/URL/searchParams) */
    readonly searchParams: URLSearchParams;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/URL/username) */
    username: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/URL/toJSON) */
    toJSON(): string;
}

declare var URL: {
    prototype: URL;
    new(url: string | URL, base?: string | URL): URL;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/URL/canParse_static) */
    canParse(url: string | URL, base?: string): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/URL/createObjectURL_static) */
    createObjectURL(obj: Blob | MediaSource): string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/URL/revokeObjectURL_static) */
    revokeObjectURL(url: string): void;
};

type webkitURL = URL;
declare var webkitURL: typeof URL;

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/URLSearchParams) */
interface URLSearchParams {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/URLSearchParams/size) */
    readonly size: number;
    /**
     * Appends a specified key/value pair as a new search parameter.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/URLSearchParams/append)
     */
    append(name: string, value: string): void;
    /**
     * Deletes the given search parameter, and its associated value, from the list of all search parameters.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/URLSearchParams/delete)
     */
    delete(name: string, value?: string): void;
    /**
     * Returns the first value associated to the given search parameter.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/URLSearchParams/get)
     */
    get(name: string): string | null;
    /**
     * Returns all the values association with a given search parameter.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/URLSearchParams/getAll)
     */
    getAll(name: string): string[];
    /**
     * Returns a Boolean indicating if such a search parameter exists.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/URLSearchParams/has)
     */
    has(name: string, value?: string): boolean;
    /**
     * Sets the value associated to a given search parameter to the given value. If there were several values, delete the others.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/URLSearchParams/set)
     */
    set(name: string, value: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/URLSearchParams/sort) */
    sort(): void;
    /** Returns a string containing a query string suitable for use in a URL. Does not include the question mark. */
    toString(): string;
    forEach(callbackfn: (value: string, key: string, parent: URLSearchParams) => void, thisArg?: any): void;
}

declare var URLSearchParams: {
    prototype: URLSearchParams;
    new(init?: string[][] | Record<string, string> | string | URLSearchParams): URLSearchParams;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/UserActivation) */
interface UserActivation {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/UserActivation/hasBeenActive) */
    readonly hasBeenActive: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/UserActivation/hasBeenActive) */
    readonly isActive: boolean;
}

declare var UserActivation: {
    prototype: UserActivation;
    new(): UserActivation;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VTTCue) */
interface VTTCue extends TextTrackCue {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VTTCue/align) */
    align: AlignSetting;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VTTCue/line) */
    line: LineAndPositionSetting;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VTTCue/lineAlign) */
    lineAlign: LineAlignSetting;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VTTCue/position) */
    position: LineAndPositionSetting;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VTTCue/positionAlign) */
    positionAlign: PositionAlignSetting;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VTTCue/region) */
    region: VTTRegion | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VTTCue/size) */
    size: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VTTCue/snapToLines) */
    snapToLines: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VTTCue/text) */
    text: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VTTCue/vertical) */
    vertical: DirectionSetting;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VTTCue/getCueAsHTML) */
    getCueAsHTML(): DocumentFragment;
    addEventListener<K extends keyof TextTrackCueEventMap>(type: K, listener: (this: VTTCue, ev: TextTrackCueEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof TextTrackCueEventMap>(type: K, listener: (this: VTTCue, ev: TextTrackCueEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var VTTCue: {
    prototype: VTTCue;
    new(startTime: number, endTime: number, text: string): VTTCue;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VTTRegion) */
interface VTTRegion {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VTTRegion/id) */
    id: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VTTRegion/lines) */
    lines: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VTTRegion/regionAnchorX) */
    regionAnchorX: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VTTRegion/regionAnchorY) */
    regionAnchorY: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VTTRegion/scroll) */
    scroll: ScrollSetting;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VTTRegion/viewportAnchorX) */
    viewportAnchorX: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VTTRegion/viewportAnchorY) */
    viewportAnchorY: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VTTRegion/width) */
    width: number;
}

declare var VTTRegion: {
    prototype: VTTRegion;
    new(): VTTRegion;
};

/**
 * The validity states that an element can be in, with respect to constraint validation. Together, they help explain why an element's value fails to validate, if it's not valid.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ValidityState)
 */
interface ValidityState {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ValidityState/badInput) */
    readonly badInput: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ValidityState/customError) */
    readonly customError: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ValidityState/patternMismatch) */
    readonly patternMismatch: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ValidityState/rangeOverflow) */
    readonly rangeOverflow: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ValidityState/rangeUnderflow) */
    readonly rangeUnderflow: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ValidityState/stepMismatch) */
    readonly stepMismatch: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ValidityState/tooLong) */
    readonly tooLong: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ValidityState/tooShort) */
    readonly tooShort: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ValidityState/typeMismatch) */
    readonly typeMismatch: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ValidityState/valid) */
    readonly valid: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ValidityState/valueMissing) */
    readonly valueMissing: boolean;
}

declare var ValidityState: {
    prototype: ValidityState;
    new(): ValidityState;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoColorSpace) */
interface VideoColorSpace {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoColorSpace/fullRange) */
    readonly fullRange: boolean | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoColorSpace/matrix) */
    readonly matrix: VideoMatrixCoefficients | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoColorSpace/primaries) */
    readonly primaries: VideoColorPrimaries | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoColorSpace/transfer) */
    readonly transfer: VideoTransferCharacteristics | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoColorSpace/toJSON) */
    toJSON(): VideoColorSpaceInit;
}

declare var VideoColorSpace: {
    prototype: VideoColorSpace;
    new(init?: VideoColorSpaceInit): VideoColorSpace;
};

interface VideoDecoderEventMap {
    "dequeue": Event;
}

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoDecoder)
 */
interface VideoDecoder extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoDecoder/decodeQueueSize) */
    readonly decodeQueueSize: number;
    ondequeue: ((this: VideoDecoder, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoDecoder/state) */
    readonly state: CodecState;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoDecoder/close) */
    close(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoDecoder/configure) */
    configure(config: VideoDecoderConfig): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoDecoder/decode) */
    decode(chunk: EncodedVideoChunk): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoDecoder/flush) */
    flush(): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoDecoder/reset) */
    reset(): void;
    addEventListener<K extends keyof VideoDecoderEventMap>(type: K, listener: (this: VideoDecoder, ev: VideoDecoderEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof VideoDecoderEventMap>(type: K, listener: (this: VideoDecoder, ev: VideoDecoderEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var VideoDecoder: {
    prototype: VideoDecoder;
    new(init: VideoDecoderInit): VideoDecoder;
    isConfigSupported(config: VideoDecoderConfig): Promise<VideoDecoderSupport>;
};

interface VideoEncoderEventMap {
    "dequeue": Event;
}

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoEncoder)
 */
interface VideoEncoder extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoEncoder/encodeQueueSize) */
    readonly encodeQueueSize: number;
    ondequeue: ((this: VideoEncoder, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoEncoder/state) */
    readonly state: CodecState;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoEncoder/close) */
    close(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoEncoder/configure) */
    configure(config: VideoEncoderConfig): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoEncoder/encode) */
    encode(frame: VideoFrame, options?: VideoEncoderEncodeOptions): void;
    flush(): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoEncoder/reset) */
    reset(): void;
    addEventListener<K extends keyof VideoEncoderEventMap>(type: K, listener: (this: VideoEncoder, ev: VideoEncoderEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof VideoEncoderEventMap>(type: K, listener: (this: VideoEncoder, ev: VideoEncoderEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var VideoEncoder: {
    prototype: VideoEncoder;
    new(init: VideoEncoderInit): VideoEncoder;
    isConfigSupported(config: VideoEncoderConfig): Promise<VideoEncoderSupport>;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoFrame) */
interface VideoFrame {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoFrame/codedHeight) */
    readonly codedHeight: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoFrame/codedRect) */
    readonly codedRect: DOMRectReadOnly | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoFrame/codedWidth) */
    readonly codedWidth: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoFrame/colorSpace) */
    readonly colorSpace: VideoColorSpace;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoFrame/displayHeight) */
    readonly displayHeight: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoFrame/displayWidth) */
    readonly displayWidth: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoFrame/duration) */
    readonly duration: number | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoFrame/format) */
    readonly format: VideoPixelFormat | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoFrame/timestamp) */
    readonly timestamp: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoFrame/visibleRect) */
    readonly visibleRect: DOMRectReadOnly | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoFrame/allocationSize) */
    allocationSize(options?: VideoFrameCopyToOptions): number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoFrame/clone) */
    clone(): VideoFrame;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoFrame/close) */
    close(): void;
    copyTo(destination: BufferSource, options?: VideoFrameCopyToOptions): Promise<PlaneLayout[]>;
}

declare var VideoFrame: {
    prototype: VideoFrame;
    new(image: CanvasImageSource, init?: VideoFrameInit): VideoFrame;
    new(data: BufferSource, init: VideoFrameBufferInit): VideoFrame;
};

/**
 * Returned by the HTMLVideoElement.getVideoPlaybackQuality() method and contains metrics that can be used to determine the playback quality of a video.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoPlaybackQuality)
 */
interface VideoPlaybackQuality {
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoPlaybackQuality/corruptedVideoFrames)
     */
    readonly corruptedVideoFrames: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoPlaybackQuality/creationTime) */
    readonly creationTime: DOMHighResTimeStamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoPlaybackQuality/droppedVideoFrames) */
    readonly droppedVideoFrames: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VideoPlaybackQuality/totalVideoFrames) */
    readonly totalVideoFrames: number;
}

declare var VideoPlaybackQuality: {
    prototype: VideoPlaybackQuality;
    new(): VideoPlaybackQuality;
};

interface VisualViewportEventMap {
    "resize": Event;
    "scroll": Event;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VisualViewport) */
interface VisualViewport extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VisualViewport/height) */
    readonly height: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VisualViewport/offsetLeft) */
    readonly offsetLeft: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VisualViewport/offsetTop) */
    readonly offsetTop: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VisualViewport/resize_event) */
    onresize: ((this: VisualViewport, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VisualViewport/scroll_event) */
    onscroll: ((this: VisualViewport, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VisualViewport/pageLeft) */
    readonly pageLeft: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VisualViewport/pageTop) */
    readonly pageTop: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VisualViewport/scale) */
    readonly scale: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/VisualViewport/width) */
    readonly width: number;
    addEventListener<K extends keyof VisualViewportEventMap>(type: K, listener: (this: VisualViewport, ev: VisualViewportEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof VisualViewportEventMap>(type: K, listener: (this: VisualViewport, ev: VisualViewportEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var VisualViewport: {
    prototype: VisualViewport;
    new(): VisualViewport;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WEBGL_color_buffer_float) */
interface WEBGL_color_buffer_float {
    readonly RGBA32F_EXT: 0x8814;
    readonly FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT: 0x8211;
    readonly UNSIGNED_NORMALIZED_EXT: 0x8C17;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WEBGL_compressed_texture_astc) */
interface WEBGL_compressed_texture_astc {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WEBGL_compressed_texture_astc/getSupportedProfiles) */
    getSupportedProfiles(): string[];
    readonly COMPRESSED_RGBA_ASTC_4x4_KHR: 0x93B0;
    readonly COMPRESSED_RGBA_ASTC_5x4_KHR: 0x93B1;
    readonly COMPRESSED_RGBA_ASTC_5x5_KHR: 0x93B2;
    readonly COMPRESSED_RGBA_ASTC_6x5_KHR: 0x93B3;
    readonly COMPRESSED_RGBA_ASTC_6x6_KHR: 0x93B4;
    readonly COMPRESSED_RGBA_ASTC_8x5_KHR: 0x93B5;
    readonly COMPRESSED_RGBA_ASTC_8x6_KHR: 0x93B6;
    readonly COMPRESSED_RGBA_ASTC_8x8_KHR: 0x93B7;
    readonly COMPRESSED_RGBA_ASTC_10x5_KHR: 0x93B8;
    readonly COMPRESSED_RGBA_ASTC_10x6_KHR: 0x93B9;
    readonly COMPRESSED_RGBA_ASTC_10x8_KHR: 0x93BA;
    readonly COMPRESSED_RGBA_ASTC_10x10_KHR: 0x93BB;
    readonly COMPRESSED_RGBA_ASTC_12x10_KHR: 0x93BC;
    readonly COMPRESSED_RGBA_ASTC_12x12_KHR: 0x93BD;
    readonly COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR: 0x93D0;
    readonly COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR: 0x93D1;
    readonly COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR: 0x93D2;
    readonly COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR: 0x93D3;
    readonly COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR: 0x93D4;
    readonly COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR: 0x93D5;
    readonly COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR: 0x93D6;
    readonly COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR: 0x93D7;
    readonly COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR: 0x93D8;
    readonly COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR: 0x93D9;
    readonly COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR: 0x93DA;
    readonly COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR: 0x93DB;
    readonly COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR: 0x93DC;
    readonly COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR: 0x93DD;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WEBGL_compressed_texture_etc) */
interface WEBGL_compressed_texture_etc {
    readonly COMPRESSED_R11_EAC: 0x9270;
    readonly COMPRESSED_SIGNED_R11_EAC: 0x9271;
    readonly COMPRESSED_RG11_EAC: 0x9272;
    readonly COMPRESSED_SIGNED_RG11_EAC: 0x9273;
    readonly COMPRESSED_RGB8_ETC2: 0x9274;
    readonly COMPRESSED_SRGB8_ETC2: 0x9275;
    readonly COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2: 0x9276;
    readonly COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2: 0x9277;
    readonly COMPRESSED_RGBA8_ETC2_EAC: 0x9278;
    readonly COMPRESSED_SRGB8_ALPHA8_ETC2_EAC: 0x9279;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WEBGL_compressed_texture_etc1) */
interface WEBGL_compressed_texture_etc1 {
    readonly COMPRESSED_RGB_ETC1_WEBGL: 0x8D64;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WEBGL_compressed_texture_pvrtc) */
interface WEBGL_compressed_texture_pvrtc {
    readonly COMPRESSED_RGB_PVRTC_4BPPV1_IMG: 0x8C00;
    readonly COMPRESSED_RGB_PVRTC_2BPPV1_IMG: 0x8C01;
    readonly COMPRESSED_RGBA_PVRTC_4BPPV1_IMG: 0x8C02;
    readonly COMPRESSED_RGBA_PVRTC_2BPPV1_IMG: 0x8C03;
}

/**
 * The WEBGL_compressed_texture_s3tc extension is part of the WebGL API and exposes four S3TC compressed texture formats.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WEBGL_compressed_texture_s3tc)
 */
interface WEBGL_compressed_texture_s3tc {
    readonly COMPRESSED_RGB_S3TC_DXT1_EXT: 0x83F0;
    readonly COMPRESSED_RGBA_S3TC_DXT1_EXT: 0x83F1;
    readonly COMPRESSED_RGBA_S3TC_DXT3_EXT: 0x83F2;
    readonly COMPRESSED_RGBA_S3TC_DXT5_EXT: 0x83F3;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WEBGL_compressed_texture_s3tc_srgb) */
interface WEBGL_compressed_texture_s3tc_srgb {
    readonly COMPRESSED_SRGB_S3TC_DXT1_EXT: 0x8C4C;
    readonly COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT: 0x8C4D;
    readonly COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT: 0x8C4E;
    readonly COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT: 0x8C4F;
}

/**
 * The WEBGL_debug_renderer_info extension is part of the WebGL API and exposes two constants with information about the graphics driver for debugging purposes.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WEBGL_debug_renderer_info)
 */
interface WEBGL_debug_renderer_info {
    readonly UNMASKED_VENDOR_WEBGL: 0x9245;
    readonly UNMASKED_RENDERER_WEBGL: 0x9246;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WEBGL_debug_shaders) */
interface WEBGL_debug_shaders {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WEBGL_debug_shaders/getTranslatedShaderSource) */
    getTranslatedShaderSource(shader: WebGLShader): string;
}

/**
 * The WEBGL_depth_texture extension is part of the WebGL API and defines 2D depth and depth-stencil textures.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WEBGL_depth_texture)
 */
interface WEBGL_depth_texture {
    readonly UNSIGNED_INT_24_8_WEBGL: 0x84FA;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WEBGL_draw_buffers) */
interface WEBGL_draw_buffers {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WEBGL_draw_buffers/drawBuffersWEBGL) */
    drawBuffersWEBGL(buffers: GLenum[]): void;
    readonly COLOR_ATTACHMENT0_WEBGL: 0x8CE0;
    readonly COLOR_ATTACHMENT1_WEBGL: 0x8CE1;
    readonly COLOR_ATTACHMENT2_WEBGL: 0x8CE2;
    readonly COLOR_ATTACHMENT3_WEBGL: 0x8CE3;
    readonly COLOR_ATTACHMENT4_WEBGL: 0x8CE4;
    readonly COLOR_ATTACHMENT5_WEBGL: 0x8CE5;
    readonly COLOR_ATTACHMENT6_WEBGL: 0x8CE6;
    readonly COLOR_ATTACHMENT7_WEBGL: 0x8CE7;
    readonly COLOR_ATTACHMENT8_WEBGL: 0x8CE8;
    readonly COLOR_ATTACHMENT9_WEBGL: 0x8CE9;
    readonly COLOR_ATTACHMENT10_WEBGL: 0x8CEA;
    readonly COLOR_ATTACHMENT11_WEBGL: 0x8CEB;
    readonly COLOR_ATTACHMENT12_WEBGL: 0x8CEC;
    readonly COLOR_ATTACHMENT13_WEBGL: 0x8CED;
    readonly COLOR_ATTACHMENT14_WEBGL: 0x8CEE;
    readonly COLOR_ATTACHMENT15_WEBGL: 0x8CEF;
    readonly DRAW_BUFFER0_WEBGL: 0x8825;
    readonly DRAW_BUFFER1_WEBGL: 0x8826;
    readonly DRAW_BUFFER2_WEBGL: 0x8827;
    readonly DRAW_BUFFER3_WEBGL: 0x8828;
    readonly DRAW_BUFFER4_WEBGL: 0x8829;
    readonly DRAW_BUFFER5_WEBGL: 0x882A;
    readonly DRAW_BUFFER6_WEBGL: 0x882B;
    readonly DRAW_BUFFER7_WEBGL: 0x882C;
    readonly DRAW_BUFFER8_WEBGL: 0x882D;
    readonly DRAW_BUFFER9_WEBGL: 0x882E;
    readonly DRAW_BUFFER10_WEBGL: 0x882F;
    readonly DRAW_BUFFER11_WEBGL: 0x8830;
    readonly DRAW_BUFFER12_WEBGL: 0x8831;
    readonly DRAW_BUFFER13_WEBGL: 0x8832;
    readonly DRAW_BUFFER14_WEBGL: 0x8833;
    readonly DRAW_BUFFER15_WEBGL: 0x8834;
    readonly MAX_COLOR_ATTACHMENTS_WEBGL: 0x8CDF;
    readonly MAX_DRAW_BUFFERS_WEBGL: 0x8824;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WEBGL_lose_context) */
interface WEBGL_lose_context {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WEBGL_lose_context/loseContext) */
    loseContext(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WEBGL_lose_context/restoreContext) */
    restoreContext(): void;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WEBGL_multi_draw) */
interface WEBGL_multi_draw {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WEBGL_multi_draw/multiDrawArraysInstancedWEBGL) */
    multiDrawArraysInstancedWEBGL(mode: GLenum, firstsList: Int32Array | GLint[], firstsOffset: GLuint, countsList: Int32Array | GLsizei[], countsOffset: GLuint, instanceCountsList: Int32Array | GLsizei[], instanceCountsOffset: GLuint, drawcount: GLsizei): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WEBGL_multi_draw/multiDrawArraysWEBGL) */
    multiDrawArraysWEBGL(mode: GLenum, firstsList: Int32Array | GLint[], firstsOffset: GLuint, countsList: Int32Array | GLsizei[], countsOffset: GLuint, drawcount: GLsizei): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WEBGL_multi_draw/multiDrawElementsInstancedWEBGL) */
    multiDrawElementsInstancedWEBGL(mode: GLenum, countsList: Int32Array | GLsizei[], countsOffset: GLuint, type: GLenum, offsetsList: Int32Array | GLsizei[], offsetsOffset: GLuint, instanceCountsList: Int32Array | GLsizei[], instanceCountsOffset: GLuint, drawcount: GLsizei): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WEBGL_multi_draw/multiDrawElementsWEBGL) */
    multiDrawElementsWEBGL(mode: GLenum, countsList: Int32Array | GLsizei[], countsOffset: GLuint, type: GLenum, offsetsList: Int32Array | GLsizei[], offsetsOffset: GLuint, drawcount: GLsizei): void;
}

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WakeLock)
 */
interface WakeLock {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WakeLock/request) */
    request(type?: WakeLockType): Promise<WakeLockSentinel>;
}

declare var WakeLock: {
    prototype: WakeLock;
    new(): WakeLock;
};

interface WakeLockSentinelEventMap {
    "release": Event;
}

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WakeLockSentinel)
 */
interface WakeLockSentinel extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WakeLockSentinel/release_event) */
    onrelease: ((this: WakeLockSentinel, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WakeLockSentinel/released) */
    readonly released: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WakeLockSentinel/type) */
    readonly type: WakeLockType;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WakeLockSentinel/release) */
    release(): Promise<void>;
    addEventListener<K extends keyof WakeLockSentinelEventMap>(type: K, listener: (this: WakeLockSentinel, ev: WakeLockSentinelEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof WakeLockSentinelEventMap>(type: K, listener: (this: WakeLockSentinel, ev: WakeLockSentinelEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var WakeLockSentinel: {
    prototype: WakeLockSentinel;
    new(): WakeLockSentinel;
};

/**
 * A WaveShaperNode always has exactly one input and one output.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WaveShaperNode)
 */
interface WaveShaperNode extends AudioNode {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WaveShaperNode/curve) */
    curve: Float32Array | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WaveShaperNode/oversample) */
    oversample: OverSampleType;
}

declare var WaveShaperNode: {
    prototype: WaveShaperNode;
    new(context: BaseAudioContext, options?: WaveShaperOptions): WaveShaperNode;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext) */
interface WebGL2RenderingContext extends WebGL2RenderingContextBase, WebGL2RenderingContextOverloads, WebGLRenderingContextBase {
}

declare var WebGL2RenderingContext: {
    prototype: WebGL2RenderingContext;
    new(): WebGL2RenderingContext;
    readonly READ_BUFFER: 0x0C02;
    readonly UNPACK_ROW_LENGTH: 0x0CF2;
    readonly UNPACK_SKIP_ROWS: 0x0CF3;
    readonly UNPACK_SKIP_PIXELS: 0x0CF4;
    readonly PACK_ROW_LENGTH: 0x0D02;
    readonly PACK_SKIP_ROWS: 0x0D03;
    readonly PACK_SKIP_PIXELS: 0x0D04;
    readonly COLOR: 0x1800;
    readonly DEPTH: 0x1801;
    readonly STENCIL: 0x1802;
    readonly RED: 0x1903;
    readonly RGB8: 0x8051;
    readonly RGBA8: 0x8058;
    readonly RGB10_A2: 0x8059;
    readonly TEXTURE_BINDING_3D: 0x806A;
    readonly UNPACK_SKIP_IMAGES: 0x806D;
    readonly UNPACK_IMAGE_HEIGHT: 0x806E;
    readonly TEXTURE_3D: 0x806F;
    readonly TEXTURE_WRAP_R: 0x8072;
    readonly MAX_3D_TEXTURE_SIZE: 0x8073;
    readonly UNSIGNED_INT_2_10_10_10_REV: 0x8368;
    readonly MAX_ELEMENTS_VERTICES: 0x80E8;
    readonly MAX_ELEMENTS_INDICES: 0x80E9;
    readonly TEXTURE_MIN_LOD: 0x813A;
    readonly TEXTURE_MAX_LOD: 0x813B;
    readonly TEXTURE_BASE_LEVEL: 0x813C;
    readonly TEXTURE_MAX_LEVEL: 0x813D;
    readonly MIN: 0x8007;
    readonly MAX: 0x8008;
    readonly DEPTH_COMPONENT24: 0x81A6;
    readonly MAX_TEXTURE_LOD_BIAS: 0x84FD;
    readonly TEXTURE_COMPARE_MODE: 0x884C;
    readonly TEXTURE_COMPARE_FUNC: 0x884D;
    readonly CURRENT_QUERY: 0x8865;
    readonly QUERY_RESULT: 0x8866;
    readonly QUERY_RESULT_AVAILABLE: 0x8867;
    readonly STREAM_READ: 0x88E1;
    readonly STREAM_COPY: 0x88E2;
    readonly STATIC_READ: 0x88E5;
    readonly STATIC_COPY: 0x88E6;
    readonly DYNAMIC_READ: 0x88E9;
    readonly DYNAMIC_COPY: 0x88EA;
    readonly MAX_DRAW_BUFFERS: 0x8824;
    readonly DRAW_BUFFER0: 0x8825;
    readonly DRAW_BUFFER1: 0x8826;
    readonly DRAW_BUFFER2: 0x8827;
    readonly DRAW_BUFFER3: 0x8828;
    readonly DRAW_BUFFER4: 0x8829;
    readonly DRAW_BUFFER5: 0x882A;
    readonly DRAW_BUFFER6: 0x882B;
    readonly DRAW_BUFFER7: 0x882C;
    readonly DRAW_BUFFER8: 0x882D;
    readonly DRAW_BUFFER9: 0x882E;
    readonly DRAW_BUFFER10: 0x882F;
    readonly DRAW_BUFFER11: 0x8830;
    readonly DRAW_BUFFER12: 0x8831;
    readonly DRAW_BUFFER13: 0x8832;
    readonly DRAW_BUFFER14: 0x8833;
    readonly DRAW_BUFFER15: 0x8834;
    readonly MAX_FRAGMENT_UNIFORM_COMPONENTS: 0x8B49;
    readonly MAX_VERTEX_UNIFORM_COMPONENTS: 0x8B4A;
    readonly SAMPLER_3D: 0x8B5F;
    readonly SAMPLER_2D_SHADOW: 0x8B62;
    readonly FRAGMENT_SHADER_DERIVATIVE_HINT: 0x8B8B;
    readonly PIXEL_PACK_BUFFER: 0x88EB;
    readonly PIXEL_UNPACK_BUFFER: 0x88EC;
    readonly PIXEL_PACK_BUFFER_BINDING: 0x88ED;
    readonly PIXEL_UNPACK_BUFFER_BINDING: 0x88EF;
    readonly FLOAT_MAT2x3: 0x8B65;
    readonly FLOAT_MAT2x4: 0x8B66;
    readonly FLOAT_MAT3x2: 0x8B67;
    readonly FLOAT_MAT3x4: 0x8B68;
    readonly FLOAT_MAT4x2: 0x8B69;
    readonly FLOAT_MAT4x3: 0x8B6A;
    readonly SRGB: 0x8C40;
    readonly SRGB8: 0x8C41;
    readonly SRGB8_ALPHA8: 0x8C43;
    readonly COMPARE_REF_TO_TEXTURE: 0x884E;
    readonly RGBA32F: 0x8814;
    readonly RGB32F: 0x8815;
    readonly RGBA16F: 0x881A;
    readonly RGB16F: 0x881B;
    readonly VERTEX_ATTRIB_ARRAY_INTEGER: 0x88FD;
    readonly MAX_ARRAY_TEXTURE_LAYERS: 0x88FF;
    readonly MIN_PROGRAM_TEXEL_OFFSET: 0x8904;
    readonly MAX_PROGRAM_TEXEL_OFFSET: 0x8905;
    readonly MAX_VARYING_COMPONENTS: 0x8B4B;
    readonly TEXTURE_2D_ARRAY: 0x8C1A;
    readonly TEXTURE_BINDING_2D_ARRAY: 0x8C1D;
    readonly R11F_G11F_B10F: 0x8C3A;
    readonly UNSIGNED_INT_10F_11F_11F_REV: 0x8C3B;
    readonly RGB9_E5: 0x8C3D;
    readonly UNSIGNED_INT_5_9_9_9_REV: 0x8C3E;
    readonly TRANSFORM_FEEDBACK_BUFFER_MODE: 0x8C7F;
    readonly MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS: 0x8C80;
    readonly TRANSFORM_FEEDBACK_VARYINGS: 0x8C83;
    readonly TRANSFORM_FEEDBACK_BUFFER_START: 0x8C84;
    readonly TRANSFORM_FEEDBACK_BUFFER_SIZE: 0x8C85;
    readonly TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN: 0x8C88;
    readonly RASTERIZER_DISCARD: 0x8C89;
    readonly MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS: 0x8C8A;
    readonly MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS: 0x8C8B;
    readonly INTERLEAVED_ATTRIBS: 0x8C8C;
    readonly SEPARATE_ATTRIBS: 0x8C8D;
    readonly TRANSFORM_FEEDBACK_BUFFER: 0x8C8E;
    readonly TRANSFORM_FEEDBACK_BUFFER_BINDING: 0x8C8F;
    readonly RGBA32UI: 0x8D70;
    readonly RGB32UI: 0x8D71;
    readonly RGBA16UI: 0x8D76;
    readonly RGB16UI: 0x8D77;
    readonly RGBA8UI: 0x8D7C;
    readonly RGB8UI: 0x8D7D;
    readonly RGBA32I: 0x8D82;
    readonly RGB32I: 0x8D83;
    readonly RGBA16I: 0x8D88;
    readonly RGB16I: 0x8D89;
    readonly RGBA8I: 0x8D8E;
    readonly RGB8I: 0x8D8F;
    readonly RED_INTEGER: 0x8D94;
    readonly RGB_INTEGER: 0x8D98;
    readonly RGBA_INTEGER: 0x8D99;
    readonly SAMPLER_2D_ARRAY: 0x8DC1;
    readonly SAMPLER_2D_ARRAY_SHADOW: 0x8DC4;
    readonly SAMPLER_CUBE_SHADOW: 0x8DC5;
    readonly UNSIGNED_INT_VEC2: 0x8DC6;
    readonly UNSIGNED_INT_VEC3: 0x8DC7;
    readonly UNSIGNED_INT_VEC4: 0x8DC8;
    readonly INT_SAMPLER_2D: 0x8DCA;
    readonly INT_SAMPLER_3D: 0x8DCB;
    readonly INT_SAMPLER_CUBE: 0x8DCC;
    readonly INT_SAMPLER_2D_ARRAY: 0x8DCF;
    readonly UNSIGNED_INT_SAMPLER_2D: 0x8DD2;
    readonly UNSIGNED_INT_SAMPLER_3D: 0x8DD3;
    readonly UNSIGNED_INT_SAMPLER_CUBE: 0x8DD4;
    readonly UNSIGNED_INT_SAMPLER_2D_ARRAY: 0x8DD7;
    readonly DEPTH_COMPONENT32F: 0x8CAC;
    readonly DEPTH32F_STENCIL8: 0x8CAD;
    readonly FLOAT_32_UNSIGNED_INT_24_8_REV: 0x8DAD;
    readonly FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING: 0x8210;
    readonly FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE: 0x8211;
    readonly FRAMEBUFFER_ATTACHMENT_RED_SIZE: 0x8212;
    readonly FRAMEBUFFER_ATTACHMENT_GREEN_SIZE: 0x8213;
    readonly FRAMEBUFFER_ATTACHMENT_BLUE_SIZE: 0x8214;
    readonly FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE: 0x8215;
    readonly FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE: 0x8216;
    readonly FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE: 0x8217;
    readonly FRAMEBUFFER_DEFAULT: 0x8218;
    readonly UNSIGNED_INT_24_8: 0x84FA;
    readonly DEPTH24_STENCIL8: 0x88F0;
    readonly UNSIGNED_NORMALIZED: 0x8C17;
    readonly DRAW_FRAMEBUFFER_BINDING: 0x8CA6;
    readonly READ_FRAMEBUFFER: 0x8CA8;
    readonly DRAW_FRAMEBUFFER: 0x8CA9;
    readonly READ_FRAMEBUFFER_BINDING: 0x8CAA;
    readonly RENDERBUFFER_SAMPLES: 0x8CAB;
    readonly FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER: 0x8CD4;
    readonly MAX_COLOR_ATTACHMENTS: 0x8CDF;
    readonly COLOR_ATTACHMENT1: 0x8CE1;
    readonly COLOR_ATTACHMENT2: 0x8CE2;
    readonly COLOR_ATTACHMENT3: 0x8CE3;
    readonly COLOR_ATTACHMENT4: 0x8CE4;
    readonly COLOR_ATTACHMENT5: 0x8CE5;
    readonly COLOR_ATTACHMENT6: 0x8CE6;
    readonly COLOR_ATTACHMENT7: 0x8CE7;
    readonly COLOR_ATTACHMENT8: 0x8CE8;
    readonly COLOR_ATTACHMENT9: 0x8CE9;
    readonly COLOR_ATTACHMENT10: 0x8CEA;
    readonly COLOR_ATTACHMENT11: 0x8CEB;
    readonly COLOR_ATTACHMENT12: 0x8CEC;
    readonly COLOR_ATTACHMENT13: 0x8CED;
    readonly COLOR_ATTACHMENT14: 0x8CEE;
    readonly COLOR_ATTACHMENT15: 0x8CEF;
    readonly FRAMEBUFFER_INCOMPLETE_MULTISAMPLE: 0x8D56;
    readonly MAX_SAMPLES: 0x8D57;
    readonly HALF_FLOAT: 0x140B;
    readonly RG: 0x8227;
    readonly RG_INTEGER: 0x8228;
    readonly R8: 0x8229;
    readonly RG8: 0x822B;
    readonly R16F: 0x822D;
    readonly R32F: 0x822E;
    readonly RG16F: 0x822F;
    readonly RG32F: 0x8230;
    readonly R8I: 0x8231;
    readonly R8UI: 0x8232;
    readonly R16I: 0x8233;
    readonly R16UI: 0x8234;
    readonly R32I: 0x8235;
    readonly R32UI: 0x8236;
    readonly RG8I: 0x8237;
    readonly RG8UI: 0x8238;
    readonly RG16I: 0x8239;
    readonly RG16UI: 0x823A;
    readonly RG32I: 0x823B;
    readonly RG32UI: 0x823C;
    readonly VERTEX_ARRAY_BINDING: 0x85B5;
    readonly R8_SNORM: 0x8F94;
    readonly RG8_SNORM: 0x8F95;
    readonly RGB8_SNORM: 0x8F96;
    readonly RGBA8_SNORM: 0x8F97;
    readonly SIGNED_NORMALIZED: 0x8F9C;
    readonly COPY_READ_BUFFER: 0x8F36;
    readonly COPY_WRITE_BUFFER: 0x8F37;
    readonly COPY_READ_BUFFER_BINDING: 0x8F36;
    readonly COPY_WRITE_BUFFER_BINDING: 0x8F37;
    readonly UNIFORM_BUFFER: 0x8A11;
    readonly UNIFORM_BUFFER_BINDING: 0x8A28;
    readonly UNIFORM_BUFFER_START: 0x8A29;
    readonly UNIFORM_BUFFER_SIZE: 0x8A2A;
    readonly MAX_VERTEX_UNIFORM_BLOCKS: 0x8A2B;
    readonly MAX_FRAGMENT_UNIFORM_BLOCKS: 0x8A2D;
    readonly MAX_COMBINED_UNIFORM_BLOCKS: 0x8A2E;
    readonly MAX_UNIFORM_BUFFER_BINDINGS: 0x8A2F;
    readonly MAX_UNIFORM_BLOCK_SIZE: 0x8A30;
    readonly MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS: 0x8A31;
    readonly MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS: 0x8A33;
    readonly UNIFORM_BUFFER_OFFSET_ALIGNMENT: 0x8A34;
    readonly ACTIVE_UNIFORM_BLOCKS: 0x8A36;
    readonly UNIFORM_TYPE: 0x8A37;
    readonly UNIFORM_SIZE: 0x8A38;
    readonly UNIFORM_BLOCK_INDEX: 0x8A3A;
    readonly UNIFORM_OFFSET: 0x8A3B;
    readonly UNIFORM_ARRAY_STRIDE: 0x8A3C;
    readonly UNIFORM_MATRIX_STRIDE: 0x8A3D;
    readonly UNIFORM_IS_ROW_MAJOR: 0x8A3E;
    readonly UNIFORM_BLOCK_BINDING: 0x8A3F;
    readonly UNIFORM_BLOCK_DATA_SIZE: 0x8A40;
    readonly UNIFORM_BLOCK_ACTIVE_UNIFORMS: 0x8A42;
    readonly UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES: 0x8A43;
    readonly UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER: 0x8A44;
    readonly UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER: 0x8A46;
    readonly INVALID_INDEX: 0xFFFFFFFF;
    readonly MAX_VERTEX_OUTPUT_COMPONENTS: 0x9122;
    readonly MAX_FRAGMENT_INPUT_COMPONENTS: 0x9125;
    readonly MAX_SERVER_WAIT_TIMEOUT: 0x9111;
    readonly OBJECT_TYPE: 0x9112;
    readonly SYNC_CONDITION: 0x9113;
    readonly SYNC_STATUS: 0x9114;
    readonly SYNC_FLAGS: 0x9115;
    readonly SYNC_FENCE: 0x9116;
    readonly SYNC_GPU_COMMANDS_COMPLETE: 0x9117;
    readonly UNSIGNALED: 0x9118;
    readonly SIGNALED: 0x9119;
    readonly ALREADY_SIGNALED: 0x911A;
    readonly TIMEOUT_EXPIRED: 0x911B;
    readonly CONDITION_SATISFIED: 0x911C;
    readonly WAIT_FAILED: 0x911D;
    readonly SYNC_FLUSH_COMMANDS_BIT: 0x00000001;
    readonly VERTEX_ATTRIB_ARRAY_DIVISOR: 0x88FE;
    readonly ANY_SAMPLES_PASSED: 0x8C2F;
    readonly ANY_SAMPLES_PASSED_CONSERVATIVE: 0x8D6A;
    readonly SAMPLER_BINDING: 0x8919;
    readonly RGB10_A2UI: 0x906F;
    readonly INT_2_10_10_10_REV: 0x8D9F;
    readonly TRANSFORM_FEEDBACK: 0x8E22;
    readonly TRANSFORM_FEEDBACK_PAUSED: 0x8E23;
    readonly TRANSFORM_FEEDBACK_ACTIVE: 0x8E24;
    readonly TRANSFORM_FEEDBACK_BINDING: 0x8E25;
    readonly TEXTURE_IMMUTABLE_FORMAT: 0x912F;
    readonly MAX_ELEMENT_INDEX: 0x8D6B;
    readonly TEXTURE_IMMUTABLE_LEVELS: 0x82DF;
    readonly TIMEOUT_IGNORED: -1;
    readonly MAX_CLIENT_WAIT_TIMEOUT_WEBGL: 0x9247;
    readonly DEPTH_BUFFER_BIT: 0x00000100;
    readonly STENCIL_BUFFER_BIT: 0x00000400;
    readonly COLOR_BUFFER_BIT: 0x00004000;
    readonly POINTS: 0x0000;
    readonly LINES: 0x0001;
    readonly LINE_LOOP: 0x0002;
    readonly LINE_STRIP: 0x0003;
    readonly TRIANGLES: 0x0004;
    readonly TRIANGLE_STRIP: 0x0005;
    readonly TRIANGLE_FAN: 0x0006;
    readonly ZERO: 0;
    readonly ONE: 1;
    readonly SRC_COLOR: 0x0300;
    readonly ONE_MINUS_SRC_COLOR: 0x0301;
    readonly SRC_ALPHA: 0x0302;
    readonly ONE_MINUS_SRC_ALPHA: 0x0303;
    readonly DST_ALPHA: 0x0304;
    readonly ONE_MINUS_DST_ALPHA: 0x0305;
    readonly DST_COLOR: 0x0306;
    readonly ONE_MINUS_DST_COLOR: 0x0307;
    readonly SRC_ALPHA_SATURATE: 0x0308;
    readonly FUNC_ADD: 0x8006;
    readonly BLEND_EQUATION: 0x8009;
    readonly BLEND_EQUATION_RGB: 0x8009;
    readonly BLEND_EQUATION_ALPHA: 0x883D;
    readonly FUNC_SUBTRACT: 0x800A;
    readonly FUNC_REVERSE_SUBTRACT: 0x800B;
    readonly BLEND_DST_RGB: 0x80C8;
    readonly BLEND_SRC_RGB: 0x80C9;
    readonly BLEND_DST_ALPHA: 0x80CA;
    readonly BLEND_SRC_ALPHA: 0x80CB;
    readonly CONSTANT_COLOR: 0x8001;
    readonly ONE_MINUS_CONSTANT_COLOR: 0x8002;
    readonly CONSTANT_ALPHA: 0x8003;
    readonly ONE_MINUS_CONSTANT_ALPHA: 0x8004;
    readonly BLEND_COLOR: 0x8005;
    readonly ARRAY_BUFFER: 0x8892;
    readonly ELEMENT_ARRAY_BUFFER: 0x8893;
    readonly ARRAY_BUFFER_BINDING: 0x8894;
    readonly ELEMENT_ARRAY_BUFFER_BINDING: 0x8895;
    readonly STREAM_DRAW: 0x88E0;
    readonly STATIC_DRAW: 0x88E4;
    readonly DYNAMIC_DRAW: 0x88E8;
    readonly BUFFER_SIZE: 0x8764;
    readonly BUFFER_USAGE: 0x8765;
    readonly CURRENT_VERTEX_ATTRIB: 0x8626;
    readonly FRONT: 0x0404;
    readonly BACK: 0x0405;
    readonly FRONT_AND_BACK: 0x0408;
    readonly CULL_FACE: 0x0B44;
    readonly BLEND: 0x0BE2;
    readonly DITHER: 0x0BD0;
    readonly STENCIL_TEST: 0x0B90;
    readonly DEPTH_TEST: 0x0B71;
    readonly SCISSOR_TEST: 0x0C11;
    readonly POLYGON_OFFSET_FILL: 0x8037;
    readonly SAMPLE_ALPHA_TO_COVERAGE: 0x809E;
    readonly SAMPLE_COVERAGE: 0x80A0;
    readonly NO_ERROR: 0;
    readonly INVALID_ENUM: 0x0500;
    readonly INVALID_VALUE: 0x0501;
    readonly INVALID_OPERATION: 0x0502;
    readonly OUT_OF_MEMORY: 0x0505;
    readonly CW: 0x0900;
    readonly CCW: 0x0901;
    readonly LINE_WIDTH: 0x0B21;
    readonly ALIASED_POINT_SIZE_RANGE: 0x846D;
    readonly ALIASED_LINE_WIDTH_RANGE: 0x846E;
    readonly CULL_FACE_MODE: 0x0B45;
    readonly FRONT_FACE: 0x0B46;
    readonly DEPTH_RANGE: 0x0B70;
    readonly DEPTH_WRITEMASK: 0x0B72;
    readonly DEPTH_CLEAR_VALUE: 0x0B73;
    readonly DEPTH_FUNC: 0x0B74;
    readonly STENCIL_CLEAR_VALUE: 0x0B91;
    readonly STENCIL_FUNC: 0x0B92;
    readonly STENCIL_FAIL: 0x0B94;
    readonly STENCIL_PASS_DEPTH_FAIL: 0x0B95;
    readonly STENCIL_PASS_DEPTH_PASS: 0x0B96;
    readonly STENCIL_REF: 0x0B97;
    readonly STENCIL_VALUE_MASK: 0x0B93;
    readonly STENCIL_WRITEMASK: 0x0B98;
    readonly STENCIL_BACK_FUNC: 0x8800;
    readonly STENCIL_BACK_FAIL: 0x8801;
    readonly STENCIL_BACK_PASS_DEPTH_FAIL: 0x8802;
    readonly STENCIL_BACK_PASS_DEPTH_PASS: 0x8803;
    readonly STENCIL_BACK_REF: 0x8CA3;
    readonly STENCIL_BACK_VALUE_MASK: 0x8CA4;
    readonly STENCIL_BACK_WRITEMASK: 0x8CA5;
    readonly VIEWPORT: 0x0BA2;
    readonly SCISSOR_BOX: 0x0C10;
    readonly COLOR_CLEAR_VALUE: 0x0C22;
    readonly COLOR_WRITEMASK: 0x0C23;
    readonly UNPACK_ALIGNMENT: 0x0CF5;
    readonly PACK_ALIGNMENT: 0x0D05;
    readonly MAX_TEXTURE_SIZE: 0x0D33;
    readonly MAX_VIEWPORT_DIMS: 0x0D3A;
    readonly SUBPIXEL_BITS: 0x0D50;
    readonly RED_BITS: 0x0D52;
    readonly GREEN_BITS: 0x0D53;
    readonly BLUE_BITS: 0x0D54;
    readonly ALPHA_BITS: 0x0D55;
    readonly DEPTH_BITS: 0x0D56;
    readonly STENCIL_BITS: 0x0D57;
    readonly POLYGON_OFFSET_UNITS: 0x2A00;
    readonly POLYGON_OFFSET_FACTOR: 0x8038;
    readonly TEXTURE_BINDING_2D: 0x8069;
    readonly SAMPLE_BUFFERS: 0x80A8;
    readonly SAMPLES: 0x80A9;
    readonly SAMPLE_COVERAGE_VALUE: 0x80AA;
    readonly SAMPLE_COVERAGE_INVERT: 0x80AB;
    readonly COMPRESSED_TEXTURE_FORMATS: 0x86A3;
    readonly DONT_CARE: 0x1100;
    readonly FASTEST: 0x1101;
    readonly NICEST: 0x1102;
    readonly GENERATE_MIPMAP_HINT: 0x8192;
    readonly BYTE: 0x1400;
    readonly UNSIGNED_BYTE: 0x1401;
    readonly SHORT: 0x1402;
    readonly UNSIGNED_SHORT: 0x1403;
    readonly INT: 0x1404;
    readonly UNSIGNED_INT: 0x1405;
    readonly FLOAT: 0x1406;
    readonly DEPTH_COMPONENT: 0x1902;
    readonly ALPHA: 0x1906;
    readonly RGB: 0x1907;
    readonly RGBA: 0x1908;
    readonly LUMINANCE: 0x1909;
    readonly LUMINANCE_ALPHA: 0x190A;
    readonly UNSIGNED_SHORT_4_4_4_4: 0x8033;
    readonly UNSIGNED_SHORT_5_5_5_1: 0x8034;
    readonly UNSIGNED_SHORT_5_6_5: 0x8363;
    readonly FRAGMENT_SHADER: 0x8B30;
    readonly VERTEX_SHADER: 0x8B31;
    readonly MAX_VERTEX_ATTRIBS: 0x8869;
    readonly MAX_VERTEX_UNIFORM_VECTORS: 0x8DFB;
    readonly MAX_VARYING_VECTORS: 0x8DFC;
    readonly MAX_COMBINED_TEXTURE_IMAGE_UNITS: 0x8B4D;
    readonly MAX_VERTEX_TEXTURE_IMAGE_UNITS: 0x8B4C;
    readonly MAX_TEXTURE_IMAGE_UNITS: 0x8872;
    readonly MAX_FRAGMENT_UNIFORM_VECTORS: 0x8DFD;
    readonly SHADER_TYPE: 0x8B4F;
    readonly DELETE_STATUS: 0x8B80;
    readonly LINK_STATUS: 0x8B82;
    readonly VALIDATE_STATUS: 0x8B83;
    readonly ATTACHED_SHADERS: 0x8B85;
    readonly ACTIVE_UNIFORMS: 0x8B86;
    readonly ACTIVE_ATTRIBUTES: 0x8B89;
    readonly SHADING_LANGUAGE_VERSION: 0x8B8C;
    readonly CURRENT_PROGRAM: 0x8B8D;
    readonly NEVER: 0x0200;
    readonly LESS: 0x0201;
    readonly EQUAL: 0x0202;
    readonly LEQUAL: 0x0203;
    readonly GREATER: 0x0204;
    readonly NOTEQUAL: 0x0205;
    readonly GEQUAL: 0x0206;
    readonly ALWAYS: 0x0207;
    readonly KEEP: 0x1E00;
    readonly REPLACE: 0x1E01;
    readonly INCR: 0x1E02;
    readonly DECR: 0x1E03;
    readonly INVERT: 0x150A;
    readonly INCR_WRAP: 0x8507;
    readonly DECR_WRAP: 0x8508;
    readonly VENDOR: 0x1F00;
    readonly RENDERER: 0x1F01;
    readonly VERSION: 0x1F02;
    readonly NEAREST: 0x2600;
    readonly LINEAR: 0x2601;
    readonly NEAREST_MIPMAP_NEAREST: 0x2700;
    readonly LINEAR_MIPMAP_NEAREST: 0x2701;
    readonly NEAREST_MIPMAP_LINEAR: 0x2702;
    readonly LINEAR_MIPMAP_LINEAR: 0x2703;
    readonly TEXTURE_MAG_FILTER: 0x2800;
    readonly TEXTURE_MIN_FILTER: 0x2801;
    readonly TEXTURE_WRAP_S: 0x2802;
    readonly TEXTURE_WRAP_T: 0x2803;
    readonly TEXTURE_2D: 0x0DE1;
    readonly TEXTURE: 0x1702;
    readonly TEXTURE_CUBE_MAP: 0x8513;
    readonly TEXTURE_BINDING_CUBE_MAP: 0x8514;
    readonly TEXTURE_CUBE_MAP_POSITIVE_X: 0x8515;
    readonly TEXTURE_CUBE_MAP_NEGATIVE_X: 0x8516;
    readonly TEXTURE_CUBE_MAP_POSITIVE_Y: 0x8517;
    readonly TEXTURE_CUBE_MAP_NEGATIVE_Y: 0x8518;
    readonly TEXTURE_CUBE_MAP_POSITIVE_Z: 0x8519;
    readonly TEXTURE_CUBE_MAP_NEGATIVE_Z: 0x851A;
    readonly MAX_CUBE_MAP_TEXTURE_SIZE: 0x851C;
    readonly TEXTURE0: 0x84C0;
    readonly TEXTURE1: 0x84C1;
    readonly TEXTURE2: 0x84C2;
    readonly TEXTURE3: 0x84C3;
    readonly TEXTURE4: 0x84C4;
    readonly TEXTURE5: 0x84C5;
    readonly TEXTURE6: 0x84C6;
    readonly TEXTURE7: 0x84C7;
    readonly TEXTURE8: 0x84C8;
    readonly TEXTURE9: 0x84C9;
    readonly TEXTURE10: 0x84CA;
    readonly TEXTURE11: 0x84CB;
    readonly TEXTURE12: 0x84CC;
    readonly TEXTURE13: 0x84CD;
    readonly TEXTURE14: 0x84CE;
    readonly TEXTURE15: 0x84CF;
    readonly TEXTURE16: 0x84D0;
    readonly TEXTURE17: 0x84D1;
    readonly TEXTURE18: 0x84D2;
    readonly TEXTURE19: 0x84D3;
    readonly TEXTURE20: 0x84D4;
    readonly TEXTURE21: 0x84D5;
    readonly TEXTURE22: 0x84D6;
    readonly TEXTURE23: 0x84D7;
    readonly TEXTURE24: 0x84D8;
    readonly TEXTURE25: 0x84D9;
    readonly TEXTURE26: 0x84DA;
    readonly TEXTURE27: 0x84DB;
    readonly TEXTURE28: 0x84DC;
    readonly TEXTURE29: 0x84DD;
    readonly TEXTURE30: 0x84DE;
    readonly TEXTURE31: 0x84DF;
    readonly ACTIVE_TEXTURE: 0x84E0;
    readonly REPEAT: 0x2901;
    readonly CLAMP_TO_EDGE: 0x812F;
    readonly MIRRORED_REPEAT: 0x8370;
    readonly FLOAT_VEC2: 0x8B50;
    readonly FLOAT_VEC3: 0x8B51;
    readonly FLOAT_VEC4: 0x8B52;
    readonly INT_VEC2: 0x8B53;
    readonly INT_VEC3: 0x8B54;
    readonly INT_VEC4: 0x8B55;
    readonly BOOL: 0x8B56;
    readonly BOOL_VEC2: 0x8B57;
    readonly BOOL_VEC3: 0x8B58;
    readonly BOOL_VEC4: 0x8B59;
    readonly FLOAT_MAT2: 0x8B5A;
    readonly FLOAT_MAT3: 0x8B5B;
    readonly FLOAT_MAT4: 0x8B5C;
    readonly SAMPLER_2D: 0x8B5E;
    readonly SAMPLER_CUBE: 0x8B60;
    readonly VERTEX_ATTRIB_ARRAY_ENABLED: 0x8622;
    readonly VERTEX_ATTRIB_ARRAY_SIZE: 0x8623;
    readonly VERTEX_ATTRIB_ARRAY_STRIDE: 0x8624;
    readonly VERTEX_ATTRIB_ARRAY_TYPE: 0x8625;
    readonly VERTEX_ATTRIB_ARRAY_NORMALIZED: 0x886A;
    readonly VERTEX_ATTRIB_ARRAY_POINTER: 0x8645;
    readonly VERTEX_ATTRIB_ARRAY_BUFFER_BINDING: 0x889F;
    readonly IMPLEMENTATION_COLOR_READ_TYPE: 0x8B9A;
    readonly IMPLEMENTATION_COLOR_READ_FORMAT: 0x8B9B;
    readonly COMPILE_STATUS: 0x8B81;
    readonly LOW_FLOAT: 0x8DF0;
    readonly MEDIUM_FLOAT: 0x8DF1;
    readonly HIGH_FLOAT: 0x8DF2;
    readonly LOW_INT: 0x8DF3;
    readonly MEDIUM_INT: 0x8DF4;
    readonly HIGH_INT: 0x8DF5;
    readonly FRAMEBUFFER: 0x8D40;
    readonly RENDERBUFFER: 0x8D41;
    readonly RGBA4: 0x8056;
    readonly RGB5_A1: 0x8057;
    readonly RGB565: 0x8D62;
    readonly DEPTH_COMPONENT16: 0x81A5;
    readonly STENCIL_INDEX8: 0x8D48;
    readonly DEPTH_STENCIL: 0x84F9;
    readonly RENDERBUFFER_WIDTH: 0x8D42;
    readonly RENDERBUFFER_HEIGHT: 0x8D43;
    readonly RENDERBUFFER_INTERNAL_FORMAT: 0x8D44;
    readonly RENDERBUFFER_RED_SIZE: 0x8D50;
    readonly RENDERBUFFER_GREEN_SIZE: 0x8D51;
    readonly RENDERBUFFER_BLUE_SIZE: 0x8D52;
    readonly RENDERBUFFER_ALPHA_SIZE: 0x8D53;
    readonly RENDERBUFFER_DEPTH_SIZE: 0x8D54;
    readonly RENDERBUFFER_STENCIL_SIZE: 0x8D55;
    readonly FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE: 0x8CD0;
    readonly FRAMEBUFFER_ATTACHMENT_OBJECT_NAME: 0x8CD1;
    readonly FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL: 0x8CD2;
    readonly FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE: 0x8CD3;
    readonly COLOR_ATTACHMENT0: 0x8CE0;
    readonly DEPTH_ATTACHMENT: 0x8D00;
    readonly STENCIL_ATTACHMENT: 0x8D20;
    readonly DEPTH_STENCIL_ATTACHMENT: 0x821A;
    readonly NONE: 0;
    readonly FRAMEBUFFER_COMPLETE: 0x8CD5;
    readonly FRAMEBUFFER_INCOMPLETE_ATTACHMENT: 0x8CD6;
    readonly FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT: 0x8CD7;
    readonly FRAMEBUFFER_INCOMPLETE_DIMENSIONS: 0x8CD9;
    readonly FRAMEBUFFER_UNSUPPORTED: 0x8CDD;
    readonly FRAMEBUFFER_BINDING: 0x8CA6;
    readonly RENDERBUFFER_BINDING: 0x8CA7;
    readonly MAX_RENDERBUFFER_SIZE: 0x84E8;
    readonly INVALID_FRAMEBUFFER_OPERATION: 0x0506;
    readonly UNPACK_FLIP_Y_WEBGL: 0x9240;
    readonly UNPACK_PREMULTIPLY_ALPHA_WEBGL: 0x9241;
    readonly CONTEXT_LOST_WEBGL: 0x9242;
    readonly UNPACK_COLORSPACE_CONVERSION_WEBGL: 0x9243;
    readonly BROWSER_DEFAULT_WEBGL: 0x9244;
};

interface WebGL2RenderingContextBase {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/beginQuery) */
    beginQuery(target: GLenum, query: WebGLQuery): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/beginTransformFeedback) */
    beginTransformFeedback(primitiveMode: GLenum): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/bindBufferBase) */
    bindBufferBase(target: GLenum, index: GLuint, buffer: WebGLBuffer | null): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/bindBufferRange) */
    bindBufferRange(target: GLenum, index: GLuint, buffer: WebGLBuffer | null, offset: GLintptr, size: GLsizeiptr): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/bindSampler) */
    bindSampler(unit: GLuint, sampler: WebGLSampler | null): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/bindTransformFeedback) */
    bindTransformFeedback(target: GLenum, tf: WebGLTransformFeedback | null): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/bindVertexArray) */
    bindVertexArray(array: WebGLVertexArrayObject | null): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/blitFramebuffer) */
    blitFramebuffer(srcX0: GLint, srcY0: GLint, srcX1: GLint, srcY1: GLint, dstX0: GLint, dstY0: GLint, dstX1: GLint, dstY1: GLint, mask: GLbitfield, filter: GLenum): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/clearBuffer) */
    clearBufferfi(buffer: GLenum, drawbuffer: GLint, depth: GLfloat, stencil: GLint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/clearBuffer) */
    clearBufferfv(buffer: GLenum, drawbuffer: GLint, values: Float32List, srcOffset?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/clearBuffer) */
    clearBufferiv(buffer: GLenum, drawbuffer: GLint, values: Int32List, srcOffset?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/clearBuffer) */
    clearBufferuiv(buffer: GLenum, drawbuffer: GLint, values: Uint32List, srcOffset?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/clientWaitSync) */
    clientWaitSync(sync: WebGLSync, flags: GLbitfield, timeout: GLuint64): GLenum;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/compressedTexImage3D) */
    compressedTexImage3D(target: GLenum, level: GLint, internalformat: GLenum, width: GLsizei, height: GLsizei, depth: GLsizei, border: GLint, imageSize: GLsizei, offset: GLintptr): void;
    compressedTexImage3D(target: GLenum, level: GLint, internalformat: GLenum, width: GLsizei, height: GLsizei, depth: GLsizei, border: GLint, srcData: ArrayBufferView, srcOffset?: GLuint, srcLengthOverride?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/compressedTexSubImage3D) */
    compressedTexSubImage3D(target: GLenum, level: GLint, xoffset: GLint, yoffset: GLint, zoffset: GLint, width: GLsizei, height: GLsizei, depth: GLsizei, format: GLenum, imageSize: GLsizei, offset: GLintptr): void;
    compressedTexSubImage3D(target: GLenum, level: GLint, xoffset: GLint, yoffset: GLint, zoffset: GLint, width: GLsizei, height: GLsizei, depth: GLsizei, format: GLenum, srcData: ArrayBufferView, srcOffset?: GLuint, srcLengthOverride?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/copyBufferSubData) */
    copyBufferSubData(readTarget: GLenum, writeTarget: GLenum, readOffset: GLintptr, writeOffset: GLintptr, size: GLsizeiptr): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/copyTexSubImage3D) */
    copyTexSubImage3D(target: GLenum, level: GLint, xoffset: GLint, yoffset: GLint, zoffset: GLint, x: GLint, y: GLint, width: GLsizei, height: GLsizei): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/createQuery) */
    createQuery(): WebGLQuery | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/createSampler) */
    createSampler(): WebGLSampler | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/createTransformFeedback) */
    createTransformFeedback(): WebGLTransformFeedback | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/createVertexArray) */
    createVertexArray(): WebGLVertexArrayObject | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/deleteQuery) */
    deleteQuery(query: WebGLQuery | null): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/deleteSampler) */
    deleteSampler(sampler: WebGLSampler | null): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/deleteSync) */
    deleteSync(sync: WebGLSync | null): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/deleteTransformFeedback) */
    deleteTransformFeedback(tf: WebGLTransformFeedback | null): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/deleteVertexArray) */
    deleteVertexArray(vertexArray: WebGLVertexArrayObject | null): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/drawArraysInstanced) */
    drawArraysInstanced(mode: GLenum, first: GLint, count: GLsizei, instanceCount: GLsizei): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/drawBuffers) */
    drawBuffers(buffers: GLenum[]): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/drawElementsInstanced) */
    drawElementsInstanced(mode: GLenum, count: GLsizei, type: GLenum, offset: GLintptr, instanceCount: GLsizei): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/drawRangeElements) */
    drawRangeElements(mode: GLenum, start: GLuint, end: GLuint, count: GLsizei, type: GLenum, offset: GLintptr): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/endQuery) */
    endQuery(target: GLenum): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/endTransformFeedback) */
    endTransformFeedback(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/fenceSync) */
    fenceSync(condition: GLenum, flags: GLbitfield): WebGLSync | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/framebufferTextureLayer) */
    framebufferTextureLayer(target: GLenum, attachment: GLenum, texture: WebGLTexture | null, level: GLint, layer: GLint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/getActiveUniformBlockName) */
    getActiveUniformBlockName(program: WebGLProgram, uniformBlockIndex: GLuint): string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/getActiveUniformBlockParameter) */
    getActiveUniformBlockParameter(program: WebGLProgram, uniformBlockIndex: GLuint, pname: GLenum): any;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/getActiveUniforms) */
    getActiveUniforms(program: WebGLProgram, uniformIndices: GLuint[], pname: GLenum): any;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/getBufferSubData) */
    getBufferSubData(target: GLenum, srcByteOffset: GLintptr, dstBuffer: ArrayBufferView, dstOffset?: GLuint, length?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/getFragDataLocation) */
    getFragDataLocation(program: WebGLProgram, name: string): GLint;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/getIndexedParameter) */
    getIndexedParameter(target: GLenum, index: GLuint): any;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/getInternalformatParameter) */
    getInternalformatParameter(target: GLenum, internalformat: GLenum, pname: GLenum): any;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/getQuery) */
    getQuery(target: GLenum, pname: GLenum): WebGLQuery | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/getQueryParameter) */
    getQueryParameter(query: WebGLQuery, pname: GLenum): any;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/getSamplerParameter) */
    getSamplerParameter(sampler: WebGLSampler, pname: GLenum): any;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/getSyncParameter) */
    getSyncParameter(sync: WebGLSync, pname: GLenum): any;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/getTransformFeedbackVarying) */
    getTransformFeedbackVarying(program: WebGLProgram, index: GLuint): WebGLActiveInfo | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/getUniformBlockIndex) */
    getUniformBlockIndex(program: WebGLProgram, uniformBlockName: string): GLuint;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/getUniformIndices) */
    getUniformIndices(program: WebGLProgram, uniformNames: string[]): GLuint[] | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/invalidateFramebuffer) */
    invalidateFramebuffer(target: GLenum, attachments: GLenum[]): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/invalidateSubFramebuffer) */
    invalidateSubFramebuffer(target: GLenum, attachments: GLenum[], x: GLint, y: GLint, width: GLsizei, height: GLsizei): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/isQuery) */
    isQuery(query: WebGLQuery | null): GLboolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/isSampler) */
    isSampler(sampler: WebGLSampler | null): GLboolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/isSync) */
    isSync(sync: WebGLSync | null): GLboolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/isTransformFeedback) */
    isTransformFeedback(tf: WebGLTransformFeedback | null): GLboolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/isVertexArray) */
    isVertexArray(vertexArray: WebGLVertexArrayObject | null): GLboolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/pauseTransformFeedback) */
    pauseTransformFeedback(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/readBuffer) */
    readBuffer(src: GLenum): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/renderbufferStorageMultisample) */
    renderbufferStorageMultisample(target: GLenum, samples: GLsizei, internalformat: GLenum, width: GLsizei, height: GLsizei): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/resumeTransformFeedback) */
    resumeTransformFeedback(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/samplerParameter) */
    samplerParameterf(sampler: WebGLSampler, pname: GLenum, param: GLfloat): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/samplerParameter) */
    samplerParameteri(sampler: WebGLSampler, pname: GLenum, param: GLint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/texImage3D) */
    texImage3D(target: GLenum, level: GLint, internalformat: GLint, width: GLsizei, height: GLsizei, depth: GLsizei, border: GLint, format: GLenum, type: GLenum, pboOffset: GLintptr): void;
    texImage3D(target: GLenum, level: GLint, internalformat: GLint, width: GLsizei, height: GLsizei, depth: GLsizei, border: GLint, format: GLenum, type: GLenum, source: TexImageSource): void;
    texImage3D(target: GLenum, level: GLint, internalformat: GLint, width: GLsizei, height: GLsizei, depth: GLsizei, border: GLint, format: GLenum, type: GLenum, srcData: ArrayBufferView | null): void;
    texImage3D(target: GLenum, level: GLint, internalformat: GLint, width: GLsizei, height: GLsizei, depth: GLsizei, border: GLint, format: GLenum, type: GLenum, srcData: ArrayBufferView, srcOffset: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/texStorage2D) */
    texStorage2D(target: GLenum, levels: GLsizei, internalformat: GLenum, width: GLsizei, height: GLsizei): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/texStorage3D) */
    texStorage3D(target: GLenum, levels: GLsizei, internalformat: GLenum, width: GLsizei, height: GLsizei, depth: GLsizei): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/texSubImage3D) */
    texSubImage3D(target: GLenum, level: GLint, xoffset: GLint, yoffset: GLint, zoffset: GLint, width: GLsizei, height: GLsizei, depth: GLsizei, format: GLenum, type: GLenum, pboOffset: GLintptr): void;
    texSubImage3D(target: GLenum, level: GLint, xoffset: GLint, yoffset: GLint, zoffset: GLint, width: GLsizei, height: GLsizei, depth: GLsizei, format: GLenum, type: GLenum, source: TexImageSource): void;
    texSubImage3D(target: GLenum, level: GLint, xoffset: GLint, yoffset: GLint, zoffset: GLint, width: GLsizei, height: GLsizei, depth: GLsizei, format: GLenum, type: GLenum, srcData: ArrayBufferView | null, srcOffset?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/transformFeedbackVaryings) */
    transformFeedbackVaryings(program: WebGLProgram, varyings: string[], bufferMode: GLenum): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/uniform) */
    uniform1ui(location: WebGLUniformLocation | null, v0: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/uniform) */
    uniform1uiv(location: WebGLUniformLocation | null, data: Uint32List, srcOffset?: GLuint, srcLength?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/uniform) */
    uniform2ui(location: WebGLUniformLocation | null, v0: GLuint, v1: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/uniform) */
    uniform2uiv(location: WebGLUniformLocation | null, data: Uint32List, srcOffset?: GLuint, srcLength?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/uniform) */
    uniform3ui(location: WebGLUniformLocation | null, v0: GLuint, v1: GLuint, v2: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/uniform) */
    uniform3uiv(location: WebGLUniformLocation | null, data: Uint32List, srcOffset?: GLuint, srcLength?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/uniform) */
    uniform4ui(location: WebGLUniformLocation | null, v0: GLuint, v1: GLuint, v2: GLuint, v3: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/uniform) */
    uniform4uiv(location: WebGLUniformLocation | null, data: Uint32List, srcOffset?: GLuint, srcLength?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/uniformBlockBinding) */
    uniformBlockBinding(program: WebGLProgram, uniformBlockIndex: GLuint, uniformBlockBinding: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/uniformMatrix) */
    uniformMatrix2x3fv(location: WebGLUniformLocation | null, transpose: GLboolean, data: Float32List, srcOffset?: GLuint, srcLength?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/uniformMatrix) */
    uniformMatrix2x4fv(location: WebGLUniformLocation | null, transpose: GLboolean, data: Float32List, srcOffset?: GLuint, srcLength?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/uniformMatrix) */
    uniformMatrix3x2fv(location: WebGLUniformLocation | null, transpose: GLboolean, data: Float32List, srcOffset?: GLuint, srcLength?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/uniformMatrix) */
    uniformMatrix3x4fv(location: WebGLUniformLocation | null, transpose: GLboolean, data: Float32List, srcOffset?: GLuint, srcLength?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/uniformMatrix) */
    uniformMatrix4x2fv(location: WebGLUniformLocation | null, transpose: GLboolean, data: Float32List, srcOffset?: GLuint, srcLength?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/uniformMatrix) */
    uniformMatrix4x3fv(location: WebGLUniformLocation | null, transpose: GLboolean, data: Float32List, srcOffset?: GLuint, srcLength?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/vertexAttribDivisor) */
    vertexAttribDivisor(index: GLuint, divisor: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/vertexAttribI) */
    vertexAttribI4i(index: GLuint, x: GLint, y: GLint, z: GLint, w: GLint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/vertexAttribI) */
    vertexAttribI4iv(index: GLuint, values: Int32List): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/vertexAttribI) */
    vertexAttribI4ui(index: GLuint, x: GLuint, y: GLuint, z: GLuint, w: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/vertexAttribI) */
    vertexAttribI4uiv(index: GLuint, values: Uint32List): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/vertexAttribIPointer) */
    vertexAttribIPointer(index: GLuint, size: GLint, type: GLenum, stride: GLsizei, offset: GLintptr): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGL2RenderingContext/waitSync) */
    waitSync(sync: WebGLSync, flags: GLbitfield, timeout: GLint64): void;
    readonly READ_BUFFER: 0x0C02;
    readonly UNPACK_ROW_LENGTH: 0x0CF2;
    readonly UNPACK_SKIP_ROWS: 0x0CF3;
    readonly UNPACK_SKIP_PIXELS: 0x0CF4;
    readonly PACK_ROW_LENGTH: 0x0D02;
    readonly PACK_SKIP_ROWS: 0x0D03;
    readonly PACK_SKIP_PIXELS: 0x0D04;
    readonly COLOR: 0x1800;
    readonly DEPTH: 0x1801;
    readonly STENCIL: 0x1802;
    readonly RED: 0x1903;
    readonly RGB8: 0x8051;
    readonly RGBA8: 0x8058;
    readonly RGB10_A2: 0x8059;
    readonly TEXTURE_BINDING_3D: 0x806A;
    readonly UNPACK_SKIP_IMAGES: 0x806D;
    readonly UNPACK_IMAGE_HEIGHT: 0x806E;
    readonly TEXTURE_3D: 0x806F;
    readonly TEXTURE_WRAP_R: 0x8072;
    readonly MAX_3D_TEXTURE_SIZE: 0x8073;
    readonly UNSIGNED_INT_2_10_10_10_REV: 0x8368;
    readonly MAX_ELEMENTS_VERTICES: 0x80E8;
    readonly MAX_ELEMENTS_INDICES: 0x80E9;
    readonly TEXTURE_MIN_LOD: 0x813A;
    readonly TEXTURE_MAX_LOD: 0x813B;
    readonly TEXTURE_BASE_LEVEL: 0x813C;
    readonly TEXTURE_MAX_LEVEL: 0x813D;
    readonly MIN: 0x8007;
    readonly MAX: 0x8008;
    readonly DEPTH_COMPONENT24: 0x81A6;
    readonly MAX_TEXTURE_LOD_BIAS: 0x84FD;
    readonly TEXTURE_COMPARE_MODE: 0x884C;
    readonly TEXTURE_COMPARE_FUNC: 0x884D;
    readonly CURRENT_QUERY: 0x8865;
    readonly QUERY_RESULT: 0x8866;
    readonly QUERY_RESULT_AVAILABLE: 0x8867;
    readonly STREAM_READ: 0x88E1;
    readonly STREAM_COPY: 0x88E2;
    readonly STATIC_READ: 0x88E5;
    readonly STATIC_COPY: 0x88E6;
    readonly DYNAMIC_READ: 0x88E9;
    readonly DYNAMIC_COPY: 0x88EA;
    readonly MAX_DRAW_BUFFERS: 0x8824;
    readonly DRAW_BUFFER0: 0x8825;
    readonly DRAW_BUFFER1: 0x8826;
    readonly DRAW_BUFFER2: 0x8827;
    readonly DRAW_BUFFER3: 0x8828;
    readonly DRAW_BUFFER4: 0x8829;
    readonly DRAW_BUFFER5: 0x882A;
    readonly DRAW_BUFFER6: 0x882B;
    readonly DRAW_BUFFER7: 0x882C;
    readonly DRAW_BUFFER8: 0x882D;
    readonly DRAW_BUFFER9: 0x882E;
    readonly DRAW_BUFFER10: 0x882F;
    readonly DRAW_BUFFER11: 0x8830;
    readonly DRAW_BUFFER12: 0x8831;
    readonly DRAW_BUFFER13: 0x8832;
    readonly DRAW_BUFFER14: 0x8833;
    readonly DRAW_BUFFER15: 0x8834;
    readonly MAX_FRAGMENT_UNIFORM_COMPONENTS: 0x8B49;
    readonly MAX_VERTEX_UNIFORM_COMPONENTS: 0x8B4A;
    readonly SAMPLER_3D: 0x8B5F;
    readonly SAMPLER_2D_SHADOW: 0x8B62;
    readonly FRAGMENT_SHADER_DERIVATIVE_HINT: 0x8B8B;
    readonly PIXEL_PACK_BUFFER: 0x88EB;
    readonly PIXEL_UNPACK_BUFFER: 0x88EC;
    readonly PIXEL_PACK_BUFFER_BINDING: 0x88ED;
    readonly PIXEL_UNPACK_BUFFER_BINDING: 0x88EF;
    readonly FLOAT_MAT2x3: 0x8B65;
    readonly FLOAT_MAT2x4: 0x8B66;
    readonly FLOAT_MAT3x2: 0x8B67;
    readonly FLOAT_MAT3x4: 0x8B68;
    readonly FLOAT_MAT4x2: 0x8B69;
    readonly FLOAT_MAT4x3: 0x8B6A;
    readonly SRGB: 0x8C40;
    readonly SRGB8: 0x8C41;
    readonly SRGB8_ALPHA8: 0x8C43;
    readonly COMPARE_REF_TO_TEXTURE: 0x884E;
    readonly RGBA32F: 0x8814;
    readonly RGB32F: 0x8815;
    readonly RGBA16F: 0x881A;
    readonly RGB16F: 0x881B;
    readonly VERTEX_ATTRIB_ARRAY_INTEGER: 0x88FD;
    readonly MAX_ARRAY_TEXTURE_LAYERS: 0x88FF;
    readonly MIN_PROGRAM_TEXEL_OFFSET: 0x8904;
    readonly MAX_PROGRAM_TEXEL_OFFSET: 0x8905;
    readonly MAX_VARYING_COMPONENTS: 0x8B4B;
    readonly TEXTURE_2D_ARRAY: 0x8C1A;
    readonly TEXTURE_BINDING_2D_ARRAY: 0x8C1D;
    readonly R11F_G11F_B10F: 0x8C3A;
    readonly UNSIGNED_INT_10F_11F_11F_REV: 0x8C3B;
    readonly RGB9_E5: 0x8C3D;
    readonly UNSIGNED_INT_5_9_9_9_REV: 0x8C3E;
    readonly TRANSFORM_FEEDBACK_BUFFER_MODE: 0x8C7F;
    readonly MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS: 0x8C80;
    readonly TRANSFORM_FEEDBACK_VARYINGS: 0x8C83;
    readonly TRANSFORM_FEEDBACK_BUFFER_START: 0x8C84;
    readonly TRANSFORM_FEEDBACK_BUFFER_SIZE: 0x8C85;
    readonly TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN: 0x8C88;
    readonly RASTERIZER_DISCARD: 0x8C89;
    readonly MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS: 0x8C8A;
    readonly MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS: 0x8C8B;
    readonly INTERLEAVED_ATTRIBS: 0x8C8C;
    readonly SEPARATE_ATTRIBS: 0x8C8D;
    readonly TRANSFORM_FEEDBACK_BUFFER: 0x8C8E;
    readonly TRANSFORM_FEEDBACK_BUFFER_BINDING: 0x8C8F;
    readonly RGBA32UI: 0x8D70;
    readonly RGB32UI: 0x8D71;
    readonly RGBA16UI: 0x8D76;
    readonly RGB16UI: 0x8D77;
    readonly RGBA8UI: 0x8D7C;
    readonly RGB8UI: 0x8D7D;
    readonly RGBA32I: 0x8D82;
    readonly RGB32I: 0x8D83;
    readonly RGBA16I: 0x8D88;
    readonly RGB16I: 0x8D89;
    readonly RGBA8I: 0x8D8E;
    readonly RGB8I: 0x8D8F;
    readonly RED_INTEGER: 0x8D94;
    readonly RGB_INTEGER: 0x8D98;
    readonly RGBA_INTEGER: 0x8D99;
    readonly SAMPLER_2D_ARRAY: 0x8DC1;
    readonly SAMPLER_2D_ARRAY_SHADOW: 0x8DC4;
    readonly SAMPLER_CUBE_SHADOW: 0x8DC5;
    readonly UNSIGNED_INT_VEC2: 0x8DC6;
    readonly UNSIGNED_INT_VEC3: 0x8DC7;
    readonly UNSIGNED_INT_VEC4: 0x8DC8;
    readonly INT_SAMPLER_2D: 0x8DCA;
    readonly INT_SAMPLER_3D: 0x8DCB;
    readonly INT_SAMPLER_CUBE: 0x8DCC;
    readonly INT_SAMPLER_2D_ARRAY: 0x8DCF;
    readonly UNSIGNED_INT_SAMPLER_2D: 0x8DD2;
    readonly UNSIGNED_INT_SAMPLER_3D: 0x8DD3;
    readonly UNSIGNED_INT_SAMPLER_CUBE: 0x8DD4;
    readonly UNSIGNED_INT_SAMPLER_2D_ARRAY: 0x8DD7;
    readonly DEPTH_COMPONENT32F: 0x8CAC;
    readonly DEPTH32F_STENCIL8: 0x8CAD;
    readonly FLOAT_32_UNSIGNED_INT_24_8_REV: 0x8DAD;
    readonly FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING: 0x8210;
    readonly FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE: 0x8211;
    readonly FRAMEBUFFER_ATTACHMENT_RED_SIZE: 0x8212;
    readonly FRAMEBUFFER_ATTACHMENT_GREEN_SIZE: 0x8213;
    readonly FRAMEBUFFER_ATTACHMENT_BLUE_SIZE: 0x8214;
    readonly FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE: 0x8215;
    readonly FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE: 0x8216;
    readonly FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE: 0x8217;
    readonly FRAMEBUFFER_DEFAULT: 0x8218;
    readonly UNSIGNED_INT_24_8: 0x84FA;
    readonly DEPTH24_STENCIL8: 0x88F0;
    readonly UNSIGNED_NORMALIZED: 0x8C17;
    readonly DRAW_FRAMEBUFFER_BINDING: 0x8CA6;
    readonly READ_FRAMEBUFFER: 0x8CA8;
    readonly DRAW_FRAMEBUFFER: 0x8CA9;
    readonly READ_FRAMEBUFFER_BINDING: 0x8CAA;
    readonly RENDERBUFFER_SAMPLES: 0x8CAB;
    readonly FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER: 0x8CD4;
    readonly MAX_COLOR_ATTACHMENTS: 0x8CDF;
    readonly COLOR_ATTACHMENT1: 0x8CE1;
    readonly COLOR_ATTACHMENT2: 0x8CE2;
    readonly COLOR_ATTACHMENT3: 0x8CE3;
    readonly COLOR_ATTACHMENT4: 0x8CE4;
    readonly COLOR_ATTACHMENT5: 0x8CE5;
    readonly COLOR_ATTACHMENT6: 0x8CE6;
    readonly COLOR_ATTACHMENT7: 0x8CE7;
    readonly COLOR_ATTACHMENT8: 0x8CE8;
    readonly COLOR_ATTACHMENT9: 0x8CE9;
    readonly COLOR_ATTACHMENT10: 0x8CEA;
    readonly COLOR_ATTACHMENT11: 0x8CEB;
    readonly COLOR_ATTACHMENT12: 0x8CEC;
    readonly COLOR_ATTACHMENT13: 0x8CED;
    readonly COLOR_ATTACHMENT14: 0x8CEE;
    readonly COLOR_ATTACHMENT15: 0x8CEF;
    readonly FRAMEBUFFER_INCOMPLETE_MULTISAMPLE: 0x8D56;
    readonly MAX_SAMPLES: 0x8D57;
    readonly HALF_FLOAT: 0x140B;
    readonly RG: 0x8227;
    readonly RG_INTEGER: 0x8228;
    readonly R8: 0x8229;
    readonly RG8: 0x822B;
    readonly R16F: 0x822D;
    readonly R32F: 0x822E;
    readonly RG16F: 0x822F;
    readonly RG32F: 0x8230;
    readonly R8I: 0x8231;
    readonly R8UI: 0x8232;
    readonly R16I: 0x8233;
    readonly R16UI: 0x8234;
    readonly R32I: 0x8235;
    readonly R32UI: 0x8236;
    readonly RG8I: 0x8237;
    readonly RG8UI: 0x8238;
    readonly RG16I: 0x8239;
    readonly RG16UI: 0x823A;
    readonly RG32I: 0x823B;
    readonly RG32UI: 0x823C;
    readonly VERTEX_ARRAY_BINDING: 0x85B5;
    readonly R8_SNORM: 0x8F94;
    readonly RG8_SNORM: 0x8F95;
    readonly RGB8_SNORM: 0x8F96;
    readonly RGBA8_SNORM: 0x8F97;
    readonly SIGNED_NORMALIZED: 0x8F9C;
    readonly COPY_READ_BUFFER: 0x8F36;
    readonly COPY_WRITE_BUFFER: 0x8F37;
    readonly COPY_READ_BUFFER_BINDING: 0x8F36;
    readonly COPY_WRITE_BUFFER_BINDING: 0x8F37;
    readonly UNIFORM_BUFFER: 0x8A11;
    readonly UNIFORM_BUFFER_BINDING: 0x8A28;
    readonly UNIFORM_BUFFER_START: 0x8A29;
    readonly UNIFORM_BUFFER_SIZE: 0x8A2A;
    readonly MAX_VERTEX_UNIFORM_BLOCKS: 0x8A2B;
    readonly MAX_FRAGMENT_UNIFORM_BLOCKS: 0x8A2D;
    readonly MAX_COMBINED_UNIFORM_BLOCKS: 0x8A2E;
    readonly MAX_UNIFORM_BUFFER_BINDINGS: 0x8A2F;
    readonly MAX_UNIFORM_BLOCK_SIZE: 0x8A30;
    readonly MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS: 0x8A31;
    readonly MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS: 0x8A33;
    readonly UNIFORM_BUFFER_OFFSET_ALIGNMENT: 0x8A34;
    readonly ACTIVE_UNIFORM_BLOCKS: 0x8A36;
    readonly UNIFORM_TYPE: 0x8A37;
    readonly UNIFORM_SIZE: 0x8A38;
    readonly UNIFORM_BLOCK_INDEX: 0x8A3A;
    readonly UNIFORM_OFFSET: 0x8A3B;
    readonly UNIFORM_ARRAY_STRIDE: 0x8A3C;
    readonly UNIFORM_MATRIX_STRIDE: 0x8A3D;
    readonly UNIFORM_IS_ROW_MAJOR: 0x8A3E;
    readonly UNIFORM_BLOCK_BINDING: 0x8A3F;
    readonly UNIFORM_BLOCK_DATA_SIZE: 0x8A40;
    readonly UNIFORM_BLOCK_ACTIVE_UNIFORMS: 0x8A42;
    readonly UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES: 0x8A43;
    readonly UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER: 0x8A44;
    readonly UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER: 0x8A46;
    readonly INVALID_INDEX: 0xFFFFFFFF;
    readonly MAX_VERTEX_OUTPUT_COMPONENTS: 0x9122;
    readonly MAX_FRAGMENT_INPUT_COMPONENTS: 0x9125;
    readonly MAX_SERVER_WAIT_TIMEOUT: 0x9111;
    readonly OBJECT_TYPE: 0x9112;
    readonly SYNC_CONDITION: 0x9113;
    readonly SYNC_STATUS: 0x9114;
    readonly SYNC_FLAGS: 0x9115;
    readonly SYNC_FENCE: 0x9116;
    readonly SYNC_GPU_COMMANDS_COMPLETE: 0x9117;
    readonly UNSIGNALED: 0x9118;
    readonly SIGNALED: 0x9119;
    readonly ALREADY_SIGNALED: 0x911A;
    readonly TIMEOUT_EXPIRED: 0x911B;
    readonly CONDITION_SATISFIED: 0x911C;
    readonly WAIT_FAILED: 0x911D;
    readonly SYNC_FLUSH_COMMANDS_BIT: 0x00000001;
    readonly VERTEX_ATTRIB_ARRAY_DIVISOR: 0x88FE;
    readonly ANY_SAMPLES_PASSED: 0x8C2F;
    readonly ANY_SAMPLES_PASSED_CONSERVATIVE: 0x8D6A;
    readonly SAMPLER_BINDING: 0x8919;
    readonly RGB10_A2UI: 0x906F;
    readonly INT_2_10_10_10_REV: 0x8D9F;
    readonly TRANSFORM_FEEDBACK: 0x8E22;
    readonly TRANSFORM_FEEDBACK_PAUSED: 0x8E23;
    readonly TRANSFORM_FEEDBACK_ACTIVE: 0x8E24;
    readonly TRANSFORM_FEEDBACK_BINDING: 0x8E25;
    readonly TEXTURE_IMMUTABLE_FORMAT: 0x912F;
    readonly MAX_ELEMENT_INDEX: 0x8D6B;
    readonly TEXTURE_IMMUTABLE_LEVELS: 0x82DF;
    readonly TIMEOUT_IGNORED: -1;
    readonly MAX_CLIENT_WAIT_TIMEOUT_WEBGL: 0x9247;
}

interface WebGL2RenderingContextOverloads {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/bufferData) */
    bufferData(target: GLenum, size: GLsizeiptr, usage: GLenum): void;
    bufferData(target: GLenum, srcData: BufferSource | null, usage: GLenum): void;
    bufferData(target: GLenum, srcData: ArrayBufferView, usage: GLenum, srcOffset: GLuint, length?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/bufferSubData) */
    bufferSubData(target: GLenum, dstByteOffset: GLintptr, srcData: BufferSource): void;
    bufferSubData(target: GLenum, dstByteOffset: GLintptr, srcData: ArrayBufferView, srcOffset: GLuint, length?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/compressedTexImage2D) */
    compressedTexImage2D(target: GLenum, level: GLint, internalformat: GLenum, width: GLsizei, height: GLsizei, border: GLint, imageSize: GLsizei, offset: GLintptr): void;
    compressedTexImage2D(target: GLenum, level: GLint, internalformat: GLenum, width: GLsizei, height: GLsizei, border: GLint, srcData: ArrayBufferView, srcOffset?: GLuint, srcLengthOverride?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/compressedTexSubImage2D) */
    compressedTexSubImage2D(target: GLenum, level: GLint, xoffset: GLint, yoffset: GLint, width: GLsizei, height: GLsizei, format: GLenum, imageSize: GLsizei, offset: GLintptr): void;
    compressedTexSubImage2D(target: GLenum, level: GLint, xoffset: GLint, yoffset: GLint, width: GLsizei, height: GLsizei, format: GLenum, srcData: ArrayBufferView, srcOffset?: GLuint, srcLengthOverride?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/readPixels) */
    readPixels(x: GLint, y: GLint, width: GLsizei, height: GLsizei, format: GLenum, type: GLenum, dstData: ArrayBufferView | null): void;
    readPixels(x: GLint, y: GLint, width: GLsizei, height: GLsizei, format: GLenum, type: GLenum, offset: GLintptr): void;
    readPixels(x: GLint, y: GLint, width: GLsizei, height: GLsizei, format: GLenum, type: GLenum, dstData: ArrayBufferView, dstOffset: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/texImage2D) */
    texImage2D(target: GLenum, level: GLint, internalformat: GLint, width: GLsizei, height: GLsizei, border: GLint, format: GLenum, type: GLenum, pixels: ArrayBufferView | null): void;
    texImage2D(target: GLenum, level: GLint, internalformat: GLint, format: GLenum, type: GLenum, source: TexImageSource): void;
    texImage2D(target: GLenum, level: GLint, internalformat: GLint, width: GLsizei, height: GLsizei, border: GLint, format: GLenum, type: GLenum, pboOffset: GLintptr): void;
    texImage2D(target: GLenum, level: GLint, internalformat: GLint, width: GLsizei, height: GLsizei, border: GLint, format: GLenum, type: GLenum, source: TexImageSource): void;
    texImage2D(target: GLenum, level: GLint, internalformat: GLint, width: GLsizei, height: GLsizei, border: GLint, format: GLenum, type: GLenum, srcData: ArrayBufferView, srcOffset: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/texSubImage2D) */
    texSubImage2D(target: GLenum, level: GLint, xoffset: GLint, yoffset: GLint, width: GLsizei, height: GLsizei, format: GLenum, type: GLenum, pixels: ArrayBufferView | null): void;
    texSubImage2D(target: GLenum, level: GLint, xoffset: GLint, yoffset: GLint, format: GLenum, type: GLenum, source: TexImageSource): void;
    texSubImage2D(target: GLenum, level: GLint, xoffset: GLint, yoffset: GLint, width: GLsizei, height: GLsizei, format: GLenum, type: GLenum, pboOffset: GLintptr): void;
    texSubImage2D(target: GLenum, level: GLint, xoffset: GLint, yoffset: GLint, width: GLsizei, height: GLsizei, format: GLenum, type: GLenum, source: TexImageSource): void;
    texSubImage2D(target: GLenum, level: GLint, xoffset: GLint, yoffset: GLint, width: GLsizei, height: GLsizei, format: GLenum, type: GLenum, srcData: ArrayBufferView, srcOffset: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniform) */
    uniform1fv(location: WebGLUniformLocation | null, data: Float32List, srcOffset?: GLuint, srcLength?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniform) */
    uniform1iv(location: WebGLUniformLocation | null, data: Int32List, srcOffset?: GLuint, srcLength?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniform) */
    uniform2fv(location: WebGLUniformLocation | null, data: Float32List, srcOffset?: GLuint, srcLength?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniform) */
    uniform2iv(location: WebGLUniformLocation | null, data: Int32List, srcOffset?: GLuint, srcLength?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniform) */
    uniform3fv(location: WebGLUniformLocation | null, data: Float32List, srcOffset?: GLuint, srcLength?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniform) */
    uniform3iv(location: WebGLUniformLocation | null, data: Int32List, srcOffset?: GLuint, srcLength?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniform) */
    uniform4fv(location: WebGLUniformLocation | null, data: Float32List, srcOffset?: GLuint, srcLength?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniform) */
    uniform4iv(location: WebGLUniformLocation | null, data: Int32List, srcOffset?: GLuint, srcLength?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniformMatrix) */
    uniformMatrix2fv(location: WebGLUniformLocation | null, transpose: GLboolean, data: Float32List, srcOffset?: GLuint, srcLength?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniformMatrix) */
    uniformMatrix3fv(location: WebGLUniformLocation | null, transpose: GLboolean, data: Float32List, srcOffset?: GLuint, srcLength?: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniformMatrix) */
    uniformMatrix4fv(location: WebGLUniformLocation | null, transpose: GLboolean, data: Float32List, srcOffset?: GLuint, srcLength?: GLuint): void;
}

/**
 * Part of the WebGL API and represents the information returned by calling the WebGLRenderingContext.getActiveAttrib() and WebGLRenderingContext.getActiveUniform() methods.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLActiveInfo)
 */
interface WebGLActiveInfo {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLActiveInfo/name) */
    readonly name: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLActiveInfo/size) */
    readonly size: GLint;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLActiveInfo/type) */
    readonly type: GLenum;
}

declare var WebGLActiveInfo: {
    prototype: WebGLActiveInfo;
    new(): WebGLActiveInfo;
};

/**
 * Part of the WebGL API and represents an opaque buffer object storing data such as vertices or colors.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLBuffer)
 */
interface WebGLBuffer {
}

declare var WebGLBuffer: {
    prototype: WebGLBuffer;
    new(): WebGLBuffer;
};

/**
 * The WebContextEvent interface is part of the WebGL API and is an interface for an event that is generated in response to a status change to the WebGL rendering context.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLContextEvent)
 */
interface WebGLContextEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLContextEvent/statusMessage) */
    readonly statusMessage: string;
}

declare var WebGLContextEvent: {
    prototype: WebGLContextEvent;
    new(type: string, eventInit?: WebGLContextEventInit): WebGLContextEvent;
};

/**
 * Part of the WebGL API and represents a collection of buffers that serve as a rendering destination.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLFramebuffer)
 */
interface WebGLFramebuffer {
}

declare var WebGLFramebuffer: {
    prototype: WebGLFramebuffer;
    new(): WebGLFramebuffer;
};

/**
 * The WebGLProgram is part of the WebGL API and is a combination of two compiled WebGLShaders consisting of a vertex shader and a fragment shader (both written in GLSL).
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLProgram)
 */
interface WebGLProgram {
}

declare var WebGLProgram: {
    prototype: WebGLProgram;
    new(): WebGLProgram;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLQuery) */
interface WebGLQuery {
}

declare var WebGLQuery: {
    prototype: WebGLQuery;
    new(): WebGLQuery;
};

/**
 * Part of the WebGL API and represents a buffer that can contain an image, or can be source or target of an rendering operation.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderbuffer)
 */
interface WebGLRenderbuffer {
}

declare var WebGLRenderbuffer: {
    prototype: WebGLRenderbuffer;
    new(): WebGLRenderbuffer;
};

/**
 * Provides an interface to the OpenGL ES 2.0 graphics rendering context for the drawing surface of an HTML <canvas> element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext)
 */
interface WebGLRenderingContext extends WebGLRenderingContextBase, WebGLRenderingContextOverloads {
}

declare var WebGLRenderingContext: {
    prototype: WebGLRenderingContext;
    new(): WebGLRenderingContext;
    readonly DEPTH_BUFFER_BIT: 0x00000100;
    readonly STENCIL_BUFFER_BIT: 0x00000400;
    readonly COLOR_BUFFER_BIT: 0x00004000;
    readonly POINTS: 0x0000;
    readonly LINES: 0x0001;
    readonly LINE_LOOP: 0x0002;
    readonly LINE_STRIP: 0x0003;
    readonly TRIANGLES: 0x0004;
    readonly TRIANGLE_STRIP: 0x0005;
    readonly TRIANGLE_FAN: 0x0006;
    readonly ZERO: 0;
    readonly ONE: 1;
    readonly SRC_COLOR: 0x0300;
    readonly ONE_MINUS_SRC_COLOR: 0x0301;
    readonly SRC_ALPHA: 0x0302;
    readonly ONE_MINUS_SRC_ALPHA: 0x0303;
    readonly DST_ALPHA: 0x0304;
    readonly ONE_MINUS_DST_ALPHA: 0x0305;
    readonly DST_COLOR: 0x0306;
    readonly ONE_MINUS_DST_COLOR: 0x0307;
    readonly SRC_ALPHA_SATURATE: 0x0308;
    readonly FUNC_ADD: 0x8006;
    readonly BLEND_EQUATION: 0x8009;
    readonly BLEND_EQUATION_RGB: 0x8009;
    readonly BLEND_EQUATION_ALPHA: 0x883D;
    readonly FUNC_SUBTRACT: 0x800A;
    readonly FUNC_REVERSE_SUBTRACT: 0x800B;
    readonly BLEND_DST_RGB: 0x80C8;
    readonly BLEND_SRC_RGB: 0x80C9;
    readonly BLEND_DST_ALPHA: 0x80CA;
    readonly BLEND_SRC_ALPHA: 0x80CB;
    readonly CONSTANT_COLOR: 0x8001;
    readonly ONE_MINUS_CONSTANT_COLOR: 0x8002;
    readonly CONSTANT_ALPHA: 0x8003;
    readonly ONE_MINUS_CONSTANT_ALPHA: 0x8004;
    readonly BLEND_COLOR: 0x8005;
    readonly ARRAY_BUFFER: 0x8892;
    readonly ELEMENT_ARRAY_BUFFER: 0x8893;
    readonly ARRAY_BUFFER_BINDING: 0x8894;
    readonly ELEMENT_ARRAY_BUFFER_BINDING: 0x8895;
    readonly STREAM_DRAW: 0x88E0;
    readonly STATIC_DRAW: 0x88E4;
    readonly DYNAMIC_DRAW: 0x88E8;
    readonly BUFFER_SIZE: 0x8764;
    readonly BUFFER_USAGE: 0x8765;
    readonly CURRENT_VERTEX_ATTRIB: 0x8626;
    readonly FRONT: 0x0404;
    readonly BACK: 0x0405;
    readonly FRONT_AND_BACK: 0x0408;
    readonly CULL_FACE: 0x0B44;
    readonly BLEND: 0x0BE2;
    readonly DITHER: 0x0BD0;
    readonly STENCIL_TEST: 0x0B90;
    readonly DEPTH_TEST: 0x0B71;
    readonly SCISSOR_TEST: 0x0C11;
    readonly POLYGON_OFFSET_FILL: 0x8037;
    readonly SAMPLE_ALPHA_TO_COVERAGE: 0x809E;
    readonly SAMPLE_COVERAGE: 0x80A0;
    readonly NO_ERROR: 0;
    readonly INVALID_ENUM: 0x0500;
    readonly INVALID_VALUE: 0x0501;
    readonly INVALID_OPERATION: 0x0502;
    readonly OUT_OF_MEMORY: 0x0505;
    readonly CW: 0x0900;
    readonly CCW: 0x0901;
    readonly LINE_WIDTH: 0x0B21;
    readonly ALIASED_POINT_SIZE_RANGE: 0x846D;
    readonly ALIASED_LINE_WIDTH_RANGE: 0x846E;
    readonly CULL_FACE_MODE: 0x0B45;
    readonly FRONT_FACE: 0x0B46;
    readonly DEPTH_RANGE: 0x0B70;
    readonly DEPTH_WRITEMASK: 0x0B72;
    readonly DEPTH_CLEAR_VALUE: 0x0B73;
    readonly DEPTH_FUNC: 0x0B74;
    readonly STENCIL_CLEAR_VALUE: 0x0B91;
    readonly STENCIL_FUNC: 0x0B92;
    readonly STENCIL_FAIL: 0x0B94;
    readonly STENCIL_PASS_DEPTH_FAIL: 0x0B95;
    readonly STENCIL_PASS_DEPTH_PASS: 0x0B96;
    readonly STENCIL_REF: 0x0B97;
    readonly STENCIL_VALUE_MASK: 0x0B93;
    readonly STENCIL_WRITEMASK: 0x0B98;
    readonly STENCIL_BACK_FUNC: 0x8800;
    readonly STENCIL_BACK_FAIL: 0x8801;
    readonly STENCIL_BACK_PASS_DEPTH_FAIL: 0x8802;
    readonly STENCIL_BACK_PASS_DEPTH_PASS: 0x8803;
    readonly STENCIL_BACK_REF: 0x8CA3;
    readonly STENCIL_BACK_VALUE_MASK: 0x8CA4;
    readonly STENCIL_BACK_WRITEMASK: 0x8CA5;
    readonly VIEWPORT: 0x0BA2;
    readonly SCISSOR_BOX: 0x0C10;
    readonly COLOR_CLEAR_VALUE: 0x0C22;
    readonly COLOR_WRITEMASK: 0x0C23;
    readonly UNPACK_ALIGNMENT: 0x0CF5;
    readonly PACK_ALIGNMENT: 0x0D05;
    readonly MAX_TEXTURE_SIZE: 0x0D33;
    readonly MAX_VIEWPORT_DIMS: 0x0D3A;
    readonly SUBPIXEL_BITS: 0x0D50;
    readonly RED_BITS: 0x0D52;
    readonly GREEN_BITS: 0x0D53;
    readonly BLUE_BITS: 0x0D54;
    readonly ALPHA_BITS: 0x0D55;
    readonly DEPTH_BITS: 0x0D56;
    readonly STENCIL_BITS: 0x0D57;
    readonly POLYGON_OFFSET_UNITS: 0x2A00;
    readonly POLYGON_OFFSET_FACTOR: 0x8038;
    readonly TEXTURE_BINDING_2D: 0x8069;
    readonly SAMPLE_BUFFERS: 0x80A8;
    readonly SAMPLES: 0x80A9;
    readonly SAMPLE_COVERAGE_VALUE: 0x80AA;
    readonly SAMPLE_COVERAGE_INVERT: 0x80AB;
    readonly COMPRESSED_TEXTURE_FORMATS: 0x86A3;
    readonly DONT_CARE: 0x1100;
    readonly FASTEST: 0x1101;
    readonly NICEST: 0x1102;
    readonly GENERATE_MIPMAP_HINT: 0x8192;
    readonly BYTE: 0x1400;
    readonly UNSIGNED_BYTE: 0x1401;
    readonly SHORT: 0x1402;
    readonly UNSIGNED_SHORT: 0x1403;
    readonly INT: 0x1404;
    readonly UNSIGNED_INT: 0x1405;
    readonly FLOAT: 0x1406;
    readonly DEPTH_COMPONENT: 0x1902;
    readonly ALPHA: 0x1906;
    readonly RGB: 0x1907;
    readonly RGBA: 0x1908;
    readonly LUMINANCE: 0x1909;
    readonly LUMINANCE_ALPHA: 0x190A;
    readonly UNSIGNED_SHORT_4_4_4_4: 0x8033;
    readonly UNSIGNED_SHORT_5_5_5_1: 0x8034;
    readonly UNSIGNED_SHORT_5_6_5: 0x8363;
    readonly FRAGMENT_SHADER: 0x8B30;
    readonly VERTEX_SHADER: 0x8B31;
    readonly MAX_VERTEX_ATTRIBS: 0x8869;
    readonly MAX_VERTEX_UNIFORM_VECTORS: 0x8DFB;
    readonly MAX_VARYING_VECTORS: 0x8DFC;
    readonly MAX_COMBINED_TEXTURE_IMAGE_UNITS: 0x8B4D;
    readonly MAX_VERTEX_TEXTURE_IMAGE_UNITS: 0x8B4C;
    readonly MAX_TEXTURE_IMAGE_UNITS: 0x8872;
    readonly MAX_FRAGMENT_UNIFORM_VECTORS: 0x8DFD;
    readonly SHADER_TYPE: 0x8B4F;
    readonly DELETE_STATUS: 0x8B80;
    readonly LINK_STATUS: 0x8B82;
    readonly VALIDATE_STATUS: 0x8B83;
    readonly ATTACHED_SHADERS: 0x8B85;
    readonly ACTIVE_UNIFORMS: 0x8B86;
    readonly ACTIVE_ATTRIBUTES: 0x8B89;
    readonly SHADING_LANGUAGE_VERSION: 0x8B8C;
    readonly CURRENT_PROGRAM: 0x8B8D;
    readonly NEVER: 0x0200;
    readonly LESS: 0x0201;
    readonly EQUAL: 0x0202;
    readonly LEQUAL: 0x0203;
    readonly GREATER: 0x0204;
    readonly NOTEQUAL: 0x0205;
    readonly GEQUAL: 0x0206;
    readonly ALWAYS: 0x0207;
    readonly KEEP: 0x1E00;
    readonly REPLACE: 0x1E01;
    readonly INCR: 0x1E02;
    readonly DECR: 0x1E03;
    readonly INVERT: 0x150A;
    readonly INCR_WRAP: 0x8507;
    readonly DECR_WRAP: 0x8508;
    readonly VENDOR: 0x1F00;
    readonly RENDERER: 0x1F01;
    readonly VERSION: 0x1F02;
    readonly NEAREST: 0x2600;
    readonly LINEAR: 0x2601;
    readonly NEAREST_MIPMAP_NEAREST: 0x2700;
    readonly LINEAR_MIPMAP_NEAREST: 0x2701;
    readonly NEAREST_MIPMAP_LINEAR: 0x2702;
    readonly LINEAR_MIPMAP_LINEAR: 0x2703;
    readonly TEXTURE_MAG_FILTER: 0x2800;
    readonly TEXTURE_MIN_FILTER: 0x2801;
    readonly TEXTURE_WRAP_S: 0x2802;
    readonly TEXTURE_WRAP_T: 0x2803;
    readonly TEXTURE_2D: 0x0DE1;
    readonly TEXTURE: 0x1702;
    readonly TEXTURE_CUBE_MAP: 0x8513;
    readonly TEXTURE_BINDING_CUBE_MAP: 0x8514;
    readonly TEXTURE_CUBE_MAP_POSITIVE_X: 0x8515;
    readonly TEXTURE_CUBE_MAP_NEGATIVE_X: 0x8516;
    readonly TEXTURE_CUBE_MAP_POSITIVE_Y: 0x8517;
    readonly TEXTURE_CUBE_MAP_NEGATIVE_Y: 0x8518;
    readonly TEXTURE_CUBE_MAP_POSITIVE_Z: 0x8519;
    readonly TEXTURE_CUBE_MAP_NEGATIVE_Z: 0x851A;
    readonly MAX_CUBE_MAP_TEXTURE_SIZE: 0x851C;
    readonly TEXTURE0: 0x84C0;
    readonly TEXTURE1: 0x84C1;
    readonly TEXTURE2: 0x84C2;
    readonly TEXTURE3: 0x84C3;
    readonly TEXTURE4: 0x84C4;
    readonly TEXTURE5: 0x84C5;
    readonly TEXTURE6: 0x84C6;
    readonly TEXTURE7: 0x84C7;
    readonly TEXTURE8: 0x84C8;
    readonly TEXTURE9: 0x84C9;
    readonly TEXTURE10: 0x84CA;
    readonly TEXTURE11: 0x84CB;
    readonly TEXTURE12: 0x84CC;
    readonly TEXTURE13: 0x84CD;
    readonly TEXTURE14: 0x84CE;
    readonly TEXTURE15: 0x84CF;
    readonly TEXTURE16: 0x84D0;
    readonly TEXTURE17: 0x84D1;
    readonly TEXTURE18: 0x84D2;
    readonly TEXTURE19: 0x84D3;
    readonly TEXTURE20: 0x84D4;
    readonly TEXTURE21: 0x84D5;
    readonly TEXTURE22: 0x84D6;
    readonly TEXTURE23: 0x84D7;
    readonly TEXTURE24: 0x84D8;
    readonly TEXTURE25: 0x84D9;
    readonly TEXTURE26: 0x84DA;
    readonly TEXTURE27: 0x84DB;
    readonly TEXTURE28: 0x84DC;
    readonly TEXTURE29: 0x84DD;
    readonly TEXTURE30: 0x84DE;
    readonly TEXTURE31: 0x84DF;
    readonly ACTIVE_TEXTURE: 0x84E0;
    readonly REPEAT: 0x2901;
    readonly CLAMP_TO_EDGE: 0x812F;
    readonly MIRRORED_REPEAT: 0x8370;
    readonly FLOAT_VEC2: 0x8B50;
    readonly FLOAT_VEC3: 0x8B51;
    readonly FLOAT_VEC4: 0x8B52;
    readonly INT_VEC2: 0x8B53;
    readonly INT_VEC3: 0x8B54;
    readonly INT_VEC4: 0x8B55;
    readonly BOOL: 0x8B56;
    readonly BOOL_VEC2: 0x8B57;
    readonly BOOL_VEC3: 0x8B58;
    readonly BOOL_VEC4: 0x8B59;
    readonly FLOAT_MAT2: 0x8B5A;
    readonly FLOAT_MAT3: 0x8B5B;
    readonly FLOAT_MAT4: 0x8B5C;
    readonly SAMPLER_2D: 0x8B5E;
    readonly SAMPLER_CUBE: 0x8B60;
    readonly VERTEX_ATTRIB_ARRAY_ENABLED: 0x8622;
    readonly VERTEX_ATTRIB_ARRAY_SIZE: 0x8623;
    readonly VERTEX_ATTRIB_ARRAY_STRIDE: 0x8624;
    readonly VERTEX_ATTRIB_ARRAY_TYPE: 0x8625;
    readonly VERTEX_ATTRIB_ARRAY_NORMALIZED: 0x886A;
    readonly VERTEX_ATTRIB_ARRAY_POINTER: 0x8645;
    readonly VERTEX_ATTRIB_ARRAY_BUFFER_BINDING: 0x889F;
    readonly IMPLEMENTATION_COLOR_READ_TYPE: 0x8B9A;
    readonly IMPLEMENTATION_COLOR_READ_FORMAT: 0x8B9B;
    readonly COMPILE_STATUS: 0x8B81;
    readonly LOW_FLOAT: 0x8DF0;
    readonly MEDIUM_FLOAT: 0x8DF1;
    readonly HIGH_FLOAT: 0x8DF2;
    readonly LOW_INT: 0x8DF3;
    readonly MEDIUM_INT: 0x8DF4;
    readonly HIGH_INT: 0x8DF5;
    readonly FRAMEBUFFER: 0x8D40;
    readonly RENDERBUFFER: 0x8D41;
    readonly RGBA4: 0x8056;
    readonly RGB5_A1: 0x8057;
    readonly RGB565: 0x8D62;
    readonly DEPTH_COMPONENT16: 0x81A5;
    readonly STENCIL_INDEX8: 0x8D48;
    readonly DEPTH_STENCIL: 0x84F9;
    readonly RENDERBUFFER_WIDTH: 0x8D42;
    readonly RENDERBUFFER_HEIGHT: 0x8D43;
    readonly RENDERBUFFER_INTERNAL_FORMAT: 0x8D44;
    readonly RENDERBUFFER_RED_SIZE: 0x8D50;
    readonly RENDERBUFFER_GREEN_SIZE: 0x8D51;
    readonly RENDERBUFFER_BLUE_SIZE: 0x8D52;
    readonly RENDERBUFFER_ALPHA_SIZE: 0x8D53;
    readonly RENDERBUFFER_DEPTH_SIZE: 0x8D54;
    readonly RENDERBUFFER_STENCIL_SIZE: 0x8D55;
    readonly FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE: 0x8CD0;
    readonly FRAMEBUFFER_ATTACHMENT_OBJECT_NAME: 0x8CD1;
    readonly FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL: 0x8CD2;
    readonly FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE: 0x8CD3;
    readonly COLOR_ATTACHMENT0: 0x8CE0;
    readonly DEPTH_ATTACHMENT: 0x8D00;
    readonly STENCIL_ATTACHMENT: 0x8D20;
    readonly DEPTH_STENCIL_ATTACHMENT: 0x821A;
    readonly NONE: 0;
    readonly FRAMEBUFFER_COMPLETE: 0x8CD5;
    readonly FRAMEBUFFER_INCOMPLETE_ATTACHMENT: 0x8CD6;
    readonly FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT: 0x8CD7;
    readonly FRAMEBUFFER_INCOMPLETE_DIMENSIONS: 0x8CD9;
    readonly FRAMEBUFFER_UNSUPPORTED: 0x8CDD;
    readonly FRAMEBUFFER_BINDING: 0x8CA6;
    readonly RENDERBUFFER_BINDING: 0x8CA7;
    readonly MAX_RENDERBUFFER_SIZE: 0x84E8;
    readonly INVALID_FRAMEBUFFER_OPERATION: 0x0506;
    readonly UNPACK_FLIP_Y_WEBGL: 0x9240;
    readonly UNPACK_PREMULTIPLY_ALPHA_WEBGL: 0x9241;
    readonly CONTEXT_LOST_WEBGL: 0x9242;
    readonly UNPACK_COLORSPACE_CONVERSION_WEBGL: 0x9243;
    readonly BROWSER_DEFAULT_WEBGL: 0x9244;
};

interface WebGLRenderingContextBase {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/canvas) */
    readonly canvas: HTMLCanvasElement | OffscreenCanvas;
    drawingBufferColorSpace: PredefinedColorSpace;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/drawingBufferHeight) */
    readonly drawingBufferHeight: GLsizei;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/drawingBufferWidth) */
    readonly drawingBufferWidth: GLsizei;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/activeTexture) */
    activeTexture(texture: GLenum): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/attachShader) */
    attachShader(program: WebGLProgram, shader: WebGLShader): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/bindAttribLocation) */
    bindAttribLocation(program: WebGLProgram, index: GLuint, name: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/bindBuffer) */
    bindBuffer(target: GLenum, buffer: WebGLBuffer | null): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/bindFramebuffer) */
    bindFramebuffer(target: GLenum, framebuffer: WebGLFramebuffer | null): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/bindRenderbuffer) */
    bindRenderbuffer(target: GLenum, renderbuffer: WebGLRenderbuffer | null): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/bindTexture) */
    bindTexture(target: GLenum, texture: WebGLTexture | null): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/blendColor) */
    blendColor(red: GLclampf, green: GLclampf, blue: GLclampf, alpha: GLclampf): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/blendEquation) */
    blendEquation(mode: GLenum): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/blendEquationSeparate) */
    blendEquationSeparate(modeRGB: GLenum, modeAlpha: GLenum): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/blendFunc) */
    blendFunc(sfactor: GLenum, dfactor: GLenum): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/blendFuncSeparate) */
    blendFuncSeparate(srcRGB: GLenum, dstRGB: GLenum, srcAlpha: GLenum, dstAlpha: GLenum): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/checkFramebufferStatus) */
    checkFramebufferStatus(target: GLenum): GLenum;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/clear) */
    clear(mask: GLbitfield): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/clearColor) */
    clearColor(red: GLclampf, green: GLclampf, blue: GLclampf, alpha: GLclampf): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/clearDepth) */
    clearDepth(depth: GLclampf): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/clearStencil) */
    clearStencil(s: GLint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/colorMask) */
    colorMask(red: GLboolean, green: GLboolean, blue: GLboolean, alpha: GLboolean): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/compileShader) */
    compileShader(shader: WebGLShader): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/copyTexImage2D) */
    copyTexImage2D(target: GLenum, level: GLint, internalformat: GLenum, x: GLint, y: GLint, width: GLsizei, height: GLsizei, border: GLint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/copyTexSubImage2D) */
    copyTexSubImage2D(target: GLenum, level: GLint, xoffset: GLint, yoffset: GLint, x: GLint, y: GLint, width: GLsizei, height: GLsizei): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/createBuffer) */
    createBuffer(): WebGLBuffer | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/createFramebuffer) */
    createFramebuffer(): WebGLFramebuffer | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/createProgram) */
    createProgram(): WebGLProgram | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/createRenderbuffer) */
    createRenderbuffer(): WebGLRenderbuffer | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/createShader) */
    createShader(type: GLenum): WebGLShader | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/createTexture) */
    createTexture(): WebGLTexture | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/cullFace) */
    cullFace(mode: GLenum): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/deleteBuffer) */
    deleteBuffer(buffer: WebGLBuffer | null): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/deleteFramebuffer) */
    deleteFramebuffer(framebuffer: WebGLFramebuffer | null): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/deleteProgram) */
    deleteProgram(program: WebGLProgram | null): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/deleteRenderbuffer) */
    deleteRenderbuffer(renderbuffer: WebGLRenderbuffer | null): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/deleteShader) */
    deleteShader(shader: WebGLShader | null): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/deleteTexture) */
    deleteTexture(texture: WebGLTexture | null): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/depthFunc) */
    depthFunc(func: GLenum): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/depthMask) */
    depthMask(flag: GLboolean): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/depthRange) */
    depthRange(zNear: GLclampf, zFar: GLclampf): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/detachShader) */
    detachShader(program: WebGLProgram, shader: WebGLShader): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/disable) */
    disable(cap: GLenum): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/disableVertexAttribArray) */
    disableVertexAttribArray(index: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/drawArrays) */
    drawArrays(mode: GLenum, first: GLint, count: GLsizei): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/drawElements) */
    drawElements(mode: GLenum, count: GLsizei, type: GLenum, offset: GLintptr): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/enable) */
    enable(cap: GLenum): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/enableVertexAttribArray) */
    enableVertexAttribArray(index: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/finish) */
    finish(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/flush) */
    flush(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/framebufferRenderbuffer) */
    framebufferRenderbuffer(target: GLenum, attachment: GLenum, renderbuffertarget: GLenum, renderbuffer: WebGLRenderbuffer | null): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/framebufferTexture2D) */
    framebufferTexture2D(target: GLenum, attachment: GLenum, textarget: GLenum, texture: WebGLTexture | null, level: GLint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/frontFace) */
    frontFace(mode: GLenum): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/generateMipmap) */
    generateMipmap(target: GLenum): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/getActiveAttrib) */
    getActiveAttrib(program: WebGLProgram, index: GLuint): WebGLActiveInfo | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/getActiveUniform) */
    getActiveUniform(program: WebGLProgram, index: GLuint): WebGLActiveInfo | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/getAttachedShaders) */
    getAttachedShaders(program: WebGLProgram): WebGLShader[] | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/getAttribLocation) */
    getAttribLocation(program: WebGLProgram, name: string): GLint;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/getBufferParameter) */
    getBufferParameter(target: GLenum, pname: GLenum): any;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/getContextAttributes) */
    getContextAttributes(): WebGLContextAttributes | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/getError) */
    getError(): GLenum;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/getExtension) */
    getExtension(extensionName: "ANGLE_instanced_arrays"): ANGLE_instanced_arrays | null;
    getExtension(extensionName: "EXT_blend_minmax"): EXT_blend_minmax | null;
    getExtension(extensionName: "EXT_color_buffer_float"): EXT_color_buffer_float | null;
    getExtension(extensionName: "EXT_color_buffer_half_float"): EXT_color_buffer_half_float | null;
    getExtension(extensionName: "EXT_float_blend"): EXT_float_blend | null;
    getExtension(extensionName: "EXT_frag_depth"): EXT_frag_depth | null;
    getExtension(extensionName: "EXT_sRGB"): EXT_sRGB | null;
    getExtension(extensionName: "EXT_shader_texture_lod"): EXT_shader_texture_lod | null;
    getExtension(extensionName: "EXT_texture_compression_bptc"): EXT_texture_compression_bptc | null;
    getExtension(extensionName: "EXT_texture_compression_rgtc"): EXT_texture_compression_rgtc | null;
    getExtension(extensionName: "EXT_texture_filter_anisotropic"): EXT_texture_filter_anisotropic | null;
    getExtension(extensionName: "KHR_parallel_shader_compile"): KHR_parallel_shader_compile | null;
    getExtension(extensionName: "OES_element_index_uint"): OES_element_index_uint | null;
    getExtension(extensionName: "OES_fbo_render_mipmap"): OES_fbo_render_mipmap | null;
    getExtension(extensionName: "OES_standard_derivatives"): OES_standard_derivatives | null;
    getExtension(extensionName: "OES_texture_float"): OES_texture_float | null;
    getExtension(extensionName: "OES_texture_float_linear"): OES_texture_float_linear | null;
    getExtension(extensionName: "OES_texture_half_float"): OES_texture_half_float | null;
    getExtension(extensionName: "OES_texture_half_float_linear"): OES_texture_half_float_linear | null;
    getExtension(extensionName: "OES_vertex_array_object"): OES_vertex_array_object | null;
    getExtension(extensionName: "OVR_multiview2"): OVR_multiview2 | null;
    getExtension(extensionName: "WEBGL_color_buffer_float"): WEBGL_color_buffer_float | null;
    getExtension(extensionName: "WEBGL_compressed_texture_astc"): WEBGL_compressed_texture_astc | null;
    getExtension(extensionName: "WEBGL_compressed_texture_etc"): WEBGL_compressed_texture_etc | null;
    getExtension(extensionName: "WEBGL_compressed_texture_etc1"): WEBGL_compressed_texture_etc1 | null;
    getExtension(extensionName: "WEBGL_compressed_texture_pvrtc"): WEBGL_compressed_texture_pvrtc | null;
    getExtension(extensionName: "WEBGL_compressed_texture_s3tc"): WEBGL_compressed_texture_s3tc | null;
    getExtension(extensionName: "WEBGL_compressed_texture_s3tc_srgb"): WEBGL_compressed_texture_s3tc_srgb | null;
    getExtension(extensionName: "WEBGL_debug_renderer_info"): WEBGL_debug_renderer_info | null;
    getExtension(extensionName: "WEBGL_debug_shaders"): WEBGL_debug_shaders | null;
    getExtension(extensionName: "WEBGL_depth_texture"): WEBGL_depth_texture | null;
    getExtension(extensionName: "WEBGL_draw_buffers"): WEBGL_draw_buffers | null;
    getExtension(extensionName: "WEBGL_lose_context"): WEBGL_lose_context | null;
    getExtension(extensionName: "WEBGL_multi_draw"): WEBGL_multi_draw | null;
    getExtension(name: string): any;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/getFramebufferAttachmentParameter) */
    getFramebufferAttachmentParameter(target: GLenum, attachment: GLenum, pname: GLenum): any;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/getParameter) */
    getParameter(pname: GLenum): any;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/getProgramInfoLog) */
    getProgramInfoLog(program: WebGLProgram): string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/getProgramParameter) */
    getProgramParameter(program: WebGLProgram, pname: GLenum): any;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/getRenderbufferParameter) */
    getRenderbufferParameter(target: GLenum, pname: GLenum): any;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/getShaderInfoLog) */
    getShaderInfoLog(shader: WebGLShader): string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/getShaderParameter) */
    getShaderParameter(shader: WebGLShader, pname: GLenum): any;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/getShaderPrecisionFormat) */
    getShaderPrecisionFormat(shadertype: GLenum, precisiontype: GLenum): WebGLShaderPrecisionFormat | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/getShaderSource) */
    getShaderSource(shader: WebGLShader): string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/getSupportedExtensions) */
    getSupportedExtensions(): string[] | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/getTexParameter) */
    getTexParameter(target: GLenum, pname: GLenum): any;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/getUniform) */
    getUniform(program: WebGLProgram, location: WebGLUniformLocation): any;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/getUniformLocation) */
    getUniformLocation(program: WebGLProgram, name: string): WebGLUniformLocation | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/getVertexAttrib) */
    getVertexAttrib(index: GLuint, pname: GLenum): any;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/getVertexAttribOffset) */
    getVertexAttribOffset(index: GLuint, pname: GLenum): GLintptr;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/hint) */
    hint(target: GLenum, mode: GLenum): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/isBuffer) */
    isBuffer(buffer: WebGLBuffer | null): GLboolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/isContextLost) */
    isContextLost(): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/isEnabled) */
    isEnabled(cap: GLenum): GLboolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/isFramebuffer) */
    isFramebuffer(framebuffer: WebGLFramebuffer | null): GLboolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/isProgram) */
    isProgram(program: WebGLProgram | null): GLboolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/isRenderbuffer) */
    isRenderbuffer(renderbuffer: WebGLRenderbuffer | null): GLboolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/isShader) */
    isShader(shader: WebGLShader | null): GLboolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/isTexture) */
    isTexture(texture: WebGLTexture | null): GLboolean;
    lineWidth(width: GLfloat): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/linkProgram) */
    linkProgram(program: WebGLProgram): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/pixelStorei) */
    pixelStorei(pname: GLenum, param: GLint | GLboolean): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/polygonOffset) */
    polygonOffset(factor: GLfloat, units: GLfloat): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/renderbufferStorage) */
    renderbufferStorage(target: GLenum, internalformat: GLenum, width: GLsizei, height: GLsizei): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/sampleCoverage) */
    sampleCoverage(value: GLclampf, invert: GLboolean): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/scissor) */
    scissor(x: GLint, y: GLint, width: GLsizei, height: GLsizei): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/shaderSource) */
    shaderSource(shader: WebGLShader, source: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/stencilFunc) */
    stencilFunc(func: GLenum, ref: GLint, mask: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/stencilFuncSeparate) */
    stencilFuncSeparate(face: GLenum, func: GLenum, ref: GLint, mask: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/stencilMask) */
    stencilMask(mask: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/stencilMaskSeparate) */
    stencilMaskSeparate(face: GLenum, mask: GLuint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/stencilOp) */
    stencilOp(fail: GLenum, zfail: GLenum, zpass: GLenum): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/stencilOpSeparate) */
    stencilOpSeparate(face: GLenum, fail: GLenum, zfail: GLenum, zpass: GLenum): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/texParameter) */
    texParameterf(target: GLenum, pname: GLenum, param: GLfloat): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/texParameter) */
    texParameteri(target: GLenum, pname: GLenum, param: GLint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniform) */
    uniform1f(location: WebGLUniformLocation | null, x: GLfloat): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniform) */
    uniform1i(location: WebGLUniformLocation | null, x: GLint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniform) */
    uniform2f(location: WebGLUniformLocation | null, x: GLfloat, y: GLfloat): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniform) */
    uniform2i(location: WebGLUniformLocation | null, x: GLint, y: GLint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniform) */
    uniform3f(location: WebGLUniformLocation | null, x: GLfloat, y: GLfloat, z: GLfloat): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniform) */
    uniform3i(location: WebGLUniformLocation | null, x: GLint, y: GLint, z: GLint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniform) */
    uniform4f(location: WebGLUniformLocation | null, x: GLfloat, y: GLfloat, z: GLfloat, w: GLfloat): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniform) */
    uniform4i(location: WebGLUniformLocation | null, x: GLint, y: GLint, z: GLint, w: GLint): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/useProgram) */
    useProgram(program: WebGLProgram | null): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/validateProgram) */
    validateProgram(program: WebGLProgram): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/vertexAttrib) */
    vertexAttrib1f(index: GLuint, x: GLfloat): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/vertexAttrib) */
    vertexAttrib1fv(index: GLuint, values: Float32List): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/vertexAttrib) */
    vertexAttrib2f(index: GLuint, x: GLfloat, y: GLfloat): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/vertexAttrib) */
    vertexAttrib2fv(index: GLuint, values: Float32List): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/vertexAttrib) */
    vertexAttrib3f(index: GLuint, x: GLfloat, y: GLfloat, z: GLfloat): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/vertexAttrib) */
    vertexAttrib3fv(index: GLuint, values: Float32List): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/vertexAttrib) */
    vertexAttrib4f(index: GLuint, x: GLfloat, y: GLfloat, z: GLfloat, w: GLfloat): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/vertexAttrib) */
    vertexAttrib4fv(index: GLuint, values: Float32List): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/vertexAttribPointer) */
    vertexAttribPointer(index: GLuint, size: GLint, type: GLenum, normalized: GLboolean, stride: GLsizei, offset: GLintptr): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/viewport) */
    viewport(x: GLint, y: GLint, width: GLsizei, height: GLsizei): void;
    readonly DEPTH_BUFFER_BIT: 0x00000100;
    readonly STENCIL_BUFFER_BIT: 0x00000400;
    readonly COLOR_BUFFER_BIT: 0x00004000;
    readonly POINTS: 0x0000;
    readonly LINES: 0x0001;
    readonly LINE_LOOP: 0x0002;
    readonly LINE_STRIP: 0x0003;
    readonly TRIANGLES: 0x0004;
    readonly TRIANGLE_STRIP: 0x0005;
    readonly TRIANGLE_FAN: 0x0006;
    readonly ZERO: 0;
    readonly ONE: 1;
    readonly SRC_COLOR: 0x0300;
    readonly ONE_MINUS_SRC_COLOR: 0x0301;
    readonly SRC_ALPHA: 0x0302;
    readonly ONE_MINUS_SRC_ALPHA: 0x0303;
    readonly DST_ALPHA: 0x0304;
    readonly ONE_MINUS_DST_ALPHA: 0x0305;
    readonly DST_COLOR: 0x0306;
    readonly ONE_MINUS_DST_COLOR: 0x0307;
    readonly SRC_ALPHA_SATURATE: 0x0308;
    readonly FUNC_ADD: 0x8006;
    readonly BLEND_EQUATION: 0x8009;
    readonly BLEND_EQUATION_RGB: 0x8009;
    readonly BLEND_EQUATION_ALPHA: 0x883D;
    readonly FUNC_SUBTRACT: 0x800A;
    readonly FUNC_REVERSE_SUBTRACT: 0x800B;
    readonly BLEND_DST_RGB: 0x80C8;
    readonly BLEND_SRC_RGB: 0x80C9;
    readonly BLEND_DST_ALPHA: 0x80CA;
    readonly BLEND_SRC_ALPHA: 0x80CB;
    readonly CONSTANT_COLOR: 0x8001;
    readonly ONE_MINUS_CONSTANT_COLOR: 0x8002;
    readonly CONSTANT_ALPHA: 0x8003;
    readonly ONE_MINUS_CONSTANT_ALPHA: 0x8004;
    readonly BLEND_COLOR: 0x8005;
    readonly ARRAY_BUFFER: 0x8892;
    readonly ELEMENT_ARRAY_BUFFER: 0x8893;
    readonly ARRAY_BUFFER_BINDING: 0x8894;
    readonly ELEMENT_ARRAY_BUFFER_BINDING: 0x8895;
    readonly STREAM_DRAW: 0x88E0;
    readonly STATIC_DRAW: 0x88E4;
    readonly DYNAMIC_DRAW: 0x88E8;
    readonly BUFFER_SIZE: 0x8764;
    readonly BUFFER_USAGE: 0x8765;
    readonly CURRENT_VERTEX_ATTRIB: 0x8626;
    readonly FRONT: 0x0404;
    readonly BACK: 0x0405;
    readonly FRONT_AND_BACK: 0x0408;
    readonly CULL_FACE: 0x0B44;
    readonly BLEND: 0x0BE2;
    readonly DITHER: 0x0BD0;
    readonly STENCIL_TEST: 0x0B90;
    readonly DEPTH_TEST: 0x0B71;
    readonly SCISSOR_TEST: 0x0C11;
    readonly POLYGON_OFFSET_FILL: 0x8037;
    readonly SAMPLE_ALPHA_TO_COVERAGE: 0x809E;
    readonly SAMPLE_COVERAGE: 0x80A0;
    readonly NO_ERROR: 0;
    readonly INVALID_ENUM: 0x0500;
    readonly INVALID_VALUE: 0x0501;
    readonly INVALID_OPERATION: 0x0502;
    readonly OUT_OF_MEMORY: 0x0505;
    readonly CW: 0x0900;
    readonly CCW: 0x0901;
    readonly LINE_WIDTH: 0x0B21;
    readonly ALIASED_POINT_SIZE_RANGE: 0x846D;
    readonly ALIASED_LINE_WIDTH_RANGE: 0x846E;
    readonly CULL_FACE_MODE: 0x0B45;
    readonly FRONT_FACE: 0x0B46;
    readonly DEPTH_RANGE: 0x0B70;
    readonly DEPTH_WRITEMASK: 0x0B72;
    readonly DEPTH_CLEAR_VALUE: 0x0B73;
    readonly DEPTH_FUNC: 0x0B74;
    readonly STENCIL_CLEAR_VALUE: 0x0B91;
    readonly STENCIL_FUNC: 0x0B92;
    readonly STENCIL_FAIL: 0x0B94;
    readonly STENCIL_PASS_DEPTH_FAIL: 0x0B95;
    readonly STENCIL_PASS_DEPTH_PASS: 0x0B96;
    readonly STENCIL_REF: 0x0B97;
    readonly STENCIL_VALUE_MASK: 0x0B93;
    readonly STENCIL_WRITEMASK: 0x0B98;
    readonly STENCIL_BACK_FUNC: 0x8800;
    readonly STENCIL_BACK_FAIL: 0x8801;
    readonly STENCIL_BACK_PASS_DEPTH_FAIL: 0x8802;
    readonly STENCIL_BACK_PASS_DEPTH_PASS: 0x8803;
    readonly STENCIL_BACK_REF: 0x8CA3;
    readonly STENCIL_BACK_VALUE_MASK: 0x8CA4;
    readonly STENCIL_BACK_WRITEMASK: 0x8CA5;
    readonly VIEWPORT: 0x0BA2;
    readonly SCISSOR_BOX: 0x0C10;
    readonly COLOR_CLEAR_VALUE: 0x0C22;
    readonly COLOR_WRITEMASK: 0x0C23;
    readonly UNPACK_ALIGNMENT: 0x0CF5;
    readonly PACK_ALIGNMENT: 0x0D05;
    readonly MAX_TEXTURE_SIZE: 0x0D33;
    readonly MAX_VIEWPORT_DIMS: 0x0D3A;
    readonly SUBPIXEL_BITS: 0x0D50;
    readonly RED_BITS: 0x0D52;
    readonly GREEN_BITS: 0x0D53;
    readonly BLUE_BITS: 0x0D54;
    readonly ALPHA_BITS: 0x0D55;
    readonly DEPTH_BITS: 0x0D56;
    readonly STENCIL_BITS: 0x0D57;
    readonly POLYGON_OFFSET_UNITS: 0x2A00;
    readonly POLYGON_OFFSET_FACTOR: 0x8038;
    readonly TEXTURE_BINDING_2D: 0x8069;
    readonly SAMPLE_BUFFERS: 0x80A8;
    readonly SAMPLES: 0x80A9;
    readonly SAMPLE_COVERAGE_VALUE: 0x80AA;
    readonly SAMPLE_COVERAGE_INVERT: 0x80AB;
    readonly COMPRESSED_TEXTURE_FORMATS: 0x86A3;
    readonly DONT_CARE: 0x1100;
    readonly FASTEST: 0x1101;
    readonly NICEST: 0x1102;
    readonly GENERATE_MIPMAP_HINT: 0x8192;
    readonly BYTE: 0x1400;
    readonly UNSIGNED_BYTE: 0x1401;
    readonly SHORT: 0x1402;
    readonly UNSIGNED_SHORT: 0x1403;
    readonly INT: 0x1404;
    readonly UNSIGNED_INT: 0x1405;
    readonly FLOAT: 0x1406;
    readonly DEPTH_COMPONENT: 0x1902;
    readonly ALPHA: 0x1906;
    readonly RGB: 0x1907;
    readonly RGBA: 0x1908;
    readonly LUMINANCE: 0x1909;
    readonly LUMINANCE_ALPHA: 0x190A;
    readonly UNSIGNED_SHORT_4_4_4_4: 0x8033;
    readonly UNSIGNED_SHORT_5_5_5_1: 0x8034;
    readonly UNSIGNED_SHORT_5_6_5: 0x8363;
    readonly FRAGMENT_SHADER: 0x8B30;
    readonly VERTEX_SHADER: 0x8B31;
    readonly MAX_VERTEX_ATTRIBS: 0x8869;
    readonly MAX_VERTEX_UNIFORM_VECTORS: 0x8DFB;
    readonly MAX_VARYING_VECTORS: 0x8DFC;
    readonly MAX_COMBINED_TEXTURE_IMAGE_UNITS: 0x8B4D;
    readonly MAX_VERTEX_TEXTURE_IMAGE_UNITS: 0x8B4C;
    readonly MAX_TEXTURE_IMAGE_UNITS: 0x8872;
    readonly MAX_FRAGMENT_UNIFORM_VECTORS: 0x8DFD;
    readonly SHADER_TYPE: 0x8B4F;
    readonly DELETE_STATUS: 0x8B80;
    readonly LINK_STATUS: 0x8B82;
    readonly VALIDATE_STATUS: 0x8B83;
    readonly ATTACHED_SHADERS: 0x8B85;
    readonly ACTIVE_UNIFORMS: 0x8B86;
    readonly ACTIVE_ATTRIBUTES: 0x8B89;
    readonly SHADING_LANGUAGE_VERSION: 0x8B8C;
    readonly CURRENT_PROGRAM: 0x8B8D;
    readonly NEVER: 0x0200;
    readonly LESS: 0x0201;
    readonly EQUAL: 0x0202;
    readonly LEQUAL: 0x0203;
    readonly GREATER: 0x0204;
    readonly NOTEQUAL: 0x0205;
    readonly GEQUAL: 0x0206;
    readonly ALWAYS: 0x0207;
    readonly KEEP: 0x1E00;
    readonly REPLACE: 0x1E01;
    readonly INCR: 0x1E02;
    readonly DECR: 0x1E03;
    readonly INVERT: 0x150A;
    readonly INCR_WRAP: 0x8507;
    readonly DECR_WRAP: 0x8508;
    readonly VENDOR: 0x1F00;
    readonly RENDERER: 0x1F01;
    readonly VERSION: 0x1F02;
    readonly NEAREST: 0x2600;
    readonly LINEAR: 0x2601;
    readonly NEAREST_MIPMAP_NEAREST: 0x2700;
    readonly LINEAR_MIPMAP_NEAREST: 0x2701;
    readonly NEAREST_MIPMAP_LINEAR: 0x2702;
    readonly LINEAR_MIPMAP_LINEAR: 0x2703;
    readonly TEXTURE_MAG_FILTER: 0x2800;
    readonly TEXTURE_MIN_FILTER: 0x2801;
    readonly TEXTURE_WRAP_S: 0x2802;
    readonly TEXTURE_WRAP_T: 0x2803;
    readonly TEXTURE_2D: 0x0DE1;
    readonly TEXTURE: 0x1702;
    readonly TEXTURE_CUBE_MAP: 0x8513;
    readonly TEXTURE_BINDING_CUBE_MAP: 0x8514;
    readonly TEXTURE_CUBE_MAP_POSITIVE_X: 0x8515;
    readonly TEXTURE_CUBE_MAP_NEGATIVE_X: 0x8516;
    readonly TEXTURE_CUBE_MAP_POSITIVE_Y: 0x8517;
    readonly TEXTURE_CUBE_MAP_NEGATIVE_Y: 0x8518;
    readonly TEXTURE_CUBE_MAP_POSITIVE_Z: 0x8519;
    readonly TEXTURE_CUBE_MAP_NEGATIVE_Z: 0x851A;
    readonly MAX_CUBE_MAP_TEXTURE_SIZE: 0x851C;
    readonly TEXTURE0: 0x84C0;
    readonly TEXTURE1: 0x84C1;
    readonly TEXTURE2: 0x84C2;
    readonly TEXTURE3: 0x84C3;
    readonly TEXTURE4: 0x84C4;
    readonly TEXTURE5: 0x84C5;
    readonly TEXTURE6: 0x84C6;
    readonly TEXTURE7: 0x84C7;
    readonly TEXTURE8: 0x84C8;
    readonly TEXTURE9: 0x84C9;
    readonly TEXTURE10: 0x84CA;
    readonly TEXTURE11: 0x84CB;
    readonly TEXTURE12: 0x84CC;
    readonly TEXTURE13: 0x84CD;
    readonly TEXTURE14: 0x84CE;
    readonly TEXTURE15: 0x84CF;
    readonly TEXTURE16: 0x84D0;
    readonly TEXTURE17: 0x84D1;
    readonly TEXTURE18: 0x84D2;
    readonly TEXTURE19: 0x84D3;
    readonly TEXTURE20: 0x84D4;
    readonly TEXTURE21: 0x84D5;
    readonly TEXTURE22: 0x84D6;
    readonly TEXTURE23: 0x84D7;
    readonly TEXTURE24: 0x84D8;
    readonly TEXTURE25: 0x84D9;
    readonly TEXTURE26: 0x84DA;
    readonly TEXTURE27: 0x84DB;
    readonly TEXTURE28: 0x84DC;
    readonly TEXTURE29: 0x84DD;
    readonly TEXTURE30: 0x84DE;
    readonly TEXTURE31: 0x84DF;
    readonly ACTIVE_TEXTURE: 0x84E0;
    readonly REPEAT: 0x2901;
    readonly CLAMP_TO_EDGE: 0x812F;
    readonly MIRRORED_REPEAT: 0x8370;
    readonly FLOAT_VEC2: 0x8B50;
    readonly FLOAT_VEC3: 0x8B51;
    readonly FLOAT_VEC4: 0x8B52;
    readonly INT_VEC2: 0x8B53;
    readonly INT_VEC3: 0x8B54;
    readonly INT_VEC4: 0x8B55;
    readonly BOOL: 0x8B56;
    readonly BOOL_VEC2: 0x8B57;
    readonly BOOL_VEC3: 0x8B58;
    readonly BOOL_VEC4: 0x8B59;
    readonly FLOAT_MAT2: 0x8B5A;
    readonly FLOAT_MAT3: 0x8B5B;
    readonly FLOAT_MAT4: 0x8B5C;
    readonly SAMPLER_2D: 0x8B5E;
    readonly SAMPLER_CUBE: 0x8B60;
    readonly VERTEX_ATTRIB_ARRAY_ENABLED: 0x8622;
    readonly VERTEX_ATTRIB_ARRAY_SIZE: 0x8623;
    readonly VERTEX_ATTRIB_ARRAY_STRIDE: 0x8624;
    readonly VERTEX_ATTRIB_ARRAY_TYPE: 0x8625;
    readonly VERTEX_ATTRIB_ARRAY_NORMALIZED: 0x886A;
    readonly VERTEX_ATTRIB_ARRAY_POINTER: 0x8645;
    readonly VERTEX_ATTRIB_ARRAY_BUFFER_BINDING: 0x889F;
    readonly IMPLEMENTATION_COLOR_READ_TYPE: 0x8B9A;
    readonly IMPLEMENTATION_COLOR_READ_FORMAT: 0x8B9B;
    readonly COMPILE_STATUS: 0x8B81;
    readonly LOW_FLOAT: 0x8DF0;
    readonly MEDIUM_FLOAT: 0x8DF1;
    readonly HIGH_FLOAT: 0x8DF2;
    readonly LOW_INT: 0x8DF3;
    readonly MEDIUM_INT: 0x8DF4;
    readonly HIGH_INT: 0x8DF5;
    readonly FRAMEBUFFER: 0x8D40;
    readonly RENDERBUFFER: 0x8D41;
    readonly RGBA4: 0x8056;
    readonly RGB5_A1: 0x8057;
    readonly RGB565: 0x8D62;
    readonly DEPTH_COMPONENT16: 0x81A5;
    readonly STENCIL_INDEX8: 0x8D48;
    readonly DEPTH_STENCIL: 0x84F9;
    readonly RENDERBUFFER_WIDTH: 0x8D42;
    readonly RENDERBUFFER_HEIGHT: 0x8D43;
    readonly RENDERBUFFER_INTERNAL_FORMAT: 0x8D44;
    readonly RENDERBUFFER_RED_SIZE: 0x8D50;
    readonly RENDERBUFFER_GREEN_SIZE: 0x8D51;
    readonly RENDERBUFFER_BLUE_SIZE: 0x8D52;
    readonly RENDERBUFFER_ALPHA_SIZE: 0x8D53;
    readonly RENDERBUFFER_DEPTH_SIZE: 0x8D54;
    readonly RENDERBUFFER_STENCIL_SIZE: 0x8D55;
    readonly FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE: 0x8CD0;
    readonly FRAMEBUFFER_ATTACHMENT_OBJECT_NAME: 0x8CD1;
    readonly FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL: 0x8CD2;
    readonly FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE: 0x8CD3;
    readonly COLOR_ATTACHMENT0: 0x8CE0;
    readonly DEPTH_ATTACHMENT: 0x8D00;
    readonly STENCIL_ATTACHMENT: 0x8D20;
    readonly DEPTH_STENCIL_ATTACHMENT: 0x821A;
    readonly NONE: 0;
    readonly FRAMEBUFFER_COMPLETE: 0x8CD5;
    readonly FRAMEBUFFER_INCOMPLETE_ATTACHMENT: 0x8CD6;
    readonly FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT: 0x8CD7;
    readonly FRAMEBUFFER_INCOMPLETE_DIMENSIONS: 0x8CD9;
    readonly FRAMEBUFFER_UNSUPPORTED: 0x8CDD;
    readonly FRAMEBUFFER_BINDING: 0x8CA6;
    readonly RENDERBUFFER_BINDING: 0x8CA7;
    readonly MAX_RENDERBUFFER_SIZE: 0x84E8;
    readonly INVALID_FRAMEBUFFER_OPERATION: 0x0506;
    readonly UNPACK_FLIP_Y_WEBGL: 0x9240;
    readonly UNPACK_PREMULTIPLY_ALPHA_WEBGL: 0x9241;
    readonly CONTEXT_LOST_WEBGL: 0x9242;
    readonly UNPACK_COLORSPACE_CONVERSION_WEBGL: 0x9243;
    readonly BROWSER_DEFAULT_WEBGL: 0x9244;
}

interface WebGLRenderingContextOverloads {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/bufferData) */
    bufferData(target: GLenum, size: GLsizeiptr, usage: GLenum): void;
    bufferData(target: GLenum, data: BufferSource | null, usage: GLenum): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/bufferSubData) */
    bufferSubData(target: GLenum, offset: GLintptr, data: BufferSource): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/compressedTexImage2D) */
    compressedTexImage2D(target: GLenum, level: GLint, internalformat: GLenum, width: GLsizei, height: GLsizei, border: GLint, data: ArrayBufferView): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/compressedTexSubImage2D) */
    compressedTexSubImage2D(target: GLenum, level: GLint, xoffset: GLint, yoffset: GLint, width: GLsizei, height: GLsizei, format: GLenum, data: ArrayBufferView): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/readPixels) */
    readPixels(x: GLint, y: GLint, width: GLsizei, height: GLsizei, format: GLenum, type: GLenum, pixels: ArrayBufferView | null): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/texImage2D) */
    texImage2D(target: GLenum, level: GLint, internalformat: GLint, width: GLsizei, height: GLsizei, border: GLint, format: GLenum, type: GLenum, pixels: ArrayBufferView | null): void;
    texImage2D(target: GLenum, level: GLint, internalformat: GLint, format: GLenum, type: GLenum, source: TexImageSource): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/texSubImage2D) */
    texSubImage2D(target: GLenum, level: GLint, xoffset: GLint, yoffset: GLint, width: GLsizei, height: GLsizei, format: GLenum, type: GLenum, pixels: ArrayBufferView | null): void;
    texSubImage2D(target: GLenum, level: GLint, xoffset: GLint, yoffset: GLint, format: GLenum, type: GLenum, source: TexImageSource): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniform) */
    uniform1fv(location: WebGLUniformLocation | null, v: Float32List): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniform) */
    uniform1iv(location: WebGLUniformLocation | null, v: Int32List): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniform) */
    uniform2fv(location: WebGLUniformLocation | null, v: Float32List): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniform) */
    uniform2iv(location: WebGLUniformLocation | null, v: Int32List): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniform) */
    uniform3fv(location: WebGLUniformLocation | null, v: Float32List): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniform) */
    uniform3iv(location: WebGLUniformLocation | null, v: Int32List): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniform) */
    uniform4fv(location: WebGLUniformLocation | null, v: Float32List): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniform) */
    uniform4iv(location: WebGLUniformLocation | null, v: Int32List): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniformMatrix) */
    uniformMatrix2fv(location: WebGLUniformLocation | null, transpose: GLboolean, value: Float32List): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniformMatrix) */
    uniformMatrix3fv(location: WebGLUniformLocation | null, transpose: GLboolean, value: Float32List): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLRenderingContext/uniformMatrix) */
    uniformMatrix4fv(location: WebGLUniformLocation | null, transpose: GLboolean, value: Float32List): void;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLSampler) */
interface WebGLSampler {
}

declare var WebGLSampler: {
    prototype: WebGLSampler;
    new(): WebGLSampler;
};

/**
 * The WebGLShader is part of the WebGL API and can either be a vertex or a fragment shader. A WebGLProgram requires both types of shaders.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLShader)
 */
interface WebGLShader {
}

declare var WebGLShader: {
    prototype: WebGLShader;
    new(): WebGLShader;
};

/**
 * Part of the WebGL API and represents the information returned by calling the WebGLRenderingContext.getShaderPrecisionFormat() method.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLShaderPrecisionFormat)
 */
interface WebGLShaderPrecisionFormat {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLShaderPrecisionFormat/precision) */
    readonly precision: GLint;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLShaderPrecisionFormat/rangeMax) */
    readonly rangeMax: GLint;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLShaderPrecisionFormat/rangeMin) */
    readonly rangeMin: GLint;
}

declare var WebGLShaderPrecisionFormat: {
    prototype: WebGLShaderPrecisionFormat;
    new(): WebGLShaderPrecisionFormat;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLSync) */
interface WebGLSync {
}

declare var WebGLSync: {
    prototype: WebGLSync;
    new(): WebGLSync;
};

/**
 * Part of the WebGL API and represents an opaque texture object providing storage and state for texturing operations.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLTexture)
 */
interface WebGLTexture {
}

declare var WebGLTexture: {
    prototype: WebGLTexture;
    new(): WebGLTexture;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLTransformFeedback) */
interface WebGLTransformFeedback {
}

declare var WebGLTransformFeedback: {
    prototype: WebGLTransformFeedback;
    new(): WebGLTransformFeedback;
};

/**
 * Part of the WebGL API and represents the location of a uniform variable in a shader program.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLUniformLocation)
 */
interface WebGLUniformLocation {
}

declare var WebGLUniformLocation: {
    prototype: WebGLUniformLocation;
    new(): WebGLUniformLocation;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLVertexArrayObject) */
interface WebGLVertexArrayObject {
}

declare var WebGLVertexArrayObject: {
    prototype: WebGLVertexArrayObject;
    new(): WebGLVertexArrayObject;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebGLVertexArrayObjectOES) */
interface WebGLVertexArrayObjectOES {
}

interface WebSocketEventMap {
    "close": CloseEvent;
    "error": Event;
    "message": MessageEvent;
    "open": Event;
}

/**
 * Provides the API for creating and managing a WebSocket connection to a server, as well as for sending and receiving data on the connection.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebSocket)
 */
interface WebSocket extends EventTarget {
    /**
     * Returns a string that indicates how binary data from the WebSocket object is exposed to scripts:
     *
     * Can be set, to change how binary data is returned. The default is "blob".
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebSocket/binaryType)
     */
    binaryType: BinaryType;
    /**
     * Returns the number of bytes of application data (UTF-8 text and binary data) that have been queued using send() but not yet been transmitted to the network.
     *
     * If the WebSocket connection is closed, this attribute's value will only increase with each call to the send() method. (The number does not reset to zero once the connection closes.)
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebSocket/bufferedAmount)
     */
    readonly bufferedAmount: number;
    /**
     * Returns the extensions selected by the server, if any.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebSocket/extensions)
     */
    readonly extensions: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebSocket/close_event) */
    onclose: ((this: WebSocket, ev: CloseEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebSocket/error_event) */
    onerror: ((this: WebSocket, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebSocket/message_event) */
    onmessage: ((this: WebSocket, ev: MessageEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebSocket/open_event) */
    onopen: ((this: WebSocket, ev: Event) => any) | null;
    /**
     * Returns the subprotocol selected by the server, if any. It can be used in conjunction with the array form of the constructor's second argument to perform subprotocol negotiation.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebSocket/protocol)
     */
    readonly protocol: string;
    /**
     * Returns the state of the WebSocket object's connection. It can have the values described below.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebSocket/readyState)
     */
    readonly readyState: number;
    /**
     * Returns the URL that was used to establish the WebSocket connection.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebSocket/url)
     */
    readonly url: string;
    /**
     * Closes the WebSocket connection, optionally using code as the the WebSocket connection close code and reason as the the WebSocket connection close reason.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebSocket/close)
     */
    close(code?: number, reason?: string): void;
    /**
     * Transmits data using the WebSocket connection. data can be a string, a Blob, an ArrayBuffer, or an ArrayBufferView.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebSocket/send)
     */
    send(data: string | ArrayBufferLike | Blob | ArrayBufferView): void;
    readonly CONNECTING: 0;
    readonly OPEN: 1;
    readonly CLOSING: 2;
    readonly CLOSED: 3;
    addEventListener<K extends keyof WebSocketEventMap>(type: K, listener: (this: WebSocket, ev: WebSocketEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof WebSocketEventMap>(type: K, listener: (this: WebSocket, ev: WebSocketEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var WebSocket: {
    prototype: WebSocket;
    new(url: string | URL, protocols?: string | string[]): WebSocket;
    readonly CONNECTING: 0;
    readonly OPEN: 1;
    readonly CLOSING: 2;
    readonly CLOSED: 3;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebTransport)
 */
interface WebTransport {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebTransport/closed) */
    readonly closed: Promise<WebTransportCloseInfo>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebTransport/datagrams) */
    readonly datagrams: WebTransportDatagramDuplexStream;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebTransport/incomingBidirectionalStreams) */
    readonly incomingBidirectionalStreams: ReadableStream;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebTransport/incomingUnidirectionalStreams) */
    readonly incomingUnidirectionalStreams: ReadableStream;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebTransport/ready) */
    readonly ready: Promise<undefined>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebTransport/close) */
    close(closeInfo?: WebTransportCloseInfo): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebTransport/createBidirectionalStream) */
    createBidirectionalStream(options?: WebTransportSendStreamOptions): Promise<WebTransportBidirectionalStream>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebTransport/createUnidirectionalStream) */
    createUnidirectionalStream(options?: WebTransportSendStreamOptions): Promise<WritableStream>;
}

declare var WebTransport: {
    prototype: WebTransport;
    new(url: string | URL, options?: WebTransportOptions): WebTransport;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebTransportBidirectionalStream)
 */
interface WebTransportBidirectionalStream {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebTransportBidirectionalStream/readable) */
    readonly readable: ReadableStream;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebTransportBidirectionalStream/writable) */
    readonly writable: WritableStream;
}

declare var WebTransportBidirectionalStream: {
    prototype: WebTransportBidirectionalStream;
    new(): WebTransportBidirectionalStream;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebTransportDatagramDuplexStream)
 */
interface WebTransportDatagramDuplexStream {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebTransportDatagramDuplexStream/incomingHighWaterMark) */
    incomingHighWaterMark: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebTransportDatagramDuplexStream/incomingMaxAge) */
    incomingMaxAge: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebTransportDatagramDuplexStream/maxDatagramSize) */
    readonly maxDatagramSize: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebTransportDatagramDuplexStream/outgoingHighWaterMark) */
    outgoingHighWaterMark: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebTransportDatagramDuplexStream/outgoingMaxAge) */
    outgoingMaxAge: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebTransportDatagramDuplexStream/readable) */
    readonly readable: ReadableStream;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebTransportDatagramDuplexStream/writable) */
    readonly writable: WritableStream;
}

declare var WebTransportDatagramDuplexStream: {
    prototype: WebTransportDatagramDuplexStream;
    new(): WebTransportDatagramDuplexStream;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebTransportError)
 */
interface WebTransportError extends DOMException {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebTransportError/source) */
    readonly source: WebTransportErrorSource;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WebTransportError/streamErrorCode) */
    readonly streamErrorCode: number | null;
}

declare var WebTransportError: {
    prototype: WebTransportError;
    new(message?: string, options?: WebTransportErrorOptions): WebTransportError;
};

/**
 * Events that occur due to the user moving a mouse wheel or similar input device.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WheelEvent)
 */
interface WheelEvent extends MouseEvent {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WheelEvent/deltaMode) */
    readonly deltaMode: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WheelEvent/deltaX) */
    readonly deltaX: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WheelEvent/deltaY) */
    readonly deltaY: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WheelEvent/deltaZ) */
    readonly deltaZ: number;
    readonly DOM_DELTA_PIXEL: 0x00;
    readonly DOM_DELTA_LINE: 0x01;
    readonly DOM_DELTA_PAGE: 0x02;
}

declare var WheelEvent: {
    prototype: WheelEvent;
    new(type: string, eventInitDict?: WheelEventInit): WheelEvent;
    readonly DOM_DELTA_PIXEL: 0x00;
    readonly DOM_DELTA_LINE: 0x01;
    readonly DOM_DELTA_PAGE: 0x02;
};

interface WindowEventMap extends GlobalEventHandlersEventMap, WindowEventHandlersEventMap {
    "DOMContentLoaded": Event;
    "devicemotion": DeviceMotionEvent;
    "deviceorientation": DeviceOrientationEvent;
    "gamepadconnected": GamepadEvent;
    "gamepaddisconnected": GamepadEvent;
    "orientationchange": Event;
}

/**
 * A window containing a DOM document; the document property points to the DOM document loaded in that window.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window)
 */
interface Window extends EventTarget, AnimationFrameProvider, GlobalEventHandlers, WindowEventHandlers, WindowLocalStorage, WindowOrWorkerGlobalScope, WindowSessionStorage {
    /**
     * @deprecated This is a legacy alias of `navigator`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/navigator)
     */
    readonly clientInformation: Navigator;
    /**
     * Returns true if the window has been closed, false otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/closed)
     */
    readonly closed: boolean;
    /**
     * Defines a new custom element, mapping the given name to the given constructor as an autonomous custom element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/customElements)
     */
    readonly customElements: CustomElementRegistry;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/devicePixelRatio) */
    readonly devicePixelRatio: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/document) */
    readonly document: Document;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/event)
     */
    readonly event: Event | undefined;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/external)
     */
    readonly external: External;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/frameElement) */
    readonly frameElement: Element | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/frames) */
    readonly frames: WindowProxy;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/history) */
    readonly history: History;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/innerHeight) */
    readonly innerHeight: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/innerWidth) */
    readonly innerWidth: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/length) */
    readonly length: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/location) */
    get location(): Location;
    set location(href: string | Location);
    /**
     * Returns true if the location bar is visible; otherwise, returns false.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/locationbar)
     */
    readonly locationbar: BarProp;
    /**
     * Returns true if the menu bar is visible; otherwise, returns false.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/menubar)
     */
    readonly menubar: BarProp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/name) */
    name: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/navigator) */
    readonly navigator: Navigator;
    /**
     * Available only in secure contexts.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/devicemotion_event)
     */
    ondevicemotion: ((this: Window, ev: DeviceMotionEvent) => any) | null;
    /**
     * Available only in secure contexts.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/deviceorientation_event)
     */
    ondeviceorientation: ((this: Window, ev: DeviceOrientationEvent) => any) | null;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/orientationchange_event)
     */
    onorientationchange: ((this: Window, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/opener) */
    opener: any;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/orientation)
     */
    readonly orientation: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/outerHeight) */
    readonly outerHeight: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/outerWidth) */
    readonly outerWidth: number;
    /**
     * @deprecated This is a legacy alias of `scrollX`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/scrollX)
     */
    readonly pageXOffset: number;
    /**
     * @deprecated This is a legacy alias of `scrollY`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/scrollY)
     */
    readonly pageYOffset: number;
    /**
     * Refers to either the parent WindowProxy, or itself.
     *
     * It can rarely be null e.g. for contentWindow of an iframe that is already removed from the parent.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/parent)
     */
    readonly parent: WindowProxy;
    /**
     * Returns true if the personal bar is visible; otherwise, returns false.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/personalbar)
     */
    readonly personalbar: BarProp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/screen) */
    readonly screen: Screen;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/screenLeft) */
    readonly screenLeft: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/screenTop) */
    readonly screenTop: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/screenX) */
    readonly screenX: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/screenY) */
    readonly screenY: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/scrollX) */
    readonly scrollX: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/scrollY) */
    readonly scrollY: number;
    /**
     * Returns true if the scrollbars are visible; otherwise, returns false.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/scrollbars)
     */
    readonly scrollbars: BarProp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/self) */
    readonly self: Window & typeof globalThis;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/speechSynthesis) */
    readonly speechSynthesis: SpeechSynthesis;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/status)
     */
    status: string;
    /**
     * Returns true if the status bar is visible; otherwise, returns false.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/statusbar)
     */
    readonly statusbar: BarProp;
    /**
     * Returns true if the toolbar is visible; otherwise, returns false.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/toolbar)
     */
    readonly toolbar: BarProp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/top) */
    readonly top: WindowProxy | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/visualViewport) */
    readonly visualViewport: VisualViewport | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/window) */
    readonly window: Window & typeof globalThis;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/alert) */
    alert(message?: any): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/blur) */
    blur(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/cancelIdleCallback) */
    cancelIdleCallback(handle: number): void;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/captureEvents)
     */
    captureEvents(): void;
    /**
     * Closes the window.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/close)
     */
    close(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/confirm) */
    confirm(message?: string): boolean;
    /**
     * Moves the focus to the window's browsing context, if any.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/focus)
     */
    focus(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/getComputedStyle) */
    getComputedStyle(elt: Element, pseudoElt?: string | null): CSSStyleDeclaration;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/getSelection) */
    getSelection(): Selection | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/matchMedia) */
    matchMedia(query: string): MediaQueryList;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/moveBy) */
    moveBy(x: number, y: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/moveTo) */
    moveTo(x: number, y: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/open) */
    open(url?: string | URL, target?: string, features?: string): WindowProxy | null;
    /**
     * Posts a message to the given window. Messages can be structured objects, e.g. nested objects and arrays, can contain JavaScript values (strings, numbers, Date objects, etc), and can contain certain data objects such as File Blob, FileList, and ArrayBuffer objects.
     *
     * Objects listed in the transfer member of options are transferred, not just cloned, meaning that they are no longer usable on the sending side.
     *
     * A target origin can be specified using the targetOrigin member of options. If not provided, it defaults to "/". This default restricts the message to same-origin targets only.
     *
     * If the origin of the target window doesn't match the given target origin, the message is discarded, to avoid information leakage. To send the message to the target regardless of origin, set the target origin to "*".
     *
     * Throws a "DataCloneError" DOMException if transfer array contains duplicate objects or if message could not be cloned.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/postMessage)
     */
    postMessage(message: any, targetOrigin: string, transfer?: Transferable[]): void;
    postMessage(message: any, options?: WindowPostMessageOptions): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/print) */
    print(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/prompt) */
    prompt(message?: string, _default?: string): string | null;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/releaseEvents)
     */
    releaseEvents(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/requestIdleCallback) */
    requestIdleCallback(callback: IdleRequestCallback, options?: IdleRequestOptions): number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/resizeBy) */
    resizeBy(x: number, y: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/resizeTo) */
    resizeTo(width: number, height: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/scroll) */
    scroll(options?: ScrollToOptions): void;
    scroll(x: number, y: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/scrollBy) */
    scrollBy(options?: ScrollToOptions): void;
    scrollBy(x: number, y: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/scrollTo) */
    scrollTo(options?: ScrollToOptions): void;
    scrollTo(x: number, y: number): void;
    /**
     * Cancels the document load.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/stop)
     */
    stop(): void;
    addEventListener<K extends keyof WindowEventMap>(type: K, listener: (this: Window, ev: WindowEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof WindowEventMap>(type: K, listener: (this: Window, ev: WindowEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
    [index: number]: Window;
}

declare var Window: {
    prototype: Window;
    new(): Window;
};

interface WindowEventHandlersEventMap {
    "afterprint": Event;
    "beforeprint": Event;
    "beforeunload": BeforeUnloadEvent;
    "gamepadconnected": GamepadEvent;
    "gamepaddisconnected": GamepadEvent;
    "hashchange": HashChangeEvent;
    "languagechange": Event;
    "message": MessageEvent;
    "messageerror": MessageEvent;
    "offline": Event;
    "online": Event;
    "pagehide": PageTransitionEvent;
    "pageshow": PageTransitionEvent;
    "popstate": PopStateEvent;
    "rejectionhandled": PromiseRejectionEvent;
    "storage": StorageEvent;
    "unhandledrejection": PromiseRejectionEvent;
    "unload": Event;
}

interface WindowEventHandlers {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/afterprint_event) */
    onafterprint: ((this: WindowEventHandlers, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/beforeprint_event) */
    onbeforeprint: ((this: WindowEventHandlers, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/beforeunload_event) */
    onbeforeunload: ((this: WindowEventHandlers, ev: BeforeUnloadEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/gamepadconnected_event) */
    ongamepadconnected: ((this: WindowEventHandlers, ev: GamepadEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/gamepaddisconnected_event) */
    ongamepaddisconnected: ((this: WindowEventHandlers, ev: GamepadEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/hashchange_event) */
    onhashchange: ((this: WindowEventHandlers, ev: HashChangeEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/languagechange_event) */
    onlanguagechange: ((this: WindowEventHandlers, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/message_event) */
    onmessage: ((this: WindowEventHandlers, ev: MessageEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/messageerror_event) */
    onmessageerror: ((this: WindowEventHandlers, ev: MessageEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/offline_event) */
    onoffline: ((this: WindowEventHandlers, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/online_event) */
    ononline: ((this: WindowEventHandlers, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/pagehide_event) */
    onpagehide: ((this: WindowEventHandlers, ev: PageTransitionEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/pageshow_event) */
    onpageshow: ((this: WindowEventHandlers, ev: PageTransitionEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/popstate_event) */
    onpopstate: ((this: WindowEventHandlers, ev: PopStateEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/rejectionhandled_event) */
    onrejectionhandled: ((this: WindowEventHandlers, ev: PromiseRejectionEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/storage_event) */
    onstorage: ((this: WindowEventHandlers, ev: StorageEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/unhandledrejection_event) */
    onunhandledrejection: ((this: WindowEventHandlers, ev: PromiseRejectionEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/unload_event) */
    onunload: ((this: WindowEventHandlers, ev: Event) => any) | null;
    addEventListener<K extends keyof WindowEventHandlersEventMap>(type: K, listener: (this: WindowEventHandlers, ev: WindowEventHandlersEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof WindowEventHandlersEventMap>(type: K, listener: (this: WindowEventHandlers, ev: WindowEventHandlersEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

interface WindowLocalStorage {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/localStorage) */
    readonly localStorage: Storage;
}

interface WindowOrWorkerGlobalScope {
    /**
     * Available only in secure contexts.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/caches)
     */
    readonly caches: CacheStorage;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/crossOriginIsolated) */
    readonly crossOriginIsolated: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/crypto_property) */
    readonly crypto: Crypto;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/indexedDB) */
    readonly indexedDB: IDBFactory;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/isSecureContext) */
    readonly isSecureContext: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/origin) */
    readonly origin: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/performance_property) */
    readonly performance: Performance;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/atob) */
    atob(data: string): string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/btoa) */
    btoa(data: string): string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/clearInterval) */
    clearInterval(id: number | undefined): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/clearTimeout) */
    clearTimeout(id: number | undefined): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/createImageBitmap) */
    createImageBitmap(image: ImageBitmapSource, options?: ImageBitmapOptions): Promise<ImageBitmap>;
    createImageBitmap(image: ImageBitmapSource, sx: number, sy: number, sw: number, sh: number, options?: ImageBitmapOptions): Promise<ImageBitmap>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/fetch) */
    fetch(input: RequestInfo | URL, init?: RequestInit): Promise<Response>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/queueMicrotask) */
    queueMicrotask(callback: VoidFunction): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/reportError) */
    reportError(e: any): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/setInterval) */
    setInterval(handler: TimerHandler, timeout?: number, ...arguments: any[]): number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/setTimeout) */
    setTimeout(handler: TimerHandler, timeout?: number, ...arguments: any[]): number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/structuredClone) */
    structuredClone<T = any>(value: T, options?: StructuredSerializeOptions): T;
}

interface WindowSessionStorage {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/sessionStorage) */
    readonly sessionStorage: Storage;
}

interface WorkerEventMap extends AbstractWorkerEventMap {
    "message": MessageEvent;
    "messageerror": MessageEvent;
}

/**
 * This Web Workers API interface represents a background task that can be easily created and can send messages back to its creator. Creating a worker is as simple as calling the Worker() constructor and specifying a script to be run in the worker thread.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Worker)
 */
interface Worker extends EventTarget, AbstractWorker {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Worker/message_event) */
    onmessage: ((this: Worker, ev: MessageEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Worker/messageerror_event) */
    onmessageerror: ((this: Worker, ev: MessageEvent) => any) | null;
    /**
     * Clones message and transmits it to worker's global environment. transfer can be passed as a list of objects that are to be transferred rather than cloned.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Worker/postMessage)
     */
    postMessage(message: any, transfer: Transferable[]): void;
    postMessage(message: any, options?: StructuredSerializeOptions): void;
    /**
     * Aborts worker's associated global environment.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Worker/terminate)
     */
    terminate(): void;
    addEventListener<K extends keyof WorkerEventMap>(type: K, listener: (this: Worker, ev: WorkerEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof WorkerEventMap>(type: K, listener: (this: Worker, ev: WorkerEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var Worker: {
    prototype: Worker;
    new(scriptURL: string | URL, options?: WorkerOptions): Worker;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Worklet)
 */
interface Worklet {
    /**
     * Loads and executes the module script given by moduleURL into all of worklet's global scopes. It can also create additional global scopes as part of this process, depending on the worklet type. The returned promise will fulfill once the script has been successfully loaded and run in all global scopes.
     *
     * The credentials option can be set to a credentials mode to modify the script-fetching process. It defaults to "same-origin".
     *
     * Any failures in fetching the script or its dependencies will cause the returned promise to be rejected with an "AbortError" DOMException. Any errors in parsing the script or its dependencies will cause the returned promise to be rejected with the exception generated during parsing.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Worklet/addModule)
     */
    addModule(moduleURL: string | URL, options?: WorkletOptions): Promise<void>;
}

declare var Worklet: {
    prototype: Worklet;
    new(): Worklet;
};

/**
 * This Streams API interface provides a standard abstraction for writing streaming data to a destination, known as a sink. This object comes with built-in backpressure and queuing.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WritableStream)
 */
interface WritableStream<W = any> {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WritableStream/locked) */
    readonly locked: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WritableStream/abort) */
    abort(reason?: any): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WritableStream/close) */
    close(): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WritableStream/getWriter) */
    getWriter(): WritableStreamDefaultWriter<W>;
}

declare var WritableStream: {
    prototype: WritableStream;
    new<W = any>(underlyingSink?: UnderlyingSink<W>, strategy?: QueuingStrategy<W>): WritableStream<W>;
};

/**
 * This Streams API interface represents a controller allowing control of a WritableStream's state. When constructing a WritableStream, the underlying sink is given a corresponding WritableStreamDefaultController instance to manipulate.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WritableStreamDefaultController)
 */
interface WritableStreamDefaultController {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WritableStreamDefaultController/signal) */
    readonly signal: AbortSignal;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WritableStreamDefaultController/error) */
    error(e?: any): void;
}

declare var WritableStreamDefaultController: {
    prototype: WritableStreamDefaultController;
    new(): WritableStreamDefaultController;
};

/**
 * This Streams API interface is the object returned by WritableStream.getWriter() and once created locks the < writer to the WritableStream ensuring that no other streams can write to the underlying sink.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/WritableStreamDefaultWriter)
 */
interface WritableStreamDefaultWriter<W = any> {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WritableStreamDefaultWriter/closed) */
    readonly closed: Promise<undefined>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WritableStreamDefaultWriter/desiredSize) */
    readonly desiredSize: number | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WritableStreamDefaultWriter/ready) */
    readonly ready: Promise<undefined>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WritableStreamDefaultWriter/abort) */
    abort(reason?: any): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WritableStreamDefaultWriter/close) */
    close(): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WritableStreamDefaultWriter/releaseLock) */
    releaseLock(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/WritableStreamDefaultWriter/write) */
    write(chunk?: W): Promise<void>;
}

declare var WritableStreamDefaultWriter: {
    prototype: WritableStreamDefaultWriter;
    new<W = any>(stream: WritableStream<W>): WritableStreamDefaultWriter<W>;
};

/**
 * An XML document. It inherits from the generic Document and does not add any specific methods or properties to it: nevertheless, several algorithms behave differently with the two types of documents.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/XMLDocument)
 */
interface XMLDocument extends Document {
    addEventListener<K extends keyof DocumentEventMap>(type: K, listener: (this: XMLDocument, ev: DocumentEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof DocumentEventMap>(type: K, listener: (this: XMLDocument, ev: DocumentEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var XMLDocument: {
    prototype: XMLDocument;
    new(): XMLDocument;
};

interface XMLHttpRequestEventMap extends XMLHttpRequestEventTargetEventMap {
    "readystatechange": Event;
}

/**
 * Use XMLHttpRequest (XHR) objects to interact with servers. You can retrieve data from a URL without having to do a full page refresh. This enables a Web page to update just part of a page without disrupting what the user is doing.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/XMLHttpRequest)
 */
interface XMLHttpRequest extends XMLHttpRequestEventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/XMLHttpRequest/readystatechange_event) */
    onreadystatechange: ((this: XMLHttpRequest, ev: Event) => any) | null;
    /**
     * Returns client's state.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/XMLHttpRequest/readyState)
     */
    readonly readyState: number;
    /**
     * Returns the response body.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/XMLHttpRequest/response)
     */
    readonly response: any;
    /**
     * Returns response as text.
     *
     * Throws an "InvalidStateError" DOMException if responseType is not the empty string or "text".
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/XMLHttpRequest/responseText)
     */
    readonly responseText: string;
    /**
     * Returns the response type.
     *
     * Can be set to change the response type. Values are: the empty string (default), "arraybuffer", "blob", "document", "json", and "text".
     *
     * When set: setting to "document" is ignored if current global object is not a Window object.
     *
     * When set: throws an "InvalidStateError" DOMException if state is loading or done.
     *
     * When set: throws an "InvalidAccessError" DOMException if the synchronous flag is set and current global object is a Window object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/XMLHttpRequest/responseType)
     */
    responseType: XMLHttpRequestResponseType;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/XMLHttpRequest/responseURL) */
    readonly responseURL: string;
    /**
     * Returns the response as document.
     *
     * Throws an "InvalidStateError" DOMException if responseType is not the empty string or "document".
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/XMLHttpRequest/responseXML)
     */
    readonly responseXML: Document | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/XMLHttpRequest/status) */
    readonly status: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/XMLHttpRequest/statusText) */
    readonly statusText: string;
    /**
     * Can be set to a time in milliseconds. When set to a non-zero value will cause fetching to terminate after the given time has passed. When the time has passed, the request has not yet completed, and this's synchronous flag is unset, a timeout event will then be dispatched, or a "TimeoutError" DOMException will be thrown otherwise (for the send() method).
     *
     * When set: throws an "InvalidAccessError" DOMException if the synchronous flag is set and current global object is a Window object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/XMLHttpRequest/timeout)
     */
    timeout: number;
    /**
     * Returns the associated XMLHttpRequestUpload object. It can be used to gather transmission information when data is transferred to a server.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/XMLHttpRequest/upload)
     */
    readonly upload: XMLHttpRequestUpload;
    /**
     * True when credentials are to be included in a cross-origin request. False when they are to be excluded in a cross-origin request and when cookies are to be ignored in its response. Initially false.
     *
     * When set: throws an "InvalidStateError" DOMException if state is not unsent or opened, or if the send() flag is set.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/XMLHttpRequest/withCredentials)
     */
    withCredentials: boolean;
    /**
     * Cancels any network activity.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/XMLHttpRequest/abort)
     */
    abort(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/XMLHttpRequest/getAllResponseHeaders) */
    getAllResponseHeaders(): string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/XMLHttpRequest/getResponseHeader) */
    getResponseHeader(name: string): string | null;
    /**
     * Sets the request method, request URL, and synchronous flag.
     *
     * Throws a "SyntaxError" DOMException if either method is not a valid method or url cannot be parsed.
     *
     * Throws a "SecurityError" DOMException if method is a case-insensitive match for `CONNECT`, `TRACE`, or `TRACK`.
     *
     * Throws an "InvalidAccessError" DOMException if async is false, current global object is a Window object, and the timeout attribute is not zero or the responseType attribute is not the empty string.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/XMLHttpRequest/open)
     */
    open(method: string, url: string | URL): void;
    open(method: string, url: string | URL, async: boolean, username?: string | null, password?: string | null): void;
    /**
     * Acts as if the `Content-Type` header value for a response is mime. (It does not change the header.)
     *
     * Throws an "InvalidStateError" DOMException if state is loading or done.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/XMLHttpRequest/overrideMimeType)
     */
    overrideMimeType(mime: string): void;
    /**
     * Initiates the request. The body argument provides the request body, if any, and is ignored if the request method is GET or HEAD.
     *
     * Throws an "InvalidStateError" DOMException if either state is not opened or the send() flag is set.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/XMLHttpRequest/send)
     */
    send(body?: Document | XMLHttpRequestBodyInit | null): void;
    /**
     * Combines a header in author request headers.
     *
     * Throws an "InvalidStateError" DOMException if either state is not opened or the send() flag is set.
     *
     * Throws a "SyntaxError" DOMException if name is not a header name or if value is not a header value.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/XMLHttpRequest/setRequestHeader)
     */
    setRequestHeader(name: string, value: string): void;
    readonly UNSENT: 0;
    readonly OPENED: 1;
    readonly HEADERS_RECEIVED: 2;
    readonly LOADING: 3;
    readonly DONE: 4;
    addEventListener<K extends keyof XMLHttpRequestEventMap>(type: K, listener: (this: XMLHttpRequest, ev: XMLHttpRequestEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof XMLHttpRequestEventMap>(type: K, listener: (this: XMLHttpRequest, ev: XMLHttpRequestEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var XMLHttpRequest: {
    prototype: XMLHttpRequest;
    new(): XMLHttpRequest;
    readonly UNSENT: 0;
    readonly OPENED: 1;
    readonly HEADERS_RECEIVED: 2;
    readonly LOADING: 3;
    readonly DONE: 4;
};

interface XMLHttpRequestEventTargetEventMap {
    "abort": ProgressEvent<XMLHttpRequestEventTarget>;
    "error": ProgressEvent<XMLHttpRequestEventTarget>;
    "load": ProgressEvent<XMLHttpRequestEventTarget>;
    "loadend": ProgressEvent<XMLHttpRequestEventTarget>;
    "loadstart": ProgressEvent<XMLHttpRequestEventTarget>;
    "progress": ProgressEvent<XMLHttpRequestEventTarget>;
    "timeout": ProgressEvent<XMLHttpRequestEventTarget>;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/XMLHttpRequestEventTarget) */
interface XMLHttpRequestEventTarget extends EventTarget {
    onabort: ((this: XMLHttpRequest, ev: ProgressEvent) => any) | null;
    onerror: ((this: XMLHttpRequest, ev: ProgressEvent) => any) | null;
    onload: ((this: XMLHttpRequest, ev: ProgressEvent) => any) | null;
    onloadend: ((this: XMLHttpRequest, ev: ProgressEvent) => any) | null;
    onloadstart: ((this: XMLHttpRequest, ev: ProgressEvent) => any) | null;
    onprogress: ((this: XMLHttpRequest, ev: ProgressEvent) => any) | null;
    ontimeout: ((this: XMLHttpRequest, ev: ProgressEvent) => any) | null;
    addEventListener<K extends keyof XMLHttpRequestEventTargetEventMap>(type: K, listener: (this: XMLHttpRequestEventTarget, ev: XMLHttpRequestEventTargetEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof XMLHttpRequestEventTargetEventMap>(type: K, listener: (this: XMLHttpRequestEventTarget, ev: XMLHttpRequestEventTargetEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var XMLHttpRequestEventTarget: {
    prototype: XMLHttpRequestEventTarget;
    new(): XMLHttpRequestEventTarget;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/XMLHttpRequestUpload) */
interface XMLHttpRequestUpload extends XMLHttpRequestEventTarget {
    addEventListener<K extends keyof XMLHttpRequestEventTargetEventMap>(type: K, listener: (this: XMLHttpRequestUpload, ev: XMLHttpRequestEventTargetEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof XMLHttpRequestEventTargetEventMap>(type: K, listener: (this: XMLHttpRequestUpload, ev: XMLHttpRequestEventTargetEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var XMLHttpRequestUpload: {
    prototype: XMLHttpRequestUpload;
    new(): XMLHttpRequestUpload;
};

/**
 * Provides the serializeToString() method to construct an XML string representing a DOM tree.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/XMLSerializer)
 */
interface XMLSerializer {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/XMLSerializer/serializeToString) */
    serializeToString(root: Node): string;
}

declare var XMLSerializer: {
    prototype: XMLSerializer;
    new(): XMLSerializer;
};

/**
 * The XPathEvaluator interface allows to compile and evaluate XPath expressions.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/XPathEvaluator)
 */
interface XPathEvaluator extends XPathEvaluatorBase {
}

declare var XPathEvaluator: {
    prototype: XPathEvaluator;
    new(): XPathEvaluator;
};

interface XPathEvaluatorBase {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/createExpression) */
    createExpression(expression: string, resolver?: XPathNSResolver | null): XPathExpression;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/createNSResolver) */
    createNSResolver(nodeResolver: Node): Node;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/evaluate) */
    evaluate(expression: string, contextNode: Node, resolver?: XPathNSResolver | null, type?: number, result?: XPathResult | null): XPathResult;
}

/**
 * This interface is a compiled XPath expression that can be evaluated on a document or specific node to return information its DOM tree.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/XPathExpression)
 */
interface XPathExpression {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/XPathExpression/evaluate) */
    evaluate(contextNode: Node, type?: number, result?: XPathResult | null): XPathResult;
}

declare var XPathExpression: {
    prototype: XPathExpression;
    new(): XPathExpression;
};

/**
 * The results generated by evaluating an XPath expression within the context of a given node.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/XPathResult)
 */
interface XPathResult {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/XPathResult/booleanValue) */
    readonly booleanValue: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/XPathResult/invalidIteratorState) */
    readonly invalidIteratorState: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/XPathResult/numberValue) */
    readonly numberValue: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/XPathResult/resultType) */
    readonly resultType: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/XPathResult/singleNodeValue) */
    readonly singleNodeValue: Node | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/XPathResult/snapshotLength) */
    readonly snapshotLength: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/XPathResult/stringValue) */
    readonly stringValue: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/XPathResult/iterateNext) */
    iterateNext(): Node | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/XPathResult/snapshotItem) */
    snapshotItem(index: number): Node | null;
    readonly ANY_TYPE: 0;
    readonly NUMBER_TYPE: 1;
    readonly STRING_TYPE: 2;
    readonly BOOLEAN_TYPE: 3;
    readonly UNORDERED_NODE_ITERATOR_TYPE: 4;
    readonly ORDERED_NODE_ITERATOR_TYPE: 5;
    readonly UNORDERED_NODE_SNAPSHOT_TYPE: 6;
    readonly ORDERED_NODE_SNAPSHOT_TYPE: 7;
    readonly ANY_UNORDERED_NODE_TYPE: 8;
    readonly FIRST_ORDERED_NODE_TYPE: 9;
}

declare var XPathResult: {
    prototype: XPathResult;
    new(): XPathResult;
    readonly ANY_TYPE: 0;
    readonly NUMBER_TYPE: 1;
    readonly STRING_TYPE: 2;
    readonly BOOLEAN_TYPE: 3;
    readonly UNORDERED_NODE_ITERATOR_TYPE: 4;
    readonly ORDERED_NODE_ITERATOR_TYPE: 5;
    readonly UNORDERED_NODE_SNAPSHOT_TYPE: 6;
    readonly ORDERED_NODE_SNAPSHOT_TYPE: 7;
    readonly ANY_UNORDERED_NODE_TYPE: 8;
    readonly FIRST_ORDERED_NODE_TYPE: 9;
};

/**
 * An XSLTProcessor applies an XSLT stylesheet transformation to an XML document to produce a new XML document as output. It has methods to load the XSLT stylesheet, to manipulate <xsl:param> parameter values, and to apply the transformation to documents.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/XSLTProcessor)
 */
interface XSLTProcessor {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/XSLTProcessor/clearParameters) */
    clearParameters(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/XSLTProcessor/getParameter) */
    getParameter(namespaceURI: string | null, localName: string): any;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/XSLTProcessor/importStylesheet) */
    importStylesheet(style: Node): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/XSLTProcessor/removeParameter) */
    removeParameter(namespaceURI: string | null, localName: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/XSLTProcessor/reset) */
    reset(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/XSLTProcessor/setParameter) */
    setParameter(namespaceURI: string | null, localName: string, value: any): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/XSLTProcessor/transformToDocument) */
    transformToDocument(source: Node): Document;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/XSLTProcessor/transformToFragment) */
    transformToFragment(source: Node, output: Document): DocumentFragment;
}

declare var XSLTProcessor: {
    prototype: XSLTProcessor;
    new(): XSLTProcessor;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/console) */
interface Console {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/console/assert) */
    assert(condition?: boolean, ...data: any[]): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/console/clear) */
    clear(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/console/count) */
    count(label?: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/console/countReset) */
    countReset(label?: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/console/debug) */
    debug(...data: any[]): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/console/dir) */
    dir(item?: any, options?: any): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/console/dirxml) */
    dirxml(...data: any[]): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/console/error) */
    error(...data: any[]): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/console/group) */
    group(...data: any[]): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/console/groupCollapsed) */
    groupCollapsed(...data: any[]): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/console/groupEnd) */
    groupEnd(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/console/info) */
    info(...data: any[]): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/console/log) */
    log(...data: any[]): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/console/table) */
    table(tabularData?: any, properties?: string[]): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/console/time) */
    time(label?: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/console/timeEnd) */
    timeEnd(label?: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/console/timeLog) */
    timeLog(label?: string, ...data: any[]): void;
    timeStamp(label?: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/console/trace) */
    trace(...data: any[]): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/console/warn) */
    warn(...data: any[]): void;
}

declare var console: Console;

/** Holds useful CSS-related methods. No object with this interface are implemented: it contains only static methods and therefore is a utilitarian interface. */
declare namespace CSS {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function Hz(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function Q(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function ch(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function cm(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function cqb(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function cqh(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function cqi(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function cqmax(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function cqmin(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function cqw(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function deg(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function dpcm(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function dpi(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function dppx(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function dvb(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function dvh(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function dvi(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function dvmax(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function dvmin(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function dvw(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function em(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/escape_static) */
    function escape(ident: string): string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function ex(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function fr(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function grad(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function kHz(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function lvb(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function lvh(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function lvi(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function lvmax(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function lvmin(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function lvw(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function mm(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function ms(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function number(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function pc(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function percent(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function pt(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function px(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function rad(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/registerProperty_static) */
    function registerProperty(definition: PropertyDefinition): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function rem(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function s(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/supports_static) */
    function supports(property: string, value: string): boolean;
    function supports(conditionText: string): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function svb(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function svh(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function svi(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function svmax(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function svmin(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function svw(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function turn(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function vb(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function vh(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function vi(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function vmax(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function vmin(value: number): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSS/factory_functions_static) */
    function vw(value: number): CSSUnitValue;
}

declare namespace WebAssembly {
    interface CompileError extends Error {
    }

    var CompileError: {
        prototype: CompileError;
        new(message?: string): CompileError;
        (message?: string): CompileError;
    };

    /** [MDN Reference](https://developer.mozilla.org/docs/Web/JavaScript/Reference/Global_Objects/WebAssembly/Global) */
    interface Global<T extends ValueType = ValueType> {
        /** [MDN Reference](https://developer.mozilla.org/docs/Web/JavaScript/Reference/Global_Objects/WebAssembly/Global/value) */
        value: ValueTypeMap[T];
        /** [MDN Reference](https://developer.mozilla.org/docs/Web/JavaScript/Reference/Global_Objects/WebAssembly/Global/valueOf) */
        valueOf(): ValueTypeMap[T];
    }

    var Global: {
        prototype: Global;
        new<T extends ValueType = ValueType>(descriptor: GlobalDescriptor<T>, v?: ValueTypeMap[T]): Global<T>;
    };

    /** [MDN Reference](https://developer.mozilla.org/docs/Web/JavaScript/Reference/Global_Objects/WebAssembly/Instance) */
    interface Instance {
        /** [MDN Reference](https://developer.mozilla.org/docs/Web/JavaScript/Reference/Global_Objects/WebAssembly/Instance/exports) */
        readonly exports: Exports;
    }

    var Instance: {
        prototype: Instance;
        new(module: Module, importObject?: Imports): Instance;
    };

    interface LinkError extends Error {
    }

    var LinkError: {
        prototype: LinkError;
        new(message?: string): LinkError;
        (message?: string): LinkError;
    };

    /** [MDN Reference](https://developer.mozilla.org/docs/Web/JavaScript/Reference/Global_Objects/WebAssembly/Memory) */
    interface Memory {
        /** [MDN Reference](https://developer.mozilla.org/docs/Web/JavaScript/Reference/Global_Objects/WebAssembly/Memory/buffer) */
        readonly buffer: ArrayBuffer;
        /** [MDN Reference](https://developer.mozilla.org/docs/Web/JavaScript/Reference/Global_Objects/WebAssembly/Memory/grow) */
        grow(delta: number): number;
    }

    var Memory: {
        prototype: Memory;
        new(descriptor: MemoryDescriptor): Memory;
    };

    /** [MDN Reference](https://developer.mozilla.org/docs/Web/JavaScript/Reference/Global_Objects/WebAssembly/Module) */
    interface Module {
    }

    var Module: {
        prototype: Module;
        new(bytes: BufferSource): Module;
        /** [MDN Reference](https://developer.mozilla.org/docs/Web/JavaScript/Reference/Global_Objects/WebAssembly/Module/customSections) */
        customSections(moduleObject: Module, sectionName: string): ArrayBuffer[];
        /** [MDN Reference](https://developer.mozilla.org/docs/Web/JavaScript/Reference/Global_Objects/WebAssembly/Module/exports) */
        exports(moduleObject: Module): ModuleExportDescriptor[];
        /** [MDN Reference](https://developer.mozilla.org/docs/Web/JavaScript/Reference/Global_Objects/WebAssembly/Module/imports) */
        imports(moduleObject: Module): ModuleImportDescriptor[];
    };

    interface RuntimeError extends Error {
    }

    var RuntimeError: {
        prototype: RuntimeError;
        new(message?: string): RuntimeError;
        (message?: string): RuntimeError;
    };

    /** [MDN Reference](https://developer.mozilla.org/docs/Web/JavaScript/Reference/Global_Objects/WebAssembly/Table) */
    interface Table {
        /** [MDN Reference](https://developer.mozilla.org/docs/Web/JavaScript/Reference/Global_Objects/WebAssembly/Table/length) */
        readonly length: number;
        /** [MDN Reference](https://developer.mozilla.org/docs/Web/JavaScript/Reference/Global_Objects/WebAssembly/Table/get) */
        get(index: number): any;
        /** [MDN Reference](https://developer.mozilla.org/docs/Web/JavaScript/Reference/Global_Objects/WebAssembly/Table/grow) */
        grow(delta: number, value?: any): number;
        /** [MDN Reference](https://developer.mozilla.org/docs/Web/JavaScript/Reference/Global_Objects/WebAssembly/Table/set) */
        set(index: number, value?: any): void;
    }

    var Table: {
        prototype: Table;
        new(descriptor: TableDescriptor, value?: any): Table;
    };

    interface GlobalDescriptor<T extends ValueType = ValueType> {
        mutable?: boolean;
        value: T;
    }

    interface MemoryDescriptor {
        initial: number;
        maximum?: number;
        shared?: boolean;
    }

    interface ModuleExportDescriptor {
        kind: ImportExportKind;
        name: string;
    }

    interface ModuleImportDescriptor {
        kind: ImportExportKind;
        module: string;
        name: string;
    }

    interface TableDescriptor {
        element: TableKind;
        initial: number;
        maximum?: number;
    }

    interface ValueTypeMap {
        anyfunc: Function;
        externref: any;
        f32: number;
        f64: number;
        i32: number;
        i64: bigint;
        v128: never;
    }

    interface WebAssemblyInstantiatedSource {
        instance: Instance;
        module: Module;
    }

    type ImportExportKind = "function" | "global" | "memory" | "table";
    type TableKind = "anyfunc" | "externref";
    type ExportValue = Function | Global | Memory | Table;
    type Exports = Record<string, ExportValue>;
    type ImportValue = ExportValue | number;
    type Imports = Record<string, ModuleImports>;
    type ModuleImports = Record<string, ImportValue>;
    type ValueType = keyof ValueTypeMap;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/JavaScript/Reference/Global_Objects/WebAssembly/compile) */
    function compile(bytes: BufferSource): Promise<Module>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/JavaScript/Reference/Global_Objects/WebAssembly/compileStreaming) */
    function compileStreaming(source: Response | PromiseLike<Response>): Promise<Module>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/JavaScript/Reference/Global_Objects/WebAssembly/instantiate) */
    function instantiate(bytes: BufferSource, importObject?: Imports): Promise<WebAssemblyInstantiatedSource>;
    function instantiate(moduleObject: Module, importObject?: Imports): Promise<Instance>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/JavaScript/Reference/Global_Objects/WebAssembly/instantiateStreaming) */
    function instantiateStreaming(source: Response | PromiseLike<Response>, importObject?: Imports): Promise<WebAssemblyInstantiatedSource>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/JavaScript/Reference/Global_Objects/WebAssembly/validate) */
    function validate(bytes: BufferSource): boolean;
}

interface BlobCallback {
    (blob: Blob | null): void;
}

interface CustomElementConstructor {
    new (...params: any[]): HTMLElement;
}

interface DecodeErrorCallback {
    (error: DOMException): void;
}

interface DecodeSuccessCallback {
    (decodedData: AudioBuffer): void;
}

interface EncodedVideoChunkOutputCallback {
    (chunk: EncodedVideoChunk, metadata?: EncodedVideoChunkMetadata): void;
}

interface ErrorCallback {
    (err: DOMException): void;
}

interface FileCallback {
    (file: File): void;
}

interface FileSystemEntriesCallback {
    (entries: FileSystemEntry[]): void;
}

interface FileSystemEntryCallback {
    (entry: FileSystemEntry): void;
}

interface FrameRequestCallback {
    (time: DOMHighResTimeStamp): void;
}

interface FunctionStringCallback {
    (data: string): void;
}

interface IdleRequestCallback {
    (deadline: IdleDeadline): void;
}

interface IntersectionObserverCallback {
    (entries: IntersectionObserverEntry[], observer: IntersectionObserver): void;
}

interface LockGrantedCallback {
    (lock: Lock | null): any;
}

interface MediaSessionActionHandler {
    (details: MediaSessionActionDetails): void;
}

interface MutationCallback {
    (mutations: MutationRecord[], observer: MutationObserver): void;
}

interface NotificationPermissionCallback {
    (permission: NotificationPermission): void;
}

interface OnBeforeUnloadEventHandlerNonNull {
    (event: Event): string | null;
}

interface OnErrorEventHandlerNonNull {
    (event: Event | string, source?: string, lineno?: number, colno?: number, error?: Error): any;
}

interface PerformanceObserverCallback {
    (entries: PerformanceObserverEntryList, observer: PerformanceObserver): void;
}

interface PositionCallback {
    (position: GeolocationPosition): void;
}

interface PositionErrorCallback {
    (positionError: GeolocationPositionError): void;
}

interface QueuingStrategySize<T = any> {
    (chunk: T): number;
}

interface RTCPeerConnectionErrorCallback {
    (error: DOMException): void;
}

interface RTCSessionDescriptionCallback {
    (description: RTCSessionDescriptionInit): void;
}

interface RemotePlaybackAvailabilityCallback {
    (available: boolean): void;
}

interface ReportingObserverCallback {
    (reports: Report[], observer: ReportingObserver): void;
}

interface ResizeObserverCallback {
    (entries: ResizeObserverEntry[], observer: ResizeObserver): void;
}

interface TransformerFlushCallback<O> {
    (controller: TransformStreamDefaultController<O>): void | PromiseLike<void>;
}

interface TransformerStartCallback<O> {
    (controller: TransformStreamDefaultController<O>): any;
}

interface TransformerTransformCallback<I, O> {
    (chunk: I, controller: TransformStreamDefaultController<O>): void | PromiseLike<void>;
}

interface UnderlyingSinkAbortCallback {
    (reason?: any): void | PromiseLike<void>;
}

interface UnderlyingSinkCloseCallback {
    (): void | PromiseLike<void>;
}

interface UnderlyingSinkStartCallback {
    (controller: WritableStreamDefaultController): any;
}

interface UnderlyingSinkWriteCallback<W> {
    (chunk: W, controller: WritableStreamDefaultController): void | PromiseLike<void>;
}

interface UnderlyingSourceCancelCallback {
    (reason?: any): void | PromiseLike<void>;
}

interface UnderlyingSourcePullCallback<R> {
    (controller: ReadableStreamController<R>): void | PromiseLike<void>;
}

interface UnderlyingSourceStartCallback<R> {
    (controller: ReadableStreamController<R>): any;
}

interface VideoFrameOutputCallback {
    (output: VideoFrame): void;
}

interface VideoFrameRequestCallback {
    (now: DOMHighResTimeStamp, metadata: VideoFrameCallbackMetadata): void;
}

interface VoidFunction {
    (): void;
}

interface WebCodecsErrorCallback {
    (error: DOMException): void;
}

interface HTMLElementTagNameMap {
    "a": HTMLAnchorElement;
    "abbr": HTMLElement;
    "address": HTMLElement;
    "area": HTMLAreaElement;
    "article": HTMLElement;
    "aside": HTMLElement;
    "audio": HTMLAudioElement;
    "b": HTMLElement;
    "base": HTMLBaseElement;
    "bdi": HTMLElement;
    "bdo": HTMLElement;
    "blockquote": HTMLQuoteElement;
    "body": HTMLBodyElement;
    "br": HTMLBRElement;
    "button": HTMLButtonElement;
    "canvas": HTMLCanvasElement;
    "caption": HTMLTableCaptionElement;
    "cite": HTMLElement;
    "code": HTMLElement;
    "col": HTMLTableColElement;
    "colgroup": HTMLTableColElement;
    "data": HTMLDataElement;
    "datalist": HTMLDataListElement;
    "dd": HTMLElement;
    "del": HTMLModElement;
    "details": HTMLDetailsElement;
    "dfn": HTMLElement;
    "dialog": HTMLDialogElement;
    "div": HTMLDivElement;
    "dl": HTMLDListElement;
    "dt": HTMLElement;
    "em": HTMLElement;
    "embed": HTMLEmbedElement;
    "fieldset": HTMLFieldSetElement;
    "figcaption": HTMLElement;
    "figure": HTMLElement;
    "footer": HTMLElement;
    "form": HTMLFormElement;
    "h1": HTMLHeadingElement;
    "h2": HTMLHeadingElement;
    "h3": HTMLHeadingElement;
    "h4": HTMLHeadingElement;
    "h5": HTMLHeadingElement;
    "h6": HTMLHeadingElement;
    "head": HTMLHeadElement;
    "header": HTMLElement;
    "hgroup": HTMLElement;
    "hr": HTMLHRElement;
    "html": HTMLHtmlElement;
    "i": HTMLElement;
    "iframe": HTMLIFrameElement;
    "img": HTMLImageElement;
    "input": HTMLInputElement;
    "ins": HTMLModElement;
    "kbd": HTMLElement;
    "label": HTMLLabelElement;
    "legend": HTMLLegendElement;
    "li": HTMLLIElement;
    "link": HTMLLinkElement;
    "main": HTMLElement;
    "map": HTMLMapElement;
    "mark": HTMLElement;
    "menu": HTMLMenuElement;
    "meta": HTMLMetaElement;
    "meter": HTMLMeterElement;
    "nav": HTMLElement;
    "noscript": HTMLElement;
    "object": HTMLObjectElement;
    "ol": HTMLOListElement;
    "optgroup": HTMLOptGroupElement;
    "option": HTMLOptionElement;
    "output": HTMLOutputElement;
    "p": HTMLParagraphElement;
    "picture": HTMLPictureElement;
    "pre": HTMLPreElement;
    "progress": HTMLProgressElement;
    "q": HTMLQuoteElement;
    "rp": HTMLElement;
    "rt": HTMLElement;
    "ruby": HTMLElement;
    "s": HTMLElement;
    "samp": HTMLElement;
    "script": HTMLScriptElement;
    "search": HTMLElement;
    "section": HTMLElement;
    "select": HTMLSelectElement;
    "slot": HTMLSlotElement;
    "small": HTMLElement;
    "source": HTMLSourceElement;
    "span": HTMLSpanElement;
    "strong": HTMLElement;
    "style": HTMLStyleElement;
    "sub": HTMLElement;
    "summary": HTMLElement;
    "sup": HTMLElement;
    "table": HTMLTableElement;
    "tbody": HTMLTableSectionElement;
    "td": HTMLTableCellElement;
    "template": HTMLTemplateElement;
    "textarea": HTMLTextAreaElement;
    "tfoot": HTMLTableSectionElement;
    "th": HTMLTableCellElement;
    "thead": HTMLTableSectionElement;
    "time": HTMLTimeElement;
    "title": HTMLTitleElement;
    "tr": HTMLTableRowElement;
    "track": HTMLTrackElement;
    "u": HTMLElement;
    "ul": HTMLUListElement;
    "var": HTMLElement;
    "video": HTMLVideoElement;
    "wbr": HTMLElement;
}

interface HTMLElementDeprecatedTagNameMap {
    "acronym": HTMLElement;
    "applet": HTMLUnknownElement;
    "basefont": HTMLElement;
    "bgsound": HTMLUnknownElement;
    "big": HTMLElement;
    "blink": HTMLUnknownElement;
    "center": HTMLElement;
    "dir": HTMLDirectoryElement;
    "font": HTMLFontElement;
    "frame": HTMLFrameElement;
    "frameset": HTMLFrameSetElement;
    "isindex": HTMLUnknownElement;
    "keygen": HTMLUnknownElement;
    "listing": HTMLPreElement;
    "marquee": HTMLMarqueeElement;
    "menuitem": HTMLElement;
    "multicol": HTMLUnknownElement;
    "nextid": HTMLUnknownElement;
    "nobr": HTMLElement;
    "noembed": HTMLElement;
    "noframes": HTMLElement;
    "param": HTMLParamElement;
    "plaintext": HTMLElement;
    "rb": HTMLElement;
    "rtc": HTMLElement;
    "spacer": HTMLUnknownElement;
    "strike": HTMLElement;
    "tt": HTMLElement;
    "xmp": HTMLPreElement;
}

interface SVGElementTagNameMap {
    "a": SVGAElement;
    "animate": SVGAnimateElement;
    "animateMotion": SVGAnimateMotionElement;
    "animateTransform": SVGAnimateTransformElement;
    "circle": SVGCircleElement;
    "clipPath": SVGClipPathElement;
    "defs": SVGDefsElement;
    "desc": SVGDescElement;
    "ellipse": SVGEllipseElement;
    "feBlend": SVGFEBlendElement;
    "feColorMatrix": SVGFEColorMatrixElement;
    "feComponentTransfer": SVGFEComponentTransferElement;
    "feComposite": SVGFECompositeElement;
    "feConvolveMatrix": SVGFEConvolveMatrixElement;
    "feDiffuseLighting": SVGFEDiffuseLightingElement;
    "feDisplacementMap": SVGFEDisplacementMapElement;
    "feDistantLight": SVGFEDistantLightElement;
    "feDropShadow": SVGFEDropShadowElement;
    "feFlood": SVGFEFloodElement;
    "feFuncA": SVGFEFuncAElement;
    "feFuncB": SVGFEFuncBElement;
    "feFuncG": SVGFEFuncGElement;
    "feFuncR": SVGFEFuncRElement;
    "feGaussianBlur": SVGFEGaussianBlurElement;
    "feImage": SVGFEImageElement;
    "feMerge": SVGFEMergeElement;
    "feMergeNode": SVGFEMergeNodeElement;
    "feMorphology": SVGFEMorphologyElement;
    "feOffset": SVGFEOffsetElement;
    "fePointLight": SVGFEPointLightElement;
    "feSpecularLighting": SVGFESpecularLightingElement;
    "feSpotLight": SVGFESpotLightElement;
    "feTile": SVGFETileElement;
    "feTurbulence": SVGFETurbulenceElement;
    "filter": SVGFilterElement;
    "foreignObject": SVGForeignObjectElement;
    "g": SVGGElement;
    "image": SVGImageElement;
    "line": SVGLineElement;
    "linearGradient": SVGLinearGradientElement;
    "marker": SVGMarkerElement;
    "mask": SVGMaskElement;
    "metadata": SVGMetadataElement;
    "mpath": SVGMPathElement;
    "path": SVGPathElement;
    "pattern": SVGPatternElement;
    "polygon": SVGPolygonElement;
    "polyline": SVGPolylineElement;
    "radialGradient": SVGRadialGradientElement;
    "rect": SVGRectElement;
    "script": SVGScriptElement;
    "set": SVGSetElement;
    "stop": SVGStopElement;
    "style": SVGStyleElement;
    "svg": SVGSVGElement;
    "switch": SVGSwitchElement;
    "symbol": SVGSymbolElement;
    "text": SVGTextElement;
    "textPath": SVGTextPathElement;
    "title": SVGTitleElement;
    "tspan": SVGTSpanElement;
    "use": SVGUseElement;
    "view": SVGViewElement;
}

interface MathMLElementTagNameMap {
    "annotation": MathMLElement;
    "annotation-xml": MathMLElement;
    "maction": MathMLElement;
    "math": MathMLElement;
    "merror": MathMLElement;
    "mfrac": MathMLElement;
    "mi": MathMLElement;
    "mmultiscripts": MathMLElement;
    "mn": MathMLElement;
    "mo": MathMLElement;
    "mover": MathMLElement;
    "mpadded": MathMLElement;
    "mphantom": MathMLElement;
    "mprescripts": MathMLElement;
    "mroot": MathMLElement;
    "mrow": MathMLElement;
    "ms": MathMLElement;
    "mspace": MathMLElement;
    "msqrt": MathMLElement;
    "mstyle": MathMLElement;
    "msub": MathMLElement;
    "msubsup": MathMLElement;
    "msup": MathMLElement;
    "mtable": MathMLElement;
    "mtd": MathMLElement;
    "mtext": MathMLElement;
    "mtr": MathMLElement;
    "munder": MathMLElement;
    "munderover": MathMLElement;
    "semantics": MathMLElement;
}

/** @deprecated Directly use HTMLElementTagNameMap or SVGElementTagNameMap as appropriate, instead. */
type ElementTagNameMap = HTMLElementTagNameMap & Pick<SVGElementTagNameMap, Exclude<keyof SVGElementTagNameMap, keyof HTMLElementTagNameMap>>;

declare var Audio: {
    new(src?: string): HTMLAudioElement;
};
declare var Image: {
    new(width?: number, height?: number): HTMLImageElement;
};
declare var Option: {
    new(text?: string, value?: string, defaultSelected?: boolean, selected?: boolean): HTMLOptionElement;
};
/**
 * @deprecated This is a legacy alias of `navigator`.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/navigator)
 */
declare var clientInformation: Navigator;
/**
 * Returns true if the window has been closed, false otherwise.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/closed)
 */
declare var closed: boolean;
/**
 * Defines a new custom element, mapping the given name to the given constructor as an autonomous custom element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/customElements)
 */
declare var customElements: CustomElementRegistry;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/devicePixelRatio) */
declare var devicePixelRatio: number;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/document) */
declare var document: Document;
/**
 * @deprecated
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/event)
 */
declare var event: Event | undefined;
/**
 * @deprecated
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/external)
 */
declare var external: External;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/frameElement) */
declare var frameElement: Element | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/frames) */
declare var frames: WindowProxy;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/history) */
declare var history: History;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/innerHeight) */
declare var innerHeight: number;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/innerWidth) */
declare var innerWidth: number;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/length) */
declare var length: number;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/location) */
declare var location: Location;
/**
 * Returns true if the location bar is visible; otherwise, returns false.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/locationbar)
 */
declare var locationbar: BarProp;
/**
 * Returns true if the menu bar is visible; otherwise, returns false.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/menubar)
 */
declare var menubar: BarProp;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/name) */
/** @deprecated */
declare const name: void;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/navigator) */
declare var navigator: Navigator;
/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/devicemotion_event)
 */
declare var ondevicemotion: ((this: Window, ev: DeviceMotionEvent) => any) | null;
/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/deviceorientation_event)
 */
declare var ondeviceorientation: ((this: Window, ev: DeviceOrientationEvent) => any) | null;
/**
 * @deprecated
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/orientationchange_event)
 */
declare var onorientationchange: ((this: Window, ev: Event) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/opener) */
declare var opener: any;
/**
 * @deprecated
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/orientation)
 */
declare var orientation: number;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/outerHeight) */
declare var outerHeight: number;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/outerWidth) */
declare var outerWidth: number;
/**
 * @deprecated This is a legacy alias of `scrollX`.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/scrollX)
 */
declare var pageXOffset: number;
/**
 * @deprecated This is a legacy alias of `scrollY`.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/scrollY)
 */
declare var pageYOffset: number;
/**
 * Refers to either the parent WindowProxy, or itself.
 *
 * It can rarely be null e.g. for contentWindow of an iframe that is already removed from the parent.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/parent)
 */
declare var parent: WindowProxy;
/**
 * Returns true if the personal bar is visible; otherwise, returns false.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/personalbar)
 */
declare var personalbar: BarProp;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/screen) */
declare var screen: Screen;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/screenLeft) */
declare var screenLeft: number;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/screenTop) */
declare var screenTop: number;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/screenX) */
declare var screenX: number;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/screenY) */
declare var screenY: number;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/scrollX) */
declare var scrollX: number;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/scrollY) */
declare var scrollY: number;
/**
 * Returns true if the scrollbars are visible; otherwise, returns false.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/scrollbars)
 */
declare var scrollbars: BarProp;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/self) */
declare var self: Window & typeof globalThis;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/speechSynthesis) */
declare var speechSynthesis: SpeechSynthesis;
/**
 * @deprecated
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/status)
 */
declare var status: string;
/**
 * Returns true if the status bar is visible; otherwise, returns false.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/statusbar)
 */
declare var statusbar: BarProp;
/**
 * Returns true if the toolbar is visible; otherwise, returns false.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/toolbar)
 */
declare var toolbar: BarProp;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/top) */
declare var top: WindowProxy | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/visualViewport) */
declare var visualViewport: VisualViewport | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/window) */
declare var window: Window & typeof globalThis;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/alert) */
declare function alert(message?: any): void;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/blur) */
declare function blur(): void;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/cancelIdleCallback) */
declare function cancelIdleCallback(handle: number): void;
/**
 * @deprecated
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/captureEvents)
 */
declare function captureEvents(): void;
/**
 * Closes the window.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/close)
 */
declare function close(): void;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/confirm) */
declare function confirm(message?: string): boolean;
/**
 * Moves the focus to the window's browsing context, if any.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/focus)
 */
declare function focus(): void;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/getComputedStyle) */
declare function getComputedStyle(elt: Element, pseudoElt?: string | null): CSSStyleDeclaration;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/getSelection) */
declare function getSelection(): Selection | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/matchMedia) */
declare function matchMedia(query: string): MediaQueryList;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/moveBy) */
declare function moveBy(x: number, y: number): void;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/moveTo) */
declare function moveTo(x: number, y: number): void;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/open) */
declare function open(url?: string | URL, target?: string, features?: string): WindowProxy | null;
/**
 * Posts a message to the given window. Messages can be structured objects, e.g. nested objects and arrays, can contain JavaScript values (strings, numbers, Date objects, etc), and can contain certain data objects such as File Blob, FileList, and ArrayBuffer objects.
 *
 * Objects listed in the transfer member of options are transferred, not just cloned, meaning that they are no longer usable on the sending side.
 *
 * A target origin can be specified using the targetOrigin member of options. If not provided, it defaults to "/". This default restricts the message to same-origin targets only.
 *
 * If the origin of the target window doesn't match the given target origin, the message is discarded, to avoid information leakage. To send the message to the target regardless of origin, set the target origin to "*".
 *
 * Throws a "DataCloneError" DOMException if transfer array contains duplicate objects or if message could not be cloned.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/postMessage)
 */
declare function postMessage(message: any, targetOrigin: string, transfer?: Transferable[]): void;
declare function postMessage(message: any, options?: WindowPostMessageOptions): void;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/print) */
declare function print(): void;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/prompt) */
declare function prompt(message?: string, _default?: string): string | null;
/**
 * @deprecated
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/releaseEvents)
 */
declare function releaseEvents(): void;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/requestIdleCallback) */
declare function requestIdleCallback(callback: IdleRequestCallback, options?: IdleRequestOptions): number;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/resizeBy) */
declare function resizeBy(x: number, y: number): void;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/resizeTo) */
declare function resizeTo(width: number, height: number): void;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/scroll) */
declare function scroll(options?: ScrollToOptions): void;
declare function scroll(x: number, y: number): void;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/scrollBy) */
declare function scrollBy(options?: ScrollToOptions): void;
declare function scrollBy(x: number, y: number): void;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/scrollTo) */
declare function scrollTo(options?: ScrollToOptions): void;
declare function scrollTo(x: number, y: number): void;
/**
 * Cancels the document load.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/stop)
 */
declare function stop(): void;
declare function toString(): string;
/**
 * Dispatches a synthetic event event to target and returns true if either event's cancelable attribute value is false or its preventDefault() method was not invoked, and false otherwise.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/EventTarget/dispatchEvent)
 */
declare function dispatchEvent(event: Event): boolean;
declare function cancelAnimationFrame(handle: number): void;
declare function requestAnimationFrame(callback: FrameRequestCallback): number;
/**
 * Fires when the user aborts the download.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/abort_event)
 */
declare var onabort: ((this: Window, ev: UIEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/animationcancel_event) */
declare var onanimationcancel: ((this: Window, ev: AnimationEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/animationend_event) */
declare var onanimationend: ((this: Window, ev: AnimationEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/animationiteration_event) */
declare var onanimationiteration: ((this: Window, ev: AnimationEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/animationstart_event) */
declare var onanimationstart: ((this: Window, ev: AnimationEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/auxclick_event) */
declare var onauxclick: ((this: Window, ev: MouseEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/beforeinput_event) */
declare var onbeforeinput: ((this: Window, ev: InputEvent) => any) | null;
/**
 * Fires when the object loses the input focus.
 * @param ev The focus event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/blur_event)
 */
declare var onblur: ((this: Window, ev: FocusEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLDialogElement/cancel_event) */
declare var oncancel: ((this: Window, ev: Event) => any) | null;
/**
 * Occurs when playback is possible, but would require further buffering.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/canplay_event)
 */
declare var oncanplay: ((this: Window, ev: Event) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/canplaythrough_event) */
declare var oncanplaythrough: ((this: Window, ev: Event) => any) | null;
/**
 * Fires when the contents of the object or selection have changed.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/change_event)
 */
declare var onchange: ((this: Window, ev: Event) => any) | null;
/**
 * Fires when the user clicks the left mouse button on the object
 * @param ev The mouse event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/click_event)
 */
declare var onclick: ((this: Window, ev: MouseEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLDialogElement/close_event) */
declare var onclose: ((this: Window, ev: Event) => any) | null;
/**
 * Fires when the user clicks the right mouse button in the client area, opening the context menu.
 * @param ev The mouse event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/contextmenu_event)
 */
declare var oncontextmenu: ((this: Window, ev: MouseEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/copy_event) */
declare var oncopy: ((this: Window, ev: ClipboardEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTrackElement/cuechange_event) */
declare var oncuechange: ((this: Window, ev: Event) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/cut_event) */
declare var oncut: ((this: Window, ev: ClipboardEvent) => any) | null;
/**
 * Fires when the user double-clicks the object.
 * @param ev The mouse event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/dblclick_event)
 */
declare var ondblclick: ((this: Window, ev: MouseEvent) => any) | null;
/**
 * Fires on the source object continuously during a drag operation.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/drag_event)
 */
declare var ondrag: ((this: Window, ev: DragEvent) => any) | null;
/**
 * Fires on the source object when the user releases the mouse at the close of a drag operation.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/dragend_event)
 */
declare var ondragend: ((this: Window, ev: DragEvent) => any) | null;
/**
 * Fires on the target element when the user drags the object to a valid drop target.
 * @param ev The drag event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/dragenter_event)
 */
declare var ondragenter: ((this: Window, ev: DragEvent) => any) | null;
/**
 * Fires on the target object when the user moves the mouse out of a valid drop target during a drag operation.
 * @param ev The drag event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/dragleave_event)
 */
declare var ondragleave: ((this: Window, ev: DragEvent) => any) | null;
/**
 * Fires on the target element continuously while the user drags the object over a valid drop target.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/dragover_event)
 */
declare var ondragover: ((this: Window, ev: DragEvent) => any) | null;
/**
 * Fires on the source object when the user starts to drag a text selection or selected object.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/dragstart_event)
 */
declare var ondragstart: ((this: Window, ev: DragEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/drop_event) */
declare var ondrop: ((this: Window, ev: DragEvent) => any) | null;
/**
 * Occurs when the duration attribute is updated.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/durationchange_event)
 */
declare var ondurationchange: ((this: Window, ev: Event) => any) | null;
/**
 * Occurs when the media element is reset to its initial state.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/emptied_event)
 */
declare var onemptied: ((this: Window, ev: Event) => any) | null;
/**
 * Occurs when the end of playback is reached.
 * @param ev The event
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/ended_event)
 */
declare var onended: ((this: Window, ev: Event) => any) | null;
/**
 * Fires when an error occurs during object loading.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/error_event)
 */
declare var onerror: OnErrorEventHandler;
/**
 * Fires when the object receives focus.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/focus_event)
 */
declare var onfocus: ((this: Window, ev: FocusEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFormElement/formdata_event) */
declare var onformdata: ((this: Window, ev: FormDataEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/gotpointercapture_event) */
declare var ongotpointercapture: ((this: Window, ev: PointerEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/input_event) */
declare var oninput: ((this: Window, ev: Event) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/invalid_event) */
declare var oninvalid: ((this: Window, ev: Event) => any) | null;
/**
 * Fires when the user presses a key.
 * @param ev The keyboard event
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/keydown_event)
 */
declare var onkeydown: ((this: Window, ev: KeyboardEvent) => any) | null;
/**
 * Fires when the user presses an alphanumeric key.
 * @param ev The event.
 * @deprecated
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/keypress_event)
 */
declare var onkeypress: ((this: Window, ev: KeyboardEvent) => any) | null;
/**
 * Fires when the user releases a key.
 * @param ev The keyboard event
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/keyup_event)
 */
declare var onkeyup: ((this: Window, ev: KeyboardEvent) => any) | null;
/**
 * Fires immediately after the browser loads the object.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/SVGElement/load_event)
 */
declare var onload: ((this: Window, ev: Event) => any) | null;
/**
 * Occurs when media data is loaded at the current playback position.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/loadeddata_event)
 */
declare var onloadeddata: ((this: Window, ev: Event) => any) | null;
/**
 * Occurs when the duration and dimensions of the media have been determined.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/loadedmetadata_event)
 */
declare var onloadedmetadata: ((this: Window, ev: Event) => any) | null;
/**
 * Occurs when Internet Explorer begins looking for media data.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/loadstart_event)
 */
declare var onloadstart: ((this: Window, ev: Event) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/lostpointercapture_event) */
declare var onlostpointercapture: ((this: Window, ev: PointerEvent) => any) | null;
/**
 * Fires when the user clicks the object with either mouse button.
 * @param ev The mouse event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/mousedown_event)
 */
declare var onmousedown: ((this: Window, ev: MouseEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/mouseenter_event) */
declare var onmouseenter: ((this: Window, ev: MouseEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/mouseleave_event) */
declare var onmouseleave: ((this: Window, ev: MouseEvent) => any) | null;
/**
 * Fires when the user moves the mouse over the object.
 * @param ev The mouse event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/mousemove_event)
 */
declare var onmousemove: ((this: Window, ev: MouseEvent) => any) | null;
/**
 * Fires when the user moves the mouse pointer outside the boundaries of the object.
 * @param ev The mouse event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/mouseout_event)
 */
declare var onmouseout: ((this: Window, ev: MouseEvent) => any) | null;
/**
 * Fires when the user moves the mouse pointer into the object.
 * @param ev The mouse event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/mouseover_event)
 */
declare var onmouseover: ((this: Window, ev: MouseEvent) => any) | null;
/**
 * Fires when the user releases a mouse button while the mouse is over the object.
 * @param ev The mouse event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/mouseup_event)
 */
declare var onmouseup: ((this: Window, ev: MouseEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/paste_event) */
declare var onpaste: ((this: Window, ev: ClipboardEvent) => any) | null;
/**
 * Occurs when playback is paused.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/pause_event)
 */
declare var onpause: ((this: Window, ev: Event) => any) | null;
/**
 * Occurs when the play method is requested.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/play_event)
 */
declare var onplay: ((this: Window, ev: Event) => any) | null;
/**
 * Occurs when the audio or video has started playing.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/playing_event)
 */
declare var onplaying: ((this: Window, ev: Event) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/pointercancel_event) */
declare var onpointercancel: ((this: Window, ev: PointerEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/pointerdown_event) */
declare var onpointerdown: ((this: Window, ev: PointerEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/pointerenter_event) */
declare var onpointerenter: ((this: Window, ev: PointerEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/pointerleave_event) */
declare var onpointerleave: ((this: Window, ev: PointerEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/pointermove_event) */
declare var onpointermove: ((this: Window, ev: PointerEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/pointerout_event) */
declare var onpointerout: ((this: Window, ev: PointerEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/pointerover_event) */
declare var onpointerover: ((this: Window, ev: PointerEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/pointerup_event) */
declare var onpointerup: ((this: Window, ev: PointerEvent) => any) | null;
/**
 * Occurs to indicate progress while downloading media data.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/progress_event)
 */
declare var onprogress: ((this: Window, ev: ProgressEvent) => any) | null;
/**
 * Occurs when the playback rate is increased or decreased.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/ratechange_event)
 */
declare var onratechange: ((this: Window, ev: Event) => any) | null;
/**
 * Fires when the user resets a form.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFormElement/reset_event)
 */
declare var onreset: ((this: Window, ev: Event) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLVideoElement/resize_event) */
declare var onresize: ((this: Window, ev: UIEvent) => any) | null;
/**
 * Fires when the user repositions the scroll box in the scroll bar on the object.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/scroll_event)
 */
declare var onscroll: ((this: Window, ev: Event) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/scrollend_event) */
declare var onscrollend: ((this: Window, ev: Event) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/securitypolicyviolation_event) */
declare var onsecuritypolicyviolation: ((this: Window, ev: SecurityPolicyViolationEvent) => any) | null;
/**
 * Occurs when the seek operation ends.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/seeked_event)
 */
declare var onseeked: ((this: Window, ev: Event) => any) | null;
/**
 * Occurs when the current playback position is moved.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/seeking_event)
 */
declare var onseeking: ((this: Window, ev: Event) => any) | null;
/**
 * Fires when the current selection changes.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/select_event)
 */
declare var onselect: ((this: Window, ev: Event) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/selectionchange_event) */
declare var onselectionchange: ((this: Window, ev: Event) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Node/selectstart_event) */
declare var onselectstart: ((this: Window, ev: Event) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLSlotElement/slotchange_event) */
declare var onslotchange: ((this: Window, ev: Event) => any) | null;
/**
 * Occurs when the download has stopped.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/stalled_event)
 */
declare var onstalled: ((this: Window, ev: Event) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFormElement/submit_event) */
declare var onsubmit: ((this: Window, ev: SubmitEvent) => any) | null;
/**
 * Occurs if the load operation has been intentionally halted.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/suspend_event)
 */
declare var onsuspend: ((this: Window, ev: Event) => any) | null;
/**
 * Occurs to indicate the current playback position.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/timeupdate_event)
 */
declare var ontimeupdate: ((this: Window, ev: Event) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLDetailsElement/toggle_event) */
declare var ontoggle: ((this: Window, ev: Event) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/touchcancel_event) */
declare var ontouchcancel: ((this: Window, ev: TouchEvent) => any) | null | undefined;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/touchend_event) */
declare var ontouchend: ((this: Window, ev: TouchEvent) => any) | null | undefined;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/touchmove_event) */
declare var ontouchmove: ((this: Window, ev: TouchEvent) => any) | null | undefined;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/touchstart_event) */
declare var ontouchstart: ((this: Window, ev: TouchEvent) => any) | null | undefined;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/transitioncancel_event) */
declare var ontransitioncancel: ((this: Window, ev: TransitionEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/transitionend_event) */
declare var ontransitionend: ((this: Window, ev: TransitionEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/transitionrun_event) */
declare var ontransitionrun: ((this: Window, ev: TransitionEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/transitionstart_event) */
declare var ontransitionstart: ((this: Window, ev: TransitionEvent) => any) | null;
/**
 * Occurs when the volume is changed, or playback is muted or unmuted.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/volumechange_event)
 */
declare var onvolumechange: ((this: Window, ev: Event) => any) | null;
/**
 * Occurs when playback stops because the next frame of a video resource is not available.
 * @param ev The event.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/waiting_event)
 */
declare var onwaiting: ((this: Window, ev: Event) => any) | null;
/**
 * @deprecated This is a legacy alias of `onanimationend`.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/animationend_event)
 */
declare var onwebkitanimationend: ((this: Window, ev: Event) => any) | null;
/**
 * @deprecated This is a legacy alias of `onanimationiteration`.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/animationiteration_event)
 */
declare var onwebkitanimationiteration: ((this: Window, ev: Event) => any) | null;
/**
 * @deprecated This is a legacy alias of `onanimationstart`.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/animationstart_event)
 */
declare var onwebkitanimationstart: ((this: Window, ev: Event) => any) | null;
/**
 * @deprecated This is a legacy alias of `ontransitionend`.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/transitionend_event)
 */
declare var onwebkittransitionend: ((this: Window, ev: Event) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/wheel_event) */
declare var onwheel: ((this: Window, ev: WheelEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/afterprint_event) */
declare var onafterprint: ((this: Window, ev: Event) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/beforeprint_event) */
declare var onbeforeprint: ((this: Window, ev: Event) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/beforeunload_event) */
declare var onbeforeunload: ((this: Window, ev: BeforeUnloadEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/gamepadconnected_event) */
declare var ongamepadconnected: ((this: Window, ev: GamepadEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/gamepaddisconnected_event) */
declare var ongamepaddisconnected: ((this: Window, ev: GamepadEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/hashchange_event) */
declare var onhashchange: ((this: Window, ev: HashChangeEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/languagechange_event) */
declare var onlanguagechange: ((this: Window, ev: Event) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/message_event) */
declare var onmessage: ((this: Window, ev: MessageEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/messageerror_event) */
declare var onmessageerror: ((this: Window, ev: MessageEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/offline_event) */
declare var onoffline: ((this: Window, ev: Event) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/online_event) */
declare var ononline: ((this: Window, ev: Event) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/pagehide_event) */
declare var onpagehide: ((this: Window, ev: PageTransitionEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/pageshow_event) */
declare var onpageshow: ((this: Window, ev: PageTransitionEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/popstate_event) */
declare var onpopstate: ((this: Window, ev: PopStateEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/rejectionhandled_event) */
declare var onrejectionhandled: ((this: Window, ev: PromiseRejectionEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/storage_event) */
declare var onstorage: ((this: Window, ev: StorageEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/unhandledrejection_event) */
declare var onunhandledrejection: ((this: Window, ev: PromiseRejectionEvent) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/unload_event) */
declare var onunload: ((this: Window, ev: Event) => any) | null;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/localStorage) */
declare var localStorage: Storage;
/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/caches)
 */
declare var caches: CacheStorage;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/crossOriginIsolated) */
declare var crossOriginIsolated: boolean;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/crypto_property) */
declare var crypto: Crypto;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/indexedDB) */
declare var indexedDB: IDBFactory;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/isSecureContext) */
declare var isSecureContext: boolean;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/origin) */
declare var origin: string;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/performance_property) */
declare var performance: Performance;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/atob) */
declare function atob(data: string): string;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/btoa) */
declare function btoa(data: string): string;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/clearInterval) */
declare function clearInterval(id: number | undefined): void;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/clearTimeout) */
declare function clearTimeout(id: number | undefined): void;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/createImageBitmap) */
declare function createImageBitmap(image: ImageBitmapSource, options?: ImageBitmapOptions): Promise<ImageBitmap>;
declare function createImageBitmap(image: ImageBitmapSource, sx: number, sy: number, sw: number, sh: number, options?: ImageBitmapOptions): Promise<ImageBitmap>;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/fetch) */
declare function fetch(input: RequestInfo | URL, init?: RequestInit): Promise<Response>;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/queueMicrotask) */
declare function queueMicrotask(callback: VoidFunction): void;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/reportError) */
declare function reportError(e: any): void;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/setInterval) */
declare function setInterval(handler: TimerHandler, timeout?: number, ...arguments: any[]): number;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/setTimeout) */
declare function setTimeout(handler: TimerHandler, timeout?: number, ...arguments: any[]): number;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/structuredClone) */
declare function structuredClone<T = any>(value: T, options?: StructuredSerializeOptions): T;
/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Window/sessionStorage) */
declare var sessionStorage: Storage;
declare function addEventListener<K extends keyof WindowEventMap>(type: K, listener: (this: Window, ev: WindowEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
declare function addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
declare function removeEventListener<K extends keyof WindowEventMap>(type: K, listener: (this: Window, ev: WindowEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
declare function removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
type AlgorithmIdentifier = Algorithm | string;
type AllowSharedBufferSource = ArrayBuffer | ArrayBufferView;
type AutoFill = AutoFillBase | `${OptionalPrefixToken<AutoFillSection>}${OptionalPrefixToken<AutoFillAddressKind>}${AutoFillField}${OptionalPostfixToken<AutoFillCredentialField>}`;
type AutoFillField = AutoFillNormalField | `${OptionalPrefixToken<AutoFillContactKind>}${AutoFillContactField}`;
type AutoFillSection = `section-${string}`;
type BigInteger = Uint8Array;
type BinaryData = ArrayBuffer | ArrayBufferView;
type BlobPart = BufferSource | Blob | string;
type BodyInit = ReadableStream | XMLHttpRequestBodyInit;
type BufferSource = ArrayBufferView | ArrayBuffer;
type COSEAlgorithmIdentifier = number;
type CSSKeywordish = string | CSSKeywordValue;
type CSSNumberish = number | CSSNumericValue;
type CSSPerspectiveValue = CSSNumericValue | CSSKeywordish;
type CSSUnparsedSegment = string | CSSVariableReferenceValue;
type CanvasImageSource = HTMLOrSVGImageElement | HTMLVideoElement | HTMLCanvasElement | ImageBitmap | OffscreenCanvas | VideoFrame;
type ClipboardItemData = Promise<string | Blob>;
type ClipboardItems = ClipboardItem[];
type ConstrainBoolean = boolean | ConstrainBooleanParameters;
type ConstrainDOMString = string | string[] | ConstrainDOMStringParameters;
type ConstrainDouble = number | ConstrainDoubleRange;
type ConstrainULong = number | ConstrainULongRange;
type DOMHighResTimeStamp = number;
type EpochTimeStamp = number;
type EventListenerOrEventListenerObject = EventListener | EventListenerObject;
type FileSystemWriteChunkType = BufferSource | Blob | string | WriteParams;
type Float32List = Float32Array | GLfloat[];
type FormDataEntryValue = File | string;
type GLbitfield = number;
type GLboolean = boolean;
type GLclampf = number;
type GLenum = number;
type GLfloat = number;
type GLint = number;
type GLint64 = number;
type GLintptr = number;
type GLsizei = number;
type GLsizeiptr = number;
type GLuint = number;
type GLuint64 = number;
type HTMLOrSVGImageElement = HTMLImageElement | SVGImageElement;
type HTMLOrSVGScriptElement = HTMLScriptElement | SVGScriptElement;
type HashAlgorithmIdentifier = AlgorithmIdentifier;
type HeadersInit = [string, string][] | Record<string, string> | Headers;
type IDBValidKey = number | string | Date | BufferSource | IDBValidKey[];
type ImageBitmapSource = CanvasImageSource | Blob | ImageData;
type Int32List = Int32Array | GLint[];
type LineAndPositionSetting = number | AutoKeyword;
type MediaProvider = MediaStream | MediaSource | Blob;
type MessageEventSource = WindowProxy | MessagePort | ServiceWorker;
type MutationRecordType = "attributes" | "characterData" | "childList";
type NamedCurve = string;
type OffscreenRenderingContext = OffscreenCanvasRenderingContext2D | ImageBitmapRenderingContext | WebGLRenderingContext | WebGL2RenderingContext;
type OnBeforeUnloadEventHandler = OnBeforeUnloadEventHandlerNonNull | null;
type OnErrorEventHandler = OnErrorEventHandlerNonNull | null;
type OptionalPostfixToken<T extends string> = ` ${T}` | "";
type OptionalPrefixToken<T extends string> = `${T} ` | "";
type PerformanceEntryList = PerformanceEntry[];
type ReadableStreamController<T> = ReadableStreamDefaultController<T> | ReadableByteStreamController;
type ReadableStreamReadResult<T> = ReadableStreamReadValueResult<T> | ReadableStreamReadDoneResult<T>;
type ReadableStreamReader<T> = ReadableStreamDefaultReader<T> | ReadableStreamBYOBReader;
type RenderingContext = CanvasRenderingContext2D | ImageBitmapRenderingContext | WebGLRenderingContext | WebGL2RenderingContext;
type ReportList = Report[];
type RequestInfo = Request | string;
type TexImageSource = ImageBitmap | ImageData | HTMLImageElement | HTMLCanvasElement | HTMLVideoElement | OffscreenCanvas | VideoFrame;
type TimerHandler = string | Function;
type Transferable = OffscreenCanvas | ImageBitmap | MessagePort | ReadableStream | WritableStream | TransformStream | VideoFrame | ArrayBuffer;
type Uint32List = Uint32Array | GLuint[];
type VibratePattern = number | number[];
type WindowProxy = Window;
type XMLHttpRequestBodyInit = Blob | BufferSource | FormData | URLSearchParams | string;
type AlignSetting = "center" | "end" | "left" | "right" | "start";
type AlphaOption = "discard" | "keep";
type AnimationPlayState = "finished" | "idle" | "paused" | "running";
type AnimationReplaceState = "active" | "persisted" | "removed";
type AppendMode = "segments" | "sequence";
type AttestationConveyancePreference = "direct" | "enterprise" | "indirect" | "none";
type AudioContextLatencyCategory = "balanced" | "interactive" | "playback";
type AudioContextState = "closed" | "running" | "suspended";
type AuthenticatorAttachment = "cross-platform" | "platform";
type AuthenticatorTransport = "ble" | "hybrid" | "internal" | "nfc" | "usb";
type AutoFillAddressKind = "billing" | "shipping";
type AutoFillBase = "" | "off" | "on";
type AutoFillContactField = "email" | "tel" | "tel-area-code" | "tel-country-code" | "tel-extension" | "tel-local" | "tel-local-prefix" | "tel-local-suffix" | "tel-national";
type AutoFillContactKind = "home" | "mobile" | "work";
type AutoFillCredentialField = "webauthn";
type AutoFillNormalField = "additional-name" | "address-level1" | "address-level2" | "address-level3" | "address-level4" | "address-line1" | "address-line2" | "address-line3" | "bday-day" | "bday-month" | "bday-year" | "cc-csc" | "cc-exp" | "cc-exp-month" | "cc-exp-year" | "cc-family-name" | "cc-given-name" | "cc-name" | "cc-number" | "cc-type" | "country" | "country-name" | "current-password" | "family-name" | "given-name" | "honorific-prefix" | "honorific-suffix" | "name" | "new-password" | "one-time-code" | "organization" | "postal-code" | "street-address" | "transaction-amount" | "transaction-currency" | "username";
type AutoKeyword = "auto";
type AutomationRate = "a-rate" | "k-rate";
type AvcBitstreamFormat = "annexb" | "avc";
type BinaryType = "arraybuffer" | "blob";
type BiquadFilterType = "allpass" | "bandpass" | "highpass" | "highshelf" | "lowpass" | "lowshelf" | "notch" | "peaking";
type CSSMathOperator = "clamp" | "invert" | "max" | "min" | "negate" | "product" | "sum";
type CSSNumericBaseType = "angle" | "flex" | "frequency" | "length" | "percent" | "resolution" | "time";
type CanPlayTypeResult = "" | "maybe" | "probably";
type CanvasDirection = "inherit" | "ltr" | "rtl";
type CanvasFillRule = "evenodd" | "nonzero";
type CanvasFontKerning = "auto" | "none" | "normal";
type CanvasFontStretch = "condensed" | "expanded" | "extra-condensed" | "extra-expanded" | "normal" | "semi-condensed" | "semi-expanded" | "ultra-condensed" | "ultra-expanded";
type CanvasFontVariantCaps = "all-petite-caps" | "all-small-caps" | "normal" | "petite-caps" | "small-caps" | "titling-caps" | "unicase";
type CanvasLineCap = "butt" | "round" | "square";
type CanvasLineJoin = "bevel" | "miter" | "round";
type CanvasTextAlign = "center" | "end" | "left" | "right" | "start";
type CanvasTextBaseline = "alphabetic" | "bottom" | "hanging" | "ideographic" | "middle" | "top";
type CanvasTextRendering = "auto" | "geometricPrecision" | "optimizeLegibility" | "optimizeSpeed";
type ChannelCountMode = "clamped-max" | "explicit" | "max";
type ChannelInterpretation = "discrete" | "speakers";
type ClientTypes = "all" | "sharedworker" | "window" | "worker";
type CodecState = "closed" | "configured" | "unconfigured";
type ColorGamut = "p3" | "rec2020" | "srgb";
type ColorSpaceConversion = "default" | "none";
type CompositeOperation = "accumulate" | "add" | "replace";
type CompositeOperationOrAuto = "accumulate" | "add" | "auto" | "replace";
type CompressionFormat = "deflate" | "deflate-raw" | "gzip";
type CredentialMediationRequirement = "conditional" | "optional" | "required" | "silent";
type DOMParserSupportedType = "application/xhtml+xml" | "application/xml" | "image/svg+xml" | "text/html" | "text/xml";
type DirectionSetting = "" | "lr" | "rl";
type DisplayCaptureSurfaceType = "browser" | "monitor" | "window";
type DistanceModelType = "exponential" | "inverse" | "linear";
type DocumentReadyState = "complete" | "interactive" | "loading";
type DocumentVisibilityState = "hidden" | "visible";
type EncodedVideoChunkType = "delta" | "key";
type EndOfStreamError = "decode" | "network";
type EndingType = "native" | "transparent";
type FileSystemHandleKind = "directory" | "file";
type FillMode = "auto" | "backwards" | "both" | "forwards" | "none";
type FontDisplay = "auto" | "block" | "fallback" | "optional" | "swap";
type FontFaceLoadStatus = "error" | "loaded" | "loading" | "unloaded";
type FontFaceSetLoadStatus = "loaded" | "loading";
type FullscreenNavigationUI = "auto" | "hide" | "show";
type GamepadHapticActuatorType = "vibration";
type GamepadHapticEffectType = "dual-rumble";
type GamepadHapticsResult = "complete" | "preempted";
type GamepadMappingType = "" | "standard" | "xr-standard";
type GlobalCompositeOperation = "color" | "color-burn" | "color-dodge" | "copy" | "darken" | "destination-atop" | "destination-in" | "destination-out" | "destination-over" | "difference" | "exclusion" | "hard-light" | "hue" | "lighten" | "lighter" | "luminosity" | "multiply" | "overlay" | "saturation" | "screen" | "soft-light" | "source-atop" | "source-in" | "source-out" | "source-over" | "xor";
type HardwareAcceleration = "no-preference" | "prefer-hardware" | "prefer-software";
type HdrMetadataType = "smpteSt2086" | "smpteSt2094-10" | "smpteSt2094-40";
type IDBCursorDirection = "next" | "nextunique" | "prev" | "prevunique";
type IDBRequestReadyState = "done" | "pending";
type IDBTransactionDurability = "default" | "relaxed" | "strict";
type IDBTransactionMode = "readonly" | "readwrite" | "versionchange";
type ImageOrientation = "flipY" | "from-image" | "none";
type ImageSmoothingQuality = "high" | "low" | "medium";
type InsertPosition = "afterbegin" | "afterend" | "beforebegin" | "beforeend";
type IterationCompositeOperation = "accumulate" | "replace";
type KeyFormat = "jwk" | "pkcs8" | "raw" | "spki";
type KeyType = "private" | "public" | "secret";
type KeyUsage = "decrypt" | "deriveBits" | "deriveKey" | "encrypt" | "sign" | "unwrapKey" | "verify" | "wrapKey";
type LatencyMode = "quality" | "realtime";
type LineAlignSetting = "center" | "end" | "start";
type LockMode = "exclusive" | "shared";
type MIDIPortConnectionState = "closed" | "open" | "pending";
type MIDIPortDeviceState = "connected" | "disconnected";
type MIDIPortType = "input" | "output";
type MediaDecodingType = "file" | "media-source" | "webrtc";
type MediaDeviceKind = "audioinput" | "audiooutput" | "videoinput";
type MediaEncodingType = "record" | "webrtc";
type MediaKeyMessageType = "individualization-request" | "license-release" | "license-renewal" | "license-request";
type MediaKeySessionClosedReason = "closed-by-application" | "hardware-context-reset" | "internal-error" | "release-acknowledged" | "resource-evicted";
type MediaKeySessionType = "persistent-license" | "temporary";
type MediaKeyStatus = "expired" | "internal-error" | "output-downscaled" | "output-restricted" | "released" | "status-pending" | "usable" | "usable-in-future";
type MediaKeysRequirement = "not-allowed" | "optional" | "required";
type MediaSessionAction = "nexttrack" | "pause" | "play" | "previoustrack" | "seekbackward" | "seekforward" | "seekto" | "skipad" | "stop";
type MediaSessionPlaybackState = "none" | "paused" | "playing";
type MediaStreamTrackState = "ended" | "live";
type NavigationTimingType = "back_forward" | "navigate" | "prerender" | "reload";
type NotificationDirection = "auto" | "ltr" | "rtl";
type NotificationPermission = "default" | "denied" | "granted";
type OffscreenRenderingContextId = "2d" | "bitmaprenderer" | "webgl" | "webgl2" | "webgpu";
type OrientationType = "landscape-primary" | "landscape-secondary" | "portrait-primary" | "portrait-secondary";
type OscillatorType = "custom" | "sawtooth" | "sine" | "square" | "triangle";
type OverSampleType = "2x" | "4x" | "none";
type PanningModelType = "HRTF" | "equalpower";
type PaymentComplete = "fail" | "success" | "unknown";
type PermissionName = "geolocation" | "notifications" | "persistent-storage" | "push" | "screen-wake-lock" | "xr-spatial-tracking";
type PermissionState = "denied" | "granted" | "prompt";
type PlaybackDirection = "alternate" | "alternate-reverse" | "normal" | "reverse";
type PositionAlignSetting = "auto" | "center" | "line-left" | "line-right";
type PredefinedColorSpace = "display-p3" | "srgb";
type PremultiplyAlpha = "default" | "none" | "premultiply";
type PresentationStyle = "attachment" | "inline" | "unspecified";
type PublicKeyCredentialType = "public-key";
type PushEncryptionKeyName = "auth" | "p256dh";
type RTCBundlePolicy = "balanced" | "max-bundle" | "max-compat";
type RTCDataChannelState = "closed" | "closing" | "connecting" | "open";
type RTCDegradationPreference = "balanced" | "maintain-framerate" | "maintain-resolution";
type RTCDtlsTransportState = "closed" | "connected" | "connecting" | "failed" | "new";
type RTCEncodedVideoFrameType = "delta" | "empty" | "key";
type RTCErrorDetailType = "data-channel-failure" | "dtls-failure" | "fingerprint-failure" | "hardware-encoder-error" | "hardware-encoder-not-available" | "sctp-failure" | "sdp-syntax-error";
type RTCIceCandidateType = "host" | "prflx" | "relay" | "srflx";
type RTCIceComponent = "rtcp" | "rtp";
type RTCIceConnectionState = "checking" | "closed" | "completed" | "connected" | "disconnected" | "failed" | "new";
type RTCIceGathererState = "complete" | "gathering" | "new";
type RTCIceGatheringState = "complete" | "gathering" | "new";
type RTCIceProtocol = "tcp" | "udp";
type RTCIceTcpCandidateType = "active" | "passive" | "so";
type RTCIceTransportPolicy = "all" | "relay";
type RTCIceTransportState = "checking" | "closed" | "completed" | "connected" | "disconnected" | "failed" | "new";
type RTCPeerConnectionState = "closed" | "connected" | "connecting" | "disconnected" | "failed" | "new";
type RTCPriorityType = "high" | "low" | "medium" | "very-low";
type RTCRtcpMuxPolicy = "require";
type RTCRtpTransceiverDirection = "inactive" | "recvonly" | "sendonly" | "sendrecv" | "stopped";
type RTCSctpTransportState = "closed" | "connected" | "connecting";
type RTCSdpType = "answer" | "offer" | "pranswer" | "rollback";
type RTCSignalingState = "closed" | "have-local-offer" | "have-local-pranswer" | "have-remote-offer" | "have-remote-pranswer" | "stable";
type RTCStatsIceCandidatePairState = "failed" | "frozen" | "in-progress" | "inprogress" | "succeeded" | "waiting";
type RTCStatsType = "candidate-pair" | "certificate" | "codec" | "data-channel" | "inbound-rtp" | "local-candidate" | "media-source" | "outbound-rtp" | "peer-connection" | "remote-candidate" | "remote-inbound-rtp" | "remote-outbound-rtp" | "transport";
type ReadableStreamReaderMode = "byob";
type ReadableStreamType = "bytes";
type ReadyState = "closed" | "ended" | "open";
type RecordingState = "inactive" | "paused" | "recording";
type ReferrerPolicy = "" | "no-referrer" | "no-referrer-when-downgrade" | "origin" | "origin-when-cross-origin" | "same-origin" | "strict-origin" | "strict-origin-when-cross-origin" | "unsafe-url";
type RemotePlaybackState = "connected" | "connecting" | "disconnected";
type RequestCache = "default" | "force-cache" | "no-cache" | "no-store" | "only-if-cached" | "reload";
type RequestCredentials = "include" | "omit" | "same-origin";
type RequestDestination = "" | "audio" | "audioworklet" | "document" | "embed" | "font" | "frame" | "iframe" | "image" | "manifest" | "object" | "paintworklet" | "report" | "script" | "sharedworker" | "style" | "track" | "video" | "worker" | "xslt";
type RequestMode = "cors" | "navigate" | "no-cors" | "same-origin";
type RequestRedirect = "error" | "follow" | "manual";
type ResidentKeyRequirement = "discouraged" | "preferred" | "required";
type ResizeObserverBoxOptions = "border-box" | "content-box" | "device-pixel-content-box";
type ResizeQuality = "high" | "low" | "medium" | "pixelated";
type ResponseType = "basic" | "cors" | "default" | "error" | "opaque" | "opaqueredirect";
type ScrollBehavior = "auto" | "instant" | "smooth";
type ScrollLogicalPosition = "center" | "end" | "nearest" | "start";
type ScrollRestoration = "auto" | "manual";
type ScrollSetting = "" | "up";
type SecurityPolicyViolationEventDisposition = "enforce" | "report";
type SelectionMode = "end" | "preserve" | "select" | "start";
type ServiceWorkerState = "activated" | "activating" | "installed" | "installing" | "parsed" | "redundant";
type ServiceWorkerUpdateViaCache = "all" | "imports" | "none";
type ShadowRootMode = "closed" | "open";
type SlotAssignmentMode = "manual" | "named";
type SpeechSynthesisErrorCode = "audio-busy" | "audio-hardware" | "canceled" | "interrupted" | "invalid-argument" | "language-unavailable" | "network" | "not-allowed" | "synthesis-failed" | "synthesis-unavailable" | "text-too-long" | "voice-unavailable";
type TextTrackKind = "captions" | "chapters" | "descriptions" | "metadata" | "subtitles";
type TextTrackMode = "disabled" | "hidden" | "showing";
type TouchType = "direct" | "stylus";
type TransferFunction = "hlg" | "pq" | "srgb";
type UserVerificationRequirement = "discouraged" | "preferred" | "required";
type VideoColorPrimaries = "bt470bg" | "bt709" | "smpte170m";
type VideoEncoderBitrateMode = "constant" | "quantizer" | "variable";
type VideoFacingModeEnum = "environment" | "left" | "right" | "user";
type VideoMatrixCoefficients = "bt470bg" | "bt709" | "rgb" | "smpte170m";
type VideoPixelFormat = "BGRA" | "BGRX" | "I420" | "I420A" | "I422" | "I444" | "NV12" | "RGBA" | "RGBX";
type VideoTransferCharacteristics = "bt709" | "iec61966-2-1" | "smpte170m";
type WakeLockType = "screen";
type WebGLPowerPreference = "default" | "high-performance" | "low-power";
type WebTransportCongestionControl = "default" | "low-latency" | "throughput";
type WebTransportErrorSource = "session" | "stream";
type WorkerType = "classic" | "module";
type WriteCommandType = "seek" | "truncate" | "write";
type XMLHttpRequestResponseType = "" | "arraybuffer" | "blob" | "document" | "json" | "text";
