/*! *****************************************************************************
Copyright (c) Microsoft Corporation. All rights reserved.
Licensed under the Apache License, Version 2.0 (the "License"); you may not use
this file except in compliance with the License. You may obtain a copy of the
License at http://www.apache.org/licenses/LICENSE-2.0

THIS CODE IS PROVIDED ON AN *AS IS* BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION ANY IMPLIED
WARRANTIES OR CONDITIONS OF TITLE, FITNESS FOR A PARTICULAR PURPOSE,
MERCHANTABLITY OR NON-INFRINGEMENT.

See the Apache Version 2.0 License for specific language governing permissions
and limitations under the License.
***************************************************************************** */


/// <reference no-default-lib="true"/>

/////////////////////////////
/// Window APIs
/////////////////////////////

interface AddEventListenerOptions extends EventListenerOptions {
    once?: boolean;
    passive?: boolean;
    signal?: AbortSignal;
}

interface AesCbcParams extends Algorithm {
    iv: BufferSource;
}

interface AesCtrParams extends Algorithm {
    counter: BufferSource;
    length: number;
}

interface AesDerivedKeyParams extends Algorithm {
    length: number;
}

interface AesGcmParams extends Algorithm {
    additionalData?: BufferSource;
    iv: BufferSource;
    tagLength?: number;
}

interface AesKeyAlgorithm extends KeyAlgorithm {
    length: number;
}

interface AesKeyGenParams extends Algorithm {
    length: number;
}

interface Algorithm {
    name: string;
}

interface AnalyserOptions extends AudioNodeOptions {
    fftSize?: number;
    maxDecibels?: number;
    minDecibels?: number;
    smoothingTimeConstant?: number;
}

interface AnimationEventInit extends EventInit {
    animationName?: string;
    elapsedTime?: number;
    pseudoElement?: string;
}

interface AnimationPlaybackEventInit extends EventInit {
    currentTime?: CSSNumberish | null;
    timelineTime?: CSSNumberish | null;
}

interface AssignedNodesOptions {
    flatten?: boolean;
}

interface AudioBufferOptions {
    length: number;
    numberOfChannels?: number;
    sampleRate: number;
}

interface AudioBufferSourceOptions {
    buffer?: AudioBuffer | null;
    detune?: number;
    loop?: boolean;
    loopEnd?: number;
    loopStart?: number;
    playbackRate?: number;
}

interface AudioConfiguration {
    bitrate?: number;
    channels?: string;
    contentType: string;
    samplerate?: number;
    spatialRendering?: boolean;
}

interface AudioContextOptions {
    latencyHint?: AudioContextLatencyCategory | number;
    sampleRate?: number;
}

interface AudioNodeOptions {
    channelCount?: number;
    channelCountMode?: ChannelCountMode;
    channelInterpretation?: ChannelInterpretation;
}

interface AudioProcessingEventInit extends EventInit {
    inputBuffer: AudioBuffer;
    outputBuffer: AudioBuffer;
    playbackTime: number;
}

interface AudioTimestamp {
    contextTime?: number;
    performanceTime?: DOMHighResTimeStamp;
}

interface AudioWorkletNodeOptions extends AudioNodeOptions {
    numberOfInputs?: number;
    numberOfOutputs?: number;
    outputChannelCount?: number[];
    parameterData?: Record<string, number>;
    processorOptions?: any;
}

interface AuthenticationExtensionsClientInputs {
    appid?: string;
    credProps?: boolean;
    hmacCreateSecret?: boolean;
}

interface AuthenticationExtensionsClientOutputs {
    appid?: boolean;
    credProps?: CredentialPropertiesOutput;
    hmacCreateSecret?: boolean;
}

interface AuthenticatorSelectionCriteria {
    authenticatorAttachment?: AuthenticatorAttachment;
    requireResidentKey?: boolean;
    residentKey?: ResidentKeyRequirement;
    userVerification?: UserVerificationRequirement;
}

interface AvcEncoderConfig {
    format?: AvcBitstreamFormat;
}

interface BiquadFilterOptions extends AudioNodeOptions {
    Q?: number;
    detune?: number;
    frequency?: number;
    gain?: number;
    type?: BiquadFilterType;
}

interface BlobEventInit {
    data: Blob;
    timecode?: DOMHighResTimeStamp;
}

interface BlobPropertyBag {
    endings?: EndingType;
    type?: string;
}

interface CSSMatrixComponentOptions {
    is2D?: boolean;
}

interface CSSNumericType {
    angle?: number;
    flex?: number;
    frequency?: number;
    length?: number;
    percent?: number;
    percentHint?: CSSNumericBaseType;
    resolution?: number;
    time?: number;
}

interface CSSStyleSheetInit {
    baseURL?: string;
    disabled?: boolean;
    media?: MediaList | string;
}

interface CacheQueryOptions {
    ignoreMethod?: boolean;
    ignoreSearch?: boolean;
    ignoreVary?: boolean;
}

interface CanvasRenderingContext2DSettings {
    alpha?: boolean;
    colorSpace?: PredefinedColorSpace;
    desynchronized?: boolean;
    willReadFrequently?: boolean;
}

interface ChannelMergerOptions extends AudioNodeOptions {
    numberOfInputs?: number;
}

interface ChannelSplitterOptions extends AudioNodeOptions {
    numberOfOutputs?: number;
}

interface CheckVisibilityOptions {
    checkOpacity?: boolean;
    checkVisibilityCSS?: boolean;
}

interface ClientQueryOptions {
    includeUncontrolled?: boolean;
    type?: ClientTypes;
}

interface ClipboardEventInit extends EventInit {
    clipboardData?: DataTransfer | null;
}

interface ClipboardItemOptions {
    presentationStyle?: PresentationStyle;
}

interface CloseEventInit extends EventInit {
    code?: number;
    reason?: string;
    wasClean?: boolean;
}

interface CompositionEventInit extends UIEventInit {
    data?: string;
}

interface ComputedEffectTiming extends EffectTiming {
    activeDuration?: CSSNumberish;
    currentIteration?: number | null;
    endTime?: CSSNumberish;
    localTime?: CSSNumberish | null;
    progress?: number | null;
    startTime?: CSSNumberish;
}

interface ComputedKeyframe {
    composite: CompositeOperationOrAuto;
    computedOffset: number;
    easing: string;
    offset: number | null;
    [property: string]: string | number | null | undefined;
}

interface ConstantSourceOptions {
    offset?: number;
}

interface ConstrainBooleanParameters {
    exact?: boolean;
    ideal?: boolean;
}

interface ConstrainDOMStringParameters {
    exact?: string | string[];
    ideal?: string | string[];
}

interface ConstrainDoubleRange extends DoubleRange {
    exact?: number;
    ideal?: number;
}

interface ConstrainULongRange extends ULongRange {
    exact?: number;
    ideal?: number;
}

interface ConvolverOptions extends AudioNodeOptions {
    buffer?: AudioBuffer | null;
    disableNormalization?: boolean;
}

interface CredentialCreationOptions {
    publicKey?: PublicKeyCredentialCreationOptions;
    signal?: AbortSignal;
}

interface CredentialPropertiesOutput {
    rk?: boolean;
}

interface CredentialRequestOptions {
    mediation?: CredentialMediationRequirement;
    publicKey?: PublicKeyCredentialRequestOptions;
    signal?: AbortSignal;
}

interface CryptoKeyPair {
    privateKey: CryptoKey;
    publicKey: CryptoKey;
}

interface CustomEventInit<T = any> extends EventInit {
    detail?: T;
}

interface DOMMatrix2DInit {
    a?: number;
    b?: number;
    c?: number;
    d?: number;
    e?: number;
    f?: number;
    m11?: number;
    m12?: number;
    m21?: number;
    m22?: number;
    m41?: number;
    m42?: number;
}

interface DOMMatrixInit extends DOMMatrix2DInit {
    is2D?: boolean;
    m13?: number;
    m14?: number;
    m23?: number;
    m24?: number;
    m31?: number;
    m32?: number;
    m33?: number;
    m34?: number;
    m43?: number;
    m44?: number;
}

interface DOMPointInit {
    w?: number;
    x?: number;
    y?: number;
    z?: number;
}

interface DOMQuadInit {
    p1?: DOMPointInit;
    p2?: DOMPointInit;
    p3?: DOMPointInit;
    p4?: DOMPointInit;
}

interface DOMRectInit {
    height?: number;
    width?: number;
    x?: number;
    y?: number;
}

interface DelayOptions extends AudioNodeOptions {
    delayTime?: number;
    maxDelayTime?: number;
}

interface DeviceMotionEventAccelerationInit {
    x?: number | null;
    y?: number | null;
    z?: number | null;
}

interface DeviceMotionEventInit extends EventInit {
    acceleration?: DeviceMotionEventAccelerationInit;
    accelerationIncludingGravity?: DeviceMotionEventAccelerationInit;
    interval?: number;
    rotationRate?: DeviceMotionEventRotationRateInit;
}

interface DeviceMotionEventRotationRateInit {
    alpha?: number | null;
    beta?: number | null;
    gamma?: number | null;
}

interface DeviceOrientationEventInit extends EventInit {
    absolute?: boolean;
    alpha?: number | null;
    beta?: number | null;
    gamma?: number | null;
}

interface DisplayMediaStreamOptions {
    audio?: boolean | MediaTrackConstraints;
    video?: boolean | MediaTrackConstraints;
}

interface DocumentTimelineOptions {
    originTime?: DOMHighResTimeStamp;
}

interface DoubleRange {
    max?: number;
    min?: number;
}

interface DragEventInit extends MouseEventInit {
    dataTransfer?: DataTransfer | null;
}

interface DynamicsCompressorOptions extends AudioNodeOptions {
    attack?: number;
    knee?: number;
    ratio?: number;
    release?: number;
    threshold?: number;
}

interface EcKeyAlgorithm extends KeyAlgorithm {
    namedCurve: NamedCurve;
}

interface EcKeyGenParams extends Algorithm {
    namedCurve: NamedCurve;
}

interface EcKeyImportParams extends Algorithm {
    namedCurve: NamedCurve;
}

interface EcdhKeyDeriveParams extends Algorithm {
    public: CryptoKey;
}

interface EcdsaParams extends Algorithm {
    hash: HashAlgorithmIdentifier;
}

interface EffectTiming {
    delay?: number;
    direction?: PlaybackDirection;
    duration?: number | CSSNumericValue | string;
    easing?: string;
    endDelay?: number;
    fill?: FillMode;
    iterationStart?: number;
    iterations?: number;
    playbackRate?: number;
}

interface ElementCreationOptions {
    is?: string;
}

interface ElementDefinitionOptions {
    extends?: string;
}

interface EncodedVideoChunkInit {
    data: BufferSource;
    duration?: number;
    timestamp: number;
    type: EncodedVideoChunkType;
}

interface EncodedVideoChunkMetadata {
    decoderConfig?: VideoDecoderConfig;
}

interface ErrorEventInit extends EventInit {
    colno?: number;
    error?: any;
    filename?: string;
    lineno?: number;
    message?: string;
}

interface EventInit {
    bubbles?: boolean;
    cancelable?: boolean;
    composed?: boolean;
}

interface EventListenerOptions {
    capture?: boolean;
}

interface EventModifierInit extends UIEventInit {
    altKey?: boolean;
    ctrlKey?: boolean;
    metaKey?: boolean;
    modifierAltGraph?: boolean;
    modifierCapsLock?: boolean;
    modifierFn?: boolean;
    modifierFnLock?: boolean;
    modifierHyper?: boolean;
    modifierNumLock?: boolean;
    modifierScrollLock?: boolean;
    modifierSuper?: boolean;
    modifierSymbol?: boolean;
    modifierSymbolLock?: boolean;
    shiftKey?: boolean;
}

interface EventSourceInit {
    withCredentials?: boolean;
}

interface FilePropertyBag extends BlobPropertyBag {
    lastModified?: number;
}

interface FileSystemCreateWritableOptions {
    keepExistingData?: boolean;
}

interface FileSystemFlags {
    create?: boolean;
    exclusive?: boolean;
}

interface FileSystemGetDirectoryOptions {
    create?: boolean;
}

interface FileSystemGetFileOptions {
    create?: boolean;
}

interface FileSystemRemoveOptions {
    recursive?: boolean;
}

interface FocusEventInit extends UIEventInit {
    relatedTarget?: EventTarget | null;
}

interface FocusOptions {
    preventScroll?: boolean;
}

interface FontFaceDescriptors {
    ascentOverride?: string;
    descentOverride?: string;
    display?: FontDisplay;
    featureSettings?: string;
    lineGapOverride?: string;
    stretch?: string;
    style?: string;
    unicodeRange?: string;
    variant?: string;
    weight?: string;
}

interface FontFaceSetLoadEventInit extends EventInit {
    fontfaces?: FontFace[];
}

interface FormDataEventInit extends EventInit {
    formData: FormData;
}

interface FullscreenOptions {
    navigationUI?: FullscreenNavigationUI;
}

interface GainOptions extends AudioNodeOptions {
    gain?: number;
}

interface GamepadEffectParameters {
    duration?: number;
    startDelay?: number;
    strongMagnitude?: number;
    weakMagnitude?: number;
}

interface GamepadEventInit extends EventInit {
    gamepad: Gamepad;
}

interface GetAnimationsOptions {
    subtree?: boolean;
}

interface GetNotificationOptions {
    tag?: string;
}

interface GetRootNodeOptions {
    composed?: boolean;
}

interface HashChangeEventInit extends EventInit {
    newURL?: string;
    oldURL?: string;
}

interface HkdfParams extends Algorithm {
    hash: HashAlgorithmIdentifier;
    info: BufferSource;
    salt: BufferSource;
}

interface HmacImportParams extends Algorithm {
    hash: HashAlgorithmIdentifier;
    length?: number;
}

interface HmacKeyAlgorithm extends KeyAlgorithm {
    hash: KeyAlgorithm;
    length: number;
}

interface HmacKeyGenParams extends Algorithm {
    hash: HashAlgorithmIdentifier;
    length?: number;
}

interface IDBDatabaseInfo {
    name?: string;
    version?: number;
}

interface IDBIndexParameters {
    multiEntry?: boolean;
    unique?: boolean;
}

interface IDBObjectStoreParameters {
    autoIncrement?: boolean;
    keyPath?: string | string[] | null;
}

interface IDBTransactionOptions {
    durability?: IDBTransactionDurability;
}

interface IDBVersionChangeEventInit extends EventInit {
    newVersion?: number | null;
    oldVersion?: number;
}

interface IIRFilterOptions extends AudioNodeOptions {
    feedback: number[];
    feedforward: number[];
}

interface IdleRequestOptions {
    timeout?: number;
}

interface ImageBitmapOptions {
    colorSpaceConversion?: ColorSpaceConversion;
    imageOrientation?: ImageOrientation;
    premultiplyAlpha?: PremultiplyAlpha;
    resizeHeight?: number;
    resizeQuality?: ResizeQuality;
    resizeWidth?: number;
}

interface ImageBitmapRenderingContextSettings {
    alpha?: boolean;
}

interface ImageDataSettings {
    colorSpace?: PredefinedColorSpace;
}

interface ImageEncodeOptions {
    quality?: number;
    type?: string;
}

interface ImportMeta {
    url: string;
}

interface InputEventInit extends UIEventInit {
    data?: string | null;
    dataTransfer?: DataTransfer | null;
    inputType?: string;
    isComposing?: boolean;
    targetRanges?: StaticRange[];
}

interface IntersectionObserverEntryInit {
    boundingClientRect: DOMRectInit;
    intersectionRatio: number;
    intersectionRect: DOMRectInit;
    isIntersecting: boolean;
    rootBounds: DOMRectInit | null;
    target: Element;
    time: DOMHighResTimeStamp;
}

interface IntersectionObserverInit {
    root?: Element | Document | null;
    rootMargin?: string;
    threshold?: number | number[];
}

interface JsonWebKey {
    alg?: string;
    crv?: string;
    d?: string;
    dp?: string;
    dq?: string;
    e?: string;
    ext?: boolean;
    k?: string;
    key_ops?: string[];
    kty?: string;
    n?: string;
    oth?: RsaOtherPrimesInfo[];
    p?: string;
    q?: string;
    qi?: string;
    use?: string;
    x?: string;
    y?: string;
}

interface KeyAlgorithm {
    name: string;
}

interface KeyboardEventInit extends EventModifierInit {
    /** @deprecated */
    charCode?: number;
    code?: string;
    isComposing?: boolean;
    key?: string;
    /** @deprecated */
    keyCode?: number;
    location?: number;
    repeat?: boolean;
}

interface Keyframe {
    composite?: CompositeOperationOrAuto;
    easing?: string;
    offset?: number | null;
    [property: string]: string | number | null | undefined;
}

interface KeyframeAnimationOptions extends KeyframeEffectOptions {
    id?: string;
    timeline?: AnimationTimeline | null;
}

interface KeyframeEffectOptions extends EffectTiming {
    composite?: CompositeOperation;
    iterationComposite?: IterationCompositeOperation;
    pseudoElement?: string | null;
}

interface LockInfo {
    clientId?: string;
    mode?: LockMode;
    name?: string;
}

interface LockManagerSnapshot {
    held?: LockInfo[];
    pending?: LockInfo[];
}

interface LockOptions {
    ifAvailable?: boolean;
    mode?: LockMode;
    signal?: AbortSignal;
    steal?: boolean;
}

interface MIDIConnectionEventInit extends EventInit {
    port?: MIDIPort;
}

interface MIDIMessageEventInit extends EventInit {
    data?: Uint8Array;
}

interface MIDIOptions {
    software?: boolean;
    sysex?: boolean;
}

interface MediaCapabilitiesDecodingInfo extends MediaCapabilitiesInfo {
    configuration?: MediaDecodingConfiguration;
}

interface MediaCapabilitiesEncodingInfo extends MediaCapabilitiesInfo {
    configuration?: MediaEncodingConfiguration;
}

interface MediaCapabilitiesInfo {
    powerEfficient: boolean;
    smooth: boolean;
    supported: boolean;
}

interface MediaConfiguration {
    audio?: AudioConfiguration;
    video?: VideoConfiguration;
}

interface MediaDecodingConfiguration extends MediaConfiguration {
    type: MediaDecodingType;
}

interface MediaElementAudioSourceOptions {
    mediaElement: HTMLMediaElement;
}

interface MediaEncodingConfiguration extends MediaConfiguration {
    type: MediaEncodingType;
}

interface MediaEncryptedEventInit extends EventInit {
    initData?: ArrayBuffer | null;
    initDataType?: string;
}

interface MediaImage {
    sizes?: string;
    src: string;
    type?: string;
}

interface MediaKeyMessageEventInit extends EventInit {
    message: ArrayBuffer;
    messageType: MediaKeyMessageType;
}

interface MediaKeySystemConfiguration {
    audioCapabilities?: MediaKeySystemMediaCapability[];
    distinctiveIdentifier?: MediaKeysRequirement;
    initDataTypes?: string[];
    label?: string;
    persistentState?: MediaKeysRequirement;
    sessionTypes?: string[];
    videoCapabilities?: MediaKeySystemMediaCapability[];
}

interface MediaKeySystemMediaCapability {
    contentType?: string;
    encryptionScheme?: string | null;
    robustness?: string;
}

interface MediaMetadataInit {
    album?: string;
    artist?: string;
    artwork?: MediaImage[];
    title?: string;
}

interface MediaPositionState {
    duration?: number;
    playbackRate?: number;
    position?: number;
}

interface MediaQueryListEventInit extends EventInit {
    matches?: boolean;
    media?: string;
}

interface MediaRecorderOptions {
    audioBitsPerSecond?: number;
    bitsPerSecond?: number;
    mimeType?: string;
    videoBitsPerSecond?: number;
}

interface MediaSessionActionDetails {
    action: MediaSessionAction;
    fastSeek?: boolean;
    seekOffset?: number;
    seekTime?: number;
}

interface MediaStreamAudioSourceOptions {
    mediaStream: MediaStream;
}

interface MediaStreamConstraints {
    audio?: boolean | MediaTrackConstraints;
    peerIdentity?: string;
    preferCurrentTab?: boolean;
    video?: boolean | MediaTrackConstraints;
}

interface MediaStreamTrackEventInit extends EventInit {
    track: MediaStreamTrack;
}

interface MediaTrackCapabilities {
    aspectRatio?: DoubleRange;
    autoGainControl?: boolean[];
    channelCount?: ULongRange;
    deviceId?: string;
    displaySurface?: string;
    echoCancellation?: boolean[];
    facingMode?: string[];
    frameRate?: DoubleRange;
    groupId?: string;
    height?: ULongRange;
    noiseSuppression?: boolean[];
    sampleRate?: ULongRange;
    sampleSize?: ULongRange;
    width?: ULongRange;
}

interface MediaTrackConstraintSet {
    aspectRatio?: ConstrainDouble;
    autoGainControl?: ConstrainBoolean;
    channelCount?: ConstrainULong;
    deviceId?: ConstrainDOMString;
    displaySurface?: ConstrainDOMString;
    echoCancellation?: ConstrainBoolean;
    facingMode?: ConstrainDOMString;
    frameRate?: ConstrainDouble;
    groupId?: ConstrainDOMString;
    height?: ConstrainULong;
    noiseSuppression?: ConstrainBoolean;
    sampleRate?: ConstrainULong;
    sampleSize?: ConstrainULong;
    width?: ConstrainULong;
}

interface MediaTrackConstraints extends MediaTrackConstraintSet {
    advanced?: MediaTrackConstraintSet[];
}

interface MediaTrackSettings {
    aspectRatio?: number;
    autoGainControl?: boolean;
    channelCount?: number;
    deviceId?: string;
    displaySurface?: string;
    echoCancellation?: boolean;
    facingMode?: string;
    frameRate?: number;
    groupId?: string;
    height?: number;
    noiseSuppression?: boolean;
    sampleRate?: number;
    sampleSize?: number;
    width?: number;
}

interface MediaTrackSupportedConstraints {
    aspectRatio?: boolean;
    autoGainControl?: boolean;
    channelCount?: boolean;
    deviceId?: boolean;
    displaySurface?: boolean;
    echoCancellation?: boolean;
    facingMode?: boolean;
    frameRate?: boolean;
    groupId?: boolean;
    height?: boolean;
    noiseSuppression?: boolean;
    sampleRate?: boolean;
    sampleSize?: boolean;
    width?: boolean;
}

interface MessageEventInit<T = any> extends EventInit {
    data?: T;
    lastEventId?: string;
    origin?: string;
    ports?: MessagePort[];
    source?: MessageEventSource | null;
}

interface MouseEventInit extends EventModifierInit {
    button?: number;
    buttons?: number;
    clientX?: number;
    clientY?: number;
    movementX?: number;
    movementY?: number;
    relatedTarget?: EventTarget | null;
    screenX?: number;
    screenY?: number;
}

interface MultiCacheQueryOptions extends CacheQueryOptions {
    cacheName?: string;
}

interface MutationObserverInit {
    /** Set to a list of attribute local names (without namespace) if not all attribute mutations need to be observed and attributes is true or omitted. */
    attributeFilter?: string[];
    /** Set to true if attributes is true or omitted and target's attribute value before the mutation needs to be recorded. */
    attributeOldValue?: boolean;
    /** Set to true if mutations to target's attributes are to be observed. Can be omitted if attributeOldValue or attributeFilter is specified. */
    attributes?: boolean;
    /** Set to true if mutations to target's data are to be observed. Can be omitted if characterDataOldValue is specified. */
    characterData?: boolean;
    /** Set to true if characterData is set to true or omitted and target's data before the mutation needs to be recorded. */
    characterDataOldValue?: boolean;
    /** Set to true if mutations to target's children are to be observed. */
    childList?: boolean;
    /** Set to true if mutations to not just target, but also target's descendants are to be observed. */
    subtree?: boolean;
}

interface NavigationPreloadState {
    enabled?: boolean;
    headerValue?: string;
}

interface NotificationAction {
    action: string;
    icon?: string;
    title: string;
}

interface NotificationOptions {
    actions?: NotificationAction[];
    badge?: string;
    body?: string;
    data?: any;
    dir?: NotificationDirection;
    icon?: string;
    image?: string;
    lang?: string;
    renotify?: boolean;
    requireInteraction?: boolean;
    silent?: boolean | null;
    tag?: string;
    timestamp?: EpochTimeStamp;
    vibrate?: VibratePattern;
}

interface OfflineAudioCompletionEventInit extends EventInit {
    renderedBuffer: AudioBuffer;
}

interface OfflineAudioContextOptions {
    length: number;
    numberOfChannels?: number;
    sampleRate: number;
}

interface OptionalEffectTiming {
    delay?: number;
    direction?: PlaybackDirection;
    duration?: number | string;
    easing?: string;
    endDelay?: number;
    fill?: FillMode;
    iterationStart?: number;
    iterations?: number;
    playbackRate?: number;
}

interface OscillatorOptions extends AudioNodeOptions {
    detune?: number;
    frequency?: number;
    periodicWave?: PeriodicWave;
    type?: OscillatorType;
}

interface PageTransitionEventInit extends EventInit {
    persisted?: boolean;
}

interface PannerOptions extends AudioNodeOptions {
    coneInnerAngle?: number;
    coneOuterAngle?: number;
    coneOuterGain?: number;
    distanceModel?: DistanceModelType;
    maxDistance?: number;
    orientationX?: number;
    orientationY?: number;
    orientationZ?: number;
    panningModel?: PanningModelType;
    positionX?: number;
    positionY?: number;
    positionZ?: number;
    refDistance?: number;
    rolloffFactor?: number;
}

interface PaymentCurrencyAmount {
    currency: string;
    value: string;
}

interface PaymentDetailsBase {
    displayItems?: PaymentItem[];
    modifiers?: PaymentDetailsModifier[];
}

interface PaymentDetailsInit extends PaymentDetailsBase {
    id?: string;
    total: PaymentItem;
}

interface PaymentDetailsModifier {
    additionalDisplayItems?: PaymentItem[];
    data?: any;
    supportedMethods: string;
    total?: PaymentItem;
}

interface PaymentDetailsUpdate extends PaymentDetailsBase {
    paymentMethodErrors?: any;
    total?: PaymentItem;
}

interface PaymentItem {
    amount: PaymentCurrencyAmount;
    label: string;
    pending?: boolean;
}

interface PaymentMethodChangeEventInit extends PaymentRequestUpdateEventInit {
    methodDetails?: any;
    methodName?: string;
}

interface PaymentMethodData {
    data?: any;
    supportedMethods: string;
}

interface PaymentRequestUpdateEventInit extends EventInit {
}

interface PaymentValidationErrors {
    error?: string;
    paymentMethod?: any;
}

interface Pbkdf2Params extends Algorithm {
    hash: HashAlgorithmIdentifier;
    iterations: number;
    salt: BufferSource;
}

interface PerformanceMarkOptions {
    detail?: any;
    startTime?: DOMHighResTimeStamp;
}

interface PerformanceMeasureOptions {
    detail?: any;
    duration?: DOMHighResTimeStamp;
    end?: string | DOMHighResTimeStamp;
    start?: string | DOMHighResTimeStamp;
}

interface PerformanceObserverInit {
    buffered?: boolean;
    entryTypes?: string[];
    type?: string;
}

interface PeriodicWaveConstraints {
    disableNormalization?: boolean;
}

interface PeriodicWaveOptions extends PeriodicWaveConstraints {
    imag?: number[] | Float32Array;
    real?: number[] | Float32Array;
}

interface PermissionDescriptor {
    name: PermissionName;
}

interface PictureInPictureEventInit extends EventInit {
    pictureInPictureWindow: PictureInPictureWindow;
}

interface PlaneLayout {
    offset: number;
    stride: number;
}

interface PointerEventInit extends MouseEventInit {
    coalescedEvents?: PointerEvent[];
    height?: number;
    isPrimary?: boolean;
    pointerId?: number;
    pointerType?: string;
    predictedEvents?: PointerEvent[];
    pressure?: number;
    tangentialPressure?: number;
    tiltX?: number;
    tiltY?: number;
    twist?: number;
    width?: number;
}

interface PopStateEventInit extends EventInit {
    state?: any;
}

interface PositionOptions {
    enableHighAccuracy?: boolean;
    maximumAge?: number;
    timeout?: number;
}

interface ProgressEventInit extends EventInit {
    lengthComputable?: boolean;
    loaded?: number;
    total?: number;
}

interface PromiseRejectionEventInit extends EventInit {
    promise: Promise<any>;
    reason?: any;
}

interface PropertyDefinition {
    inherits: boolean;
    initialValue?: string;
    name: string;
    syntax?: string;
}

interface PropertyIndexedKeyframes {
    composite?: CompositeOperationOrAuto | CompositeOperationOrAuto[];
    easing?: string | string[];
    offset?: number | (number | null)[];
    [property: string]: string | string[] | number | null | (number | null)[] | undefined;
}

interface PublicKeyCredentialCreationOptions {
    attestation?: AttestationConveyancePreference;
    authenticatorSelection?: AuthenticatorSelectionCriteria;
    challenge: BufferSource;
    excludeCredentials?: PublicKeyCredentialDescriptor[];
    extensions?: AuthenticationExtensionsClientInputs;
    pubKeyCredParams: PublicKeyCredentialParameters[];
    rp: PublicKeyCredentialRpEntity;
    timeout?: number;
    user: PublicKeyCredentialUserEntity;
}

interface PublicKeyCredentialDescriptor {
    id: BufferSource;
    transports?: AuthenticatorTransport[];
    type: PublicKeyCredentialType;
}

interface PublicKeyCredentialEntity {
    name: string;
}

interface PublicKeyCredentialParameters {
    alg: COSEAlgorithmIdentifier;
    type: PublicKeyCredentialType;
}

interface PublicKeyCredentialRequestOptions {
    allowCredentials?: PublicKeyCredentialDescriptor[];
    challenge: BufferSource;
    extensions?: AuthenticationExtensionsClientInputs;
    rpId?: string;
    timeout?: number;
    userVerification?: UserVerificationRequirement;
}

interface PublicKeyCredentialRpEntity extends PublicKeyCredentialEntity {
    id?: string;
}

interface PublicKeyCredentialUserEntity extends PublicKeyCredentialEntity {
    displayName: string;
    id: BufferSource;
}

interface PushSubscriptionJSON {
    endpoint?: string;
    expirationTime?: EpochTimeStamp | null;
    keys?: Record<string, string>;
}

interface PushSubscriptionOptionsInit {
    applicationServerKey?: BufferSource | string | null;
    userVisibleOnly?: boolean;
}

interface QueuingStrategy<T = any> {
    highWaterMark?: number;
    size?: QueuingStrategySize<T>;
}

interface QueuingStrategyInit {
    /**
     * Creates a new ByteLengthQueuingStrategy with the provided high water mark.
     *
     * Note that the provided high water mark will not be validated ahead of time. Instead, if it is negative, NaN, or not a number, the resulting ByteLengthQueuingStrategy will cause the corresponding stream constructor to throw.
     */
    highWaterMark: number;
}

interface RTCAnswerOptions extends RTCOfferAnswerOptions {
}

interface RTCCertificateExpiration {
    expires?: number;
}

interface RTCConfiguration {
    bundlePolicy?: RTCBundlePolicy;
    certificates?: RTCCertificate[];
    iceCandidatePoolSize?: number;
    iceServers?: RTCIceServer[];
    iceTransportPolicy?: RTCIceTransportPolicy;
    rtcpMuxPolicy?: RTCRtcpMuxPolicy;
}

interface RTCDTMFToneChangeEventInit extends EventInit {
    tone?: string;
}

interface RTCDataChannelEventInit extends EventInit {
    channel: RTCDataChannel;
}

interface RTCDataChannelInit {
    id?: number;
    maxPacketLifeTime?: number;
    maxRetransmits?: number;
    negotiated?: boolean;
    ordered?: boolean;
    protocol?: string;
}

interface RTCDtlsFingerprint {
    algorithm?: string;
    value?: string;
}

interface RTCEncodedAudioFrameMetadata {
    contributingSources?: number[];
    synchronizationSource?: number;
}

interface RTCEncodedVideoFrameMetadata {
    dependencies?: number[];
    frameId?: number;
    height?: number;
    spatialIndex?: number;
    synchronizationSource?: number;
    temporalIndex?: number;
    width?: number;
}

interface RTCErrorEventInit extends EventInit {
    error: RTCError;
}

interface RTCErrorInit {
    errorDetail: RTCErrorDetailType;
    httpRequestStatusCode?: number;
    receivedAlert?: number;
    sctpCauseCode?: number;
    sdpLineNumber?: number;
    sentAlert?: number;
}

interface RTCIceCandidateInit {
    candidate?: string;
    sdpMLineIndex?: number | null;
    sdpMid?: string | null;
    usernameFragment?: string | null;
}

interface RTCIceCandidatePair {
    local?: RTCIceCandidate;
    remote?: RTCIceCandidate;
}

interface RTCIceCandidatePairStats extends RTCStats {
    availableIncomingBitrate?: number;
    availableOutgoingBitrate?: number;
    bytesReceived?: number;
    bytesSent?: number;
    currentRoundTripTime?: number;
    lastPacketReceivedTimestamp?: DOMHighResTimeStamp;
    lastPacketSentTimestamp?: DOMHighResTimeStamp;
    localCandidateId: string;
    nominated?: boolean;
    remoteCandidateId: string;
    requestsReceived?: number;
    requestsSent?: number;
    responsesReceived?: number;
    responsesSent?: number;
    state: RTCStatsIceCandidatePairState;
    totalRoundTripTime?: number;
    transportId: string;
}

interface RTCIceServer {
    credential?: string;
    urls: string | string[];
    username?: string;
}

interface RTCInboundRtpStreamStats extends RTCReceivedRtpStreamStats {
    audioLevel?: number;
    bytesReceived?: number;
    concealedSamples?: number;
    concealmentEvents?: number;
    decoderImplementation?: string;
    estimatedPlayoutTimestamp?: DOMHighResTimeStamp;
    fecPacketsDiscarded?: number;
    fecPacketsReceived?: number;
    firCount?: number;
    frameHeight?: number;
    frameWidth?: number;
    framesDecoded?: number;
    framesDropped?: number;
    framesPerSecond?: number;
    framesReceived?: number;
    headerBytesReceived?: number;
    insertedSamplesForDeceleration?: number;
    jitterBufferDelay?: number;
    jitterBufferEmittedCount?: number;
    keyFramesDecoded?: number;
    kind: string;
    lastPacketReceivedTimestamp?: DOMHighResTimeStamp;
    mid?: string;
    nackCount?: number;
    packetsDiscarded?: number;
    pliCount?: number;
    qpSum?: number;
    remoteId?: string;
    removedSamplesForAcceleration?: number;
    silentConcealedSamples?: number;
    totalAudioEnergy?: number;
    totalDecodeTime?: number;
    totalInterFrameDelay?: number;
    totalProcessingDelay?: number;
    totalSamplesDuration?: number;
    totalSamplesReceived?: number;
    totalSquaredInterFrameDelay?: number;
    trackIdentifier: string;
}

interface RTCLocalSessionDescriptionInit {
    sdp?: string;
    type?: RTCSdpType;
}

interface RTCOfferAnswerOptions {
}

interface RTCOfferOptions extends RTCOfferAnswerOptions {
    iceRestart?: boolean;
    offerToReceiveAudio?: boolean;
    offerToReceiveVideo?: boolean;
}

interface RTCOutboundRtpStreamStats extends RTCSentRtpStreamStats {
    firCount?: number;
    frameHeight?: number;
    frameWidth?: number;
    framesEncoded?: number;
    framesPerSecond?: number;
    framesSent?: number;
    headerBytesSent?: number;
    hugeFramesSent?: number;
    keyFramesEncoded?: number;
    mediaSourceId?: string;
    nackCount?: number;
    pliCount?: number;
    qpSum?: number;
    qualityLimitationResolutionChanges?: number;
    remoteId?: string;
    retransmittedBytesSent?: number;
    retransmittedPacketsSent?: number;
    rid?: string;
    targetBitrate?: number;
    totalEncodeTime?: number;
    totalEncodedBytesTarget?: number;
    totalPacketSendDelay?: number;
}

interface RTCPeerConnectionIceErrorEventInit extends EventInit {
    address?: string | null;
    errorCode: number;
    errorText?: string;
    port?: number | null;
    url?: string;
}

interface RTCPeerConnectionIceEventInit extends EventInit {
    candidate?: RTCIceCandidate | null;
    url?: string | null;
}

interface RTCReceivedRtpStreamStats extends RTCRtpStreamStats {
    jitter?: number;
    packetsLost?: number;
    packetsReceived?: number;
}

interface RTCRtcpParameters {
    cname?: string;
    reducedSize?: boolean;
}

interface RTCRtpCapabilities {
    codecs: RTCRtpCodecCapability[];
    headerExtensions: RTCRtpHeaderExtensionCapability[];
}

interface RTCRtpCodec {
    channels?: number;
    clockRate: number;
    mimeType: string;
    sdpFmtpLine?: string;
}

interface RTCRtpCodecCapability extends RTCRtpCodec {
}

interface RTCRtpCodecParameters extends RTCRtpCodec {
    payloadType: number;
}

interface RTCRtpCodingParameters {
    rid?: string;
}

interface RTCRtpContributingSource {
    audioLevel?: number;
    rtpTimestamp: number;
    source: number;
    timestamp: DOMHighResTimeStamp;
}

interface RTCRtpEncodingParameters extends RTCRtpCodingParameters {
    active?: boolean;
    maxBitrate?: number;
    maxFramerate?: number;
    networkPriority?: RTCPriorityType;
    priority?: RTCPriorityType;
    scaleResolutionDownBy?: number;
}

interface RTCRtpHeaderExtensionCapability {
    uri: string;
}

interface RTCRtpHeaderExtensionParameters {
    encrypted?: boolean;
    id: number;
    uri: string;
}

interface RTCRtpParameters {
    codecs: RTCRtpCodecParameters[];
    headerExtensions: RTCRtpHeaderExtensionParameters[];
    rtcp: RTCRtcpParameters;
}

interface RTCRtpReceiveParameters extends RTCRtpParameters {
}

interface RTCRtpSendParameters extends RTCRtpParameters {
    degradationPreference?: RTCDegradationPreference;
    encodings: RTCRtpEncodingParameters[];
    transactionId: string;
}

interface RTCRtpStreamStats extends RTCStats {
    codecId?: string;
    kind: string;
    ssrc: number;
    transportId?: string;
}

interface RTCRtpSynchronizationSource extends RTCRtpContributingSource {
}

interface RTCRtpTransceiverInit {
    direction?: RTCRtpTransceiverDirection;
    sendEncodings?: RTCRtpEncodingParameters[];
    streams?: MediaStream[];
}

interface RTCSentRtpStreamStats extends RTCRtpStreamStats {
    bytesSent?: number;
    packetsSent?: number;
}

interface RTCSessionDescriptionInit {
    sdp?: string;
    type: RTCSdpType;
}

interface RTCStats {
    id: string;
    timestamp: DOMHighResTimeStamp;
    type: RTCStatsType;
}

interface RTCTrackEventInit extends EventInit {
    receiver: RTCRtpReceiver;
    streams?: MediaStream[];
    track: MediaStreamTrack;
    transceiver: RTCRtpTransceiver;
}

interface RTCTransportStats extends RTCStats {
    bytesReceived?: number;
    bytesSent?: number;
    dtlsCipher?: string;
    dtlsState: RTCDtlsTransportState;
    localCertificateId?: string;
    remoteCertificateId?: string;
    selectedCandidatePairId?: string;
    srtpCipher?: string;
    tlsVersion?: string;
}

interface ReadableStreamGetReaderOptions {
    /**
     * Creates a ReadableStreamBYOBReader and locks the stream to the new reader.
     *
     * This call behaves the same way as the no-argument variant, except that it only works on readable byte streams, i.e. streams which were constructed specifically with the ability to handle "bring your own buffer" reading. The returned BYOB reader provides the ability to directly read individual chunks from the stream via its read() method, into developer-supplied buffers, allowing more precise control over allocation.
     */
    mode?: ReadableStreamReaderMode;
}

interface ReadableStreamReadDoneResult<T> {
    done: true;
    value?: T;
}

interface ReadableStreamReadValueResult<T> {
    done: false;
    value: T;
}

interface ReadableWritablePair<R = any, W = any> {
    readable: ReadableStream<R>;
    /**
     * Provides a convenient, chainable way of piping this readable stream through a transform stream (or any other { writable, readable } pair). It simply pipes the stream into the writable side of the supplied pair, and returns the readable side for further use.
     *
     * Piping a stream will lock it for the duration of the pipe, preventing any other consumer from acquiring a reader.
     */
    writable: WritableStream<W>;
}

interface RegistrationOptions {
    scope?: string;
    type?: WorkerType;
    updateViaCache?: ServiceWorkerUpdateViaCache;
}

interface ReportingObserverOptions {
    buffered?: boolean;
    types?: string[];
}

interface RequestInit {
    /** A BodyInit object or null to set request's body. */
    body?: BodyInit | null;
    /** A string indicating how the request will interact with the browser's cache to set request's cache. */
    cache?: RequestCache;
    /** A string indicating whether credentials will be sent with the request always, never, or only when sent to a same-origin URL. Sets request's credentials. */
    credentials?: RequestCredentials;
    /** A Headers object, an object literal, or an array of two-item arrays to set request's headers. */
    headers?: HeadersInit;
    /** A cryptographic hash of the resource to be fetched by request. Sets request's integrity. */
    integrity?: string;
    /** A boolean to set request's keepalive. */
    keepalive?: boolean;
    /** A string to set request's method. */
    method?: string;
    /** A string to indicate whether the request will use CORS, or will be restricted to same-origin URLs. Sets request's mode. */
    mode?: RequestMode;
    /** A string indicating whether request follows redirects, results in an error upon encountering a redirect, or returns the redirect (in an opaque fashion). Sets request's redirect. */
    redirect?: RequestRedirect;
    /** A string whose value is a same-origin URL, "about:client", or the empty string, to set request's referrer. */
    referrer?: string;
    /** A referrer policy to set request's referrerPolicy. */
    referrerPolicy?: ReferrerPolicy;
    /** An AbortSignal to set request's signal. */
    signal?: AbortSignal | null;
    /** Can only be null. Used to disassociate request from any Window. */
    window?: null;
}

interface ResizeObserverOptions {
    box?: ResizeObserverBoxOptions;
}

interface ResponseInit {
    headers?: HeadersInit;
    status?: number;
    statusText?: string;
}

interface RsaHashedImportParams extends Algorithm {
    hash: HashAlgorithmIdentifier;
}

interface RsaHashedKeyAlgorithm extends RsaKeyAlgorithm {
    hash: KeyAlgorithm;
}

interface RsaHashedKeyGenParams extends RsaKeyGenParams {
    hash: HashAlgorithmIdentifier;
}

interface RsaKeyAlgorithm extends KeyAlgorithm {
    modulusLength: number;
    publicExponent: BigInteger;
}

interface RsaKeyGenParams extends Algorithm {
    modulusLength: number;
    publicExponent: BigInteger;
}

interface RsaOaepParams extends Algorithm {
    label?: BufferSource;
}

interface RsaOtherPrimesInfo {
    d?: string;
    r?: string;
    t?: string;
}

interface RsaPssParams extends Algorithm {
    saltLength: number;
}

interface SVGBoundingBoxOptions {
    clipped?: boolean;
    fill?: boolean;
    markers?: boolean;
    stroke?: boolean;
}

interface ScrollIntoViewOptions extends ScrollOptions {
    block?: ScrollLogicalPosition;
    inline?: ScrollLogicalPosition;
}

interface ScrollOptions {
    behavior?: ScrollBehavior;
}

interface ScrollToOptions extends ScrollOptions {
    left?: number;
    top?: number;
}

interface SecurityPolicyViolationEventInit extends EventInit {
    blockedURI?: string;
    columnNumber?: number;
    disposition: SecurityPolicyViolationEventDisposition;
    documentURI: string;
    effectiveDirective: string;
    lineNumber?: number;
    originalPolicy: string;
    referrer?: string;
    sample?: string;
    sourceFile?: string;
    statusCode: number;
    violatedDirective: string;
}

interface ShadowRootInit {
    delegatesFocus?: boolean;
    mode: ShadowRootMode;
    slotAssignment?: SlotAssignmentMode;
}

interface ShareData {
    files?: File[];
    text?: string;
    title?: string;
    url?: string;
}

interface SpeechSynthesisErrorEventInit extends SpeechSynthesisEventInit {
    error: SpeechSynthesisErrorCode;
}

interface SpeechSynthesisEventInit extends EventInit {
    charIndex?: number;
    charLength?: number;
    elapsedTime?: number;
    name?: string;
    utterance: SpeechSynthesisUtterance;
}

interface StaticRangeInit {
    endContainer: Node;
    endOffset: number;
    startContainer: Node;
    startOffset: number;
}

interface StereoPannerOptions extends AudioNodeOptions {
    pan?: number;
}

interface StorageEstimate {
    quota?: number;
    usage?: number;
}

interface StorageEventInit extends EventInit {
    key?: string | null;
    newValue?: string | null;
    oldValue?: string | null;
    storageArea?: Storage | null;
    url?: string;
}

interface StreamPipeOptions {
    preventAbort?: boolean;
    preventCancel?: boolean;
    /**
     * Pipes this readable stream to a given writable stream destination. The way in which the piping process behaves under various error conditions can be customized with a number of passed options. It returns a promise that fulfills when the piping process completes successfully, or rejects if any errors were encountered.
     *
     * Piping a stream will lock it for the duration of the pipe, preventing any other consumer from acquiring a reader.
     *
     * Errors and closures of the source and destination streams propagate as follows:
     *
     * An error in this source readable stream will abort destination, unless preventAbort is truthy. The returned promise will be rejected with the source's error, or with any error that occurs during aborting the destination.
     *
     * An error in destination will cancel this source readable stream, unless preventCancel is truthy. The returned promise will be rejected with the destination's error, or with any error that occurs during canceling the source.
     *
     * When this source readable stream closes, destination will be closed, unless preventClose is truthy. The returned promise will be fulfilled once this process completes, unless an error is encountered while closing the destination, in which case it will be rejected with that error.
     *
     * If destination starts out closed or closing, this source readable stream will be canceled, unless preventCancel is true. The returned promise will be rejected with an error indicating piping to a closed stream failed, or with any error that occurs during canceling the source.
     *
     * The signal option can be set to an AbortSignal to allow aborting an ongoing pipe operation via the corresponding AbortController. In this case, this source readable stream will be canceled, and destination aborted, unless the respective options preventCancel or preventAbort are set.
     */
    preventClose?: boolean;
    signal?: AbortSignal;
}

interface StructuredSerializeOptions {
    transfer?: Transferable[];
}

interface SubmitEventInit extends EventInit {
    submitter?: HTMLElement | null;
}

interface TextDecodeOptions {
    stream?: boolean;
}

interface TextDecoderOptions {
    fatal?: boolean;
    ignoreBOM?: boolean;
}

interface TextEncoderEncodeIntoResult {
    read: number;
    written: number;
}

interface ToggleEventInit extends EventInit {
    newState?: string;
    oldState?: string;
}

interface TouchEventInit extends EventModifierInit {
    changedTouches?: Touch[];
    targetTouches?: Touch[];
    touches?: Touch[];
}

interface TouchInit {
    altitudeAngle?: number;
    azimuthAngle?: number;
    clientX?: number;
    clientY?: number;
    force?: number;
    identifier: number;
    pageX?: number;
    pageY?: number;
    radiusX?: number;
    radiusY?: number;
    rotationAngle?: number;
    screenX?: number;
    screenY?: number;
    target: EventTarget;
    touchType?: TouchType;
}

interface TrackEventInit extends EventInit {
    track?: TextTrack | null;
}

interface Transformer<I = any, O = any> {
    flush?: TransformerFlushCallback<O>;
    readableType?: undefined;
    start?: TransformerStartCallback<O>;
    transform?: TransformerTransformCallback<I, O>;
    writableType?: undefined;
}

interface TransitionEventInit extends EventInit {
    elapsedTime?: number;
    propertyName?: string;
    pseudoElement?: string;
}

interface UIEventInit extends EventInit {
    detail?: number;
    view?: Window | null;
    /** @deprecated */
    which?: number;
}

interface ULongRange {
    max?: number;
    min?: number;
}

interface UnderlyingByteSource {
    autoAllocateChunkSize?: number;
    cancel?: UnderlyingSourceCancelCallback;
    pull?: (controller: ReadableByteStreamController) => void | PromiseLike<void>;
    start?: (controller: ReadableByteStreamController) => any;
    type: "bytes";
}

interface UnderlyingDefaultSource<R = any> {
    cancel?: UnderlyingSourceCancelCallback;
    pull?: (controller: ReadableStreamDefaultController<R>) => void | PromiseLike<void>;
    start?: (controller: ReadableStreamDefaultController<R>) => any;
    type?: undefined;
}

interface UnderlyingSink<W = any> {
    abort?: UnderlyingSinkAbortCallback;
    close?: UnderlyingSinkCloseCallback;
    start?: UnderlyingSinkStartCallback;
    type?: undefined;
    write?: UnderlyingSinkWriteCallback<W>;
}

interface UnderlyingSource<R = any> {
    autoAllocateChunkSize?: number;
    cancel?: UnderlyingSourceCancelCallback;
    pull?: UnderlyingSourcePullCallback<R>;
    start?: UnderlyingSourceStartCallback<R>;
    type?: ReadableStreamType;
}

interface ValidityStateFlags {
    badInput?: boolean;
    customError?: boolean;
    patternMismatch?: boolean;
    rangeOverflow?: boolean;
    rangeUnderflow?: boolean;
    stepMismatch?: boolean;
    tooLong?: boolean;
    tooShort?: boolean;
    typeMismatch?: boolean;
    valueMissing?: boolean;
}

interface VideoColorSpaceInit {
    fullRange?: boolean | null;
    matrix?: VideoMatrixCoefficients | null;
    primaries?: VideoColorPrimaries | null;
    transfer?: VideoTransferCharacteristics | null;
}

interface VideoConfiguration {
    bitrate: number;
    colorGamut?: ColorGamut;
    contentType: string;
    framerate: number;
    hdrMetadataType?: HdrMetadataType;
    height: number;
    scalabilityMode?: string;
    transferFunction?: TransferFunction;
    width: number;
}

interface VideoDecoderConfig {
    codec: string;
    codedHeight?: number;
    codedWidth?: number;
    colorSpace?: VideoColorSpaceInit;
    description?: BufferSource;
    displayAspectHeight?: number;
    displayAspectWidth?: number;
    hardwareAcceleration?: HardwareAcceleration;
    optimizeForLatency?: boolean;
}

interface VideoDecoderInit {
    error: WebCodecsErrorCallback;
    output: VideoFrameOutputCallback;
}

interface VideoDecoderSupport {
    config?: VideoDecoderConfig;
    supported?: boolean;
}

interface VideoEncoderConfig {
    alpha?: AlphaOption;
    avc?: AvcEncoderConfig;
    bitrate?: number;
    bitrateMode?: VideoEncoderBitrateMode;
    codec: string;
    displayHeight?: number;
    displayWidth?: number;
    framerate?: number;
    hardwareAcceleration?: HardwareAcceleration;
    height: number;
    latencyMode?: LatencyMode;
    scalabilityMode?: string;
    width: number;
}

interface VideoEncoderEncodeOptions {
    keyFrame?: boolean;
}

interface VideoEncoderInit {
    error: WebCodecsErrorCallback;
    output: EncodedVideoChunkOutputCallback;
}

interface VideoEncoderSupport {
    config?: VideoEncoderConfig;
    supported?: boolean;
}

interface VideoFrameBufferInit {
    codedHeight: number;
    codedWidth: number;
    colorSpace?: VideoColorSpaceInit;
    displayHeight?: number;
    displayWidth?: number;
    duration?: number;
    format: VideoPixelFormat;
    layout?: PlaneLayout[];
    timestamp: number;
    visibleRect?: DOMRectInit;
}

interface VideoFrameCallbackMetadata {
    captureTime?: DOMHighResTimeStamp;
    expectedDisplayTime: DOMHighResTimeStamp;
    height: number;
    mediaTime: number;
    presentationTime: DOMHighResTimeStamp;
    presentedFrames: number;
    processingDuration?: number;
    receiveTime?: DOMHighResTimeStamp;
    rtpTimestamp?: number;
    width: number;
}

interface VideoFrameCopyToOptions {
    layout?: PlaneLayout[];
    rect?: DOMRectInit;
}

interface VideoFrameInit {
    alpha?: AlphaOption;
    displayHeight?: number;
    displayWidth?: number;
    duration?: number;
    timestamp?: number;
    visibleRect?: DOMRectInit;
}

interface WaveShaperOptions extends AudioNodeOptions {
    curve?: number[] | Float32Array;
    oversample?: OverSampleType;
}

interface WebGLContextAttributes {
    alpha?: boolean;
    antialias?: boolean;
    depth?: boolean;
    desynchronized?: boolean;
    failIfMajorPerformanceCaveat?: boolean;
    powerPreference?: WebGLPowerPreference;
    premultipliedAlpha?: boolean;
    preserveDrawingBuffer?: boolean;
    stencil?: boolean;
}

interface WebGLContextEventInit extends EventInit {
    statusMessage?: string;
}

interface WebTransportCloseInfo {
    closeCode?: number;
    reason?: string;
}

interface WebTransportErrorOptions {
    source?: WebTransportErrorSource;
    streamErrorCode?: number | null;
}

interface WebTransportHash {
    algorithm?: string;
    value?: BufferSource;
}

interface WebTransportOptions {
    allowPooling?: boolean;
    congestionControl?: WebTransportCongestionControl;
    requireUnreliable?: boolean;
    serverCertificateHashes?: WebTransportHash[];
}

interface WebTransportSendStreamOptions {
    sendOrder?: number | null;
}

interface WheelEventInit extends MouseEventInit {
    deltaMode?: number;
    deltaX?: number;
    deltaY?: number;
    deltaZ?: number;
}

interface WindowPostMessageOptions extends StructuredSerializeOptions {
    targetOrigin?: string;
}

interface WorkerOptions {
    credentials?: RequestCredentials;
    name?: string;
    type?: WorkerType;
}

interface WorkletOptions {
    credentials?: RequestCredentials;
}

interface WriteParams {
    data?: BufferSource | Blob | string | null;
    position?: number | null;
    size?: number | null;
    type: WriteCommandType;
}

type NodeFilter = ((node: Node) => number) | { acceptNode(node: Node): number; };

declare var NodeFilter: {
    readonly FILTER_ACCEPT: 1;
    readonly FILTER_REJECT: 2;
    readonly FILTER_SKIP: 3;
    readonly SHOW_ALL: 0xFFFFFFFF;
    readonly SHOW_ELEMENT: 0x1;
    readonly SHOW_ATTRIBUTE: 0x2;
    readonly SHOW_TEXT: 0x4;
    readonly SHOW_CDATA_SECTION: 0x8;
    readonly SHOW_ENTITY_REFERENCE: 0x10;
    readonly SHOW_ENTITY: 0x20;
    readonly SHOW_PROCESSING_INSTRUCTION: 0x40;
    readonly SHOW_COMMENT: 0x80;
    readonly SHOW_DOCUMENT: 0x100;
    readonly SHOW_DOCUMENT_TYPE: 0x200;
    readonly SHOW_DOCUMENT_FRAGMENT: 0x400;
    readonly SHOW_NOTATION: 0x800;
};

type XPathNSResolver = ((prefix: string | null) => string | null) | { lookupNamespaceURI(prefix: string | null): string | null; };

/**
 * The ANGLE_instanced_arrays extension is part of the WebGL API and allows to draw the same object, or groups of similar objects multiple times, if they share the same vertex data, primitive count and type.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ANGLE_instanced_arrays)
 */
interface ANGLE_instanced_arrays {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ANGLE_instanced_arrays/drawArraysInstancedANGLE) */
    drawArraysInstancedANGLE(mode: GLenum, first: GLint, count: GLsizei, primcount: GLsizei): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ANGLE_instanced_arrays/drawElementsInstancedANGLE) */
    drawElementsInstancedANGLE(mode: GLenum, count: GLsizei, type: GLenum, offset: GLintptr, primcount: GLsizei): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ANGLE_instanced_arrays/vertexAttribDivisorANGLE) */
    vertexAttribDivisorANGLE(index: GLuint, divisor: GLuint): void;
    readonly VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE: 0x88FE;
}

interface ARIAMixin {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaAtomic) */
    ariaAtomic: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaAutoComplete) */
    ariaAutoComplete: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaBusy) */
    ariaBusy: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaChecked) */
    ariaChecked: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaColCount) */
    ariaColCount: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaColIndex) */
    ariaColIndex: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaColSpan) */
    ariaColSpan: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaCurrent) */
    ariaCurrent: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaDisabled) */
    ariaDisabled: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaExpanded) */
    ariaExpanded: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaHasPopup) */
    ariaHasPopup: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaHidden) */
    ariaHidden: string | null;
    ariaInvalid: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaKeyShortcuts) */
    ariaKeyShortcuts: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaLabel) */
    ariaLabel: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaLevel) */
    ariaLevel: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaLive) */
    ariaLive: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaModal) */
    ariaModal: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaMultiLine) */
    ariaMultiLine: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaMultiSelectable) */
    ariaMultiSelectable: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaOrientation) */
    ariaOrientation: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaPlaceholder) */
    ariaPlaceholder: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaPosInSet) */
    ariaPosInSet: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaPressed) */
    ariaPressed: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaReadOnly) */
    ariaReadOnly: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaRequired) */
    ariaRequired: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaRoleDescription) */
    ariaRoleDescription: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaRowCount) */
    ariaRowCount: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaRowIndex) */
    ariaRowIndex: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaRowSpan) */
    ariaRowSpan: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaSelected) */
    ariaSelected: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaSetSize) */
    ariaSetSize: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaSort) */
    ariaSort: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaValueMax) */
    ariaValueMax: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaValueMin) */
    ariaValueMin: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaValueNow) */
    ariaValueNow: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/ariaValueText) */
    ariaValueText: string | null;
    role: string | null;
}

/**
 * A controller object that allows you to abort one or more DOM requests as and when desired.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AbortController)
 */
interface AbortController {
    /**
     * Returns the AbortSignal object associated with this object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AbortController/signal)
     */
    readonly signal: AbortSignal;
    /**
     * Invoking this method will set this object's AbortSignal's aborted flag and signal to any observers that the associated activity is to be aborted.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AbortController/abort)
     */
    abort(reason?: any): void;
}

declare var AbortController: {
    prototype: AbortController;
    new(): AbortController;
};

interface AbortSignalEventMap {
    "abort": Event;
}

/**
 * A signal object that allows you to communicate with a DOM request (such as a Fetch) and abort it if required via an AbortController object.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AbortSignal)
 */
interface AbortSignal extends EventTarget {
    /**
     * Returns true if this AbortSignal's AbortController has signaled to abort, and false otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AbortSignal/aborted)
     */
    readonly aborted: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AbortSignal/abort_event) */
    onabort: ((this: AbortSignal, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AbortSignal/reason) */
    readonly reason: any;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AbortSignal/throwIfAborted) */
    throwIfAborted(): void;
    addEventListener<K extends keyof AbortSignalEventMap>(type: K, listener: (this: AbortSignal, ev: AbortSignalEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof AbortSignalEventMap>(type: K, listener: (this: AbortSignal, ev: AbortSignalEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var AbortSignal: {
    prototype: AbortSignal;
    new(): AbortSignal;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AbortSignal/abort_static) */
    abort(reason?: any): AbortSignal;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AbortSignal/timeout_static) */
    timeout(milliseconds: number): AbortSignal;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AbstractRange) */
interface AbstractRange {
    /**
     * Returns true if range is collapsed, and false otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AbstractRange/collapsed)
     */
    readonly collapsed: boolean;
    /**
     * Returns range's end node.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AbstractRange/endContainer)
     */
    readonly endContainer: Node;
    /**
     * Returns range's end offset.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AbstractRange/endOffset)
     */
    readonly endOffset: number;
    /**
     * Returns range's start node.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AbstractRange/startContainer)
     */
    readonly startContainer: Node;
    /**
     * Returns range's start offset.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AbstractRange/startOffset)
     */
    readonly startOffset: number;
}

declare var AbstractRange: {
    prototype: AbstractRange;
    new(): AbstractRange;
};

interface AbstractWorkerEventMap {
    "error": ErrorEvent;
}

interface AbstractWorker {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ServiceWorker/error_event) */
    onerror: ((this: AbstractWorker, ev: ErrorEvent) => any) | null;
    addEventListener<K extends keyof AbstractWorkerEventMap>(type: K, listener: (this: AbstractWorker, ev: AbstractWorkerEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof AbstractWorkerEventMap>(type: K, listener: (this: AbstractWorker, ev: AbstractWorkerEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

/**
 * A node able to provide real-time frequency and time-domain analysis information. It is an AudioNode that passes the audio stream unchanged from the input to the output, but allows you to take the generated data, process it, and create audio visualizations.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AnalyserNode)
 */
interface AnalyserNode extends AudioNode {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AnalyserNode/fftSize) */
    fftSize: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AnalyserNode/frequencyBinCount) */
    readonly frequencyBinCount: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AnalyserNode/maxDecibels) */
    maxDecibels: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AnalyserNode/minDecibels) */
    minDecibels: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AnalyserNode/smoothingTimeConstant) */
    smoothingTimeConstant: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AnalyserNode/getByteFrequencyData) */
    getByteFrequencyData(array: Uint8Array): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AnalyserNode/getByteTimeDomainData) */
    getByteTimeDomainData(array: Uint8Array): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AnalyserNode/getFloatFrequencyData) */
    getFloatFrequencyData(array: Float32Array): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AnalyserNode/getFloatTimeDomainData) */
    getFloatTimeDomainData(array: Float32Array): void;
}

declare var AnalyserNode: {
    prototype: AnalyserNode;
    new(context: BaseAudioContext, options?: AnalyserOptions): AnalyserNode;
};

interface Animatable {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/animate) */
    animate(keyframes: Keyframe[] | PropertyIndexedKeyframes | null, options?: number | KeyframeAnimationOptions): Animation;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/getAnimations) */
    getAnimations(options?: GetAnimationsOptions): Animation[];
}

interface AnimationEventMap {
    "cancel": AnimationPlaybackEvent;
    "finish": AnimationPlaybackEvent;
    "remove": Event;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Animation) */
interface Animation extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Animation/currentTime) */
    currentTime: CSSNumberish | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Animation/effect) */
    effect: AnimationEffect | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Animation/finished) */
    readonly finished: Promise<Animation>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Animation/id) */
    id: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Animation/cancel_event) */
    oncancel: ((this: Animation, ev: AnimationPlaybackEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Animation/finish_event) */
    onfinish: ((this: Animation, ev: AnimationPlaybackEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Animation/remove_event) */
    onremove: ((this: Animation, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Animation/pending) */
    readonly pending: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Animation/playState) */
    readonly playState: AnimationPlayState;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Animation/playbackRate) */
    playbackRate: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Animation/ready) */
    readonly ready: Promise<Animation>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Animation/replaceState) */
    readonly replaceState: AnimationReplaceState;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Animation/startTime) */
    startTime: CSSNumberish | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Animation/timeline) */
    timeline: AnimationTimeline | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Animation/cancel) */
    cancel(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Animation/commitStyles) */
    commitStyles(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Animation/finish) */
    finish(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Animation/pause) */
    pause(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Animation/persist) */
    persist(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Animation/play) */
    play(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Animation/reverse) */
    reverse(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Animation/updatePlaybackRate) */
    updatePlaybackRate(playbackRate: number): void;
    addEventListener<K extends keyof AnimationEventMap>(type: K, listener: (this: Animation, ev: AnimationEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof AnimationEventMap>(type: K, listener: (this: Animation, ev: AnimationEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var Animation: {
    prototype: Animation;
    new(effect?: AnimationEffect | null, timeline?: AnimationTimeline | null): Animation;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AnimationEffect) */
interface AnimationEffect {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AnimationEffect/getComputedTiming) */
    getComputedTiming(): ComputedEffectTiming;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AnimationEffect/getTiming) */
    getTiming(): EffectTiming;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AnimationEffect/updateTiming) */
    updateTiming(timing?: OptionalEffectTiming): void;
}

declare var AnimationEffect: {
    prototype: AnimationEffect;
    new(): AnimationEffect;
};

/**
 * Events providing information related to animations.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AnimationEvent)
 */
interface AnimationEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AnimationEvent/animationName) */
    readonly animationName: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AnimationEvent/elapsedTime) */
    readonly elapsedTime: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AnimationEvent/pseudoElement) */
    readonly pseudoElement: string;
}

declare var AnimationEvent: {
    prototype: AnimationEvent;
    new(type: string, animationEventInitDict?: AnimationEventInit): AnimationEvent;
};

interface AnimationFrameProvider {
    cancelAnimationFrame(handle: number): void;
    requestAnimationFrame(callback: FrameRequestCallback): number;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AnimationPlaybackEvent) */
interface AnimationPlaybackEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AnimationPlaybackEvent/currentTime) */
    readonly currentTime: CSSNumberish | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AnimationPlaybackEvent/timelineTime) */
    readonly timelineTime: CSSNumberish | null;
}

declare var AnimationPlaybackEvent: {
    prototype: AnimationPlaybackEvent;
    new(type: string, eventInitDict?: AnimationPlaybackEventInit): AnimationPlaybackEvent;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AnimationTimeline) */
interface AnimationTimeline {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AnimationTimeline/currentTime) */
    readonly currentTime: CSSNumberish | null;
}

declare var AnimationTimeline: {
    prototype: AnimationTimeline;
    new(): AnimationTimeline;
};

/**
 * A DOM element's attribute as an object. In most DOM methods, you will probably directly retrieve the attribute as a string (e.g., Element.getAttribute(), but certain functions (e.g., Element.getAttributeNode()) or means of iterating give Attr types.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Attr)
 */
interface Attr extends Node {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Attr/localName) */
    readonly localName: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Attr/name) */
    readonly name: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Attr/namespaceURI) */
    readonly namespaceURI: string | null;
    readonly ownerDocument: Document;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Attr/ownerElement) */
    readonly ownerElement: Element | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Attr/prefix) */
    readonly prefix: string | null;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Attr/specified)
     */
    readonly specified: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Attr/value) */
    value: string;
}

declare var Attr: {
    prototype: Attr;
    new(): Attr;
};

/**
 * A short audio asset residing in memory, created from an audio file using the AudioContext.decodeAudioData() method, or from raw data using AudioContext.createBuffer(). Once put into an AudioBuffer, the audio can then be played by being passed into an AudioBufferSourceNode.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioBuffer)
 */
interface AudioBuffer {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioBuffer/duration) */
    readonly duration: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioBuffer/length) */
    readonly length: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioBuffer/numberOfChannels) */
    readonly numberOfChannels: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioBuffer/sampleRate) */
    readonly sampleRate: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioBuffer/copyFromChannel) */
    copyFromChannel(destination: Float32Array, channelNumber: number, bufferOffset?: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioBuffer/copyToChannel) */
    copyToChannel(source: Float32Array, channelNumber: number, bufferOffset?: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioBuffer/getChannelData) */
    getChannelData(channel: number): Float32Array;
}

declare var AudioBuffer: {
    prototype: AudioBuffer;
    new(options: AudioBufferOptions): AudioBuffer;
};

/**
 * An AudioScheduledSourceNode which represents an audio source consisting of in-memory audio data, stored in an AudioBuffer. It's especially useful for playing back audio which has particularly stringent timing accuracy requirements, such as for sounds that must match a specific rhythm and can be kept in memory rather than being played from disk or the network.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioBufferSourceNode)
 */
interface AudioBufferSourceNode extends AudioScheduledSourceNode {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioBufferSourceNode/buffer) */
    buffer: AudioBuffer | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioBufferSourceNode/detune) */
    readonly detune: AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioBufferSourceNode/loop) */
    loop: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioBufferSourceNode/loopEnd) */
    loopEnd: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioBufferSourceNode/loopStart) */
    loopStart: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioBufferSourceNode/playbackRate) */
    readonly playbackRate: AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioBufferSourceNode/start) */
    start(when?: number, offset?: number, duration?: number): void;
    addEventListener<K extends keyof AudioScheduledSourceNodeEventMap>(type: K, listener: (this: AudioBufferSourceNode, ev: AudioScheduledSourceNodeEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof AudioScheduledSourceNodeEventMap>(type: K, listener: (this: AudioBufferSourceNode, ev: AudioScheduledSourceNodeEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var AudioBufferSourceNode: {
    prototype: AudioBufferSourceNode;
    new(context: BaseAudioContext, options?: AudioBufferSourceOptions): AudioBufferSourceNode;
};

/**
 * An audio-processing graph built from audio modules linked together, each represented by an AudioNode.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioContext)
 */
interface AudioContext extends BaseAudioContext {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioContext/baseLatency) */
    readonly baseLatency: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioContext/outputLatency) */
    readonly outputLatency: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioContext/close) */
    close(): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioContext/createMediaElementSource) */
    createMediaElementSource(mediaElement: HTMLMediaElement): MediaElementAudioSourceNode;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioContext/createMediaStreamDestination) */
    createMediaStreamDestination(): MediaStreamAudioDestinationNode;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioContext/createMediaStreamSource) */
    createMediaStreamSource(mediaStream: MediaStream): MediaStreamAudioSourceNode;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioContext/getOutputTimestamp) */
    getOutputTimestamp(): AudioTimestamp;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioContext/resume) */
    resume(): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioContext/suspend) */
    suspend(): Promise<void>;
    addEventListener<K extends keyof BaseAudioContextEventMap>(type: K, listener: (this: AudioContext, ev: BaseAudioContextEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof BaseAudioContextEventMap>(type: K, listener: (this: AudioContext, ev: BaseAudioContextEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var AudioContext: {
    prototype: AudioContext;
    new(contextOptions?: AudioContextOptions): AudioContext;
};

/**
 * AudioDestinationNode has no output (as it is the output, no more AudioNode can be linked after it in the audio graph) and one input. The number of channels in the input must be between 0 and the maxChannelCount value or an exception is raised.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioDestinationNode)
 */
interface AudioDestinationNode extends AudioNode {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioDestinationNode/maxChannelCount) */
    readonly maxChannelCount: number;
}

declare var AudioDestinationNode: {
    prototype: AudioDestinationNode;
    new(): AudioDestinationNode;
};

/**
 * The position and orientation of the unique person listening to the audio scene, and is used in audio spatialization. All PannerNodes spatialize in relation to the AudioListener stored in the BaseAudioContext.listener attribute.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioListener)
 */
interface AudioListener {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioListener/forwardX) */
    readonly forwardX: AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioListener/forwardY) */
    readonly forwardY: AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioListener/forwardZ) */
    readonly forwardZ: AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioListener/positionX) */
    readonly positionX: AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioListener/positionY) */
    readonly positionY: AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioListener/positionZ) */
    readonly positionZ: AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioListener/upX) */
    readonly upX: AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioListener/upY) */
    readonly upY: AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioListener/upZ) */
    readonly upZ: AudioParam;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioListener/setOrientation)
     */
    setOrientation(x: number, y: number, z: number, xUp: number, yUp: number, zUp: number): void;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioListener/setPosition)
     */
    setPosition(x: number, y: number, z: number): void;
}

declare var AudioListener: {
    prototype: AudioListener;
    new(): AudioListener;
};

/**
 * A generic interface for representing an audio processing module. Examples include:
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioNode)
 */
interface AudioNode extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioNode/channelCount) */
    channelCount: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioNode/channelCountMode) */
    channelCountMode: ChannelCountMode;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioNode/channelInterpretation) */
    channelInterpretation: ChannelInterpretation;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioNode/context) */
    readonly context: BaseAudioContext;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioNode/numberOfInputs) */
    readonly numberOfInputs: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioNode/numberOfOutputs) */
    readonly numberOfOutputs: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioNode/connect) */
    connect(destinationNode: AudioNode, output?: number, input?: number): AudioNode;
    connect(destinationParam: AudioParam, output?: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioNode/disconnect) */
    disconnect(): void;
    disconnect(output: number): void;
    disconnect(destinationNode: AudioNode): void;
    disconnect(destinationNode: AudioNode, output: number): void;
    disconnect(destinationNode: AudioNode, output: number, input: number): void;
    disconnect(destinationParam: AudioParam): void;
    disconnect(destinationParam: AudioParam, output: number): void;
}

declare var AudioNode: {
    prototype: AudioNode;
    new(): AudioNode;
};

/**
 * The Web Audio API's AudioParam interface represents an audio-related parameter, usually a parameter of an AudioNode (such as GainNode.gain).
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioParam)
 */
interface AudioParam {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioParam/automationRate) */
    automationRate: AutomationRate;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioParam/defaultValue) */
    readonly defaultValue: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioParam/maxValue) */
    readonly maxValue: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioParam/minValue) */
    readonly minValue: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioParam/value) */
    value: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioParam/cancelAndHoldAtTime) */
    cancelAndHoldAtTime(cancelTime: number): AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioParam/cancelScheduledValues) */
    cancelScheduledValues(cancelTime: number): AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioParam/exponentialRampToValueAtTime) */
    exponentialRampToValueAtTime(value: number, endTime: number): AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioParam/linearRampToValueAtTime) */
    linearRampToValueAtTime(value: number, endTime: number): AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioParam/setTargetAtTime) */
    setTargetAtTime(target: number, startTime: number, timeConstant: number): AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioParam/setValueAtTime) */
    setValueAtTime(value: number, startTime: number): AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioParam/setValueCurveAtTime) */
    setValueCurveAtTime(values: number[] | Float32Array, startTime: number, duration: number): AudioParam;
}

declare var AudioParam: {
    prototype: AudioParam;
    new(): AudioParam;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioParamMap) */
interface AudioParamMap {
    forEach(callbackfn: (value: AudioParam, key: string, parent: AudioParamMap) => void, thisArg?: any): void;
}

declare var AudioParamMap: {
    prototype: AudioParamMap;
    new(): AudioParamMap;
};

/**
 * The Web Audio API events that occur when a ScriptProcessorNode input buffer is ready to be processed.
 * @deprecated As of the August 29 2014 Web Audio API spec publication, this feature has been marked as deprecated, and is soon to be replaced by AudioWorklet.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioProcessingEvent)
 */
interface AudioProcessingEvent extends Event {
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioProcessingEvent/inputBuffer)
     */
    readonly inputBuffer: AudioBuffer;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioProcessingEvent/outputBuffer)
     */
    readonly outputBuffer: AudioBuffer;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioProcessingEvent/playbackTime)
     */
    readonly playbackTime: number;
}

/** @deprecated */
declare var AudioProcessingEvent: {
    prototype: AudioProcessingEvent;
    new(type: string, eventInitDict: AudioProcessingEventInit): AudioProcessingEvent;
};

interface AudioScheduledSourceNodeEventMap {
    "ended": Event;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioScheduledSourceNode) */
interface AudioScheduledSourceNode extends AudioNode {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioScheduledSourceNode/ended_event) */
    onended: ((this: AudioScheduledSourceNode, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioScheduledSourceNode/start) */
    start(when?: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioScheduledSourceNode/stop) */
    stop(when?: number): void;
    addEventListener<K extends keyof AudioScheduledSourceNodeEventMap>(type: K, listener: (this: AudioScheduledSourceNode, ev: AudioScheduledSourceNodeEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof AudioScheduledSourceNodeEventMap>(type: K, listener: (this: AudioScheduledSourceNode, ev: AudioScheduledSourceNodeEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var AudioScheduledSourceNode: {
    prototype: AudioScheduledSourceNode;
    new(): AudioScheduledSourceNode;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioWorklet)
 */
interface AudioWorklet extends Worklet {
}

declare var AudioWorklet: {
    prototype: AudioWorklet;
    new(): AudioWorklet;
};

interface AudioWorkletNodeEventMap {
    "processorerror": Event;
}

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioWorkletNode)
 */
interface AudioWorkletNode extends AudioNode {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioWorkletNode/processorerror_event) */
    onprocessorerror: ((this: AudioWorkletNode, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioWorkletNode/parameters) */
    readonly parameters: AudioParamMap;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AudioWorkletNode/port) */
    readonly port: MessagePort;
    addEventListener<K extends keyof AudioWorkletNodeEventMap>(type: K, listener: (this: AudioWorkletNode, ev: AudioWorkletNodeEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof AudioWorkletNodeEventMap>(type: K, listener: (this: AudioWorkletNode, ev: AudioWorkletNodeEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var AudioWorkletNode: {
    prototype: AudioWorkletNode;
    new(context: BaseAudioContext, name: string, options?: AudioWorkletNodeOptions): AudioWorkletNode;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AuthenticatorAssertionResponse)
 */
interface AuthenticatorAssertionResponse extends AuthenticatorResponse {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AuthenticatorAssertionResponse/authenticatorData) */
    readonly authenticatorData: ArrayBuffer;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AuthenticatorAssertionResponse/signature) */
    readonly signature: ArrayBuffer;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AuthenticatorAssertionResponse/userHandle) */
    readonly userHandle: ArrayBuffer | null;
}

declare var AuthenticatorAssertionResponse: {
    prototype: AuthenticatorAssertionResponse;
    new(): AuthenticatorAssertionResponse;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AuthenticatorAttestationResponse)
 */
interface AuthenticatorAttestationResponse extends AuthenticatorResponse {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AuthenticatorAttestationResponse/attestationObject) */
    readonly attestationObject: ArrayBuffer;
    getAuthenticatorData(): ArrayBuffer;
    getPublicKey(): ArrayBuffer | null;
    getPublicKeyAlgorithm(): COSEAlgorithmIdentifier;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AuthenticatorAttestationResponse/getTransports) */
    getTransports(): string[];
}

declare var AuthenticatorAttestationResponse: {
    prototype: AuthenticatorAttestationResponse;
    new(): AuthenticatorAttestationResponse;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/AuthenticatorResponse)
 */
interface AuthenticatorResponse {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/AuthenticatorResponse/clientDataJSON) */
    readonly clientDataJSON: ArrayBuffer;
}

declare var AuthenticatorResponse: {
    prototype: AuthenticatorResponse;
    new(): AuthenticatorResponse;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BarProp) */
interface BarProp {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BarProp/visible) */
    readonly visible: boolean;
}

declare var BarProp: {
    prototype: BarProp;
    new(): BarProp;
};

interface BaseAudioContextEventMap {
    "statechange": Event;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BaseAudioContext) */
interface BaseAudioContext extends EventTarget {
    /**
     * Available only in secure contexts.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/BaseAudioContext/audioWorklet)
     */
    readonly audioWorklet: AudioWorklet;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BaseAudioContext/currentTime) */
    readonly currentTime: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BaseAudioContext/destination) */
    readonly destination: AudioDestinationNode;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BaseAudioContext/listener) */
    readonly listener: AudioListener;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BaseAudioContext/statechange_event) */
    onstatechange: ((this: BaseAudioContext, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BaseAudioContext/sampleRate) */
    readonly sampleRate: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BaseAudioContext/state) */
    readonly state: AudioContextState;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BaseAudioContext/createAnalyser) */
    createAnalyser(): AnalyserNode;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BaseAudioContext/createBiquadFilter) */
    createBiquadFilter(): BiquadFilterNode;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BaseAudioContext/createBuffer) */
    createBuffer(numberOfChannels: number, length: number, sampleRate: number): AudioBuffer;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BaseAudioContext/createBufferSource) */
    createBufferSource(): AudioBufferSourceNode;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BaseAudioContext/createChannelMerger) */
    createChannelMerger(numberOfInputs?: number): ChannelMergerNode;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BaseAudioContext/createChannelSplitter) */
    createChannelSplitter(numberOfOutputs?: number): ChannelSplitterNode;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BaseAudioContext/createConstantSource) */
    createConstantSource(): ConstantSourceNode;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BaseAudioContext/createConvolver) */
    createConvolver(): ConvolverNode;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BaseAudioContext/createDelay) */
    createDelay(maxDelayTime?: number): DelayNode;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BaseAudioContext/createDynamicsCompressor) */
    createDynamicsCompressor(): DynamicsCompressorNode;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BaseAudioContext/createGain) */
    createGain(): GainNode;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BaseAudioContext/createIIRFilter) */
    createIIRFilter(feedforward: number[], feedback: number[]): IIRFilterNode;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BaseAudioContext/createOscillator) */
    createOscillator(): OscillatorNode;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BaseAudioContext/createPanner) */
    createPanner(): PannerNode;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BaseAudioContext/createPeriodicWave) */
    createPeriodicWave(real: number[] | Float32Array, imag: number[] | Float32Array, constraints?: PeriodicWaveConstraints): PeriodicWave;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/BaseAudioContext/createScriptProcessor)
     */
    createScriptProcessor(bufferSize?: number, numberOfInputChannels?: number, numberOfOutputChannels?: number): ScriptProcessorNode;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BaseAudioContext/createStereoPanner) */
    createStereoPanner(): StereoPannerNode;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BaseAudioContext/createWaveShaper) */
    createWaveShaper(): WaveShaperNode;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BaseAudioContext/decodeAudioData) */
    decodeAudioData(audioData: ArrayBuffer, successCallback?: DecodeSuccessCallback | null, errorCallback?: DecodeErrorCallback | null): Promise<AudioBuffer>;
    addEventListener<K extends keyof BaseAudioContextEventMap>(type: K, listener: (this: BaseAudioContext, ev: BaseAudioContextEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof BaseAudioContextEventMap>(type: K, listener: (this: BaseAudioContext, ev: BaseAudioContextEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var BaseAudioContext: {
    prototype: BaseAudioContext;
    new(): BaseAudioContext;
};

/**
 * The beforeunload event is fired when the window, the document and its resources are about to be unloaded.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/BeforeUnloadEvent)
 */
interface BeforeUnloadEvent extends Event {
    returnValue: any;
}

declare var BeforeUnloadEvent: {
    prototype: BeforeUnloadEvent;
    new(): BeforeUnloadEvent;
};

/**
 * A simple low-order filter, and is created using the AudioContext.createBiquadFilter() method. It is an AudioNode that can represent different kinds of filters, tone control devices, and graphic equalizers.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/BiquadFilterNode)
 */
interface BiquadFilterNode extends AudioNode {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BiquadFilterNode/Q) */
    readonly Q: AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BiquadFilterNode/detune) */
    readonly detune: AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BiquadFilterNode/frequency) */
    readonly frequency: AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BiquadFilterNode/gain) */
    readonly gain: AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BiquadFilterNode/type) */
    type: BiquadFilterType;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BiquadFilterNode/getFrequencyResponse) */
    getFrequencyResponse(frequencyHz: Float32Array, magResponse: Float32Array, phaseResponse: Float32Array): void;
}

declare var BiquadFilterNode: {
    prototype: BiquadFilterNode;
    new(context: BaseAudioContext, options?: BiquadFilterOptions): BiquadFilterNode;
};

/**
 * A file-like object of immutable, raw data. Blobs represent data that isn't necessarily in a JavaScript-native format. The File interface is based on Blob, inheriting blob functionality and expanding it to support files on the user's system.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Blob)
 */
interface Blob {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Blob/size) */
    readonly size: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Blob/type) */
    readonly type: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Blob/arrayBuffer) */
    arrayBuffer(): Promise<ArrayBuffer>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Blob/slice) */
    slice(start?: number, end?: number, contentType?: string): Blob;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Blob/stream) */
    stream(): ReadableStream<Uint8Array>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Blob/text) */
    text(): Promise<string>;
}

declare var Blob: {
    prototype: Blob;
    new(blobParts?: BlobPart[], options?: BlobPropertyBag): Blob;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BlobEvent) */
interface BlobEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BlobEvent/data) */
    readonly data: Blob;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BlobEvent/timecode) */
    readonly timecode: DOMHighResTimeStamp;
}

declare var BlobEvent: {
    prototype: BlobEvent;
    new(type: string, eventInitDict: BlobEventInit): BlobEvent;
};

interface Body {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Request/body) */
    readonly body: ReadableStream<Uint8Array> | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Request/bodyUsed) */
    readonly bodyUsed: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Request/arrayBuffer) */
    arrayBuffer(): Promise<ArrayBuffer>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Request/blob) */
    blob(): Promise<Blob>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Request/formData) */
    formData(): Promise<FormData>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Request/json) */
    json(): Promise<any>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Request/text) */
    text(): Promise<string>;
}

interface BroadcastChannelEventMap {
    "message": MessageEvent;
    "messageerror": MessageEvent;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BroadcastChannel) */
interface BroadcastChannel extends EventTarget {
    /**
     * Returns the channel name (as passed to the constructor).
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/BroadcastChannel/name)
     */
    readonly name: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BroadcastChannel/message_event) */
    onmessage: ((this: BroadcastChannel, ev: MessageEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/BroadcastChannel/messageerror_event) */
    onmessageerror: ((this: BroadcastChannel, ev: MessageEvent) => any) | null;
    /**
     * Closes the BroadcastChannel object, opening it up to garbage collection.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/BroadcastChannel/close)
     */
    close(): void;
    /**
     * Sends the given message to other BroadcastChannel objects set up for this channel. Messages can be structured objects, e.g. nested objects and arrays.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/BroadcastChannel/postMessage)
     */
    postMessage(message: any): void;
    addEventListener<K extends keyof BroadcastChannelEventMap>(type: K, listener: (this: BroadcastChannel, ev: BroadcastChannelEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof BroadcastChannelEventMap>(type: K, listener: (this: BroadcastChannel, ev: BroadcastChannelEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var BroadcastChannel: {
    prototype: BroadcastChannel;
    new(name: string): BroadcastChannel;
};

/**
 * This Streams API interface provides a built-in byte length queuing strategy that can be used when constructing streams.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ByteLengthQueuingStrategy)
 */
interface ByteLengthQueuingStrategy extends QueuingStrategy<ArrayBufferView> {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ByteLengthQueuingStrategy/highWaterMark) */
    readonly highWaterMark: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ByteLengthQueuingStrategy/size) */
    readonly size: QueuingStrategySize<ArrayBufferView>;
}

declare var ByteLengthQueuingStrategy: {
    prototype: ByteLengthQueuingStrategy;
    new(init: QueuingStrategyInit): ByteLengthQueuingStrategy;
};

/**
 * A CDATA section that can be used within XML to include extended portions of unescaped text. The symbols < and & don’t need escaping as they normally do when inside a CDATA section.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CDATASection)
 */
interface CDATASection extends Text {
}

declare var CDATASection: {
    prototype: CDATASection;
    new(): CDATASection;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSAnimation) */
interface CSSAnimation extends Animation {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSAnimation/animationName) */
    readonly animationName: string;
    addEventListener<K extends keyof AnimationEventMap>(type: K, listener: (this: CSSAnimation, ev: AnimationEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof AnimationEventMap>(type: K, listener: (this: CSSAnimation, ev: AnimationEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var CSSAnimation: {
    prototype: CSSAnimation;
    new(): CSSAnimation;
};

/**
 * A single condition CSS at-rule, which consists of a condition and a statement block. It is a child of CSSGroupingRule.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSConditionRule)
 */
interface CSSConditionRule extends CSSGroupingRule {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSConditionRule/conditionText) */
    readonly conditionText: string;
}

declare var CSSConditionRule: {
    prototype: CSSConditionRule;
    new(): CSSConditionRule;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSContainerRule) */
interface CSSContainerRule extends CSSConditionRule {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSContainerRule/containerName) */
    readonly containerName: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSContainerRule/containerQuery) */
    readonly containerQuery: string;
}

declare var CSSContainerRule: {
    prototype: CSSContainerRule;
    new(): CSSContainerRule;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSCounterStyleRule) */
interface CSSCounterStyleRule extends CSSRule {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSCounterStyleRule/additiveSymbols) */
    additiveSymbols: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSCounterStyleRule/fallback) */
    fallback: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSCounterStyleRule/name) */
    name: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSCounterStyleRule/negative) */
    negative: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSCounterStyleRule/pad) */
    pad: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSCounterStyleRule/prefix) */
    prefix: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSCounterStyleRule/range) */
    range: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSCounterStyleRule/speakAs) */
    speakAs: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSCounterStyleRule/suffix) */
    suffix: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSCounterStyleRule/symbols) */
    symbols: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSCounterStyleRule/system) */
    system: string;
}

declare var CSSCounterStyleRule: {
    prototype: CSSCounterStyleRule;
    new(): CSSCounterStyleRule;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSFontFaceRule) */
interface CSSFontFaceRule extends CSSRule {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSFontFaceRule/style) */
    readonly style: CSSStyleDeclaration;
}

declare var CSSFontFaceRule: {
    prototype: CSSFontFaceRule;
    new(): CSSFontFaceRule;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSFontFeatureValuesRule) */
interface CSSFontFeatureValuesRule extends CSSRule {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSFontFeatureValuesRule/fontFamily) */
    fontFamily: string;
}

declare var CSSFontFeatureValuesRule: {
    prototype: CSSFontFeatureValuesRule;
    new(): CSSFontFeatureValuesRule;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSFontPaletteValuesRule) */
interface CSSFontPaletteValuesRule extends CSSRule {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSFontPaletteValuesRule/basePalette) */
    readonly basePalette: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSFontPaletteValuesRule/fontFamily) */
    readonly fontFamily: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSFontPaletteValuesRule/name) */
    readonly name: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSFontPaletteValuesRule/overrideColors) */
    readonly overrideColors: string;
}

declare var CSSFontPaletteValuesRule: {
    prototype: CSSFontPaletteValuesRule;
    new(): CSSFontPaletteValuesRule;
};

/**
 * Any CSS at-rule that contains other rules nested within it.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSGroupingRule)
 */
interface CSSGroupingRule extends CSSRule {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSGroupingRule/cssRules) */
    readonly cssRules: CSSRuleList;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSGroupingRule/deleteRule) */
    deleteRule(index: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSGroupingRule/insertRule) */
    insertRule(rule: string, index?: number): number;
}

declare var CSSGroupingRule: {
    prototype: CSSGroupingRule;
    new(): CSSGroupingRule;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSImageValue) */
interface CSSImageValue extends CSSStyleValue {
}

declare var CSSImageValue: {
    prototype: CSSImageValue;
    new(): CSSImageValue;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSImportRule) */
interface CSSImportRule extends CSSRule {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSImportRule/href) */
    readonly href: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSImportRule/layerName) */
    readonly layerName: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSImportRule/media) */
    readonly media: MediaList;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSImportRule/styleSheet) */
    readonly styleSheet: CSSStyleSheet | null;
}

declare var CSSImportRule: {
    prototype: CSSImportRule;
    new(): CSSImportRule;
};

/**
 * An object representing a set of style for a given keyframe. It corresponds to the contains of a single keyframe of a @keyframes at-rule. It implements the CSSRule interface with a type value of 8 (CSSRule.KEYFRAME_RULE).
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSKeyframeRule)
 */
interface CSSKeyframeRule extends CSSRule {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSKeyframeRule/keyText) */
    keyText: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSKeyframeRule/style) */
    readonly style: CSSStyleDeclaration;
}

declare var CSSKeyframeRule: {
    prototype: CSSKeyframeRule;
    new(): CSSKeyframeRule;
};

/**
 * An object representing a complete set of keyframes for a CSS animation. It corresponds to the contains of a whole @keyframes at-rule. It implements the CSSRule interface with a type value of 7 (CSSRule.KEYFRAMES_RULE).
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSKeyframesRule)
 */
interface CSSKeyframesRule extends CSSRule {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSKeyframesRule/cssRules) */
    readonly cssRules: CSSRuleList;
    readonly length: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSKeyframesRule/name) */
    name: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSKeyframesRule/appendRule) */
    appendRule(rule: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSKeyframesRule/deleteRule) */
    deleteRule(select: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSKeyframesRule/findRule) */
    findRule(select: string): CSSKeyframeRule | null;
    [index: number]: CSSKeyframeRule;
}

declare var CSSKeyframesRule: {
    prototype: CSSKeyframesRule;
    new(): CSSKeyframesRule;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSKeywordValue) */
interface CSSKeywordValue extends CSSStyleValue {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSKeywordValue/value) */
    value: string;
}

declare var CSSKeywordValue: {
    prototype: CSSKeywordValue;
    new(value: string): CSSKeywordValue;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSLayerBlockRule) */
interface CSSLayerBlockRule extends CSSGroupingRule {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSLayerBlockRule/name) */
    readonly name: string;
}

declare var CSSLayerBlockRule: {
    prototype: CSSLayerBlockRule;
    new(): CSSLayerBlockRule;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSLayerStatementRule) */
interface CSSLayerStatementRule extends CSSRule {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSLayerStatementRule/nameList) */
    readonly nameList: ReadonlyArray<string>;
}

declare var CSSLayerStatementRule: {
    prototype: CSSLayerStatementRule;
    new(): CSSLayerStatementRule;
};

interface CSSMathClamp extends CSSMathValue {
    readonly lower: CSSNumericValue;
    readonly upper: CSSNumericValue;
    readonly value: CSSNumericValue;
}

declare var CSSMathClamp: {
    prototype: CSSMathClamp;
    new(lower: CSSNumberish, value: CSSNumberish, upper: CSSNumberish): CSSMathClamp;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSMathInvert) */
interface CSSMathInvert extends CSSMathValue {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSMathInvert/value) */
    readonly value: CSSNumericValue;
}

declare var CSSMathInvert: {
    prototype: CSSMathInvert;
    new(arg: CSSNumberish): CSSMathInvert;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSMathMax) */
interface CSSMathMax extends CSSMathValue {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSMathMax/values) */
    readonly values: CSSNumericArray;
}

declare var CSSMathMax: {
    prototype: CSSMathMax;
    new(...args: CSSNumberish[]): CSSMathMax;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSMathMin) */
interface CSSMathMin extends CSSMathValue {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSMathMin/values) */
    readonly values: CSSNumericArray;
}

declare var CSSMathMin: {
    prototype: CSSMathMin;
    new(...args: CSSNumberish[]): CSSMathMin;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSMathNegate) */
interface CSSMathNegate extends CSSMathValue {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSMathNegate/value) */
    readonly value: CSSNumericValue;
}

declare var CSSMathNegate: {
    prototype: CSSMathNegate;
    new(arg: CSSNumberish): CSSMathNegate;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSMathProduct) */
interface CSSMathProduct extends CSSMathValue {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSMathProduct/values) */
    readonly values: CSSNumericArray;
}

declare var CSSMathProduct: {
    prototype: CSSMathProduct;
    new(...args: CSSNumberish[]): CSSMathProduct;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSMathSum) */
interface CSSMathSum extends CSSMathValue {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSMathSum/values) */
    readonly values: CSSNumericArray;
}

declare var CSSMathSum: {
    prototype: CSSMathSum;
    new(...args: CSSNumberish[]): CSSMathSum;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSMathValue) */
interface CSSMathValue extends CSSNumericValue {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSMathValue/operator) */
    readonly operator: CSSMathOperator;
}

declare var CSSMathValue: {
    prototype: CSSMathValue;
    new(): CSSMathValue;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSMatrixComponent) */
interface CSSMatrixComponent extends CSSTransformComponent {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSMatrixComponent/matrix) */
    matrix: DOMMatrix;
}

declare var CSSMatrixComponent: {
    prototype: CSSMatrixComponent;
    new(matrix: DOMMatrixReadOnly, options?: CSSMatrixComponentOptions): CSSMatrixComponent;
};

/**
 * A single CSS @media rule. It implements the CSSConditionRule interface, and therefore the CSSGroupingRule and the CSSRule interface with a type value of 4 (CSSRule.MEDIA_RULE).
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSMediaRule)
 */
interface CSSMediaRule extends CSSConditionRule {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSMediaRule/media) */
    readonly media: MediaList;
}

declare var CSSMediaRule: {
    prototype: CSSMediaRule;
    new(): CSSMediaRule;
};

/**
 * An object representing a single CSS @namespace at-rule. It implements the CSSRule interface, with a type value of 10 (CSSRule.NAMESPACE_RULE).
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSNamespaceRule)
 */
interface CSSNamespaceRule extends CSSRule {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSNamespaceRule/namespaceURI) */
    readonly namespaceURI: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSNamespaceRule/prefix) */
    readonly prefix: string;
}

declare var CSSNamespaceRule: {
    prototype: CSSNamespaceRule;
    new(): CSSNamespaceRule;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSNumericArray) */
interface CSSNumericArray {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSNumericArray/length) */
    readonly length: number;
    forEach(callbackfn: (value: CSSNumericValue, key: number, parent: CSSNumericArray) => void, thisArg?: any): void;
    [index: number]: CSSNumericValue;
}

declare var CSSNumericArray: {
    prototype: CSSNumericArray;
    new(): CSSNumericArray;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSNumericValue) */
interface CSSNumericValue extends CSSStyleValue {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSNumericValue/add) */
    add(...values: CSSNumberish[]): CSSNumericValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSNumericValue/div) */
    div(...values: CSSNumberish[]): CSSNumericValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSNumericValue/equals) */
    equals(...value: CSSNumberish[]): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSNumericValue/max) */
    max(...values: CSSNumberish[]): CSSNumericValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSNumericValue/min) */
    min(...values: CSSNumberish[]): CSSNumericValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSNumericValue/mul) */
    mul(...values: CSSNumberish[]): CSSNumericValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSNumericValue/sub) */
    sub(...values: CSSNumberish[]): CSSNumericValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSNumericValue/to) */
    to(unit: string): CSSUnitValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSNumericValue/toSum) */
    toSum(...units: string[]): CSSMathSum;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSNumericValue/type) */
    type(): CSSNumericType;
}

declare var CSSNumericValue: {
    prototype: CSSNumericValue;
    new(): CSSNumericValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSNumericValue/parse_static) */
    parse(cssText: string): CSSNumericValue;
};

/**
 * CSSPageRule is an interface representing a single CSS @page rule. It implements the CSSRule interface with a type value of 6 (CSSRule.PAGE_RULE).
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSPageRule)
 */
interface CSSPageRule extends CSSGroupingRule {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSPageRule/selectorText) */
    selectorText: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSPageRule/style) */
    readonly style: CSSStyleDeclaration;
}

declare var CSSPageRule: {
    prototype: CSSPageRule;
    new(): CSSPageRule;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSPerspective) */
interface CSSPerspective extends CSSTransformComponent {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSPerspective/length) */
    length: CSSPerspectiveValue;
}

declare var CSSPerspective: {
    prototype: CSSPerspective;
    new(length: CSSPerspectiveValue): CSSPerspective;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSPropertyRule) */
interface CSSPropertyRule extends CSSRule {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSPropertyRule/inherits) */
    readonly inherits: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSPropertyRule/initialValue) */
    readonly initialValue: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSPropertyRule/name) */
    readonly name: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSPropertyRule/syntax) */
    readonly syntax: string;
}

declare var CSSPropertyRule: {
    prototype: CSSPropertyRule;
    new(): CSSPropertyRule;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSRotate) */
interface CSSRotate extends CSSTransformComponent {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSRotate/angle) */
    angle: CSSNumericValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSRotate/x) */
    x: CSSNumberish;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSRotate/y) */
    y: CSSNumberish;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSRotate/z) */
    z: CSSNumberish;
}

declare var CSSRotate: {
    prototype: CSSRotate;
    new(angle: CSSNumericValue): CSSRotate;
    new(x: CSSNumberish, y: CSSNumberish, z: CSSNumberish, angle: CSSNumericValue): CSSRotate;
};

/**
 * A single CSS rule. There are several types of rules, listed in the Type constants section below.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSRule)
 */
interface CSSRule {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSRule/cssText) */
    cssText: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSRule/parentRule) */
    readonly parentRule: CSSRule | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSRule/parentStyleSheet) */
    readonly parentStyleSheet: CSSStyleSheet | null;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSRule/type)
     */
    readonly type: number;
    readonly STYLE_RULE: 1;
    readonly CHARSET_RULE: 2;
    readonly IMPORT_RULE: 3;
    readonly MEDIA_RULE: 4;
    readonly FONT_FACE_RULE: 5;
    readonly PAGE_RULE: 6;
    readonly NAMESPACE_RULE: 10;
    readonly KEYFRAMES_RULE: 7;
    readonly KEYFRAME_RULE: 8;
    readonly SUPPORTS_RULE: 12;
}

declare var CSSRule: {
    prototype: CSSRule;
    new(): CSSRule;
    readonly STYLE_RULE: 1;
    readonly CHARSET_RULE: 2;
    readonly IMPORT_RULE: 3;
    readonly MEDIA_RULE: 4;
    readonly FONT_FACE_RULE: 5;
    readonly PAGE_RULE: 6;
    readonly NAMESPACE_RULE: 10;
    readonly KEYFRAMES_RULE: 7;
    readonly KEYFRAME_RULE: 8;
    readonly SUPPORTS_RULE: 12;
};

/**
 * A CSSRuleList is an (indirect-modify only) array-like object containing an ordered collection of CSSRule objects.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSRuleList)
 */
interface CSSRuleList {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSRuleList/length) */
    readonly length: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSRuleList/item) */
    item(index: number): CSSRule | null;
    [index: number]: CSSRule;
}

declare var CSSRuleList: {
    prototype: CSSRuleList;
    new(): CSSRuleList;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSScale) */
interface CSSScale extends CSSTransformComponent {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSScale/x) */
    x: CSSNumberish;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSScale/y) */
    y: CSSNumberish;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSScale/z) */
    z: CSSNumberish;
}

declare var CSSScale: {
    prototype: CSSScale;
    new(x: CSSNumberish, y: CSSNumberish, z?: CSSNumberish): CSSScale;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSSkew) */
interface CSSSkew extends CSSTransformComponent {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSSkew/ax) */
    ax: CSSNumericValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSSkew/ay) */
    ay: CSSNumericValue;
}

declare var CSSSkew: {
    prototype: CSSSkew;
    new(ax: CSSNumericValue, ay: CSSNumericValue): CSSSkew;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSSkewX) */
interface CSSSkewX extends CSSTransformComponent {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSSkewX/ax) */
    ax: CSSNumericValue;
}

declare var CSSSkewX: {
    prototype: CSSSkewX;
    new(ax: CSSNumericValue): CSSSkewX;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSSkewY) */
interface CSSSkewY extends CSSTransformComponent {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSSkewY/ay) */
    ay: CSSNumericValue;
}

declare var CSSSkewY: {
    prototype: CSSSkewY;
    new(ay: CSSNumericValue): CSSSkewY;
};

/**
 * An object that is a CSS declaration block, and exposes style information and various style-related methods and properties.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSStyleDeclaration)
 */
interface CSSStyleDeclaration {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/accent-color) */
    accentColor: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/align-content) */
    alignContent: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/align-items) */
    alignItems: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/align-self) */
    alignSelf: string;
    alignmentBaseline: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/all) */
    all: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/animation) */
    animation: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/animation-composition) */
    animationComposition: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/animation-delay) */
    animationDelay: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/animation-direction) */
    animationDirection: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/animation-duration) */
    animationDuration: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/animation-fill-mode) */
    animationFillMode: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/animation-iteration-count) */
    animationIterationCount: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/animation-name) */
    animationName: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/animation-play-state) */
    animationPlayState: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/animation-timing-function) */
    animationTimingFunction: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/appearance) */
    appearance: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/aspect-ratio) */
    aspectRatio: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/backdrop-filter) */
    backdropFilter: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/backface-visibility) */
    backfaceVisibility: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/background) */
    background: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/background-attachment) */
    backgroundAttachment: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/background-blend-mode) */
    backgroundBlendMode: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/background-clip) */
    backgroundClip: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/background-color) */
    backgroundColor: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/background-image) */
    backgroundImage: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/background-origin) */
    backgroundOrigin: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/background-position) */
    backgroundPosition: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/background-position-x) */
    backgroundPositionX: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/background-position-y) */
    backgroundPositionY: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/background-repeat) */
    backgroundRepeat: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/background-size) */
    backgroundSize: string;
    baselineShift: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/block-size) */
    blockSize: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border) */
    border: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-block) */
    borderBlock: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-block-color) */
    borderBlockColor: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-block-end) */
    borderBlockEnd: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-block-end-color) */
    borderBlockEndColor: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-block-end-style) */
    borderBlockEndStyle: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-block-end-width) */
    borderBlockEndWidth: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-block-start) */
    borderBlockStart: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-block-start-color) */
    borderBlockStartColor: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-block-start-style) */
    borderBlockStartStyle: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-block-start-width) */
    borderBlockStartWidth: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-block-style) */
    borderBlockStyle: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-block-width) */
    borderBlockWidth: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-bottom) */
    borderBottom: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-bottom-color) */
    borderBottomColor: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-bottom-left-radius) */
    borderBottomLeftRadius: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-bottom-right-radius) */
    borderBottomRightRadius: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-bottom-style) */
    borderBottomStyle: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-bottom-width) */
    borderBottomWidth: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-collapse) */
    borderCollapse: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-color) */
    borderColor: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-end-end-radius) */
    borderEndEndRadius: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-end-start-radius) */
    borderEndStartRadius: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-image) */
    borderImage: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-image-outset) */
    borderImageOutset: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-image-repeat) */
    borderImageRepeat: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-image-slice) */
    borderImageSlice: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-image-source) */
    borderImageSource: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-image-width) */
    borderImageWidth: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-inline) */
    borderInline: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-inline-color) */
    borderInlineColor: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-inline-end) */
    borderInlineEnd: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-inline-end-color) */
    borderInlineEndColor: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-inline-end-style) */
    borderInlineEndStyle: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-inline-end-width) */
    borderInlineEndWidth: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-inline-start) */
    borderInlineStart: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-inline-start-color) */
    borderInlineStartColor: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-inline-start-style) */
    borderInlineStartStyle: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-inline-start-width) */
    borderInlineStartWidth: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-inline-style) */
    borderInlineStyle: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-inline-width) */
    borderInlineWidth: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-left) */
    borderLeft: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-left-color) */
    borderLeftColor: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-left-style) */
    borderLeftStyle: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-left-width) */
    borderLeftWidth: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-radius) */
    borderRadius: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-right) */
    borderRight: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-right-color) */
    borderRightColor: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-right-style) */
    borderRightStyle: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-right-width) */
    borderRightWidth: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-spacing) */
    borderSpacing: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-start-end-radius) */
    borderStartEndRadius: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-start-start-radius) */
    borderStartStartRadius: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-style) */
    borderStyle: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-top) */
    borderTop: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-top-color) */
    borderTopColor: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-top-left-radius) */
    borderTopLeftRadius: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-top-right-radius) */
    borderTopRightRadius: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-top-style) */
    borderTopStyle: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-top-width) */
    borderTopWidth: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-width) */
    borderWidth: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/bottom) */
    bottom: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/box-shadow) */
    boxShadow: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/box-sizing) */
    boxSizing: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/break-after) */
    breakAfter: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/break-before) */
    breakBefore: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/break-inside) */
    breakInside: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/caption-side) */
    captionSide: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/caret-color) */
    caretColor: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/clear) */
    clear: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/clip)
     */
    clip: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/clip-path) */
    clipPath: string;
    clipRule: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/color) */
    color: string;
    colorInterpolation: string;
    colorInterpolationFilters: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/color-scheme) */
    colorScheme: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/column-count) */
    columnCount: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/column-fill) */
    columnFill: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/column-gap) */
    columnGap: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/column-rule) */
    columnRule: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/column-rule-color) */
    columnRuleColor: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/column-rule-style) */
    columnRuleStyle: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/column-rule-width) */
    columnRuleWidth: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/column-span) */
    columnSpan: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/column-width) */
    columnWidth: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/columns) */
    columns: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/contain) */
    contain: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/contain-intrinsic-contain-intrinsic-block-size) */
    containIntrinsicBlockSize: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/contain-intrinsic-height) */
    containIntrinsicHeight: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/contain-intrinsic-contain-intrinsic-inline-size) */
    containIntrinsicInlineSize: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/contain-intrinsic-size) */
    containIntrinsicSize: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/contain-intrinsic-width) */
    containIntrinsicWidth: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/container) */
    container: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/container-name) */
    containerName: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/container-type) */
    containerType: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/content) */
    content: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/counter-increment) */
    counterIncrement: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/counter-reset) */
    counterReset: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/counter-set) */
    counterSet: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSStyleDeclaration/cssFloat) */
    cssFloat: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSStyleDeclaration/cssText) */
    cssText: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/cursor) */
    cursor: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/direction) */
    direction: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/display) */
    display: string;
    dominantBaseline: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/empty-cells) */
    emptyCells: string;
    fill: string;
    fillOpacity: string;
    fillRule: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/filter) */
    filter: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/flex) */
    flex: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/flex-basis) */
    flexBasis: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/flex-direction) */
    flexDirection: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/flex-flow) */
    flexFlow: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/flex-grow) */
    flexGrow: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/flex-shrink) */
    flexShrink: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/flex-wrap) */
    flexWrap: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/float) */
    float: string;
    floodColor: string;
    floodOpacity: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/font) */
    font: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/font-family) */
    fontFamily: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/font-feature-settings) */
    fontFeatureSettings: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/font-kerning) */
    fontKerning: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/font-optical-sizing) */
    fontOpticalSizing: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/font-palette) */
    fontPalette: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/font-size) */
    fontSize: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/font-size-adjust) */
    fontSizeAdjust: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/font-stretch) */
    fontStretch: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/font-style) */
    fontStyle: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/font-synthesis) */
    fontSynthesis: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/font-synthesis-small-caps) */
    fontSynthesisSmallCaps: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/font-synthesis-style) */
    fontSynthesisStyle: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/font-synthesis-weight) */
    fontSynthesisWeight: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/font-variant) */
    fontVariant: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/font-variant-alternates) */
    fontVariantAlternates: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/font-variant-caps) */
    fontVariantCaps: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/font-variant-east-asian) */
    fontVariantEastAsian: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/font-variant-ligatures) */
    fontVariantLigatures: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/font-variant-numeric) */
    fontVariantNumeric: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/font-variant-position) */
    fontVariantPosition: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/font-variation-settings) */
    fontVariationSettings: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/font-weight) */
    fontWeight: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/forced-color-adjust) */
    forcedColorAdjust: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/gap) */
    gap: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/grid) */
    grid: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/grid-area) */
    gridArea: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/grid-auto-columns) */
    gridAutoColumns: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/grid-auto-flow) */
    gridAutoFlow: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/grid-auto-rows) */
    gridAutoRows: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/grid-column) */
    gridColumn: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/grid-column-end) */
    gridColumnEnd: string;
    /** @deprecated This is a legacy alias of `columnGap`. */
    gridColumnGap: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/grid-column-start) */
    gridColumnStart: string;
    /** @deprecated This is a legacy alias of `gap`. */
    gridGap: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/grid-row) */
    gridRow: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/grid-row-end) */
    gridRowEnd: string;
    /** @deprecated This is a legacy alias of `rowGap`. */
    gridRowGap: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/grid-row-start) */
    gridRowStart: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/grid-template) */
    gridTemplate: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/grid-template-areas) */
    gridTemplateAreas: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/grid-template-columns) */
    gridTemplateColumns: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/grid-template-rows) */
    gridTemplateRows: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/height) */
    height: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/hyphenate-character) */
    hyphenateCharacter: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/hyphens) */
    hyphens: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/image-orientation)
     */
    imageOrientation: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/image-rendering) */
    imageRendering: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/inline-size) */
    inlineSize: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/inset) */
    inset: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/inset-block) */
    insetBlock: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/inset-block-end) */
    insetBlockEnd: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/inset-block-start) */
    insetBlockStart: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/inset-inline) */
    insetInline: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/inset-inline-end) */
    insetInlineEnd: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/inset-inline-start) */
    insetInlineStart: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/isolation) */
    isolation: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/justify-content) */
    justifyContent: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/justify-items) */
    justifyItems: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/justify-self) */
    justifySelf: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/left) */
    left: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSStyleDeclaration/length) */
    readonly length: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/letter-spacing) */
    letterSpacing: string;
    lightingColor: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/line-break) */
    lineBreak: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/line-height) */
    lineHeight: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/list-style) */
    listStyle: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/list-style-image) */
    listStyleImage: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/list-style-position) */
    listStylePosition: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/list-style-type) */
    listStyleType: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/margin) */
    margin: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/margin-block) */
    marginBlock: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/margin-block-end) */
    marginBlockEnd: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/margin-block-start) */
    marginBlockStart: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/margin-bottom) */
    marginBottom: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/margin-inline) */
    marginInline: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/margin-inline-end) */
    marginInlineEnd: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/margin-inline-start) */
    marginInlineStart: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/margin-left) */
    marginLeft: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/margin-right) */
    marginRight: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/margin-top) */
    marginTop: string;
    marker: string;
    markerEnd: string;
    markerMid: string;
    markerStart: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/mask) */
    mask: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/mask-clip) */
    maskClip: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/mask-composite) */
    maskComposite: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/mask-image) */
    maskImage: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/mask-mode) */
    maskMode: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/mask-origin) */
    maskOrigin: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/mask-position) */
    maskPosition: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/mask-repeat) */
    maskRepeat: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/mask-size) */
    maskSize: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/mask-type) */
    maskType: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/math-style) */
    mathStyle: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/max-block-size) */
    maxBlockSize: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/max-height) */
    maxHeight: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/max-inline-size) */
    maxInlineSize: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/max-width) */
    maxWidth: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/min-block-size) */
    minBlockSize: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/min-height) */
    minHeight: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/min-inline-size) */
    minInlineSize: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/min-width) */
    minWidth: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/mix-blend-mode) */
    mixBlendMode: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/object-fit) */
    objectFit: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/object-position) */
    objectPosition: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/offset) */
    offset: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/offset-distance) */
    offsetDistance: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/offset-path) */
    offsetPath: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/offset-rotate) */
    offsetRotate: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/opacity) */
    opacity: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/order) */
    order: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/orphans) */
    orphans: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/outline) */
    outline: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/outline-color) */
    outlineColor: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/outline-offset) */
    outlineOffset: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/outline-style) */
    outlineStyle: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/outline-width) */
    outlineWidth: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/overflow) */
    overflow: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/overflow-anchor) */
    overflowAnchor: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/overflow-clip-margin) */
    overflowClipMargin: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/overflow-wrap) */
    overflowWrap: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/overflow-x) */
    overflowX: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/overflow-y) */
    overflowY: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/overscroll-behavior) */
    overscrollBehavior: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/overscroll-behavior-block) */
    overscrollBehaviorBlock: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/overscroll-behavior-inline) */
    overscrollBehaviorInline: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/overscroll-behavior-x) */
    overscrollBehaviorX: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/overscroll-behavior-y) */
    overscrollBehaviorY: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/padding) */
    padding: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/padding-block) */
    paddingBlock: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/padding-block-end) */
    paddingBlockEnd: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/padding-block-start) */
    paddingBlockStart: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/padding-bottom) */
    paddingBottom: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/padding-inline) */
    paddingInline: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/padding-inline-end) */
    paddingInlineEnd: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/padding-inline-start) */
    paddingInlineStart: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/padding-left) */
    paddingLeft: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/padding-right) */
    paddingRight: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/padding-top) */
    paddingTop: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/page) */
    page: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/page-break-after) */
    pageBreakAfter: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/page-break-before) */
    pageBreakBefore: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/page-break-inside) */
    pageBreakInside: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/paint-order) */
    paintOrder: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSStyleDeclaration/parentRule) */
    readonly parentRule: CSSRule | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/perspective) */
    perspective: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/perspective-origin) */
    perspectiveOrigin: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/place-content) */
    placeContent: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/place-items) */
    placeItems: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/place-self) */
    placeSelf: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/pointer-events) */
    pointerEvents: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/position) */
    position: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/print-color-adjust) */
    printColorAdjust: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/quotes) */
    quotes: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/resize) */
    resize: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/right) */
    right: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/rotate) */
    rotate: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/row-gap) */
    rowGap: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/ruby-position) */
    rubyPosition: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/scale) */
    scale: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/scroll-behavior) */
    scrollBehavior: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/scroll-margin) */
    scrollMargin: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/scroll-margin-block) */
    scrollMarginBlock: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/scroll-margin-block-end) */
    scrollMarginBlockEnd: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/scroll-margin-block-start) */
    scrollMarginBlockStart: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/scroll-margin-bottom) */
    scrollMarginBottom: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/scroll-margin-inline) */
    scrollMarginInline: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/scroll-margin-inline-end) */
    scrollMarginInlineEnd: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/scroll-margin-inline-start) */
    scrollMarginInlineStart: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/scroll-margin-left) */
    scrollMarginLeft: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/scroll-margin-right) */
    scrollMarginRight: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/scroll-margin-top) */
    scrollMarginTop: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/scroll-padding) */
    scrollPadding: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/scroll-padding-block) */
    scrollPaddingBlock: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/scroll-padding-block-end) */
    scrollPaddingBlockEnd: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/scroll-padding-block-start) */
    scrollPaddingBlockStart: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/scroll-padding-bottom) */
    scrollPaddingBottom: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/scroll-padding-inline) */
    scrollPaddingInline: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/scroll-padding-inline-end) */
    scrollPaddingInlineEnd: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/scroll-padding-inline-start) */
    scrollPaddingInlineStart: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/scroll-padding-left) */
    scrollPaddingLeft: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/scroll-padding-right) */
    scrollPaddingRight: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/scroll-padding-top) */
    scrollPaddingTop: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/scroll-snap-align) */
    scrollSnapAlign: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/scroll-snap-stop) */
    scrollSnapStop: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/scroll-snap-type) */
    scrollSnapType: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/scrollbar-gutter) */
    scrollbarGutter: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/shape-image-threshold) */
    shapeImageThreshold: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/shape-margin) */
    shapeMargin: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/shape-outside) */
    shapeOutside: string;
    shapeRendering: string;
    stopColor: string;
    stopOpacity: string;
    stroke: string;
    strokeDasharray: string;
    strokeDashoffset: string;
    strokeLinecap: string;
    strokeLinejoin: string;
    strokeMiterlimit: string;
    strokeOpacity: string;
    strokeWidth: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/tab-size) */
    tabSize: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/table-layout) */
    tableLayout: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/text-align) */
    textAlign: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/text-align-last) */
    textAlignLast: string;
    textAnchor: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/text-combine-upright) */
    textCombineUpright: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/text-decoration) */
    textDecoration: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/text-decoration-color) */
    textDecorationColor: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/text-decoration-line) */
    textDecorationLine: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/text-decoration-skip-ink) */
    textDecorationSkipInk: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/text-decoration-style) */
    textDecorationStyle: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/text-decoration-thickness) */
    textDecorationThickness: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/text-emphasis) */
    textEmphasis: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/text-emphasis-color) */
    textEmphasisColor: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/text-emphasis-position) */
    textEmphasisPosition: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/text-emphasis-style) */
    textEmphasisStyle: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/text-indent) */
    textIndent: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/text-orientation) */
    textOrientation: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/text-overflow) */
    textOverflow: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/text-rendering) */
    textRendering: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/text-shadow) */
    textShadow: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/text-transform) */
    textTransform: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/text-underline-offset) */
    textUnderlineOffset: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/text-underline-position) */
    textUnderlinePosition: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/top) */
    top: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/touch-action) */
    touchAction: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/transform) */
    transform: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/transform-box) */
    transformBox: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/transform-origin) */
    transformOrigin: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/transform-style) */
    transformStyle: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/transition) */
    transition: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/transition-delay) */
    transitionDelay: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/transition-duration) */
    transitionDuration: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/transition-property) */
    transitionProperty: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/transition-timing-function) */
    transitionTimingFunction: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/translate) */
    translate: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/unicode-bidi) */
    unicodeBidi: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/user-select) */
    userSelect: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/vertical-align) */
    verticalAlign: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/visibility) */
    visibility: string;
    /**
     * @deprecated This is a legacy alias of `alignContent`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/align-content)
     */
    webkitAlignContent: string;
    /**
     * @deprecated This is a legacy alias of `alignItems`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/align-items)
     */
    webkitAlignItems: string;
    /**
     * @deprecated This is a legacy alias of `alignSelf`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/align-self)
     */
    webkitAlignSelf: string;
    /**
     * @deprecated This is a legacy alias of `animation`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/animation)
     */
    webkitAnimation: string;
    /**
     * @deprecated This is a legacy alias of `animationDelay`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/animation-delay)
     */
    webkitAnimationDelay: string;
    /**
     * @deprecated This is a legacy alias of `animationDirection`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/animation-direction)
     */
    webkitAnimationDirection: string;
    /**
     * @deprecated This is a legacy alias of `animationDuration`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/animation-duration)
     */
    webkitAnimationDuration: string;
    /**
     * @deprecated This is a legacy alias of `animationFillMode`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/animation-fill-mode)
     */
    webkitAnimationFillMode: string;
    /**
     * @deprecated This is a legacy alias of `animationIterationCount`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/animation-iteration-count)
     */
    webkitAnimationIterationCount: string;
    /**
     * @deprecated This is a legacy alias of `animationName`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/animation-name)
     */
    webkitAnimationName: string;
    /**
     * @deprecated This is a legacy alias of `animationPlayState`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/animation-play-state)
     */
    webkitAnimationPlayState: string;
    /**
     * @deprecated This is a legacy alias of `animationTimingFunction`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/animation-timing-function)
     */
    webkitAnimationTimingFunction: string;
    /**
     * @deprecated This is a legacy alias of `appearance`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/appearance)
     */
    webkitAppearance: string;
    /**
     * @deprecated This is a legacy alias of `backfaceVisibility`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/backface-visibility)
     */
    webkitBackfaceVisibility: string;
    /**
     * @deprecated This is a legacy alias of `backgroundClip`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/background-clip)
     */
    webkitBackgroundClip: string;
    /**
     * @deprecated This is a legacy alias of `backgroundOrigin`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/background-origin)
     */
    webkitBackgroundOrigin: string;
    /**
     * @deprecated This is a legacy alias of `backgroundSize`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/background-size)
     */
    webkitBackgroundSize: string;
    /**
     * @deprecated This is a legacy alias of `borderBottomLeftRadius`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-bottom-left-radius)
     */
    webkitBorderBottomLeftRadius: string;
    /**
     * @deprecated This is a legacy alias of `borderBottomRightRadius`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-bottom-right-radius)
     */
    webkitBorderBottomRightRadius: string;
    /**
     * @deprecated This is a legacy alias of `borderRadius`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-radius)
     */
    webkitBorderRadius: string;
    /**
     * @deprecated This is a legacy alias of `borderTopLeftRadius`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-top-left-radius)
     */
    webkitBorderTopLeftRadius: string;
    /**
     * @deprecated This is a legacy alias of `borderTopRightRadius`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/border-top-right-radius)
     */
    webkitBorderTopRightRadius: string;
    /**
     * @deprecated This is a legacy alias of `boxAlign`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/box-align)
     */
    webkitBoxAlign: string;
    /**
     * @deprecated This is a legacy alias of `boxFlex`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/box-flex)
     */
    webkitBoxFlex: string;
    /**
     * @deprecated This is a legacy alias of `boxOrdinalGroup`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/box-ordinal-group)
     */
    webkitBoxOrdinalGroup: string;
    /**
     * @deprecated This is a legacy alias of `boxOrient`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/box-orient)
     */
    webkitBoxOrient: string;
    /**
     * @deprecated This is a legacy alias of `boxPack`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/box-pack)
     */
    webkitBoxPack: string;
    /**
     * @deprecated This is a legacy alias of `boxShadow`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/box-shadow)
     */
    webkitBoxShadow: string;
    /**
     * @deprecated This is a legacy alias of `boxSizing`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/box-sizing)
     */
    webkitBoxSizing: string;
    /**
     * @deprecated This is a legacy alias of `filter`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/filter)
     */
    webkitFilter: string;
    /**
     * @deprecated This is a legacy alias of `flex`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/flex)
     */
    webkitFlex: string;
    /**
     * @deprecated This is a legacy alias of `flexBasis`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/flex-basis)
     */
    webkitFlexBasis: string;
    /**
     * @deprecated This is a legacy alias of `flexDirection`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/flex-direction)
     */
    webkitFlexDirection: string;
    /**
     * @deprecated This is a legacy alias of `flexFlow`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/flex-flow)
     */
    webkitFlexFlow: string;
    /**
     * @deprecated This is a legacy alias of `flexGrow`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/flex-grow)
     */
    webkitFlexGrow: string;
    /**
     * @deprecated This is a legacy alias of `flexShrink`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/flex-shrink)
     */
    webkitFlexShrink: string;
    /**
     * @deprecated This is a legacy alias of `flexWrap`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/flex-wrap)
     */
    webkitFlexWrap: string;
    /**
     * @deprecated This is a legacy alias of `justifyContent`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/justify-content)
     */
    webkitJustifyContent: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/-webkit-line-clamp) */
    webkitLineClamp: string;
    /**
     * @deprecated This is a legacy alias of `mask`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/mask)
     */
    webkitMask: string;
    /**
     * @deprecated This is a legacy alias of `maskBorder`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/mask-border)
     */
    webkitMaskBoxImage: string;
    /**
     * @deprecated This is a legacy alias of `maskBorderOutset`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/mask-border-outset)
     */
    webkitMaskBoxImageOutset: string;
    /**
     * @deprecated This is a legacy alias of `maskBorderRepeat`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/mask-border-repeat)
     */
    webkitMaskBoxImageRepeat: string;
    /**
     * @deprecated This is a legacy alias of `maskBorderSlice`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/mask-border-slice)
     */
    webkitMaskBoxImageSlice: string;
    /**
     * @deprecated This is a legacy alias of `maskBorderSource`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/mask-border-source)
     */
    webkitMaskBoxImageSource: string;
    /**
     * @deprecated This is a legacy alias of `maskBorderWidth`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/mask-border-width)
     */
    webkitMaskBoxImageWidth: string;
    /**
     * @deprecated This is a legacy alias of `maskClip`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/mask-clip)
     */
    webkitMaskClip: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/-webkit-mask-composite) */
    webkitMaskComposite: string;
    /**
     * @deprecated This is a legacy alias of `maskImage`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/mask-image)
     */
    webkitMaskImage: string;
    /**
     * @deprecated This is a legacy alias of `maskOrigin`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/mask-origin)
     */
    webkitMaskOrigin: string;
    /**
     * @deprecated This is a legacy alias of `maskPosition`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/mask-position)
     */
    webkitMaskPosition: string;
    /**
     * @deprecated This is a legacy alias of `maskRepeat`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/mask-repeat)
     */
    webkitMaskRepeat: string;
    /**
     * @deprecated This is a legacy alias of `maskSize`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/mask-size)
     */
    webkitMaskSize: string;
    /**
     * @deprecated This is a legacy alias of `order`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/order)
     */
    webkitOrder: string;
    /**
     * @deprecated This is a legacy alias of `perspective`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/perspective)
     */
    webkitPerspective: string;
    /**
     * @deprecated This is a legacy alias of `perspectiveOrigin`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/perspective-origin)
     */
    webkitPerspectiveOrigin: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/-webkit-text-fill-color) */
    webkitTextFillColor: string;
    /**
     * @deprecated This is a legacy alias of `textSizeAdjust`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/text-size-adjust)
     */
    webkitTextSizeAdjust: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/-webkit-text-stroke) */
    webkitTextStroke: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/-webkit-text-stroke-color) */
    webkitTextStrokeColor: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/-webkit-text-stroke-width) */
    webkitTextStrokeWidth: string;
    /**
     * @deprecated This is a legacy alias of `transform`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/transform)
     */
    webkitTransform: string;
    /**
     * @deprecated This is a legacy alias of `transformOrigin`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/transform-origin)
     */
    webkitTransformOrigin: string;
    /**
     * @deprecated This is a legacy alias of `transformStyle`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/transform-style)
     */
    webkitTransformStyle: string;
    /**
     * @deprecated This is a legacy alias of `transition`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/transition)
     */
    webkitTransition: string;
    /**
     * @deprecated This is a legacy alias of `transitionDelay`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/transition-delay)
     */
    webkitTransitionDelay: string;
    /**
     * @deprecated This is a legacy alias of `transitionDuration`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/transition-duration)
     */
    webkitTransitionDuration: string;
    /**
     * @deprecated This is a legacy alias of `transitionProperty`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/transition-property)
     */
    webkitTransitionProperty: string;
    /**
     * @deprecated This is a legacy alias of `transitionTimingFunction`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/transition-timing-function)
     */
    webkitTransitionTimingFunction: string;
    /**
     * @deprecated This is a legacy alias of `userSelect`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/user-select)
     */
    webkitUserSelect: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/white-space) */
    whiteSpace: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/widows) */
    widows: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/width) */
    width: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/will-change) */
    willChange: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/word-break) */
    wordBreak: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/word-spacing) */
    wordSpacing: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/overflow-wrap)
     */
    wordWrap: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/writing-mode) */
    writingMode: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/CSS/z-index) */
    zIndex: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSStyleDeclaration/getPropertyPriority) */
    getPropertyPriority(property: string): string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSStyleDeclaration/getPropertyValue) */
    getPropertyValue(property: string): string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSStyleDeclaration/item) */
    item(index: number): string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSStyleDeclaration/removeProperty) */
    removeProperty(property: string): string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSStyleDeclaration/setProperty) */
    setProperty(property: string, value: string | null, priority?: string): void;
    [index: number]: string;
}

declare var CSSStyleDeclaration: {
    prototype: CSSStyleDeclaration;
    new(): CSSStyleDeclaration;
};

/**
 * CSSStyleRule represents a single CSS style rule. It implements the CSSRule interface with a type value of 1 (CSSRule.STYLE_RULE).
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSStyleRule)
 */
interface CSSStyleRule extends CSSRule {
    readonly cssRules: CSSRuleList;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSStyleRule/selectorText) */
    selectorText: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSStyleRule/style) */
    readonly style: CSSStyleDeclaration;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSStyleRule/styleMap) */
    readonly styleMap: StylePropertyMap;
    deleteRule(index: number): void;
    insertRule(rule: string, index?: number): number;
}

declare var CSSStyleRule: {
    prototype: CSSStyleRule;
    new(): CSSStyleRule;
};

/**
 * A single CSS style sheet. It inherits properties and methods from its parent, StyleSheet.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSStyleSheet)
 */
interface CSSStyleSheet extends StyleSheet {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSStyleSheet/cssRules) */
    readonly cssRules: CSSRuleList;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSStyleSheet/ownerRule) */
    readonly ownerRule: CSSRule | null;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSStyleSheet/rules)
     */
    readonly rules: CSSRuleList;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSStyleSheet/addRule)
     */
    addRule(selector?: string, style?: string, index?: number): number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSStyleSheet/deleteRule) */
    deleteRule(index: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSStyleSheet/insertRule) */
    insertRule(rule: string, index?: number): number;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSStyleSheet/removeRule)
     */
    removeRule(index?: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSStyleSheet/replace) */
    replace(text: string): Promise<CSSStyleSheet>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSStyleSheet/replaceSync) */
    replaceSync(text: string): void;
}

declare var CSSStyleSheet: {
    prototype: CSSStyleSheet;
    new(options?: CSSStyleSheetInit): CSSStyleSheet;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSStyleValue) */
interface CSSStyleValue {
    toString(): string;
}

declare var CSSStyleValue: {
    prototype: CSSStyleValue;
    new(): CSSStyleValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSStyleValue/parse_static) */
    parse(property: string, cssText: string): CSSStyleValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSStyleValue/parseAll_static) */
    parseAll(property: string, cssText: string): CSSStyleValue[];
};

/**
 * An object representing a single CSS @supports at-rule. It implements the CSSConditionRule interface, and therefore the CSSRule and CSSGroupingRule interfaces with a type value of 12 (CSSRule.SUPPORTS_RULE).
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSSupportsRule)
 */
interface CSSSupportsRule extends CSSConditionRule {
}

declare var CSSSupportsRule: {
    prototype: CSSSupportsRule;
    new(): CSSSupportsRule;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSTransformComponent) */
interface CSSTransformComponent {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSTransformComponent/is2D) */
    is2D: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSTransformComponent/toMatrix) */
    toMatrix(): DOMMatrix;
    toString(): string;
}

declare var CSSTransformComponent: {
    prototype: CSSTransformComponent;
    new(): CSSTransformComponent;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSTransformValue) */
interface CSSTransformValue extends CSSStyleValue {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSTransformValue/is2D) */
    readonly is2D: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSTransformValue/length) */
    readonly length: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSTransformValue/toMatrix) */
    toMatrix(): DOMMatrix;
    forEach(callbackfn: (value: CSSTransformComponent, key: number, parent: CSSTransformValue) => void, thisArg?: any): void;
    [index: number]: CSSTransformComponent;
}

declare var CSSTransformValue: {
    prototype: CSSTransformValue;
    new(transforms: CSSTransformComponent[]): CSSTransformValue;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSTransition) */
interface CSSTransition extends Animation {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSTransition/transitionProperty) */
    readonly transitionProperty: string;
    addEventListener<K extends keyof AnimationEventMap>(type: K, listener: (this: CSSTransition, ev: AnimationEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof AnimationEventMap>(type: K, listener: (this: CSSTransition, ev: AnimationEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var CSSTransition: {
    prototype: CSSTransition;
    new(): CSSTransition;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSTranslate) */
interface CSSTranslate extends CSSTransformComponent {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSTranslate/x) */
    x: CSSNumericValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSTranslate/y) */
    y: CSSNumericValue;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSTranslate/z) */
    z: CSSNumericValue;
}

declare var CSSTranslate: {
    prototype: CSSTranslate;
    new(x: CSSNumericValue, y: CSSNumericValue, z?: CSSNumericValue): CSSTranslate;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSUnitValue) */
interface CSSUnitValue extends CSSNumericValue {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSUnitValue/unit) */
    readonly unit: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSUnitValue/value) */
    value: number;
}

declare var CSSUnitValue: {
    prototype: CSSUnitValue;
    new(value: number, unit: string): CSSUnitValue;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSUnparsedValue) */
interface CSSUnparsedValue extends CSSStyleValue {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSUnparsedValue/length) */
    readonly length: number;
    forEach(callbackfn: (value: CSSUnparsedSegment, key: number, parent: CSSUnparsedValue) => void, thisArg?: any): void;
    [index: number]: CSSUnparsedSegment;
}

declare var CSSUnparsedValue: {
    prototype: CSSUnparsedValue;
    new(members: CSSUnparsedSegment[]): CSSUnparsedValue;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSVariableReferenceValue) */
interface CSSVariableReferenceValue {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSVariableReferenceValue/fallback) */
    readonly fallback: CSSUnparsedValue | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CSSVariableReferenceValue/variable) */
    variable: string;
}

declare var CSSVariableReferenceValue: {
    prototype: CSSVariableReferenceValue;
    new(variable: string, fallback?: CSSUnparsedValue | null): CSSVariableReferenceValue;
};

/**
 * Provides a storage mechanism for Request / Response object pairs that are cached, for example as part of the ServiceWorker life cycle. Note that the Cache interface is exposed to windowed scopes as well as workers. You don't have to use it in conjunction with service workers, even though it is defined in the service worker spec.
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Cache)
 */
interface Cache {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Cache/add) */
    add(request: RequestInfo | URL): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Cache/addAll) */
    addAll(requests: RequestInfo[]): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Cache/delete) */
    delete(request: RequestInfo | URL, options?: CacheQueryOptions): Promise<boolean>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Cache/keys) */
    keys(request?: RequestInfo | URL, options?: CacheQueryOptions): Promise<ReadonlyArray<Request>>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Cache/match) */
    match(request: RequestInfo | URL, options?: CacheQueryOptions): Promise<Response | undefined>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Cache/matchAll) */
    matchAll(request?: RequestInfo | URL, options?: CacheQueryOptions): Promise<ReadonlyArray<Response>>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Cache/put) */
    put(request: RequestInfo | URL, response: Response): Promise<void>;
}

declare var Cache: {
    prototype: Cache;
    new(): Cache;
};

/**
 * The storage for Cache objects.
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CacheStorage)
 */
interface CacheStorage {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CacheStorage/delete) */
    delete(cacheName: string): Promise<boolean>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CacheStorage/has) */
    has(cacheName: string): Promise<boolean>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CacheStorage/keys) */
    keys(): Promise<string[]>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CacheStorage/match) */
    match(request: RequestInfo | URL, options?: MultiCacheQueryOptions): Promise<Response | undefined>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CacheStorage/open) */
    open(cacheName: string): Promise<Cache>;
}

declare var CacheStorage: {
    prototype: CacheStorage;
    new(): CacheStorage;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasCaptureMediaStreamTrack) */
interface CanvasCaptureMediaStreamTrack extends MediaStreamTrack {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasCaptureMediaStreamTrack/canvas) */
    readonly canvas: HTMLCanvasElement;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasCaptureMediaStreamTrack/requestFrame) */
    requestFrame(): void;
    addEventListener<K extends keyof MediaStreamTrackEventMap>(type: K, listener: (this: CanvasCaptureMediaStreamTrack, ev: MediaStreamTrackEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof MediaStreamTrackEventMap>(type: K, listener: (this: CanvasCaptureMediaStreamTrack, ev: MediaStreamTrackEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var CanvasCaptureMediaStreamTrack: {
    prototype: CanvasCaptureMediaStreamTrack;
    new(): CanvasCaptureMediaStreamTrack;
};

interface CanvasCompositing {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/globalAlpha) */
    globalAlpha: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/globalCompositeOperation) */
    globalCompositeOperation: GlobalCompositeOperation;
}

interface CanvasDrawImage {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/drawImage) */
    drawImage(image: CanvasImageSource, dx: number, dy: number): void;
    drawImage(image: CanvasImageSource, dx: number, dy: number, dw: number, dh: number): void;
    drawImage(image: CanvasImageSource, sx: number, sy: number, sw: number, sh: number, dx: number, dy: number, dw: number, dh: number): void;
}

interface CanvasDrawPath {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/beginPath) */
    beginPath(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/clip) */
    clip(fillRule?: CanvasFillRule): void;
    clip(path: Path2D, fillRule?: CanvasFillRule): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/fill) */
    fill(fillRule?: CanvasFillRule): void;
    fill(path: Path2D, fillRule?: CanvasFillRule): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/isPointInPath) */
    isPointInPath(x: number, y: number, fillRule?: CanvasFillRule): boolean;
    isPointInPath(path: Path2D, x: number, y: number, fillRule?: CanvasFillRule): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/isPointInStroke) */
    isPointInStroke(x: number, y: number): boolean;
    isPointInStroke(path: Path2D, x: number, y: number): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/stroke) */
    stroke(): void;
    stroke(path: Path2D): void;
}

interface CanvasFillStrokeStyles {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/fillStyle) */
    fillStyle: string | CanvasGradient | CanvasPattern;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/strokeStyle) */
    strokeStyle: string | CanvasGradient | CanvasPattern;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/createConicGradient) */
    createConicGradient(startAngle: number, x: number, y: number): CanvasGradient;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/createLinearGradient) */
    createLinearGradient(x0: number, y0: number, x1: number, y1: number): CanvasGradient;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/createPattern) */
    createPattern(image: CanvasImageSource, repetition: string | null): CanvasPattern | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/createRadialGradient) */
    createRadialGradient(x0: number, y0: number, r0: number, x1: number, y1: number, r1: number): CanvasGradient;
}

interface CanvasFilters {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/filter) */
    filter: string;
}

/**
 * An opaque object describing a gradient. It is returned by the methods CanvasRenderingContext2D.createLinearGradient() or CanvasRenderingContext2D.createRadialGradient().
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasGradient)
 */
interface CanvasGradient {
    /**
     * Adds a color stop with the given color to the gradient at the given offset. 0.0 is the offset at one end of the gradient, 1.0 is the offset at the other end.
     *
     * Throws an "IndexSizeError" DOMException if the offset is out of range. Throws a "SyntaxError" DOMException if the color cannot be parsed.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasGradient/addColorStop)
     */
    addColorStop(offset: number, color: string): void;
}

declare var CanvasGradient: {
    prototype: CanvasGradient;
    new(): CanvasGradient;
};

interface CanvasImageData {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/createImageData) */
    createImageData(sw: number, sh: number, settings?: ImageDataSettings): ImageData;
    createImageData(imagedata: ImageData): ImageData;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/getImageData) */
    getImageData(sx: number, sy: number, sw: number, sh: number, settings?: ImageDataSettings): ImageData;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/putImageData) */
    putImageData(imagedata: ImageData, dx: number, dy: number): void;
    putImageData(imagedata: ImageData, dx: number, dy: number, dirtyX: number, dirtyY: number, dirtyWidth: number, dirtyHeight: number): void;
}

interface CanvasImageSmoothing {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/imageSmoothingEnabled) */
    imageSmoothingEnabled: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/imageSmoothingQuality) */
    imageSmoothingQuality: ImageSmoothingQuality;
}

interface CanvasPath {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/arc) */
    arc(x: number, y: number, radius: number, startAngle: number, endAngle: number, counterclockwise?: boolean): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/arcTo) */
    arcTo(x1: number, y1: number, x2: number, y2: number, radius: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/bezierCurveTo) */
    bezierCurveTo(cp1x: number, cp1y: number, cp2x: number, cp2y: number, x: number, y: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/closePath) */
    closePath(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/ellipse) */
    ellipse(x: number, y: number, radiusX: number, radiusY: number, rotation: number, startAngle: number, endAngle: number, counterclockwise?: boolean): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/lineTo) */
    lineTo(x: number, y: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/moveTo) */
    moveTo(x: number, y: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/quadraticCurveTo) */
    quadraticCurveTo(cpx: number, cpy: number, x: number, y: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/rect) */
    rect(x: number, y: number, w: number, h: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/roundRect) */
    roundRect(x: number, y: number, w: number, h: number, radii?: number | DOMPointInit | (number | DOMPointInit)[]): void;
}

interface CanvasPathDrawingStyles {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/lineCap) */
    lineCap: CanvasLineCap;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/lineDashOffset) */
    lineDashOffset: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/lineJoin) */
    lineJoin: CanvasLineJoin;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/lineWidth) */
    lineWidth: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/miterLimit) */
    miterLimit: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/getLineDash) */
    getLineDash(): number[];
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/setLineDash) */
    setLineDash(segments: number[]): void;
}

/**
 * An opaque object describing a pattern, based on an image, a canvas, or a video, created by the CanvasRenderingContext2D.createPattern() method.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasPattern)
 */
interface CanvasPattern {
    /**
     * Sets the transformation matrix that will be used when rendering the pattern during a fill or stroke painting operation.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasPattern/setTransform)
     */
    setTransform(transform?: DOMMatrix2DInit): void;
}

declare var CanvasPattern: {
    prototype: CanvasPattern;
    new(): CanvasPattern;
};

interface CanvasRect {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/clearRect) */
    clearRect(x: number, y: number, w: number, h: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/fillRect) */
    fillRect(x: number, y: number, w: number, h: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/strokeRect) */
    strokeRect(x: number, y: number, w: number, h: number): void;
}

/**
 * The CanvasRenderingContext2D interface, part of the Canvas API, provides the 2D rendering context for the drawing surface of a <canvas> element. It is used for drawing shapes, text, images, and other objects.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D)
 */
interface CanvasRenderingContext2D extends CanvasCompositing, CanvasDrawImage, CanvasDrawPath, CanvasFillStrokeStyles, CanvasFilters, CanvasImageData, CanvasImageSmoothing, CanvasPath, CanvasPathDrawingStyles, CanvasRect, CanvasShadowStyles, CanvasState, CanvasText, CanvasTextDrawingStyles, CanvasTransform, CanvasUserInterface {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/canvas) */
    readonly canvas: HTMLCanvasElement;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/getContextAttributes) */
    getContextAttributes(): CanvasRenderingContext2DSettings;
}

declare var CanvasRenderingContext2D: {
    prototype: CanvasRenderingContext2D;
    new(): CanvasRenderingContext2D;
};

interface CanvasShadowStyles {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/shadowBlur) */
    shadowBlur: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/shadowColor) */
    shadowColor: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/shadowOffsetX) */
    shadowOffsetX: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/shadowOffsetY) */
    shadowOffsetY: number;
}

interface CanvasState {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/reset) */
    reset(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/restore) */
    restore(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/save) */
    save(): void;
}

interface CanvasText {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/fillText) */
    fillText(text: string, x: number, y: number, maxWidth?: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/measureText) */
    measureText(text: string): TextMetrics;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/strokeText) */
    strokeText(text: string, x: number, y: number, maxWidth?: number): void;
}

interface CanvasTextDrawingStyles {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/direction) */
    direction: CanvasDirection;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/font) */
    font: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/fontKerning) */
    fontKerning: CanvasFontKerning;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/textAlign) */
    textAlign: CanvasTextAlign;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/textBaseline) */
    textBaseline: CanvasTextBaseline;
}

interface CanvasTransform {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/getTransform) */
    getTransform(): DOMMatrix;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/resetTransform) */
    resetTransform(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/rotate) */
    rotate(angle: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/scale) */
    scale(x: number, y: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/setTransform) */
    setTransform(a: number, b: number, c: number, d: number, e: number, f: number): void;
    setTransform(transform?: DOMMatrix2DInit): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/transform) */
    transform(a: number, b: number, c: number, d: number, e: number, f: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/translate) */
    translate(x: number, y: number): void;
}

interface CanvasUserInterface {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CanvasRenderingContext2D/drawFocusIfNeeded) */
    drawFocusIfNeeded(element: Element): void;
    drawFocusIfNeeded(path: Path2D, element: Element): void;
}

/**
 * The ChannelMergerNode interface, often used in conjunction with its opposite, ChannelSplitterNode, reunites different mono inputs into a single output. Each input is used to fill a channel of the output. This is useful for accessing each channels separately, e.g. for performing channel mixing where gain must be separately controlled on each channel.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ChannelMergerNode)
 */
interface ChannelMergerNode extends AudioNode {
}

declare var ChannelMergerNode: {
    prototype: ChannelMergerNode;
    new(context: BaseAudioContext, options?: ChannelMergerOptions): ChannelMergerNode;
};

/**
 * The ChannelSplitterNode interface, often used in conjunction with its opposite, ChannelMergerNode, separates the different channels of an audio source into a set of mono outputs. This is useful for accessing each channel separately, e.g. for performing channel mixing where gain must be separately controlled on each channel.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ChannelSplitterNode)
 */
interface ChannelSplitterNode extends AudioNode {
}

declare var ChannelSplitterNode: {
    prototype: ChannelSplitterNode;
    new(context: BaseAudioContext, options?: ChannelSplitterOptions): ChannelSplitterNode;
};

/**
 * The CharacterData abstract interface represents a Node object that contains characters. This is an abstract interface, meaning there aren't any object of type CharacterData: it is implemented by other interfaces, like Text, Comment, or ProcessingInstruction which aren't abstract.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CharacterData)
 */
interface CharacterData extends Node, ChildNode, NonDocumentTypeChildNode {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CharacterData/data) */
    data: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CharacterData/length) */
    readonly length: number;
    readonly ownerDocument: Document;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CharacterData/appendData) */
    appendData(data: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CharacterData/deleteData) */
    deleteData(offset: number, count: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CharacterData/insertData) */
    insertData(offset: number, data: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CharacterData/replaceData) */
    replaceData(offset: number, count: number, data: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CharacterData/substringData) */
    substringData(offset: number, count: number): string;
}

declare var CharacterData: {
    prototype: CharacterData;
    new(): CharacterData;
};

interface ChildNode extends Node {
    /**
     * Inserts nodes just after node, while replacing strings in nodes with equivalent Text nodes.
     *
     * Throws a "HierarchyRequestError" DOMException if the constraints of the node tree are violated.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CharacterData/after)
     */
    after(...nodes: (Node | string)[]): void;
    /**
     * Inserts nodes just before node, while replacing strings in nodes with equivalent Text nodes.
     *
     * Throws a "HierarchyRequestError" DOMException if the constraints of the node tree are violated.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CharacterData/before)
     */
    before(...nodes: (Node | string)[]): void;
    /**
     * Removes node.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CharacterData/remove)
     */
    remove(): void;
    /**
     * Replaces node with nodes, while replacing strings in nodes with equivalent Text nodes.
     *
     * Throws a "HierarchyRequestError" DOMException if the constraints of the node tree are violated.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CharacterData/replaceWith)
     */
    replaceWith(...nodes: (Node | string)[]): void;
}

/** @deprecated */
interface ClientRect extends DOMRect {
}

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Clipboard)
 */
interface Clipboard extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Clipboard/read) */
    read(): Promise<ClipboardItems>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Clipboard/readText) */
    readText(): Promise<string>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Clipboard/write) */
    write(data: ClipboardItems): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Clipboard/writeText) */
    writeText(data: string): Promise<void>;
}

declare var Clipboard: {
    prototype: Clipboard;
    new(): Clipboard;
};

/**
 * Events providing information related to modification of the clipboard, that is cut, copy, and paste events.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ClipboardEvent)
 */
interface ClipboardEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ClipboardEvent/clipboardData) */
    readonly clipboardData: DataTransfer | null;
}

declare var ClipboardEvent: {
    prototype: ClipboardEvent;
    new(type: string, eventInitDict?: ClipboardEventInit): ClipboardEvent;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ClipboardItem)
 */
interface ClipboardItem {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ClipboardItem/types) */
    readonly types: ReadonlyArray<string>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ClipboardItem/getType) */
    getType(type: string): Promise<Blob>;
}

declare var ClipboardItem: {
    prototype: ClipboardItem;
    new(items: Record<string, string | Blob | PromiseLike<string | Blob>>, options?: ClipboardItemOptions): ClipboardItem;
};

/**
 * A CloseEvent is sent to clients using WebSockets when the connection is closed. This is delivered to the listener indicated by the WebSocket object's onclose attribute.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CloseEvent)
 */
interface CloseEvent extends Event {
    /**
     * Returns the WebSocket connection close code provided by the server.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CloseEvent/code)
     */
    readonly code: number;
    /**
     * Returns the WebSocket connection close reason provided by the server.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CloseEvent/reason)
     */
    readonly reason: string;
    /**
     * Returns true if the connection closed cleanly; false otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CloseEvent/wasClean)
     */
    readonly wasClean: boolean;
}

declare var CloseEvent: {
    prototype: CloseEvent;
    new(type: string, eventInitDict?: CloseEventInit): CloseEvent;
};

/**
 * Textual notations within markup; although it is generally not visually shown, such comments are available to be read in the source view.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Comment)
 */
interface Comment extends CharacterData {
}

declare var Comment: {
    prototype: Comment;
    new(data?: string): Comment;
};

/**
 * The DOM CompositionEvent represents events that occur due to the user indirectly entering text.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CompositionEvent)
 */
interface CompositionEvent extends UIEvent {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CompositionEvent/data) */
    readonly data: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CompositionEvent/initCompositionEvent)
     */
    initCompositionEvent(typeArg: string, bubblesArg?: boolean, cancelableArg?: boolean, viewArg?: WindowProxy | null, dataArg?: string): void;
}

declare var CompositionEvent: {
    prototype: CompositionEvent;
    new(type: string, eventInitDict?: CompositionEventInit): CompositionEvent;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CompressionStream) */
interface CompressionStream extends GenericTransformStream {
}

declare var CompressionStream: {
    prototype: CompressionStream;
    new(format: CompressionFormat): CompressionStream;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ConstantSourceNode) */
interface ConstantSourceNode extends AudioScheduledSourceNode {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ConstantSourceNode/offset) */
    readonly offset: AudioParam;
    addEventListener<K extends keyof AudioScheduledSourceNodeEventMap>(type: K, listener: (this: ConstantSourceNode, ev: AudioScheduledSourceNodeEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof AudioScheduledSourceNodeEventMap>(type: K, listener: (this: ConstantSourceNode, ev: AudioScheduledSourceNodeEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var ConstantSourceNode: {
    prototype: ConstantSourceNode;
    new(context: BaseAudioContext, options?: ConstantSourceOptions): ConstantSourceNode;
};

/**
 * An AudioNode that performs a Linear Convolution on a given AudioBuffer, often used to achieve a reverb effect. A ConvolverNode always has exactly one input and one output.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ConvolverNode)
 */
interface ConvolverNode extends AudioNode {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ConvolverNode/buffer) */
    buffer: AudioBuffer | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ConvolverNode/normalize) */
    normalize: boolean;
}

declare var ConvolverNode: {
    prototype: ConvolverNode;
    new(context: BaseAudioContext, options?: ConvolverOptions): ConvolverNode;
};

/**
 * This Streams API interface provides a built-in byte length queuing strategy that can be used when constructing streams.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CountQueuingStrategy)
 */
interface CountQueuingStrategy extends QueuingStrategy {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CountQueuingStrategy/highWaterMark) */
    readonly highWaterMark: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CountQueuingStrategy/size) */
    readonly size: QueuingStrategySize;
}

declare var CountQueuingStrategy: {
    prototype: CountQueuingStrategy;
    new(init: QueuingStrategyInit): CountQueuingStrategy;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Credential)
 */
interface Credential {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Credential/id) */
    readonly id: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Credential/type) */
    readonly type: string;
}

declare var Credential: {
    prototype: Credential;
    new(): Credential;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CredentialsContainer)
 */
interface CredentialsContainer {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CredentialsContainer/create) */
    create(options?: CredentialCreationOptions): Promise<Credential | null>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CredentialsContainer/get) */
    get(options?: CredentialRequestOptions): Promise<Credential | null>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CredentialsContainer/preventSilentAccess) */
    preventSilentAccess(): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CredentialsContainer/store) */
    store(credential: Credential): Promise<Credential>;
}

declare var CredentialsContainer: {
    prototype: CredentialsContainer;
    new(): CredentialsContainer;
};

/**
 * Basic cryptography features available in the current context. It allows access to a cryptographically strong random number generator and to cryptographic primitives.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Crypto)
 */
interface Crypto {
    /**
     * Available only in secure contexts.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Crypto/subtle)
     */
    readonly subtle: SubtleCrypto;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Crypto/getRandomValues) */
    getRandomValues<T extends ArrayBufferView | null>(array: T): T;
    /**
     * Available only in secure contexts.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Crypto/randomUUID)
     */
    randomUUID(): `${string}-${string}-${string}-${string}-${string}`;
}

declare var Crypto: {
    prototype: Crypto;
    new(): Crypto;
};

/**
 * The CryptoKey dictionary of the Web Crypto API represents a cryptographic key.
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CryptoKey)
 */
interface CryptoKey {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CryptoKey/algorithm) */
    readonly algorithm: KeyAlgorithm;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CryptoKey/extractable) */
    readonly extractable: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CryptoKey/type) */
    readonly type: KeyType;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CryptoKey/usages) */
    readonly usages: KeyUsage[];
}

declare var CryptoKey: {
    prototype: CryptoKey;
    new(): CryptoKey;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CustomElementRegistry) */
interface CustomElementRegistry {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CustomElementRegistry/define) */
    define(name: string, constructor: CustomElementConstructor, options?: ElementDefinitionOptions): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CustomElementRegistry/get) */
    get(name: string): CustomElementConstructor | undefined;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CustomElementRegistry/upgrade) */
    upgrade(root: Node): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CustomElementRegistry/whenDefined) */
    whenDefined(name: string): Promise<CustomElementConstructor>;
}

declare var CustomElementRegistry: {
    prototype: CustomElementRegistry;
    new(): CustomElementRegistry;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CustomEvent) */
interface CustomEvent<T = any> extends Event {
    /**
     * Returns any custom data event was created with. Typically used for synthetic events.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CustomEvent/detail)
     */
    readonly detail: T;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/CustomEvent/initCustomEvent)
     */
    initCustomEvent(type: string, bubbles?: boolean, cancelable?: boolean, detail?: T): void;
}

declare var CustomEvent: {
    prototype: CustomEvent;
    new<T>(type: string, eventInitDict?: CustomEventInit<T>): CustomEvent<T>;
};

/**
 * An abnormal event (called an exception) which occurs as a result of calling a method or accessing a property of a web API.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMException)
 */
interface DOMException extends Error {
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMException/code)
     */
    readonly code: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMException/message) */
    readonly message: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMException/name) */
    readonly name: string;
    readonly INDEX_SIZE_ERR: 1;
    readonly DOMSTRING_SIZE_ERR: 2;
    readonly HIERARCHY_REQUEST_ERR: 3;
    readonly WRONG_DOCUMENT_ERR: 4;
    readonly INVALID_CHARACTER_ERR: 5;
    readonly NO_DATA_ALLOWED_ERR: 6;
    readonly NO_MODIFICATION_ALLOWED_ERR: 7;
    readonly NOT_FOUND_ERR: 8;
    readonly NOT_SUPPORTED_ERR: 9;
    readonly INUSE_ATTRIBUTE_ERR: 10;
    readonly INVALID_STATE_ERR: 11;
    readonly SYNTAX_ERR: 12;
    readonly INVALID_MODIFICATION_ERR: 13;
    readonly NAMESPACE_ERR: 14;
    readonly INVALID_ACCESS_ERR: 15;
    readonly VALIDATION_ERR: 16;
    readonly TYPE_MISMATCH_ERR: 17;
    readonly SECURITY_ERR: 18;
    readonly NETWORK_ERR: 19;
    readonly ABORT_ERR: 20;
    readonly URL_MISMATCH_ERR: 21;
    readonly QUOTA_EXCEEDED_ERR: 22;
    readonly TIMEOUT_ERR: 23;
    readonly INVALID_NODE_TYPE_ERR: 24;
    readonly DATA_CLONE_ERR: 25;
}

declare var DOMException: {
    prototype: DOMException;
    new(message?: string, name?: string): DOMException;
    readonly INDEX_SIZE_ERR: 1;
    readonly DOMSTRING_SIZE_ERR: 2;
    readonly HIERARCHY_REQUEST_ERR: 3;
    readonly WRONG_DOCUMENT_ERR: 4;
    readonly INVALID_CHARACTER_ERR: 5;
    readonly NO_DATA_ALLOWED_ERR: 6;
    readonly NO_MODIFICATION_ALLOWED_ERR: 7;
    readonly NOT_FOUND_ERR: 8;
    readonly NOT_SUPPORTED_ERR: 9;
    readonly INUSE_ATTRIBUTE_ERR: 10;
    readonly INVALID_STATE_ERR: 11;
    readonly SYNTAX_ERR: 12;
    readonly INVALID_MODIFICATION_ERR: 13;
    readonly NAMESPACE_ERR: 14;
    readonly INVALID_ACCESS_ERR: 15;
    readonly VALIDATION_ERR: 16;
    readonly TYPE_MISMATCH_ERR: 17;
    readonly SECURITY_ERR: 18;
    readonly NETWORK_ERR: 19;
    readonly ABORT_ERR: 20;
    readonly URL_MISMATCH_ERR: 21;
    readonly QUOTA_EXCEEDED_ERR: 22;
    readonly TIMEOUT_ERR: 23;
    readonly INVALID_NODE_TYPE_ERR: 24;
    readonly DATA_CLONE_ERR: 25;
};

/**
 * An object providing methods which are not dependent on any particular document. Such an object is returned by the Document.implementation property.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMImplementation)
 */
interface DOMImplementation {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMImplementation/createDocument) */
    createDocument(namespace: string | null, qualifiedName: string | null, doctype?: DocumentType | null): XMLDocument;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMImplementation/createDocumentType) */
    createDocumentType(qualifiedName: string, publicId: string, systemId: string): DocumentType;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMImplementation/createHTMLDocument) */
    createHTMLDocument(title?: string): Document;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMImplementation/hasFeature)
     */
    hasFeature(...args: any[]): true;
}

declare var DOMImplementation: {
    prototype: DOMImplementation;
    new(): DOMImplementation;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrix) */
interface DOMMatrix extends DOMMatrixReadOnly {
    a: number;
    b: number;
    c: number;
    d: number;
    e: number;
    f: number;
    m11: number;
    m12: number;
    m13: number;
    m14: number;
    m21: number;
    m22: number;
    m23: number;
    m24: number;
    m31: number;
    m32: number;
    m33: number;
    m34: number;
    m41: number;
    m42: number;
    m43: number;
    m44: number;
    invertSelf(): DOMMatrix;
    multiplySelf(other?: DOMMatrixInit): DOMMatrix;
    preMultiplySelf(other?: DOMMatrixInit): DOMMatrix;
    rotateAxisAngleSelf(x?: number, y?: number, z?: number, angle?: number): DOMMatrix;
    rotateFromVectorSelf(x?: number, y?: number): DOMMatrix;
    rotateSelf(rotX?: number, rotY?: number, rotZ?: number): DOMMatrix;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrix/scale3dSelf) */
    scale3dSelf(scale?: number, originX?: number, originY?: number, originZ?: number): DOMMatrix;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrix/scaleSelf) */
    scaleSelf(scaleX?: number, scaleY?: number, scaleZ?: number, originX?: number, originY?: number, originZ?: number): DOMMatrix;
    setMatrixValue(transformList: string): DOMMatrix;
    skewXSelf(sx?: number): DOMMatrix;
    skewYSelf(sy?: number): DOMMatrix;
    translateSelf(tx?: number, ty?: number, tz?: number): DOMMatrix;
}

declare var DOMMatrix: {
    prototype: DOMMatrix;
    new(init?: string | number[]): DOMMatrix;
    fromFloat32Array(array32: Float32Array): DOMMatrix;
    fromFloat64Array(array64: Float64Array): DOMMatrix;
    fromMatrix(other?: DOMMatrixInit): DOMMatrix;
};

type SVGMatrix = DOMMatrix;
declare var SVGMatrix: typeof DOMMatrix;

type WebKitCSSMatrix = DOMMatrix;
declare var WebKitCSSMatrix: typeof DOMMatrix;

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly) */
interface DOMMatrixReadOnly {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/a) */
    readonly a: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/b) */
    readonly b: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/c) */
    readonly c: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/d) */
    readonly d: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/e) */
    readonly e: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/f) */
    readonly f: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/is2D) */
    readonly is2D: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/isIdentity) */
    readonly isIdentity: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/m11) */
    readonly m11: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/m12) */
    readonly m12: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/m13) */
    readonly m13: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/m14) */
    readonly m14: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/m21) */
    readonly m21: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/m22) */
    readonly m22: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/m23) */
    readonly m23: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/m24) */
    readonly m24: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/m31) */
    readonly m31: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/m32) */
    readonly m32: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/m33) */
    readonly m33: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/m34) */
    readonly m34: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/m41) */
    readonly m41: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/m42) */
    readonly m42: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/m43) */
    readonly m43: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/m44) */
    readonly m44: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/flipX) */
    flipX(): DOMMatrix;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/flipY) */
    flipY(): DOMMatrix;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/inverse) */
    inverse(): DOMMatrix;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/multiply) */
    multiply(other?: DOMMatrixInit): DOMMatrix;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/rotate) */
    rotate(rotX?: number, rotY?: number, rotZ?: number): DOMMatrix;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/rotateAxisAngle) */
    rotateAxisAngle(x?: number, y?: number, z?: number, angle?: number): DOMMatrix;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/rotateFromVector) */
    rotateFromVector(x?: number, y?: number): DOMMatrix;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/scale) */
    scale(scaleX?: number, scaleY?: number, scaleZ?: number, originX?: number, originY?: number, originZ?: number): DOMMatrix;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/scale3d) */
    scale3d(scale?: number, originX?: number, originY?: number, originZ?: number): DOMMatrix;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/scaleNonUniform)
     */
    scaleNonUniform(scaleX?: number, scaleY?: number): DOMMatrix;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/skewX) */
    skewX(sx?: number): DOMMatrix;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/skewY) */
    skewY(sy?: number): DOMMatrix;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/toFloat32Array) */
    toFloat32Array(): Float32Array;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/toFloat64Array) */
    toFloat64Array(): Float64Array;
    toJSON(): any;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/transformPoint) */
    transformPoint(point?: DOMPointInit): DOMPoint;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMMatrixReadOnly/translate) */
    translate(tx?: number, ty?: number, tz?: number): DOMMatrix;
    toString(): string;
}

declare var DOMMatrixReadOnly: {
    prototype: DOMMatrixReadOnly;
    new(init?: string | number[]): DOMMatrixReadOnly;
    fromFloat32Array(array32: Float32Array): DOMMatrixReadOnly;
    fromFloat64Array(array64: Float64Array): DOMMatrixReadOnly;
    fromMatrix(other?: DOMMatrixInit): DOMMatrixReadOnly;
};

/**
 * Provides the ability to parse XML or HTML source code from a string into a DOM Document.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMParser)
 */
interface DOMParser {
    /**
     * Parses string using either the HTML or XML parser, according to type, and returns the resulting Document. type can be "text/html" (which will invoke the HTML parser), or any of "text/xml", "application/xml", "application/xhtml+xml", or "image/svg+xml" (which will invoke the XML parser).
     *
     * For the XML parser, if string cannot be parsed, then the returned Document will contain elements describing the resulting error.
     *
     * Note that script elements are not evaluated during parsing, and the resulting document's encoding will always be UTF-8.
     *
     * Values other than the above for type will cause a TypeError exception to be thrown.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMParser/parseFromString)
     */
    parseFromString(string: string, type: DOMParserSupportedType): Document;
}

declare var DOMParser: {
    prototype: DOMParser;
    new(): DOMParser;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMPoint) */
interface DOMPoint extends DOMPointReadOnly {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMPoint/w) */
    w: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMPoint/x) */
    x: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMPoint/y) */
    y: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMPoint/z) */
    z: number;
}

declare var DOMPoint: {
    prototype: DOMPoint;
    new(x?: number, y?: number, z?: number, w?: number): DOMPoint;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMPoint/fromPoint_static) */
    fromPoint(other?: DOMPointInit): DOMPoint;
};

type SVGPoint = DOMPoint;
declare var SVGPoint: typeof DOMPoint;

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMPointReadOnly) */
interface DOMPointReadOnly {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMPointReadOnly/w) */
    readonly w: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMPointReadOnly/x) */
    readonly x: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMPointReadOnly/y) */
    readonly y: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMPointReadOnly/z) */
    readonly z: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMPointReadOnly/matrixTransform) */
    matrixTransform(matrix?: DOMMatrixInit): DOMPoint;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMPointReadOnly/toJSON) */
    toJSON(): any;
}

declare var DOMPointReadOnly: {
    prototype: DOMPointReadOnly;
    new(x?: number, y?: number, z?: number, w?: number): DOMPointReadOnly;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMPointReadOnly/fromPoint_static) */
    fromPoint(other?: DOMPointInit): DOMPointReadOnly;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMQuad) */
interface DOMQuad {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMQuad/p1) */
    readonly p1: DOMPoint;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMQuad/p2) */
    readonly p2: DOMPoint;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMQuad/p3) */
    readonly p3: DOMPoint;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMQuad/p4) */
    readonly p4: DOMPoint;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMQuad/getBounds) */
    getBounds(): DOMRect;
    toJSON(): any;
}

declare var DOMQuad: {
    prototype: DOMQuad;
    new(p1?: DOMPointInit, p2?: DOMPointInit, p3?: DOMPointInit, p4?: DOMPointInit): DOMQuad;
    fromQuad(other?: DOMQuadInit): DOMQuad;
    fromRect(other?: DOMRectInit): DOMQuad;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMRect) */
interface DOMRect extends DOMRectReadOnly {
    height: number;
    width: number;
    x: number;
    y: number;
}

declare var DOMRect: {
    prototype: DOMRect;
    new(x?: number, y?: number, width?: number, height?: number): DOMRect;
    fromRect(other?: DOMRectInit): DOMRect;
};

type SVGRect = DOMRect;
declare var SVGRect: typeof DOMRect;

interface DOMRectList {
    readonly length: number;
    item(index: number): DOMRect | null;
    [index: number]: DOMRect;
}

declare var DOMRectList: {
    prototype: DOMRectList;
    new(): DOMRectList;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMRectReadOnly) */
interface DOMRectReadOnly {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMRectReadOnly/bottom) */
    readonly bottom: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMRectReadOnly/height) */
    readonly height: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMRectReadOnly/left) */
    readonly left: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMRectReadOnly/right) */
    readonly right: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMRectReadOnly/top) */
    readonly top: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMRectReadOnly/width) */
    readonly width: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMRectReadOnly/x) */
    readonly x: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMRectReadOnly/y) */
    readonly y: number;
    toJSON(): any;
}

declare var DOMRectReadOnly: {
    prototype: DOMRectReadOnly;
    new(x?: number, y?: number, width?: number, height?: number): DOMRectReadOnly;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMRectReadOnly/fromRect_static) */
    fromRect(other?: DOMRectInit): DOMRectReadOnly;
};

/**
 * A type returned by some APIs which contains a list of DOMString (strings).
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMStringList)
 */
interface DOMStringList {
    /**
     * Returns the number of strings in strings.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMStringList/length)
     */
    readonly length: number;
    /**
     * Returns true if strings contains string, and false otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMStringList/contains)
     */
    contains(string: string): boolean;
    /**
     * Returns the string with index index from strings.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMStringList/item)
     */
    item(index: number): string | null;
    [index: number]: string;
}

declare var DOMStringList: {
    prototype: DOMStringList;
    new(): DOMStringList;
};

/**
 * Used by the dataset HTML attribute to represent data for custom attributes added to elements.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMStringMap)
 */
interface DOMStringMap {
    [name: string]: string | undefined;
}

declare var DOMStringMap: {
    prototype: DOMStringMap;
    new(): DOMStringMap;
};

/**
 * A set of space-separated tokens. Such a set is returned by Element.classList, HTMLLinkElement.relList, HTMLAnchorElement.relList, HTMLAreaElement.relList, HTMLIframeElement.sandbox, or HTMLOutputElement.htmlFor. It is indexed beginning with 0 as with JavaScript Array objects. DOMTokenList is always case-sensitive.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMTokenList)
 */
interface DOMTokenList {
    /**
     * Returns the number of tokens.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMTokenList/length)
     */
    readonly length: number;
    /**
     * Returns the associated set as string.
     *
     * Can be set, to change the associated attribute.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMTokenList/value)
     */
    value: string;
    toString(): string;
    /**
     * Adds all arguments passed, except those already present.
     *
     * Throws a "SyntaxError" DOMException if one of the arguments is the empty string.
     *
     * Throws an "InvalidCharacterError" DOMException if one of the arguments contains any ASCII whitespace.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMTokenList/add)
     */
    add(...tokens: string[]): void;
    /**
     * Returns true if token is present, and false otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMTokenList/contains)
     */
    contains(token: string): boolean;
    /**
     * Returns the token with index index.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMTokenList/item)
     */
    item(index: number): string | null;
    /**
     * Removes arguments passed, if they are present.
     *
     * Throws a "SyntaxError" DOMException if one of the arguments is the empty string.
     *
     * Throws an "InvalidCharacterError" DOMException if one of the arguments contains any ASCII whitespace.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMTokenList/remove)
     */
    remove(...tokens: string[]): void;
    /**
     * Replaces token with newToken.
     *
     * Returns true if token was replaced with newToken, and false otherwise.
     *
     * Throws a "SyntaxError" DOMException if one of the arguments is the empty string.
     *
     * Throws an "InvalidCharacterError" DOMException if one of the arguments contains any ASCII whitespace.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMTokenList/replace)
     */
    replace(token: string, newToken: string): boolean;
    /**
     * Returns true if token is in the associated attribute's supported tokens. Returns false otherwise.
     *
     * Throws a TypeError if the associated attribute has no supported tokens defined.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMTokenList/supports)
     */
    supports(token: string): boolean;
    /**
     * If force is not given, "toggles" token, removing it if it's present and adding it if it's not present. If force is true, adds token (same as add()). If force is false, removes token (same as remove()).
     *
     * Returns true if token is now present, and false otherwise.
     *
     * Throws a "SyntaxError" DOMException if token is empty.
     *
     * Throws an "InvalidCharacterError" DOMException if token contains any spaces.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DOMTokenList/toggle)
     */
    toggle(token: string, force?: boolean): boolean;
    forEach(callbackfn: (value: string, key: number, parent: DOMTokenList) => void, thisArg?: any): void;
    [index: number]: string;
}

declare var DOMTokenList: {
    prototype: DOMTokenList;
    new(): DOMTokenList;
};

/**
 * Used to hold the data that is being dragged during a drag and drop operation. It may hold one or more data items, each of one or more data types. For more information about drag and drop, see HTML Drag and Drop API.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DataTransfer)
 */
interface DataTransfer {
    /**
     * Returns the kind of operation that is currently selected. If the kind of operation isn't one of those that is allowed by the effectAllowed attribute, then the operation will fail.
     *
     * Can be set, to change the selected operation.
     *
     * The possible values are "none", "copy", "link", and "move".
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DataTransfer/dropEffect)
     */
    dropEffect: "none" | "copy" | "link" | "move";
    /**
     * Returns the kinds of operations that are to be allowed.
     *
     * Can be set (during the dragstart event), to change the allowed operations.
     *
     * The possible values are "none", "copy", "copyLink", "copyMove", "link", "linkMove", "move", "all", and "uninitialized",
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DataTransfer/effectAllowed)
     */
    effectAllowed: "none" | "copy" | "copyLink" | "copyMove" | "link" | "linkMove" | "move" | "all" | "uninitialized";
    /**
     * Returns a FileList of the files being dragged, if any.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DataTransfer/files)
     */
    readonly files: FileList;
    /**
     * Returns a DataTransferItemList object, with the drag data.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DataTransfer/items)
     */
    readonly items: DataTransferItemList;
    /**
     * Returns a frozen array listing the formats that were set in the dragstart event. In addition, if any files are being dragged, then one of the types will be the string "Files".
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DataTransfer/types)
     */
    readonly types: ReadonlyArray<string>;
    /**
     * Removes the data of the specified formats. Removes all data if the argument is omitted.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DataTransfer/clearData)
     */
    clearData(format?: string): void;
    /**
     * Returns the specified data. If there is no such data, returns the empty string.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DataTransfer/getData)
     */
    getData(format: string): string;
    /**
     * Adds the specified data.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DataTransfer/setData)
     */
    setData(format: string, data: string): void;
    /**
     * Uses the given element to update the drag feedback, replacing any previously specified feedback.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DataTransfer/setDragImage)
     */
    setDragImage(image: Element, x: number, y: number): void;
}

declare var DataTransfer: {
    prototype: DataTransfer;
    new(): DataTransfer;
};

/**
 * One drag data item. During a drag operation, each drag event has a dataTransfer property which contains a list of drag data items. Each item in the list is a DataTransferItem object.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DataTransferItem)
 */
interface DataTransferItem {
    /**
     * Returns the drag data item kind, one of: "string", "file".
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DataTransferItem/kind)
     */
    readonly kind: string;
    /**
     * Returns the drag data item type string.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DataTransferItem/type)
     */
    readonly type: string;
    /**
     * Returns a File object, if the drag data item kind is File.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DataTransferItem/getAsFile)
     */
    getAsFile(): File | null;
    /**
     * Invokes the callback with the string data as the argument, if the drag data item kind is text.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DataTransferItem/getAsString)
     */
    getAsString(callback: FunctionStringCallback | null): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DataTransferItem/webkitGetAsEntry) */
    webkitGetAsEntry(): FileSystemEntry | null;
}

declare var DataTransferItem: {
    prototype: DataTransferItem;
    new(): DataTransferItem;
};

/**
 * A list of DataTransferItem objects representing items being dragged. During a drag operation, each DragEvent has a dataTransfer property and that property is a DataTransferItemList.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DataTransferItemList)
 */
interface DataTransferItemList {
    /**
     * Returns the number of items in the drag data store.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DataTransferItemList/length)
     */
    readonly length: number;
    /**
     * Adds a new entry for the given data to the drag data store. If the data is plain text then a type string has to be provided also.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DataTransferItemList/add)
     */
    add(data: string, type: string): DataTransferItem | null;
    add(data: File): DataTransferItem | null;
    /**
     * Removes all the entries in the drag data store.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DataTransferItemList/clear)
     */
    clear(): void;
    /**
     * Removes the indexth entry in the drag data store.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DataTransferItemList/remove)
     */
    remove(index: number): void;
    [index: number]: DataTransferItem;
}

declare var DataTransferItemList: {
    prototype: DataTransferItemList;
    new(): DataTransferItemList;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DecompressionStream) */
interface DecompressionStream extends GenericTransformStream {
}

declare var DecompressionStream: {
    prototype: DecompressionStream;
    new(format: CompressionFormat): DecompressionStream;
};

/**
 * A delay-line; an AudioNode audio-processing module that causes a delay between the arrival of an input data and its propagation to the output.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DelayNode)
 */
interface DelayNode extends AudioNode {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DelayNode/delayTime) */
    readonly delayTime: AudioParam;
}

declare var DelayNode: {
    prototype: DelayNode;
    new(context: BaseAudioContext, options?: DelayOptions): DelayNode;
};

/**
 * The DeviceMotionEvent provides web developers with information about the speed of changes for the device's position and orientation.
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DeviceMotionEvent)
 */
interface DeviceMotionEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DeviceMotionEvent/acceleration) */
    readonly acceleration: DeviceMotionEventAcceleration | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DeviceMotionEvent/accelerationIncludingGravity) */
    readonly accelerationIncludingGravity: DeviceMotionEventAcceleration | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DeviceMotionEvent/interval) */
    readonly interval: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DeviceMotionEvent/rotationRate) */
    readonly rotationRate: DeviceMotionEventRotationRate | null;
}

declare var DeviceMotionEvent: {
    prototype: DeviceMotionEvent;
    new(type: string, eventInitDict?: DeviceMotionEventInit): DeviceMotionEvent;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DeviceMotionEventAcceleration)
 */
interface DeviceMotionEventAcceleration {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DeviceMotionEventAcceleration/x) */
    readonly x: number | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DeviceMotionEventAcceleration/y) */
    readonly y: number | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DeviceMotionEventAcceleration/z) */
    readonly z: number | null;
}

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DeviceMotionEventRotationRate)
 */
interface DeviceMotionEventRotationRate {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DeviceMotionEventRotationRate/alpha) */
    readonly alpha: number | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DeviceMotionEventRotationRate/beta) */
    readonly beta: number | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DeviceMotionEventRotationRate/gamma) */
    readonly gamma: number | null;
}

/**
 * The DeviceOrientationEvent provides web developers with information from the physical orientation of the device running the web page.
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DeviceOrientationEvent)
 */
interface DeviceOrientationEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DeviceOrientationEvent/absolute) */
    readonly absolute: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DeviceOrientationEvent/alpha) */
    readonly alpha: number | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DeviceOrientationEvent/beta) */
    readonly beta: number | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DeviceOrientationEvent/gamma) */
    readonly gamma: number | null;
}

declare var DeviceOrientationEvent: {
    prototype: DeviceOrientationEvent;
    new(type: string, eventInitDict?: DeviceOrientationEventInit): DeviceOrientationEvent;
};

interface DocumentEventMap extends GlobalEventHandlersEventMap {
    "DOMContentLoaded": Event;
    "fullscreenchange": Event;
    "fullscreenerror": Event;
    "pointerlockchange": Event;
    "pointerlockerror": Event;
    "readystatechange": Event;
    "visibilitychange": Event;
}

/**
 * Any web page loaded in the browser and serves as an entry point into the web page's content, which is the DOM tree.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document)
 */
interface Document extends Node, DocumentOrShadowRoot, FontFaceSource, GlobalEventHandlers, NonElementParentNode, ParentNode, XPathEvaluatorBase {
    /**
     * Sets or gets the URL for the current document.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/URL)
     */
    readonly URL: string;
    /**
     * Sets or gets the color of all active links in the document.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/alinkColor)
     */
    alinkColor: string;
    /**
     * Returns a reference to the collection of elements contained by the object.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/all)
     */
    readonly all: HTMLAllCollection;
    /**
     * Retrieves a collection of all a objects that have a name and/or id property. Objects in this collection are in HTML source order.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/anchors)
     */
    readonly anchors: HTMLCollectionOf<HTMLAnchorElement>;
    /**
     * Retrieves a collection of all applet objects in the document.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/applets)
     */
    readonly applets: HTMLCollection;
    /**
     * Deprecated. Sets or retrieves a value that indicates the background color behind the object.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/bgColor)
     */
    bgColor: string;
    /**
     * Specifies the beginning and end of the document body.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/body)
     */
    body: HTMLElement;
    /**
     * Returns document's encoding.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/characterSet)
     */
    readonly characterSet: string;
    /**
     * Gets or sets the character set used to encode the object.
     * @deprecated This is a legacy alias of `characterSet`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/characterSet)
     */
    readonly charset: string;
    /**
     * Gets a value that indicates whether standards-compliant mode is switched on for the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/compatMode)
     */
    readonly compatMode: string;
    /**
     * Returns document's content type.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/contentType)
     */
    readonly contentType: string;
    /**
     * Returns the HTTP cookies that apply to the Document. If there are no cookies or cookies can't be applied to this resource, the empty string will be returned.
     *
     * Can be set, to add a new cookie to the element's set of HTTP cookies.
     *
     * If the contents are sandboxed into a unique origin (e.g. in an iframe with the sandbox attribute), a "SecurityError" DOMException will be thrown on getting and setting.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/cookie)
     */
    cookie: string;
    /**
     * Returns the script element, or the SVG script element, that is currently executing, as long as the element represents a classic script. In the case of reentrant script execution, returns the one that most recently started executing amongst those that have not yet finished executing.
     *
     * Returns null if the Document is not currently executing a script or SVG script element (e.g., because the running script is an event handler, or a timeout), or if the currently executing script or SVG script element represents a module script.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/currentScript)
     */
    readonly currentScript: HTMLOrSVGScriptElement | null;
    /**
     * Returns the Window object of the active document.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/defaultView)
     */
    readonly defaultView: (WindowProxy & typeof globalThis) | null;
    /**
     * Sets or gets a value that indicates whether the document can be edited.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/designMode)
     */
    designMode: string;
    /**
     * Sets or retrieves a value that indicates the reading order of the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/dir)
     */
    dir: string;
    /**
     * Gets an object representing the document type declaration associated with the current document.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/doctype)
     */
    readonly doctype: DocumentType | null;
    /**
     * Gets a reference to the root node of the document.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/documentElement)
     */
    readonly documentElement: HTMLElement;
    /**
     * Returns document's URL.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/documentURI)
     */
    readonly documentURI: string;
    /**
     * Sets or gets the security domain of the document.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/domain)
     */
    domain: string;
    /**
     * Retrieves a collection of all embed objects in the document.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/embeds)
     */
    readonly embeds: HTMLCollectionOf<HTMLEmbedElement>;
    /**
     * Sets or gets the foreground (text) color of the document.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/fgColor)
     */
    fgColor: string;
    /**
     * Retrieves a collection, in source order, of all form objects in the document.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/forms)
     */
    readonly forms: HTMLCollectionOf<HTMLFormElement>;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/fullscreen)
     */
    readonly fullscreen: boolean;
    /**
     * Returns true if document has the ability to display elements fullscreen and fullscreen is supported, or false otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/fullscreenEnabled)
     */
    readonly fullscreenEnabled: boolean;
    /**
     * Returns the head element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/head)
     */
    readonly head: HTMLHeadElement;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/hidden) */
    readonly hidden: boolean;
    /**
     * Retrieves a collection, in source order, of img objects in the document.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/images)
     */
    readonly images: HTMLCollectionOf<HTMLImageElement>;
    /**
     * Gets the implementation object of the current document.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/implementation)
     */
    readonly implementation: DOMImplementation;
    /**
     * Returns the character encoding used to create the webpage that is loaded into the document object.
     * @deprecated This is a legacy alias of `characterSet`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/characterSet)
     */
    readonly inputEncoding: string;
    /**
     * Gets the date that the page was last modified, if the page supplies one.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/lastModified)
     */
    readonly lastModified: string;
    /**
     * Sets or gets the color of the document links.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/linkColor)
     */
    linkColor: string;
    /**
     * Retrieves a collection of all a objects that specify the href property and all area objects in the document.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/links)
     */
    readonly links: HTMLCollectionOf<HTMLAnchorElement | HTMLAreaElement>;
    /**
     * Contains information about the current URL.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/location)
     */
    get location(): Location;
    set location(href: string | Location);
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/fullscreenchange_event) */
    onfullscreenchange: ((this: Document, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/fullscreenerror_event) */
    onfullscreenerror: ((this: Document, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/pointerlockchange_event) */
    onpointerlockchange: ((this: Document, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/pointerlockerror_event) */
    onpointerlockerror: ((this: Document, ev: Event) => any) | null;
    /**
     * Fires when the state of the object has changed.
     * @param ev The event
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/readystatechange_event)
     */
    onreadystatechange: ((this: Document, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/visibilitychange_event) */
    onvisibilitychange: ((this: Document, ev: Event) => any) | null;
    readonly ownerDocument: null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/pictureInPictureEnabled) */
    readonly pictureInPictureEnabled: boolean;
    /**
     * Return an HTMLCollection of the embed elements in the Document.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/plugins)
     */
    readonly plugins: HTMLCollectionOf<HTMLEmbedElement>;
    /**
     * Retrieves a value that indicates the current state of the object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/readyState)
     */
    readonly readyState: DocumentReadyState;
    /**
     * Gets the URL of the location that referred the user to the current page.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/referrer)
     */
    readonly referrer: string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/rootElement)
     */
    readonly rootElement: SVGSVGElement | null;
    /**
     * Retrieves a collection of all script objects in the document.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/scripts)
     */
    readonly scripts: HTMLCollectionOf<HTMLScriptElement>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/scrollingElement) */
    readonly scrollingElement: Element | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/timeline) */
    readonly timeline: DocumentTimeline;
    /**
     * Contains the title of the document.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/title)
     */
    title: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/visibilityState) */
    readonly visibilityState: DocumentVisibilityState;
    /**
     * Sets or gets the color of the links that the user has visited.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/vlinkColor)
     */
    vlinkColor: string;
    /**
     * Moves node from another document and returns it.
     *
     * If node is a document, throws a "NotSupportedError" DOMException or, if node is a shadow root, throws a "HierarchyRequestError" DOMException.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/adoptNode)
     */
    adoptNode<T extends Node>(node: T): T;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/captureEvents)
     */
    captureEvents(): void;
    /** @deprecated */
    caretRangeFromPoint(x: number, y: number): Range | null;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/clear)
     */
    clear(): void;
    /**
     * Closes an output stream and forces the sent data to display.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/close)
     */
    close(): void;
    /**
     * Creates an attribute object with a specified name.
     * @param name String that sets the attribute object's name.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/createAttribute)
     */
    createAttribute(localName: string): Attr;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/createAttributeNS) */
    createAttributeNS(namespace: string | null, qualifiedName: string): Attr;
    /**
     * Returns a CDATASection node whose data is data.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/createCDATASection)
     */
    createCDATASection(data: string): CDATASection;
    /**
     * Creates a comment object with the specified data.
     * @param data Sets the comment object's data.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/createComment)
     */
    createComment(data: string): Comment;
    /**
     * Creates a new document.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/createDocumentFragment)
     */
    createDocumentFragment(): DocumentFragment;
    /**
     * Creates an instance of the element for the specified tag.
     * @param tagName The name of an element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/createElement)
     */
    createElement<K extends keyof HTMLElementTagNameMap>(tagName: K, options?: ElementCreationOptions): HTMLElementTagNameMap[K];
    /** @deprecated */
    createElement<K extends keyof HTMLElementDeprecatedTagNameMap>(tagName: K, options?: ElementCreationOptions): HTMLElementDeprecatedTagNameMap[K];
    createElement(tagName: string, options?: ElementCreationOptions): HTMLElement;
    /**
     * Returns an element with namespace namespace. Its namespace prefix will be everything before ":" (U+003E) in qualifiedName or null. Its local name will be everything after ":" (U+003E) in qualifiedName or qualifiedName.
     *
     * If localName does not match the Name production an "InvalidCharacterError" DOMException will be thrown.
     *
     * If one of the following conditions is true a "NamespaceError" DOMException will be thrown:
     *
     * localName does not match the QName production.
     * Namespace prefix is not null and namespace is the empty string.
     * Namespace prefix is "xml" and namespace is not the XML namespace.
     * qualifiedName or namespace prefix is "xmlns" and namespace is not the XMLNS namespace.
     * namespace is the XMLNS namespace and neither qualifiedName nor namespace prefix is "xmlns".
     *
     * When supplied, options's is can be used to create a customized built-in element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/createElementNS)
     */
    createElementNS(namespaceURI: "http://www.w3.org/1999/xhtml", qualifiedName: string): HTMLElement;
    createElementNS<K extends keyof SVGElementTagNameMap>(namespaceURI: "http://www.w3.org/2000/svg", qualifiedName: K): SVGElementTagNameMap[K];
    createElementNS(namespaceURI: "http://www.w3.org/2000/svg", qualifiedName: string): SVGElement;
    createElementNS<K extends keyof MathMLElementTagNameMap>(namespaceURI: "http://www.w3.org/1998/Math/MathML", qualifiedName: K): MathMLElementTagNameMap[K];
    createElementNS(namespaceURI: "http://www.w3.org/1998/Math/MathML", qualifiedName: string): MathMLElement;
    createElementNS(namespaceURI: string | null, qualifiedName: string, options?: ElementCreationOptions): Element;
    createElementNS(namespace: string | null, qualifiedName: string, options?: string | ElementCreationOptions): Element;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/createEvent) */
    createEvent(eventInterface: "AnimationEvent"): AnimationEvent;
    createEvent(eventInterface: "AnimationPlaybackEvent"): AnimationPlaybackEvent;
    createEvent(eventInterface: "AudioProcessingEvent"): AudioProcessingEvent;
    createEvent(eventInterface: "BeforeUnloadEvent"): BeforeUnloadEvent;
    createEvent(eventInterface: "BlobEvent"): BlobEvent;
    createEvent(eventInterface: "ClipboardEvent"): ClipboardEvent;
    createEvent(eventInterface: "CloseEvent"): CloseEvent;
    createEvent(eventInterface: "CompositionEvent"): CompositionEvent;
    createEvent(eventInterface: "CustomEvent"): CustomEvent;
    createEvent(eventInterface: "DeviceMotionEvent"): DeviceMotionEvent;
    createEvent(eventInterface: "DeviceOrientationEvent"): DeviceOrientationEvent;
    createEvent(eventInterface: "DragEvent"): DragEvent;
    createEvent(eventInterface: "ErrorEvent"): ErrorEvent;
    createEvent(eventInterface: "Event"): Event;
    createEvent(eventInterface: "Events"): Event;
    createEvent(eventInterface: "FocusEvent"): FocusEvent;
    createEvent(eventInterface: "FontFaceSetLoadEvent"): FontFaceSetLoadEvent;
    createEvent(eventInterface: "FormDataEvent"): FormDataEvent;
    createEvent(eventInterface: "GamepadEvent"): GamepadEvent;
    createEvent(eventInterface: "HashChangeEvent"): HashChangeEvent;
    createEvent(eventInterface: "IDBVersionChangeEvent"): IDBVersionChangeEvent;
    createEvent(eventInterface: "InputEvent"): InputEvent;
    createEvent(eventInterface: "KeyboardEvent"): KeyboardEvent;
    createEvent(eventInterface: "MIDIConnectionEvent"): MIDIConnectionEvent;
    createEvent(eventInterface: "MIDIMessageEvent"): MIDIMessageEvent;
    createEvent(eventInterface: "MediaEncryptedEvent"): MediaEncryptedEvent;
    createEvent(eventInterface: "MediaKeyMessageEvent"): MediaKeyMessageEvent;
    createEvent(eventInterface: "MediaQueryListEvent"): MediaQueryListEvent;
    createEvent(eventInterface: "MediaStreamTrackEvent"): MediaStreamTrackEvent;
    createEvent(eventInterface: "MessageEvent"): MessageEvent;
    createEvent(eventInterface: "MouseEvent"): MouseEvent;
    createEvent(eventInterface: "MouseEvents"): MouseEvent;
    createEvent(eventInterface: "MutationEvent"): MutationEvent;
    createEvent(eventInterface: "MutationEvents"): MutationEvent;
    createEvent(eventInterface: "OfflineAudioCompletionEvent"): OfflineAudioCompletionEvent;
    createEvent(eventInterface: "PageTransitionEvent"): PageTransitionEvent;
    createEvent(eventInterface: "PaymentMethodChangeEvent"): PaymentMethodChangeEvent;
    createEvent(eventInterface: "PaymentRequestUpdateEvent"): PaymentRequestUpdateEvent;
    createEvent(eventInterface: "PictureInPictureEvent"): PictureInPictureEvent;
    createEvent(eventInterface: "PointerEvent"): PointerEvent;
    createEvent(eventInterface: "PopStateEvent"): PopStateEvent;
    createEvent(eventInterface: "ProgressEvent"): ProgressEvent;
    createEvent(eventInterface: "PromiseRejectionEvent"): PromiseRejectionEvent;
    createEvent(eventInterface: "RTCDTMFToneChangeEvent"): RTCDTMFToneChangeEvent;
    createEvent(eventInterface: "RTCDataChannelEvent"): RTCDataChannelEvent;
    createEvent(eventInterface: "RTCErrorEvent"): RTCErrorEvent;
    createEvent(eventInterface: "RTCPeerConnectionIceErrorEvent"): RTCPeerConnectionIceErrorEvent;
    createEvent(eventInterface: "RTCPeerConnectionIceEvent"): RTCPeerConnectionIceEvent;
    createEvent(eventInterface: "RTCTrackEvent"): RTCTrackEvent;
    createEvent(eventInterface: "SecurityPolicyViolationEvent"): SecurityPolicyViolationEvent;
    createEvent(eventInterface: "SpeechSynthesisErrorEvent"): SpeechSynthesisErrorEvent;
    createEvent(eventInterface: "SpeechSynthesisEvent"): SpeechSynthesisEvent;
    createEvent(eventInterface: "StorageEvent"): StorageEvent;
    createEvent(eventInterface: "SubmitEvent"): SubmitEvent;
    createEvent(eventInterface: "ToggleEvent"): ToggleEvent;
    createEvent(eventInterface: "TouchEvent"): TouchEvent;
    createEvent(eventInterface: "TrackEvent"): TrackEvent;
    createEvent(eventInterface: "TransitionEvent"): TransitionEvent;
    createEvent(eventInterface: "UIEvent"): UIEvent;
    createEvent(eventInterface: "UIEvents"): UIEvent;
    createEvent(eventInterface: "WebGLContextEvent"): WebGLContextEvent;
    createEvent(eventInterface: "WheelEvent"): WheelEvent;
    createEvent(eventInterface: string): Event;
    /**
     * Creates a NodeIterator object that you can use to traverse filtered lists of nodes or elements in a document.
     * @param root The root element or node to start traversing on.
     * @param whatToShow The type of nodes or elements to appear in the node list
     * @param filter A custom NodeFilter function to use. For more information, see filter. Use null for no filter.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/createNodeIterator)
     */
    createNodeIterator(root: Node, whatToShow?: number, filter?: NodeFilter | null): NodeIterator;
    /**
     * Returns a ProcessingInstruction node whose target is target and data is data. If target does not match the Name production an "InvalidCharacterError" DOMException will be thrown. If data contains "?>" an "InvalidCharacterError" DOMException will be thrown.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/createProcessingInstruction)
     */
    createProcessingInstruction(target: string, data: string): ProcessingInstruction;
    /**
     *  Returns an empty range object that has both of its boundary points positioned at the beginning of the document.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/createRange)
     */
    createRange(): Range;
    /**
     * Creates a text string from the specified value.
     * @param data String that specifies the nodeValue property of the text node.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/createTextNode)
     */
    createTextNode(data: string): Text;
    /**
     * Creates a TreeWalker object that you can use to traverse filtered lists of nodes or elements in a document.
     * @param root The root element or node to start traversing on.
     * @param whatToShow The type of nodes or elements to appear in the node list. For more information, see whatToShow.
     * @param filter A custom NodeFilter function to use.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/createTreeWalker)
     */
    createTreeWalker(root: Node, whatToShow?: number, filter?: NodeFilter | null): TreeWalker;
    /**
     * Executes a command on the current document, current selection, or the given range.
     * @param commandId String that specifies the command to execute. This command can be any of the command identifiers that can be executed in script.
     * @param showUI Display the user interface, defaults to false.
     * @param value Value to assign.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/execCommand)
     */
    execCommand(commandId: string, showUI?: boolean, value?: string): boolean;
    /**
     * Stops document's fullscreen element from being displayed fullscreen and resolves promise when done.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/exitFullscreen)
     */
    exitFullscreen(): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/exitPictureInPicture) */
    exitPictureInPicture(): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/exitPointerLock) */
    exitPointerLock(): void;
    /**
     * Returns a reference to the first object with the specified value of the ID attribute.
     * @param elementId String that specifies the ID value.
     */
    getElementById(elementId: string): HTMLElement | null;
    /**
     * Returns a HTMLCollection of the elements in the object on which the method was invoked (a document or an element) that have all the classes given by classNames. The classNames argument is interpreted as a space-separated list of classes.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/getElementsByClassName)
     */
    getElementsByClassName(classNames: string): HTMLCollectionOf<Element>;
    /**
     * Gets a collection of objects based on the value of the NAME or ID attribute.
     * @param elementName Gets a collection of objects based on the value of the NAME or ID attribute.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/getElementsByName)
     */
    getElementsByName(elementName: string): NodeListOf<HTMLElement>;
    /**
     * Retrieves a collection of objects based on the specified element name.
     * @param name Specifies the name of an element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/getElementsByTagName)
     */
    getElementsByTagName<K extends keyof HTMLElementTagNameMap>(qualifiedName: K): HTMLCollectionOf<HTMLElementTagNameMap[K]>;
    getElementsByTagName<K extends keyof SVGElementTagNameMap>(qualifiedName: K): HTMLCollectionOf<SVGElementTagNameMap[K]>;
    getElementsByTagName<K extends keyof MathMLElementTagNameMap>(qualifiedName: K): HTMLCollectionOf<MathMLElementTagNameMap[K]>;
    /** @deprecated */
    getElementsByTagName<K extends keyof HTMLElementDeprecatedTagNameMap>(qualifiedName: K): HTMLCollectionOf<HTMLElementDeprecatedTagNameMap[K]>;
    getElementsByTagName(qualifiedName: string): HTMLCollectionOf<Element>;
    /**
     * If namespace and localName are "*" returns a HTMLCollection of all descendant elements.
     *
     * If only namespace is "*" returns a HTMLCollection of all descendant elements whose local name is localName.
     *
     * If only localName is "*" returns a HTMLCollection of all descendant elements whose namespace is namespace.
     *
     * Otherwise, returns a HTMLCollection of all descendant elements whose namespace is namespace and local name is localName.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/getElementsByTagNameNS)
     */
    getElementsByTagNameNS(namespaceURI: "http://www.w3.org/1999/xhtml", localName: string): HTMLCollectionOf<HTMLElement>;
    getElementsByTagNameNS(namespaceURI: "http://www.w3.org/2000/svg", localName: string): HTMLCollectionOf<SVGElement>;
    getElementsByTagNameNS(namespaceURI: "http://www.w3.org/1998/Math/MathML", localName: string): HTMLCollectionOf<MathMLElement>;
    getElementsByTagNameNS(namespace: string | null, localName: string): HTMLCollectionOf<Element>;
    /**
     * Returns an object representing the current selection of the document that is loaded into the object displaying a webpage.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/getSelection)
     */
    getSelection(): Selection | null;
    /**
     * Gets a value indicating whether the object currently has focus.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/hasFocus)
     */
    hasFocus(): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/hasStorageAccess) */
    hasStorageAccess(): Promise<boolean>;
    /**
     * Returns a copy of node. If deep is true, the copy also includes the node's descendants.
     *
     * If node is a document or a shadow root, throws a "NotSupportedError" DOMException.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/importNode)
     */
    importNode<T extends Node>(node: T, deep?: boolean): T;
    /**
     * Opens a new window and loads a document specified by a given URL. Also, opens a new window that uses the url parameter and the name parameter to collect the output of the write method and the writeln method.
     * @param url Specifies a MIME type for the document.
     * @param name Specifies the name of the window. This name is used as the value for the TARGET attribute on a form or an anchor element.
     * @param features Contains a list of items separated by commas. Each item consists of an option and a value, separated by an equals sign (for example, "fullscreen=yes, toolbar=yes"). The following values are supported.
     * @param replace Specifies whether the existing entry for the document is replaced in the history list.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/open)
     */
    open(unused1?: string, unused2?: string): Document;
    open(url: string | URL, name: string, features: string): WindowProxy | null;
    /**
     * Returns a Boolean value that indicates whether a specified command can be successfully executed using execCommand, given the current state of the document.
     * @param commandId Specifies a command identifier.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/queryCommandEnabled)
     */
    queryCommandEnabled(commandId: string): boolean;
    /**
     * Returns a Boolean value that indicates whether the specified command is in the indeterminate state.
     * @param commandId String that specifies a command identifier.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/queryCommandIndeterm)
     */
    queryCommandIndeterm(commandId: string): boolean;
    /**
     * Returns a Boolean value that indicates the current state of the command.
     * @param commandId String that specifies a command identifier.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/queryCommandState)
     */
    queryCommandState(commandId: string): boolean;
    /**
     * Returns a Boolean value that indicates whether the current command is supported on the current range.
     * @param commandId Specifies a command identifier.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/queryCommandSupported)
     */
    queryCommandSupported(commandId: string): boolean;
    /**
     * Returns the current value of the document, range, or current selection for the given command.
     * @param commandId String that specifies a command identifier.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/queryCommandValue)
     */
    queryCommandValue(commandId: string): string;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/releaseEvents)
     */
    releaseEvents(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/requestStorageAccess) */
    requestStorageAccess(): Promise<void>;
    /**
     * Writes one or more HTML expressions to a document in the specified window.
     * @param content Specifies the text and HTML tags to write.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/write)
     */
    write(...text: string[]): void;
    /**
     * Writes one or more HTML expressions, followed by a carriage return, to a document in the specified window.
     * @param content The text and HTML tags to write.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/writeln)
     */
    writeln(...text: string[]): void;
    addEventListener<K extends keyof DocumentEventMap>(type: K, listener: (this: Document, ev: DocumentEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof DocumentEventMap>(type: K, listener: (this: Document, ev: DocumentEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var Document: {
    prototype: Document;
    new(): Document;
};

/**
 * A minimal document object that has no parent. It is used as a lightweight version of Document that stores a segment of a document structure comprised of nodes just like a standard document. The key difference is that because the document fragment isn't part of the active document tree structure, changes made to the fragment don't affect the document, cause reflow, or incur any performance impact that can occur when changes are made.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DocumentFragment)
 */
interface DocumentFragment extends Node, NonElementParentNode, ParentNode {
    readonly ownerDocument: Document;
    getElementById(elementId: string): HTMLElement | null;
}

declare var DocumentFragment: {
    prototype: DocumentFragment;
    new(): DocumentFragment;
};

interface DocumentOrShadowRoot {
    /**
     * Returns the deepest element in the document through which or to which key events are being routed. This is, roughly speaking, the focused element in the document.
     *
     * For the purposes of this API, when a child browsing context is focused, its container is focused in the parent browsing context. For example, if the user moves the focus to a text control in an iframe, the iframe is the element returned by the activeElement API in the iframe's node document.
     *
     * Similarly, when the focused element is in a different node tree than documentOrShadowRoot, the element returned will be the host that's located in the same node tree as documentOrShadowRoot if documentOrShadowRoot is a shadow-including inclusive ancestor of the focused element, and null if not.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/activeElement)
     */
    readonly activeElement: Element | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/adoptedStyleSheets) */
    adoptedStyleSheets: CSSStyleSheet[];
    /**
     * Returns document's fullscreen element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/fullscreenElement)
     */
    readonly fullscreenElement: Element | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/pictureInPictureElement) */
    readonly pictureInPictureElement: Element | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/pointerLockElement) */
    readonly pointerLockElement: Element | null;
    /**
     * Retrieves a collection of styleSheet objects representing the style sheets that correspond to each instance of a link or style object in the document.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/styleSheets)
     */
    readonly styleSheets: StyleSheetList;
    /**
     * Returns the element for the specified x coordinate and the specified y coordinate.
     * @param x The x-offset
     * @param y The y-offset
     */
    elementFromPoint(x: number, y: number): Element | null;
    elementsFromPoint(x: number, y: number): Element[];
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/getAnimations) */
    getAnimations(): Animation[];
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DocumentTimeline) */
interface DocumentTimeline extends AnimationTimeline {
}

declare var DocumentTimeline: {
    prototype: DocumentTimeline;
    new(options?: DocumentTimelineOptions): DocumentTimeline;
};

/**
 * A Node containing a doctype.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DocumentType)
 */
interface DocumentType extends Node, ChildNode {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DocumentType/name) */
    readonly name: string;
    readonly ownerDocument: Document;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DocumentType/publicId) */
    readonly publicId: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DocumentType/systemId) */
    readonly systemId: string;
}

declare var DocumentType: {
    prototype: DocumentType;
    new(): DocumentType;
};

/**
 * A DOM event that represents a drag and drop interaction. The user initiates a drag by placing a pointer device (such as a mouse) on the touch surface and then dragging the pointer to a new location (such as another DOM element). Applications are free to interpret a drag and drop interaction in an application-specific way.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DragEvent)
 */
interface DragEvent extends MouseEvent {
    /**
     * Returns the DataTransfer object for the event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DragEvent/dataTransfer)
     */
    readonly dataTransfer: DataTransfer | null;
}

declare var DragEvent: {
    prototype: DragEvent;
    new(type: string, eventInitDict?: DragEventInit): DragEvent;
};

/**
 * Inherits properties from its parent, AudioNode.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/DynamicsCompressorNode)
 */
interface DynamicsCompressorNode extends AudioNode {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DynamicsCompressorNode/attack) */
    readonly attack: AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DynamicsCompressorNode/knee) */
    readonly knee: AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DynamicsCompressorNode/ratio) */
    readonly ratio: AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DynamicsCompressorNode/reduction) */
    readonly reduction: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DynamicsCompressorNode/release) */
    readonly release: AudioParam;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/DynamicsCompressorNode/threshold) */
    readonly threshold: AudioParam;
}

declare var DynamicsCompressorNode: {
    prototype: DynamicsCompressorNode;
    new(context: BaseAudioContext, options?: DynamicsCompressorOptions): DynamicsCompressorNode;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/EXT_blend_minmax) */
interface EXT_blend_minmax {
    readonly MIN_EXT: 0x8007;
    readonly MAX_EXT: 0x8008;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/EXT_color_buffer_float) */
interface EXT_color_buffer_float {
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/EXT_color_buffer_half_float) */
interface EXT_color_buffer_half_float {
    readonly RGBA16F_EXT: 0x881A;
    readonly RGB16F_EXT: 0x881B;
    readonly FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT: 0x8211;
    readonly UNSIGNED_NORMALIZED_EXT: 0x8C17;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/EXT_float_blend) */
interface EXT_float_blend {
}

/**
 * The EXT_frag_depth extension is part of the WebGL API and enables to set a depth value of a fragment from within the fragment shader.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/EXT_frag_depth)
 */
interface EXT_frag_depth {
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/EXT_sRGB) */
interface EXT_sRGB {
    readonly SRGB_EXT: 0x8C40;
    readonly SRGB_ALPHA_EXT: 0x8C42;
    readonly SRGB8_ALPHA8_EXT: 0x8C43;
    readonly FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT: 0x8210;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/EXT_shader_texture_lod) */
interface EXT_shader_texture_lod {
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/EXT_texture_compression_bptc) */
interface EXT_texture_compression_bptc {
    readonly COMPRESSED_RGBA_BPTC_UNORM_EXT: 0x8E8C;
    readonly COMPRESSED_SRGB_ALPHA_BPTC_UNORM_EXT: 0x8E8D;
    readonly COMPRESSED_RGB_BPTC_SIGNED_FLOAT_EXT: 0x8E8E;
    readonly COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_EXT: 0x8E8F;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/EXT_texture_compression_rgtc) */
interface EXT_texture_compression_rgtc {
    readonly COMPRESSED_RED_RGTC1_EXT: 0x8DBB;
    readonly COMPRESSED_SIGNED_RED_RGTC1_EXT: 0x8DBC;
    readonly COMPRESSED_RED_GREEN_RGTC2_EXT: 0x8DBD;
    readonly COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT: 0x8DBE;
}

/**
 * The EXT_texture_filter_anisotropic extension is part of the WebGL API and exposes two constants for anisotropic filtering (AF).
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/EXT_texture_filter_anisotropic)
 */
interface EXT_texture_filter_anisotropic {
    readonly TEXTURE_MAX_ANISOTROPY_EXT: 0x84FE;
    readonly MAX_TEXTURE_MAX_ANISOTROPY_EXT: 0x84FF;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/EXT_texture_norm16) */
interface EXT_texture_norm16 {
    readonly R16_EXT: 0x822A;
    readonly RG16_EXT: 0x822C;
    readonly RGB16_EXT: 0x8054;
    readonly RGBA16_EXT: 0x805B;
    readonly R16_SNORM_EXT: 0x8F98;
    readonly RG16_SNORM_EXT: 0x8F99;
    readonly RGB16_SNORM_EXT: 0x8F9A;
    readonly RGBA16_SNORM_EXT: 0x8F9B;
}

interface ElementEventMap {
    "fullscreenchange": Event;
    "fullscreenerror": Event;
}

/**
 * Element is the most general base class from which all objects in a Document inherit. It only has methods and properties common to all kinds of elements. More specific classes inherit from Element.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element)
 */
interface Element extends Node, ARIAMixin, Animatable, ChildNode, InnerHTML, NonDocumentTypeChildNode, ParentNode, Slottable {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/attributes) */
    readonly attributes: NamedNodeMap;
    /**
     * Allows for manipulation of element's class content attribute as a set of whitespace-separated tokens through a DOMTokenList object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/classList)
     */
    readonly classList: DOMTokenList;
    /**
     * Returns the value of element's class content attribute. Can be set to change it.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/className)
     */
    className: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/clientHeight) */
    readonly clientHeight: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/clientLeft) */
    readonly clientLeft: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/clientTop) */
    readonly clientTop: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/clientWidth) */
    readonly clientWidth: number;
    /**
     * Returns the value of element's id content attribute. Can be set to change it.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/id)
     */
    id: string;
    /**
     * Returns the local name.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/localName)
     */
    readonly localName: string;
    /**
     * Returns the namespace.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/namespaceURI)
     */
    readonly namespaceURI: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/fullscreenchange_event) */
    onfullscreenchange: ((this: Element, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/fullscreenerror_event) */
    onfullscreenerror: ((this: Element, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/outerHTML) */
    outerHTML: string;
    readonly ownerDocument: Document;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/part) */
    readonly part: DOMTokenList;
    /**
     * Returns the namespace prefix.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/prefix)
     */
    readonly prefix: string | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/scrollHeight) */
    readonly scrollHeight: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/scrollLeft) */
    scrollLeft: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/scrollTop) */
    scrollTop: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/scrollWidth) */
    readonly scrollWidth: number;
    /**
     * Returns element's shadow root, if any, and if shadow root's mode is "open", and null otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/shadowRoot)
     */
    readonly shadowRoot: ShadowRoot | null;
    /**
     * Returns the value of element's slot content attribute. Can be set to change it.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/slot)
     */
    slot: string;
    /**
     * Returns the HTML-uppercased qualified name.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/tagName)
     */
    readonly tagName: string;
    /**
     * Creates a shadow root for element and returns it.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/attachShadow)
     */
    attachShadow(init: ShadowRootInit): ShadowRoot;
    checkVisibility(options?: CheckVisibilityOptions): boolean;
    /**
     * Returns the first (starting at element) inclusive ancestor that matches selectors, and null otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/closest)
     */
    closest<K extends keyof HTMLElementTagNameMap>(selector: K): HTMLElementTagNameMap[K] | null;
    closest<K extends keyof SVGElementTagNameMap>(selector: K): SVGElementTagNameMap[K] | null;
    closest<K extends keyof MathMLElementTagNameMap>(selector: K): MathMLElementTagNameMap[K] | null;
    closest<E extends Element = Element>(selectors: string): E | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/computedStyleMap) */
    computedStyleMap(): StylePropertyMapReadOnly;
    /**
     * Returns element's first attribute whose qualified name is qualifiedName, and null if there is no such attribute otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/getAttribute)
     */
    getAttribute(qualifiedName: string): string | null;
    /**
     * Returns element's attribute whose namespace is namespace and local name is localName, and null if there is no such attribute otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/getAttributeNS)
     */
    getAttributeNS(namespace: string | null, localName: string): string | null;
    /**
     * Returns the qualified names of all element's attributes. Can contain duplicates.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/getAttributeNames)
     */
    getAttributeNames(): string[];
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/getAttributeNode) */
    getAttributeNode(qualifiedName: string): Attr | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/getAttributeNodeNS) */
    getAttributeNodeNS(namespace: string | null, localName: string): Attr | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/getBoundingClientRect) */
    getBoundingClientRect(): DOMRect;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/getClientRects) */
    getClientRects(): DOMRectList;
    /**
     * Returns a HTMLCollection of the elements in the object on which the method was invoked (a document or an element) that have all the classes given by classNames. The classNames argument is interpreted as a space-separated list of classes.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/getElementsByClassName)
     */
    getElementsByClassName(classNames: string): HTMLCollectionOf<Element>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/getElementsByTagName) */
    getElementsByTagName<K extends keyof HTMLElementTagNameMap>(qualifiedName: K): HTMLCollectionOf<HTMLElementTagNameMap[K]>;
    getElementsByTagName<K extends keyof SVGElementTagNameMap>(qualifiedName: K): HTMLCollectionOf<SVGElementTagNameMap[K]>;
    getElementsByTagName<K extends keyof MathMLElementTagNameMap>(qualifiedName: K): HTMLCollectionOf<MathMLElementTagNameMap[K]>;
    /** @deprecated */
    getElementsByTagName<K extends keyof HTMLElementDeprecatedTagNameMap>(qualifiedName: K): HTMLCollectionOf<HTMLElementDeprecatedTagNameMap[K]>;
    getElementsByTagName(qualifiedName: string): HTMLCollectionOf<Element>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/getElementsByTagNameNS) */
    getElementsByTagNameNS(namespaceURI: "http://www.w3.org/1999/xhtml", localName: string): HTMLCollectionOf<HTMLElement>;
    getElementsByTagNameNS(namespaceURI: "http://www.w3.org/2000/svg", localName: string): HTMLCollectionOf<SVGElement>;
    getElementsByTagNameNS(namespaceURI: "http://www.w3.org/1998/Math/MathML", localName: string): HTMLCollectionOf<MathMLElement>;
    getElementsByTagNameNS(namespace: string | null, localName: string): HTMLCollectionOf<Element>;
    /**
     * Returns true if element has an attribute whose qualified name is qualifiedName, and false otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/hasAttribute)
     */
    hasAttribute(qualifiedName: string): boolean;
    /**
     * Returns true if element has an attribute whose namespace is namespace and local name is localName.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/hasAttributeNS)
     */
    hasAttributeNS(namespace: string | null, localName: string): boolean;
    /**
     * Returns true if element has attributes, and false otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/hasAttributes)
     */
    hasAttributes(): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/hasPointerCapture) */
    hasPointerCapture(pointerId: number): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/insertAdjacentElement) */
    insertAdjacentElement(where: InsertPosition, element: Element): Element | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/insertAdjacentHTML) */
    insertAdjacentHTML(position: InsertPosition, text: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/insertAdjacentText) */
    insertAdjacentText(where: InsertPosition, data: string): void;
    /**
     * Returns true if matching selectors against element's root yields element, and false otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/matches)
     */
    matches(selectors: string): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/releasePointerCapture) */
    releasePointerCapture(pointerId: number): void;
    /**
     * Removes element's first attribute whose qualified name is qualifiedName.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/removeAttribute)
     */
    removeAttribute(qualifiedName: string): void;
    /**
     * Removes element's attribute whose namespace is namespace and local name is localName.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/removeAttributeNS)
     */
    removeAttributeNS(namespace: string | null, localName: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/removeAttributeNode) */
    removeAttributeNode(attr: Attr): Attr;
    /**
     * Displays element fullscreen and resolves promise when done.
     *
     * When supplied, options's navigationUI member indicates whether showing navigation UI while in fullscreen is preferred or not. If set to "show", navigation simplicity is preferred over screen space, and if set to "hide", more screen space is preferred. User agents are always free to honor user preference over the application's. The default value "auto" indicates no application preference.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/requestFullscreen)
     */
    requestFullscreen(options?: FullscreenOptions): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/requestPointerLock) */
    requestPointerLock(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/scroll) */
    scroll(options?: ScrollToOptions): void;
    scroll(x: number, y: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/scrollBy) */
    scrollBy(options?: ScrollToOptions): void;
    scrollBy(x: number, y: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/scrollIntoView) */
    scrollIntoView(arg?: boolean | ScrollIntoViewOptions): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/scrollTo) */
    scrollTo(options?: ScrollToOptions): void;
    scrollTo(x: number, y: number): void;
    /**
     * Sets the value of element's first attribute whose qualified name is qualifiedName to value.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/setAttribute)
     */
    setAttribute(qualifiedName: string, value: string): void;
    /**
     * Sets the value of element's attribute whose namespace is namespace and local name is localName to value.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/setAttributeNS)
     */
    setAttributeNS(namespace: string | null, qualifiedName: string, value: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/setAttributeNode) */
    setAttributeNode(attr: Attr): Attr | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/setAttributeNodeNS) */
    setAttributeNodeNS(attr: Attr): Attr | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/setPointerCapture) */
    setPointerCapture(pointerId: number): void;
    /**
     * If force is not given, "toggles" qualifiedName, removing it if it is present and adding it if it is not present. If force is true, adds qualifiedName. If force is false, removes qualifiedName.
     *
     * Returns true if qualifiedName is now present, and false otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/toggleAttribute)
     */
    toggleAttribute(qualifiedName: string, force?: boolean): boolean;
    /**
     * @deprecated This is a legacy alias of `matches`.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/matches)
     */
    webkitMatchesSelector(selectors: string): boolean;
    addEventListener<K extends keyof ElementEventMap>(type: K, listener: (this: Element, ev: ElementEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof ElementEventMap>(type: K, listener: (this: Element, ev: ElementEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var Element: {
    prototype: Element;
    new(): Element;
};

interface ElementCSSInlineStyle {
    readonly attributeStyleMap: StylePropertyMap;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/style) */
    readonly style: CSSStyleDeclaration;
}

interface ElementContentEditable {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/contentEditable) */
    contentEditable: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/enterKeyHint) */
    enterKeyHint: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/inputMode) */
    inputMode: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/isContentEditable) */
    readonly isContentEditable: boolean;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ElementInternals) */
interface ElementInternals extends ARIAMixin {
    /**
     * Returns the form owner of internals's target element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ElementInternals/form)
     */
    readonly form: HTMLFormElement | null;
    /**
     * Returns a NodeList of all the label elements that internals's target element is associated with.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ElementInternals/labels)
     */
    readonly labels: NodeList;
    /**
     * Returns the ShadowRoot for internals's target element, if the target element is a shadow host, or null otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ElementInternals/shadowRoot)
     */
    readonly shadowRoot: ShadowRoot | null;
    /**
     * Returns the error message that would be shown to the user if internals's target element was to be checked for validity.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ElementInternals/validationMessage)
     */
    readonly validationMessage: string;
    /**
     * Returns the ValidityState object for internals's target element.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ElementInternals/validity)
     */
    readonly validity: ValidityState;
    /**
     * Returns true if internals's target element will be validated when the form is submitted; false otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ElementInternals/willValidate)
     */
    readonly willValidate: boolean;
    /**
     * Returns true if internals's target element has no validity problems; false otherwise. Fires an invalid event at the element in the latter case.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ElementInternals/checkValidity)
     */
    checkValidity(): boolean;
    /**
     * Returns true if internals's target element has no validity problems; otherwise, returns false, fires an invalid event at the element, and (if the event isn't canceled) reports the problem to the user.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ElementInternals/reportValidity)
     */
    reportValidity(): boolean;
    /**
     * Sets both the state and submission value of internals's target element to value.
     *
     * If value is null, the element won't participate in form submission.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ElementInternals/setFormValue)
     */
    setFormValue(value: File | string | FormData | null, state?: File | string | FormData | null): void;
    /**
     * Marks internals's target element as suffering from the constraints indicated by the flags argument, and sets the element's validation message to message. If anchor is specified, the user agent might use it to indicate problems with the constraints of internals's target element when the form owner is validated interactively or reportValidity() is called.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ElementInternals/setValidity)
     */
    setValidity(flags?: ValidityStateFlags, message?: string, anchor?: HTMLElement): void;
}

declare var ElementInternals: {
    prototype: ElementInternals;
    new(): ElementInternals;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/EncodedVideoChunk) */
interface EncodedVideoChunk {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/EncodedVideoChunk/byteLength) */
    readonly byteLength: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/EncodedVideoChunk/duration) */
    readonly duration: number | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/EncodedVideoChunk/timestamp) */
    readonly timestamp: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/EncodedVideoChunk/type) */
    readonly type: EncodedVideoChunkType;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/EncodedVideoChunk/copyTo) */
    copyTo(destination: BufferSource): void;
}

declare var EncodedVideoChunk: {
    prototype: EncodedVideoChunk;
    new(init: EncodedVideoChunkInit): EncodedVideoChunk;
};

/**
 * Events providing information related to errors in scripts or in files.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/ErrorEvent)
 */
interface ErrorEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ErrorEvent/colno) */
    readonly colno: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ErrorEvent/error) */
    readonly error: any;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ErrorEvent/filename) */
    readonly filename: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ErrorEvent/lineno) */
    readonly lineno: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/ErrorEvent/message) */
    readonly message: string;
}

declare var ErrorEvent: {
    prototype: ErrorEvent;
    new(type: string, eventInitDict?: ErrorEventInit): ErrorEvent;
};

/**
 * An event which takes place in the DOM.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Event)
 */
interface Event {
    /**
     * Returns true or false depending on how event was initialized. True if event goes through its target's ancestors in reverse tree order, and false otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Event/bubbles)
     */
    readonly bubbles: boolean;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Event/cancelBubble)
     */
    cancelBubble: boolean;
    /**
     * Returns true or false depending on how event was initialized. Its return value does not always carry meaning, but true can indicate that part of the operation during which event was dispatched, can be canceled by invoking the preventDefault() method.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Event/cancelable)
     */
    readonly cancelable: boolean;
    /**
     * Returns true or false depending on how event was initialized. True if event invokes listeners past a ShadowRoot node that is the root of its target, and false otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Event/composed)
     */
    readonly composed: boolean;
    /**
     * Returns the object whose event listener's callback is currently being invoked.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Event/currentTarget)
     */
    readonly currentTarget: EventTarget | null;
    /**
     * Returns true if preventDefault() was invoked successfully to indicate cancelation, and false otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Event/defaultPrevented)
     */
    readonly defaultPrevented: boolean;
    /**
     * Returns the event's phase, which is one of NONE, CAPTURING_PHASE, AT_TARGET, and BUBBLING_PHASE.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Event/eventPhase)
     */
    readonly eventPhase: number;
    /**
     * Returns true if event was dispatched by the user agent, and false otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Event/isTrusted)
     */
    readonly isTrusted: boolean;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Event/returnValue)
     */
    returnValue: boolean;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Event/srcElement)
     */
    readonly srcElement: EventTarget | null;
    /**
     * Returns the object to which event is dispatched (its target).
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Event/target)
     */
    readonly target: EventTarget | null;
    /**
     * Returns the event's timestamp as the number of milliseconds measured relative to the time origin.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Event/timeStamp)
     */
    readonly timeStamp: DOMHighResTimeStamp;
    /**
     * Returns the type of event, e.g. "click", "hashchange", or "submit".
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Event/type)
     */
    readonly type: string;
    /**
     * Returns the invocation target objects of event's path (objects on which listeners will be invoked), except for any nodes in shadow trees of which the shadow root's mode is "closed" that are not reachable from event's currentTarget.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Event/composedPath)
     */
    composedPath(): EventTarget[];
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Event/initEvent)
     */
    initEvent(type: string, bubbles?: boolean, cancelable?: boolean): void;
    /**
     * If invoked when the cancelable attribute value is true, and while executing a listener for the event with passive set to false, signals to the operation that caused event to be dispatched that it needs to be canceled.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Event/preventDefault)
     */
    preventDefault(): void;
    /**
     * Invoking this method prevents event from reaching any registered event listeners after the current one finishes running and, when dispatched in a tree, also prevents event from reaching any other objects.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Event/stopImmediatePropagation)
     */
    stopImmediatePropagation(): void;
    /**
     * When dispatched in a tree, invoking this method prevents event from reaching any objects other than the current object.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Event/stopPropagation)
     */
    stopPropagation(): void;
    readonly NONE: 0;
    readonly CAPTURING_PHASE: 1;
    readonly AT_TARGET: 2;
    readonly BUBBLING_PHASE: 3;
}

declare var Event: {
    prototype: Event;
    new(type: string, eventInitDict?: EventInit): Event;
    readonly NONE: 0;
    readonly CAPTURING_PHASE: 1;
    readonly AT_TARGET: 2;
    readonly BUBBLING_PHASE: 3;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/EventCounts) */
interface EventCounts {
    forEach(callbackfn: (value: number, key: string, parent: EventCounts) => void, thisArg?: any): void;
}

declare var EventCounts: {
    prototype: EventCounts;
    new(): EventCounts;
};

interface EventListener {
    (evt: Event): void;
}

interface EventListenerObject {
    handleEvent(object: Event): void;
}

interface EventSourceEventMap {
    "error": Event;
    "message": MessageEvent;
    "open": Event;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/EventSource) */
interface EventSource extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/EventSource/error_event) */
    onerror: ((this: EventSource, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/EventSource/message_event) */
    onmessage: ((this: EventSource, ev: MessageEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/EventSource/open_event) */
    onopen: ((this: EventSource, ev: Event) => any) | null;
    /**
     * Returns the state of this EventSource object's connection. It can have the values described below.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/EventSource/readyState)
     */
    readonly readyState: number;
    /**
     * Returns the URL providing the event stream.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/EventSource/url)
     */
    readonly url: string;
    /**
     * Returns true if the credentials mode for connection requests to the URL providing the event stream is set to "include", and false otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/EventSource/withCredentials)
     */
    readonly withCredentials: boolean;
    /**
     * Aborts any instances of the fetch algorithm started for this EventSource object, and sets the readyState attribute to CLOSED.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/EventSource/close)
     */
    close(): void;
    readonly CONNECTING: 0;
    readonly OPEN: 1;
    readonly CLOSED: 2;
    addEventListener<K extends keyof EventSourceEventMap>(type: K, listener: (this: EventSource, ev: EventSourceEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: (this: EventSource, event: MessageEvent) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof EventSourceEventMap>(type: K, listener: (this: EventSource, ev: EventSourceEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: (this: EventSource, event: MessageEvent) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var EventSource: {
    prototype: EventSource;
    new(url: string | URL, eventSourceInitDict?: EventSourceInit): EventSource;
    readonly CONNECTING: 0;
    readonly OPEN: 1;
    readonly CLOSED: 2;
};

/**
 * EventTarget is a DOM interface implemented by objects that can receive events and may have listeners for them.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/EventTarget)
 */
interface EventTarget {
    /**
     * Appends an event listener for events whose type attribute value is type. The callback argument sets the callback that will be invoked when the event is dispatched.
     *
     * The options argument sets listener-specific options. For compatibility this can be a boolean, in which case the method behaves exactly as if the value was specified as options's capture.
     *
     * When set to true, options's capture prevents callback from being invoked when the event's eventPhase attribute value is BUBBLING_PHASE. When false (or not present), callback will not be invoked when event's eventPhase attribute value is CAPTURING_PHASE. Either way, callback will be invoked if event's eventPhase attribute value is AT_TARGET.
     *
     * When set to true, options's passive indicates that the callback will not cancel the event by invoking preventDefault(). This is used to enable performance optimizations described in § 2.8 Observing event listeners.
     *
     * When set to true, options's once indicates that the callback will only be invoked once after which the event listener will be removed.
     *
     * If an AbortSignal is passed for options's signal, then the event listener will be removed when signal is aborted.
     *
     * The event listener is appended to target's event listener list and is not appended if it has the same type, callback, and capture.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/EventTarget/addEventListener)
     */
    addEventListener(type: string, callback: EventListenerOrEventListenerObject | null, options?: AddEventListenerOptions | boolean): void;
    /**
     * Dispatches a synthetic event event to target and returns true if either event's cancelable attribute value is false or its preventDefault() method was not invoked, and false otherwise.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/EventTarget/dispatchEvent)
     */
    dispatchEvent(event: Event): boolean;
    /**
     * Removes the event listener in target's event listener list with the same type, callback, and options.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/EventTarget/removeEventListener)
     */
    removeEventListener(type: string, callback: EventListenerOrEventListenerObject | null, options?: EventListenerOptions | boolean): void;
}

declare var EventTarget: {
    prototype: EventTarget;
    new(): EventTarget;
};

/**
 * @deprecated
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/External)
 */
interface External {
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/External/AddSearchProvider)
     */
    AddSearchProvider(): void;
    /**
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/External/IsSearchProviderInstalled)
     */
    IsSearchProviderInstalled(): void;
}

/** @deprecated */
declare var External: {
    prototype: External;
    new(): External;
};

/**
 * Provides information about files and allows JavaScript in a web page to access their content.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/File)
 */
interface File extends Blob {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/File/lastModified) */
    readonly lastModified: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/File/name) */
    readonly name: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/File/webkitRelativePath) */
    readonly webkitRelativePath: string;
}

declare var File: {
    prototype: File;
    new(fileBits: BlobPart[], fileName: string, options?: FilePropertyBag): File;
};

/**
 * An object of this type is returned by the files property of the HTML <input> element; this lets you access the list of files selected with the <input type="file"> element. It's also used for a list of files dropped into web content when using the drag and drop API; see the DataTransfer object for details on this usage.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileList)
 */
interface FileList {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileList/length) */
    readonly length: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileList/item) */
    item(index: number): File | null;
    [index: number]: File;
}

declare var FileList: {
    prototype: FileList;
    new(): FileList;
};

interface FileReaderEventMap {
    "abort": ProgressEvent<FileReader>;
    "error": ProgressEvent<FileReader>;
    "load": ProgressEvent<FileReader>;
    "loadend": ProgressEvent<FileReader>;
    "loadstart": ProgressEvent<FileReader>;
    "progress": ProgressEvent<FileReader>;
}

/**
 * Lets web applications asynchronously read the contents of files (or raw data buffers) stored on the user's computer, using File or Blob objects to specify the file or data to read.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileReader)
 */
interface FileReader extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileReader/error) */
    readonly error: DOMException | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileReader/abort_event) */
    onabort: ((this: FileReader, ev: ProgressEvent<FileReader>) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileReader/error_event) */
    onerror: ((this: FileReader, ev: ProgressEvent<FileReader>) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileReader/load_event) */
    onload: ((this: FileReader, ev: ProgressEvent<FileReader>) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileReader/loadend_event) */
    onloadend: ((this: FileReader, ev: ProgressEvent<FileReader>) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileReader/loadstart_event) */
    onloadstart: ((this: FileReader, ev: ProgressEvent<FileReader>) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileReader/progress_event) */
    onprogress: ((this: FileReader, ev: ProgressEvent<FileReader>) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileReader/readyState) */
    readonly readyState: typeof FileReader.EMPTY | typeof FileReader.LOADING | typeof FileReader.DONE;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileReader/result) */
    readonly result: string | ArrayBuffer | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileReader/abort) */
    abort(): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileReader/readAsArrayBuffer) */
    readAsArrayBuffer(blob: Blob): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileReader/readAsBinaryString) */
    readAsBinaryString(blob: Blob): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileReader/readAsDataURL) */
    readAsDataURL(blob: Blob): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileReader/readAsText) */
    readAsText(blob: Blob, encoding?: string): void;
    readonly EMPTY: 0;
    readonly LOADING: 1;
    readonly DONE: 2;
    addEventListener<K extends keyof FileReaderEventMap>(type: K, listener: (this: FileReader, ev: FileReaderEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof FileReaderEventMap>(type: K, listener: (this: FileReader, ev: FileReaderEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var FileReader: {
    prototype: FileReader;
    new(): FileReader;
    readonly EMPTY: 0;
    readonly LOADING: 1;
    readonly DONE: 2;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystem) */
interface FileSystem {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystem/name) */
    readonly name: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystem/root) */
    readonly root: FileSystemDirectoryEntry;
}

declare var FileSystem: {
    prototype: FileSystem;
    new(): FileSystem;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemDirectoryEntry) */
interface FileSystemDirectoryEntry extends FileSystemEntry {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemDirectoryEntry/createReader) */
    createReader(): FileSystemDirectoryReader;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemDirectoryEntry/getDirectory) */
    getDirectory(path?: string | null, options?: FileSystemFlags, successCallback?: FileSystemEntryCallback, errorCallback?: ErrorCallback): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemDirectoryEntry/getFile) */
    getFile(path?: string | null, options?: FileSystemFlags, successCallback?: FileSystemEntryCallback, errorCallback?: ErrorCallback): void;
}

declare var FileSystemDirectoryEntry: {
    prototype: FileSystemDirectoryEntry;
    new(): FileSystemDirectoryEntry;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemDirectoryHandle)
 */
interface FileSystemDirectoryHandle extends FileSystemHandle {
    readonly kind: "directory";
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemDirectoryHandle/getDirectoryHandle) */
    getDirectoryHandle(name: string, options?: FileSystemGetDirectoryOptions): Promise<FileSystemDirectoryHandle>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemDirectoryHandle/getFileHandle) */
    getFileHandle(name: string, options?: FileSystemGetFileOptions): Promise<FileSystemFileHandle>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemDirectoryHandle/removeEntry) */
    removeEntry(name: string, options?: FileSystemRemoveOptions): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemDirectoryHandle/resolve) */
    resolve(possibleDescendant: FileSystemHandle): Promise<string[] | null>;
}

declare var FileSystemDirectoryHandle: {
    prototype: FileSystemDirectoryHandle;
    new(): FileSystemDirectoryHandle;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemDirectoryReader) */
interface FileSystemDirectoryReader {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemDirectoryReader/readEntries) */
    readEntries(successCallback: FileSystemEntriesCallback, errorCallback?: ErrorCallback): void;
}

declare var FileSystemDirectoryReader: {
    prototype: FileSystemDirectoryReader;
    new(): FileSystemDirectoryReader;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemEntry) */
interface FileSystemEntry {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemEntry/filesystem) */
    readonly filesystem: FileSystem;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemEntry/fullPath) */
    readonly fullPath: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemEntry/isDirectory) */
    readonly isDirectory: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemEntry/isFile) */
    readonly isFile: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemEntry/name) */
    readonly name: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemEntry/getParent) */
    getParent(successCallback?: FileSystemEntryCallback, errorCallback?: ErrorCallback): void;
}

declare var FileSystemEntry: {
    prototype: FileSystemEntry;
    new(): FileSystemEntry;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemFileEntry) */
interface FileSystemFileEntry extends FileSystemEntry {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemFileEntry/file) */
    file(successCallback: FileCallback, errorCallback?: ErrorCallback): void;
}

declare var FileSystemFileEntry: {
    prototype: FileSystemFileEntry;
    new(): FileSystemFileEntry;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemFileHandle)
 */
interface FileSystemFileHandle extends FileSystemHandle {
    readonly kind: "file";
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemFileHandle/createWritable) */
    createWritable(options?: FileSystemCreateWritableOptions): Promise<FileSystemWritableFileStream>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemFileHandle/getFile) */
    getFile(): Promise<File>;
}

declare var FileSystemFileHandle: {
    prototype: FileSystemFileHandle;
    new(): FileSystemFileHandle;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemHandle)
 */
interface FileSystemHandle {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemHandle/kind) */
    readonly kind: FileSystemHandleKind;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemHandle/name) */
    readonly name: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemHandle/isSameEntry) */
    isSameEntry(other: FileSystemHandle): Promise<boolean>;
}

declare var FileSystemHandle: {
    prototype: FileSystemHandle;
    new(): FileSystemHandle;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemWritableFileStream)
 */
interface FileSystemWritableFileStream extends WritableStream {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemWritableFileStream/seek) */
    seek(position: number): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemWritableFileStream/truncate) */
    truncate(size: number): Promise<void>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FileSystemWritableFileStream/write) */
    write(data: FileSystemWriteChunkType): Promise<void>;
}

declare var FileSystemWritableFileStream: {
    prototype: FileSystemWritableFileStream;
    new(): FileSystemWritableFileStream;
};

/**
 * Focus-related events like focus, blur, focusin, or focusout.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/FocusEvent)
 */
interface FocusEvent extends UIEvent {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FocusEvent/relatedTarget) */
    readonly relatedTarget: EventTarget | null;
}

declare var FocusEvent: {
    prototype: FocusEvent;
    new(type: string, eventInitDict?: FocusEventInit): FocusEvent;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FontFace) */
interface FontFace {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FontFace/ascentOverride) */
    ascentOverride: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FontFace/descentOverride) */
    descentOverride: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FontFace/display) */
    display: FontDisplay;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FontFace/family) */
    family: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FontFace/featureSettings) */
    featureSettings: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FontFace/lineGapOverride) */
    lineGapOverride: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FontFace/loaded) */
    readonly loaded: Promise<FontFace>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FontFace/status) */
    readonly status: FontFaceLoadStatus;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FontFace/stretch) */
    stretch: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FontFace/style) */
    style: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FontFace/unicodeRange) */
    unicodeRange: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FontFace/variant) */
    variant: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FontFace/weight) */
    weight: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FontFace/load) */
    load(): Promise<FontFace>;
}

declare var FontFace: {
    prototype: FontFace;
    new(family: string, source: string | BinaryData, descriptors?: FontFaceDescriptors): FontFace;
};

interface FontFaceSetEventMap {
    "loading": Event;
    "loadingdone": Event;
    "loadingerror": Event;
}

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FontFaceSet) */
interface FontFaceSet extends EventTarget {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FontFaceSet/loading_event) */
    onloading: ((this: FontFaceSet, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FontFaceSet/loadingdone_event) */
    onloadingdone: ((this: FontFaceSet, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FontFaceSet/loadingerror_event) */
    onloadingerror: ((this: FontFaceSet, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FontFaceSet/ready) */
    readonly ready: Promise<FontFaceSet>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FontFaceSet/status) */
    readonly status: FontFaceSetLoadStatus;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FontFaceSet/check) */
    check(font: string, text?: string): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FontFaceSet/load) */
    load(font: string, text?: string): Promise<FontFace[]>;
    forEach(callbackfn: (value: FontFace, key: FontFace, parent: FontFaceSet) => void, thisArg?: any): void;
    addEventListener<K extends keyof FontFaceSetEventMap>(type: K, listener: (this: FontFaceSet, ev: FontFaceSetEventMap[K]) => any, options?: boolean | AddEventListenerOptions): void;
    addEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | AddEventListenerOptions): void;
    removeEventListener<K extends keyof FontFaceSetEventMap>(type: K, listener: (this: FontFaceSet, ev: FontFaceSetEventMap[K]) => any, options?: boolean | EventListenerOptions): void;
    removeEventListener(type: string, listener: EventListenerOrEventListenerObject, options?: boolean | EventListenerOptions): void;
}

declare var FontFaceSet: {
    prototype: FontFaceSet;
    new(initialFaces: FontFace[]): FontFaceSet;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FontFaceSetLoadEvent) */
interface FontFaceSetLoadEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FontFaceSetLoadEvent/fontfaces) */
    readonly fontfaces: ReadonlyArray<FontFace>;
}

declare var FontFaceSetLoadEvent: {
    prototype: FontFaceSetLoadEvent;
    new(type: string, eventInitDict?: FontFaceSetLoadEventInit): FontFaceSetLoadEvent;
};

interface FontFaceSource {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Document/fonts) */
    readonly fonts: FontFaceSet;
}

/**
 * Provides a way to easily construct a set of key/value pairs representing form fields and their values, which can then be easily sent using the XMLHttpRequest.send() method. It uses the same format a form would use if the encoding type were set to "multipart/form-data".
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/FormData)
 */
interface FormData {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FormData/append) */
    append(name: string, value: string | Blob): void;
    append(name: string, value: string): void;
    append(name: string, blobValue: Blob, filename?: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FormData/delete) */
    delete(name: string): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FormData/get) */
    get(name: string): FormDataEntryValue | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FormData/getAll) */
    getAll(name: string): FormDataEntryValue[];
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FormData/has) */
    has(name: string): boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FormData/set) */
    set(name: string, value: string | Blob): void;
    set(name: string, value: string): void;
    set(name: string, blobValue: Blob, filename?: string): void;
    forEach(callbackfn: (value: FormDataEntryValue, key: string, parent: FormData) => void, thisArg?: any): void;
}

declare var FormData: {
    prototype: FormData;
    new(form?: HTMLFormElement, submitter?: HTMLElement | null): FormData;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/FormDataEvent) */
interface FormDataEvent extends Event {
    /**
     * Returns a FormData object representing names and values of elements associated to the target form. Operations on the FormData object will affect form data to be submitted.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/FormDataEvent/formData)
     */
    readonly formData: FormData;
}

declare var FormDataEvent: {
    prototype: FormDataEvent;
    new(type: string, eventInitDict: FormDataEventInit): FormDataEvent;
};

/**
 * A change in volume. It is an AudioNode audio-processing module that causes a given gain to be applied to the input data before its propagation to the output. A GainNode always has exactly one input and one output, both with the same number of channels.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/GainNode)
 */
interface GainNode extends AudioNode {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/GainNode/gain) */
    readonly gain: AudioParam;
}

declare var GainNode: {
    prototype: GainNode;
    new(context: BaseAudioContext, options?: GainOptions): GainNode;
};

/**
 * This Gamepad API interface defines an individual gamepad or other controller, allowing access to information such as button presses, axis positions, and id.
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Gamepad)
 */
interface Gamepad {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Gamepad/axes) */
    readonly axes: ReadonlyArray<number>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Gamepad/buttons) */
    readonly buttons: ReadonlyArray<GamepadButton>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Gamepad/connected) */
    readonly connected: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Gamepad/hapticActuators) */
    readonly hapticActuators: ReadonlyArray<GamepadHapticActuator>;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Gamepad/id) */
    readonly id: string;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Gamepad/index) */
    readonly index: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Gamepad/mapping) */
    readonly mapping: GamepadMappingType;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Gamepad/timestamp) */
    readonly timestamp: DOMHighResTimeStamp;
    readonly vibrationActuator: GamepadHapticActuator | null;
}

declare var Gamepad: {
    prototype: Gamepad;
    new(): Gamepad;
};

/**
 * An individual button of a gamepad or other controller, allowing access to the current state of different types of buttons available on the control device.
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/GamepadButton)
 */
interface GamepadButton {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/GamepadButton/pressed) */
    readonly pressed: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/GamepadButton/touched) */
    readonly touched: boolean;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/GamepadButton/value) */
    readonly value: number;
}

declare var GamepadButton: {
    prototype: GamepadButton;
    new(): GamepadButton;
};

/**
 * This Gamepad API interface contains references to gamepads connected to the system, which is what the gamepad events Window.gamepadconnected and Window.gamepaddisconnected are fired in response to.
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/GamepadEvent)
 */
interface GamepadEvent extends Event {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/GamepadEvent/gamepad) */
    readonly gamepad: Gamepad;
}

declare var GamepadEvent: {
    prototype: GamepadEvent;
    new(type: string, eventInitDict: GamepadEventInit): GamepadEvent;
};

/**
 * This Gamepad API interface represents hardware in the controller designed to provide haptic feedback to the user (if available), most commonly vibration hardware.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/GamepadHapticActuator)
 */
interface GamepadHapticActuator {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/GamepadHapticActuator/type) */
    readonly type: GamepadHapticActuatorType;
    playEffect(type: GamepadHapticEffectType, params?: GamepadEffectParameters): Promise<GamepadHapticsResult>;
    reset(): Promise<GamepadHapticsResult>;
}

declare var GamepadHapticActuator: {
    prototype: GamepadHapticActuator;
    new(): GamepadHapticActuator;
};

interface GenericTransformStream {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CompressionStream/readable) */
    readonly readable: ReadableStream;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/CompressionStream/writable) */
    readonly writable: WritableStream;
}

/**
 * An object able to programmatically obtain the position of the device. It gives Web content access to the location of the device. This allows a Web site or app to offer customized results based on the user's location.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Geolocation)
 */
interface Geolocation {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Geolocation/clearWatch) */
    clearWatch(watchId: number): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Geolocation/getCurrentPosition) */
    getCurrentPosition(successCallback: PositionCallback, errorCallback?: PositionErrorCallback | null, options?: PositionOptions): void;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Geolocation/watchPosition) */
    watchPosition(successCallback: PositionCallback, errorCallback?: PositionErrorCallback | null, options?: PositionOptions): number;
}

declare var Geolocation: {
    prototype: Geolocation;
    new(): Geolocation;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/GeolocationCoordinates)
 */
interface GeolocationCoordinates {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/GeolocationCoordinates/accuracy) */
    readonly accuracy: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/GeolocationCoordinates/altitude) */
    readonly altitude: number | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/GeolocationCoordinates/altitudeAccuracy) */
    readonly altitudeAccuracy: number | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/GeolocationCoordinates/heading) */
    readonly heading: number | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/GeolocationCoordinates/latitude) */
    readonly latitude: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/GeolocationCoordinates/longitude) */
    readonly longitude: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/GeolocationCoordinates/speed) */
    readonly speed: number | null;
}

declare var GeolocationCoordinates: {
    prototype: GeolocationCoordinates;
    new(): GeolocationCoordinates;
};

/**
 * Available only in secure contexts.
 *
 * [MDN Reference](https://developer.mozilla.org/docs/Web/API/GeolocationPosition)
 */
interface GeolocationPosition {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/GeolocationPosition/coords) */
    readonly coords: GeolocationCoordinates;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/GeolocationPosition/timestamp) */
    readonly timestamp: EpochTimeStamp;
}

declare var GeolocationPosition: {
    prototype: GeolocationPosition;
    new(): GeolocationPosition;
};

/** [MDN Reference](https://developer.mozilla.org/docs/Web/API/GeolocationPositionError) */
interface GeolocationPositionError {
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/GeolocationPositionError/code) */
    readonly code: number;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/GeolocationPositionError/message) */
    readonly message: string;
    readonly PERMISSION_DENIED: 1;
    readonly POSITION_UNAVAILABLE: 2;
    readonly TIMEOUT: 3;
}

declare var GeolocationPositionError: {
    prototype: GeolocationPositionError;
    new(): GeolocationPositionError;
    readonly PERMISSION_DENIED: 1;
    readonly POSITION_UNAVAILABLE: 2;
    readonly TIMEOUT: 3;
};

interface GlobalEventHandlersEventMap {
    "abort": UIEvent;
    "animationcancel": AnimationEvent;
    "animationend": AnimationEvent;
    "animationiteration": AnimationEvent;
    "animationstart": AnimationEvent;
    "auxclick": MouseEvent;
    "beforeinput": InputEvent;
    "blur": FocusEvent;
    "cancel": Event;
    "canplay": Event;
    "canplaythrough": Event;
    "change": Event;
    "click": MouseEvent;
    "close": Event;
    "compositionend": CompositionEvent;
    "compositionstart": CompositionEvent;
    "compositionupdate": CompositionEvent;
    "contextmenu": MouseEvent;
    "copy": ClipboardEvent;
    "cuechange": Event;
    "cut": ClipboardEvent;
    "dblclick": MouseEvent;
    "drag": DragEvent;
    "dragend": DragEvent;
    "dragenter": DragEvent;
    "dragleave": DragEvent;
    "dragover": DragEvent;
    "dragstart": DragEvent;
    "drop": DragEvent;
    "durationchange": Event;
    "emptied": Event;
    "ended": Event;
    "error": ErrorEvent;
    "focus": FocusEvent;
    "focusin": FocusEvent;
    "focusout": FocusEvent;
    "formdata": FormDataEvent;
    "gotpointercapture": PointerEvent;
    "input": Event;
    "invalid": Event;
    "keydown": KeyboardEvent;
    "keypress": KeyboardEvent;
    "keyup": KeyboardEvent;
    "load": Event;
    "loadeddata": Event;
    "loadedmetadata": Event;
    "loadstart": Event;
    "lostpointercapture": PointerEvent;
    "mousedown": MouseEvent;
    "mouseenter": MouseEvent;
    "mouseleave": MouseEvent;
    "mousemove": MouseEvent;
    "mouseout": MouseEvent;
    "mouseover": MouseEvent;
    "mouseup": MouseEvent;
    "paste": ClipboardEvent;
    "pause": Event;
    "play": Event;
    "playing": Event;
    "pointercancel": PointerEvent;
    "pointerdown": PointerEvent;
    "pointerenter": PointerEvent;
    "pointerleave": PointerEvent;
    "pointermove": PointerEvent;
    "pointerout": PointerEvent;
    "pointerover": PointerEvent;
    "pointerup": PointerEvent;
    "progress": ProgressEvent;
    "ratechange": Event;
    "reset": Event;
    "resize": UIEvent;
    "scroll": Event;
    "scrollend": Event;
    "securitypolicyviolation": SecurityPolicyViolationEvent;
    "seeked": Event;
    "seeking": Event;
    "select": Event;
    "selectionchange": Event;
    "selectstart": Event;
    "slotchange": Event;
    "stalled": Event;
    "submit": SubmitEvent;
    "suspend": Event;
    "timeupdate": Event;
    "toggle": Event;
    "touchcancel": TouchEvent;
    "touchend": TouchEvent;
    "touchmove": TouchEvent;
    "touchstart": TouchEvent;
    "transitioncancel": TransitionEvent;
    "transitionend": TransitionEvent;
    "transitionrun": TransitionEvent;
    "transitionstart": TransitionEvent;
    "volumechange": Event;
    "waiting": Event;
    "webkitanimationend": Event;
    "webkitanimationiteration": Event;
    "webkitanimationstart": Event;
    "webkittransitionend": Event;
    "wheel": WheelEvent;
}

interface GlobalEventHandlers {
    /**
     * Fires when the user aborts the download.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/abort_event)
     */
    onabort: ((this: GlobalEventHandlers, ev: UIEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/animationcancel_event) */
    onanimationcancel: ((this: GlobalEventHandlers, ev: AnimationEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/animationend_event) */
    onanimationend: ((this: GlobalEventHandlers, ev: AnimationEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/animationiteration_event) */
    onanimationiteration: ((this: GlobalEventHandlers, ev: AnimationEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/animationstart_event) */
    onanimationstart: ((this: GlobalEventHandlers, ev: AnimationEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/auxclick_event) */
    onauxclick: ((this: GlobalEventHandlers, ev: MouseEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/beforeinput_event) */
    onbeforeinput: ((this: GlobalEventHandlers, ev: InputEvent) => any) | null;
    /**
     * Fires when the object loses the input focus.
     * @param ev The focus event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/blur_event)
     */
    onblur: ((this: GlobalEventHandlers, ev: FocusEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLDialogElement/cancel_event) */
    oncancel: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /**
     * Occurs when playback is possible, but would require further buffering.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/canplay_event)
     */
    oncanplay: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/canplaythrough_event) */
    oncanplaythrough: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /**
     * Fires when the contents of the object or selection have changed.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/change_event)
     */
    onchange: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /**
     * Fires when the user clicks the left mouse button on the object
     * @param ev The mouse event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/click_event)
     */
    onclick: ((this: GlobalEventHandlers, ev: MouseEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLDialogElement/close_event) */
    onclose: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /**
     * Fires when the user clicks the right mouse button in the client area, opening the context menu.
     * @param ev The mouse event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/contextmenu_event)
     */
    oncontextmenu: ((this: GlobalEventHandlers, ev: MouseEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/copy_event) */
    oncopy: ((this: GlobalEventHandlers, ev: ClipboardEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLTrackElement/cuechange_event) */
    oncuechange: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/cut_event) */
    oncut: ((this: GlobalEventHandlers, ev: ClipboardEvent) => any) | null;
    /**
     * Fires when the user double-clicks the object.
     * @param ev The mouse event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/dblclick_event)
     */
    ondblclick: ((this: GlobalEventHandlers, ev: MouseEvent) => any) | null;
    /**
     * Fires on the source object continuously during a drag operation.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/drag_event)
     */
    ondrag: ((this: GlobalEventHandlers, ev: DragEvent) => any) | null;
    /**
     * Fires on the source object when the user releases the mouse at the close of a drag operation.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/dragend_event)
     */
    ondragend: ((this: GlobalEventHandlers, ev: DragEvent) => any) | null;
    /**
     * Fires on the target element when the user drags the object to a valid drop target.
     * @param ev The drag event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/dragenter_event)
     */
    ondragenter: ((this: GlobalEventHandlers, ev: DragEvent) => any) | null;
    /**
     * Fires on the target object when the user moves the mouse out of a valid drop target during a drag operation.
     * @param ev The drag event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/dragleave_event)
     */
    ondragleave: ((this: GlobalEventHandlers, ev: DragEvent) => any) | null;
    /**
     * Fires on the target element continuously while the user drags the object over a valid drop target.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/dragover_event)
     */
    ondragover: ((this: GlobalEventHandlers, ev: DragEvent) => any) | null;
    /**
     * Fires on the source object when the user starts to drag a text selection or selected object.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/dragstart_event)
     */
    ondragstart: ((this: GlobalEventHandlers, ev: DragEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/drop_event) */
    ondrop: ((this: GlobalEventHandlers, ev: DragEvent) => any) | null;
    /**
     * Occurs when the duration attribute is updated.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/durationchange_event)
     */
    ondurationchange: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /**
     * Occurs when the media element is reset to its initial state.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/emptied_event)
     */
    onemptied: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /**
     * Occurs when the end of playback is reached.
     * @param ev The event
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLMediaElement/ended_event)
     */
    onended: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /**
     * Fires when an error occurs during object loading.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/error_event)
     */
    onerror: OnErrorEventHandler;
    /**
     * Fires when the object receives focus.
     * @param ev The event.
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/focus_event)
     */
    onfocus: ((this: GlobalEventHandlers, ev: FocusEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLFormElement/formdata_event) */
    onformdata: ((this: GlobalEventHandlers, ev: FormDataEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/gotpointercapture_event) */
    ongotpointercapture: ((this: GlobalEventHandlers, ev: PointerEvent) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLElement/input_event) */
    oninput: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /** [MDN Reference](https://developer.mozilla.org/docs/Web/API/HTMLInputElement/invalid_event) */
    oninvalid: ((this: GlobalEventHandlers, ev: Event) => any) | null;
    /**
     * Fires when the user presses a key.
     * @param ev The keyboard event
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/keydown_event)
     */
    onkeydown: ((this: GlobalEventHandlers, ev: KeyboardEvent) => any) | null;
    /**
     * Fires when the user presses an alphanumeric key.
     * @param ev The event.
     * @deprecated
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/keypress_event)
     */
    onkeypress: ((this: GlobalEventHandlers, ev: KeyboardEvent) => any) | null;
    /**
     * Fires when the user releases a key.
     * @param ev The keyboard event
     *
     * [MDN Reference](https://developer.mozilla.org/docs/Web/API/Element/keyup_event)
     */
    onkeyup: ((this: GlobalEventHandlers, ev: KeyboardEvent) => any) | null;
    /**
     * Fires immediately after the browser loads the object.
     * @param ev The event.
     *
     * [