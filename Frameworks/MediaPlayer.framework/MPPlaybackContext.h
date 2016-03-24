/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlaybackContext : NSObject <NSCoding> {
    unsigned int _repeatType;
    BOOL _shouldRestartPlayback;
    BOOL _shouldStartPlayback;
    unsigned int _shuffleType;
    int _startIndex;
}

@property (setter=mpuReporting_setFeatureName:, nonatomic, copy) NSString *mpuReporting_featureName;
@property (getter=mpuReporting_isQuickPlay, nonatomic, readonly) BOOL mpuReporting_quickPlay;
@property (setter=mpuReporting_setRecommendationData:, nonatomic, copy) NSData *mpuReporting_recommendationData;
@property (nonatomic) unsigned int repeatType;
@property (nonatomic) BOOL shouldRestartPlayback;
@property (nonatomic) BOOL shouldStartPlayback;
@property (nonatomic) unsigned int shuffleType;
@property (nonatomic) int startIndex;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (Class)queueFeederClass;

- (id)description;
- (id)descriptionComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned int)repeatType;
- (void)setRepeatType:(unsigned int)arg1;
- (void)setShouldRestartPlayback:(BOOL)arg1;
- (void)setShouldStartPlayback:(BOOL)arg1;
- (void)setShuffleType:(unsigned int)arg1;
- (void)setStartIndex:(int)arg1;
- (BOOL)shouldRestartPlayback;
- (BOOL)shouldStartPlayback;
- (unsigned int)shuffleType;
- (int)startIndex;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (id)mpuReporting_featureName;
- (BOOL)mpuReporting_isQuickPlay;
- (id)mpuReporting_recommendationData;
- (void)mpuReporting_setFeatureName:(id)arg1;
- (void)mpuReporting_setRecommendationData:(id)arg1;

@end
