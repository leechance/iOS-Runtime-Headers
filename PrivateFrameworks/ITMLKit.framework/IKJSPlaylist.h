/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSPlaylist : IKJSObject <IKJSPlaylist> {
    IKAppPlaylistBridge *_bridge;
}

@property (nonatomic, readonly) IKAppPlaylistBridge *bridge;
@property (nonatomic) int endAction;
@property (nonatomic, readonly) unsigned int length;

- (void).cxx_destruct;
- (id)bridge;
- (int)endAction;
- (id)init;
- (id)item:(int)arg1;
- (unsigned int)length;
- (id)pop;
- (void)push:(id)arg1;
- (void)setEndAction:(int)arg1;
- (id)splice:(int)arg1 :(int)arg2 :(id)arg3;

@end
