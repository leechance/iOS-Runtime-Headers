/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicStoreModelRequestConfiguration : NSObject {
    NSURLRequest *_URLRequest;
    unsigned int _itemMetadataRequestReason;
    NSArray *_requestedItemIdentifiers;
    int _type;
}

@property (nonatomic, readonly) NSURLRequest *URLRequest;
@property (nonatomic, readonly) unsigned int itemMetadataRequestReason;
@property (nonatomic, readonly) NSArray *requestedItemIdentifiers;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (id)URLRequest;
- (id)initWithRequestedItemIdentifiers:(id)arg1 reason:(unsigned int)arg2;
- (id)initWithURLRequest:(id)arg1;
- (unsigned int)itemMetadataRequestReason;
- (id)requestedItemIdentifiers;
- (int)type;

@end
