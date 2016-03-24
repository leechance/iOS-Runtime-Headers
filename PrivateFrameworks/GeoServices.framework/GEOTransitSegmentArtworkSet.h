/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitSegmentArtworkSet : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    } _artworkIndexs;
    NSMutableArray *_clusters;
}

@property (nonatomic, readonly) unsigned int*artworkIndexs;
@property (nonatomic, readonly) unsigned int artworkIndexsCount;
@property (nonatomic, retain) NSMutableArray *clusters;

- (void)addArtworkIndex:(unsigned int)arg1;
- (void)addCluster:(id)arg1;
- (unsigned int)artworkIndexAtIndex:(unsigned int)arg1;
- (unsigned int*)artworkIndexs;
- (unsigned int)artworkIndexsCount;
- (void)clearArtworkIndexs;
- (void)clearClusters;
- (id)clusterAtIndex:(unsigned int)arg1;
- (id)clusters;
- (unsigned int)clustersCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setArtworkIndexs:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setClusters:(id)arg1;
- (void)writeTo:(id)arg1;

@end
