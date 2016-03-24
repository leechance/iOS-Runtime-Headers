/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUIrisSettings : PUSettings {
    PUIrisAnalysisSettings *_analysisSettings;
    BOOL _audioEnabled;
    float _playbackPostDuration;
    float _playbackPreDuration;
    double _playbackTransitionCrossfadeDelay;
    double _settleTransitionDuration;
    BOOL _shouldAlwaysBadge;
    BOOL _showCrossfadeBorder;
    BOOL _showDebugInfo;
    BOOL _showStatusBorder;
    BOOL _showVideoBorder;
    float _transitionBlurRadius;
    double _transitionDuration;
    float _transitionScale;
    BOOL _useForceTouchInitiatedPlayback;
    BOOL _useTransition;
    BOOL _useVitalityBuffer;
    BOOL _vitalityAllowed;
}

@property (nonatomic, retain) PUIrisAnalysisSettings *analysisSettings;
@property (getter=isAudioEnabled, nonatomic) BOOL audioEnabled;
@property (nonatomic) float playbackPostDuration;
@property (nonatomic) float playbackPreDuration;
@property (nonatomic) double playbackTransitionCrossfadeDelay;
@property (nonatomic) double settleTransitionDuration;
@property (nonatomic) BOOL shouldAlwaysBadge;
@property (nonatomic) BOOL showCrossfadeBorder;
@property (nonatomic) BOOL showDebugInfo;
@property (getter=showStatusBorder, nonatomic) BOOL showStatusBorder;
@property (nonatomic) BOOL showVideoBorder;
@property (nonatomic) float transitionBlurRadius;
@property (nonatomic) double transitionDuration;
@property (nonatomic) float transitionScale;
@property (nonatomic) BOOL useForceTouchInitiatedPlayback;
@property (nonatomic) BOOL useTransition;
@property (nonatomic) BOOL useVitalityBuffer;
@property (getter=isVitalityAllowed, nonatomic) BOOL vitalityAllowed;

+ (id)_photosPlayerRootSettings;
+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)analysisSettings;
- (BOOL)isAudioEnabled;
- (BOOL)isVitalityAllowed;
- (void)performPostSaveActions;
- (float)playbackPostDuration;
- (float)playbackPreDuration;
- (double)playbackTransitionCrossfadeDelay;
- (void)restoreDefaultValues;
- (void)setAnalysisSettings:(id)arg1;
- (void)setAudioEnabled:(BOOL)arg1;
- (void)setDefaultValues;
- (void)setPlaybackPostDuration:(float)arg1;
- (void)setPlaybackPreDuration:(float)arg1;
- (void)setPlaybackTransitionCrossfadeDelay:(double)arg1;
- (void)setSettleTransitionDuration:(double)arg1;
- (void)setShouldAlwaysBadge:(BOOL)arg1;
- (void)setShowCrossfadeBorder:(BOOL)arg1;
- (void)setShowDebugInfo:(BOOL)arg1;
- (void)setShowStatusBorder:(BOOL)arg1;
- (void)setShowVideoBorder:(BOOL)arg1;
- (void)setTransitionBlurRadius:(float)arg1;
- (void)setTransitionDuration:(double)arg1;
- (void)setTransitionScale:(float)arg1;
- (void)setUseForceTouchInitiatedPlayback:(BOOL)arg1;
- (void)setUseTransition:(BOOL)arg1;
- (void)setUseVitalityBuffer:(BOOL)arg1;
- (void)setVitalityAllowed:(BOOL)arg1;
- (double)settleTransitionDuration;
- (BOOL)shouldAlwaysBadge;
- (BOOL)showCrossfadeBorder;
- (BOOL)showDebugInfo;
- (BOOL)showStatusBorder;
- (BOOL)showVideoBorder;
- (float)transitionBlurRadius;
- (double)transitionDuration;
- (float)transitionScale;
- (BOOL)useForceTouchInitiatedPlayback;
- (BOOL)useTransition;
- (BOOL)useVitalityBuffer;

@end
