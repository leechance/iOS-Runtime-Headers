/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputHelper : NSObject {
    AVAssetWriterInputConfigurationState *_configurationState;
    AVWeakReference *_weakReferenceToAssetWriterInput;
}

@property (nonatomic) short alternateGroupID;
@property (nonatomic, readonly) BOOL canPerformMultiplePasses;
@property (nonatomic, readonly) AVAssetWriterInputConfigurationState *configurationState;
@property (nonatomic, readonly) AVAssetWriterInputPassDescription *currentPassDescription;
@property (nonatomic) BOOL expectsMediaDataInRealTime;
@property (nonatomic, copy) NSString *extendedLanguageTag;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic) int layer;
@property (nonatomic) BOOL marksOutputTrackAsEnabled;
@property (nonatomic) int mediaTimeScale;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, copy) NSArray *metadata;
@property (nonatomic) struct CGSize { float x1; float x2; } naturalSize;
@property (nonatomic, readonly) AVOutputSettings *outputSettings;
@property (nonatomic) BOOL performsMultiPassEncodingIfSupported;
@property (nonatomic, readonly) struct __CVPixelBufferPool { }*pixelBufferPool;
@property (nonatomic) int preferredMediaChunkAlignment;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } preferredMediaChunkDuration;
@property (nonatomic) int preferredMediaChunkSize;
@property (nonatomic) float preferredVolume;
@property (getter=isReadyForMoreMediaData, nonatomic, readonly) BOOL readyForMoreMediaData;
@property (nonatomic, copy) NSURL *sampleReferenceBaseURL;
@property (nonatomic, readonly) BOOL shouldRespondToInitialPassDescription;
@property (nonatomic, readonly) struct opaqueCMFormatDescription { }*sourceFormatHint;
@property (nonatomic, copy) NSDictionary *sourcePixelBufferAttributes;
@property (nonatomic, readonly) int status;
@property (nonatomic, readonly) int trackID;
@property (nonatomic, readonly) NSDictionary *trackReferences;
@property (nonatomic) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } transform;
@property (retain) AVWeakReference *weakReferenceToAssetWriterInput;
@property (nonatomic) BOOL writesMediaDataToBeginningOfFile;

- (void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (short)alternateGroupID;
- (BOOL)appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (int)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 error:(id*)arg2;
- (id)associatedInputsWithTrackAssociationType:(id)arg1;
- (id)availableTrackAssociationTypes;
- (BOOL)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (BOOL)canPerformMultiplePasses;
- (BOOL)canStartRespondingToEachPassDescriptionReturningReason:(id*)arg1;
- (id)configurationState;
- (id)currentPassDescription;
- (void)dealloc;
- (id)description;
- (void)didStartInitialSession;
- (BOOL)expectsMediaDataInRealTime;
- (id)extendedLanguageTag;
- (id)initWithConfigurationState:(id)arg1;
- (BOOL)isReadyForMoreMediaData;
- (id)languageCode;
- (int)layer;
- (void)markAsFinished;
- (void)markCurrentPassAsFinished;
- (BOOL)marksOutputTrackAsEnabled;
- (int)mediaTimeScale;
- (id)mediaType;
- (id)metadata;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)outputSettings;
- (BOOL)performsMultiPassEncodingIfSupported;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;
- (int)preferredMediaChunkAlignment;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })preferredMediaChunkDuration;
- (int)preferredMediaChunkSize;
- (float)preferredVolume;
- (void)prepareToEndSession;
- (BOOL)prepareToFinishWritingReturningError:(id*)arg1;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)sampleReferenceBaseURL;
- (void)setAlternateGroupID:(short)arg1;
- (void)setExpectsMediaDataInRealTime:(BOOL)arg1;
- (void)setExtendedLanguageTag:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLayer:(int)arg1;
- (void)setMarksOutputTrackAsEnabled:(BOOL)arg1;
- (void)setMediaTimeScale:(int)arg1;
- (void)setMetadata:(id)arg1;
- (void)setNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPerformsMultiPassEncodingIfSupported:(BOOL)arg1;
- (void)setPreferredMediaChunkAlignment:(int)arg1;
- (void)setPreferredMediaChunkDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPreferredMediaChunkSize:(int)arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setSampleReferenceBaseURL:(id)arg1;
- (void)setSourcePixelBufferAttributes:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setWeakReferenceToAssetWriterInput:(id)arg1;
- (void)setWritesMediaDataToBeginningOfFile:(BOOL)arg1;
- (BOOL)shouldRespondToInitialPassDescription;
- (struct opaqueCMFormatDescription { }*)sourceFormatHint;
- (id)sourcePixelBufferAttributes;
- (int)status;
- (int)trackID;
- (id)trackReferences;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (void)transitionAssetWriterAndAllInputsToFailedStatusWithError:(id)arg1;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(int)arg1;
- (id)weakReferenceToAssetWriterInput;
- (BOOL)writesMediaDataToBeginningOfFile;

@end
