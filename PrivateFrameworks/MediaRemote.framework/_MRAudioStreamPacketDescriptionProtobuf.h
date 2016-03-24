/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRAudioStreamPacketDescriptionProtobuf : PBCodable <NSCopying> {
    unsigned int _dataByteSize;
    struct { 
        unsigned int startOffset : 1; 
        unsigned int dataByteSize : 1; 
        unsigned int variableFramesInPacket : 1; 
    } _has;
    long long _startOffset;
    unsigned int _variableFramesInPacket;
}

@property (nonatomic) unsigned int dataByteSize;
@property (nonatomic) BOOL hasDataByteSize;
@property (nonatomic) BOOL hasStartOffset;
@property (nonatomic) BOOL hasVariableFramesInPacket;
@property (nonatomic) long long startOffset;
@property (nonatomic) unsigned int variableFramesInPacket;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataByteSize;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasDataByteSize;
- (BOOL)hasStartOffset;
- (BOOL)hasVariableFramesInPacket;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDataByteSize:(unsigned int)arg1;
- (void)setHasDataByteSize:(BOOL)arg1;
- (void)setHasStartOffset:(BOOL)arg1;
- (void)setHasVariableFramesInPacket:(BOOL)arg1;
- (void)setStartOffset:(long long)arg1;
- (void)setVariableFramesInPacket:(unsigned int)arg1;
- (long long)startOffset;
- (unsigned int)variableFramesInPacket;
- (void)writeTo:(id)arg1;

@end
