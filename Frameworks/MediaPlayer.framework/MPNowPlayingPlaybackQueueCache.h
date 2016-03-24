/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPNowPlayingPlaybackQueueCache : NSObject {
    NSMutableDictionary *_changedItems;
    BOOL _coalescingUpdates;
    NSMutableSet *_items;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_contentItemChanged:(id)arg1;
- (void)_pushContentItemChangedNotification;
- (void)_scheduleContentItemChangedNotification:(id)arg1;
- (void)addItems:(id)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;

@end
