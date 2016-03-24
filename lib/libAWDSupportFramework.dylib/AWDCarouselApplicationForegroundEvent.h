/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCarouselApplicationForegroundEvent : PBCodable <NSCopying> {
    NSString *_bundleID;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int reason : 1; 
    } _has;
    AWDCarouselPreviousForeground *_previousActivation;
    AWDCarouselPreviousExit *_previousExit;
    NSMutableArray *_prewarms;
    unsigned int _reason;
    unsigned long long _timestamp;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, readonly) BOOL hasBundleID;
@property (nonatomic, readonly) BOOL hasPreviousActivation;
@property (nonatomic, readonly) BOOL hasPreviousExit;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, retain) AWDCarouselPreviousForeground *previousActivation;
@property (nonatomic, retain) AWDCarouselPreviousExit *previousExit;
@property (nonatomic, retain) NSMutableArray *prewarms;
@property (nonatomic) unsigned int reason;
@property (nonatomic) unsigned long long timestamp;

+ (Class)prewarmsType;

- (void)addPrewarms:(id)arg1;
- (id)bundleID;
- (void)clearPrewarms;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBundleID;
- (BOOL)hasPreviousActivation;
- (BOOL)hasPreviousExit;
- (BOOL)hasReason;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)previousActivation;
- (id)previousExit;
- (id)prewarms;
- (id)prewarmsAtIndex:(unsigned int)arg1;
- (unsigned int)prewarmsCount;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)reason;
- (void)setBundleID:(id)arg1;
- (void)setHasReason:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setPreviousActivation:(id)arg1;
- (void)setPreviousExit:(id)arg1;
- (void)setPrewarms:(id)arg1;
- (void)setReason:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
