/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRPBPairingModeRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int phonePairingProtocolVersionMax : 1; 
        unsigned int phonePairingProtocolVersionMin : 1; 
        unsigned int watchPairingProtocolVersion : 1; 
    } _has;
    int _pairingMode;
    int _phonePairingProtocolVersionMax;
    int _phonePairingProtocolVersionMin;
    int _watchPairingProtocolVersion;
}

@property (nonatomic) BOOL hasPhonePairingProtocolVersionMax;
@property (nonatomic) BOOL hasPhonePairingProtocolVersionMin;
@property (nonatomic) BOOL hasWatchPairingProtocolVersion;
@property (nonatomic) int pairingMode;
@property (nonatomic) int phonePairingProtocolVersionMax;
@property (nonatomic) int phonePairingProtocolVersionMin;
@property (nonatomic) int watchPairingProtocolVersion;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPhonePairingProtocolVersionMax;
- (BOOL)hasPhonePairingProtocolVersionMin;
- (BOOL)hasWatchPairingProtocolVersion;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)pairingMode;
- (int)phonePairingProtocolVersionMax;
- (int)phonePairingProtocolVersionMin;
- (BOOL)readFrom:(id)arg1;
- (void)setHasPhonePairingProtocolVersionMax:(BOOL)arg1;
- (void)setHasPhonePairingProtocolVersionMin:(BOOL)arg1;
- (void)setHasWatchPairingProtocolVersion:(BOOL)arg1;
- (void)setPairingMode:(int)arg1;
- (void)setPhonePairingProtocolVersionMax:(int)arg1;
- (void)setPhonePairingProtocolVersionMin:(int)arg1;
- (void)setWatchPairingProtocolVersion:(int)arg1;
- (int)watchPairingProtocolVersion;
- (void)writeTo:(id)arg1;

@end
