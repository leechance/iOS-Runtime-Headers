/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISPlayerItemChef : NSObject {
    int __currentRequestID;
    NSObject<OS_dispatch_queue> *__isolationQueue;
    NSOperationQueue *__operationQueue;
    NSMutableDictionary *__operationsByRequestID;
}

@property (setter=_setCurrentRequestID:, nonatomic) int _currentRequestID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_isolationQueue;
@property (nonatomic, readonly) NSOperationQueue *_operationQueue;
@property (nonatomic, readonly) NSMutableDictionary *_operationsByRequestID;

+ (id)defaultChef;

- (void).cxx_destruct;
- (int)_currentRequestID;
- (id)_isolationQueue;
- (id)_operationQueue;
- (id)_operationsByRequestID;
- (void)_setCurrentRequestID:(int)arg1;
- (void)cancelPreparationOfIrisAssetWithRequestID:(int)arg1;
- (id)init;
- (int)prepareIrisPlayerItemWithAsset:(id)arg1 trimmedTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 includeVideo:(BOOL)arg3 includeAudio:(BOOL)arg4 completion:(id /* block */)arg5;
- (int)prepareIrisVideoWithAsset:(id)arg1 trimmedTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 completion:(id /* block */)arg3;

@end
