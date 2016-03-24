/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRSendVoiceInputMessageProtobuf : PBCodable <NSCopying> {
    _MRAudioDataBlockProtobuf *_dataBlock;
}

@property (nonatomic, retain) _MRAudioDataBlockProtobuf *dataBlock;
@property (nonatomic, readonly) BOOL hasDataBlock;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataBlock;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasDataBlock;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDataBlock:(id)arg1;
- (void)writeTo:(id)arg1;

@end
