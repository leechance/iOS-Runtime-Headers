/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAccessoryBrowser : NSObject <HMMessageReceiver> {
    HMThreadSafeMutableArrayCollection *_accessories;
    BOOL _browsing;
    NSObject<OS_dispatch_queue> *_clientQueue;
    <HMAccessoryBrowserDelegate> *_delegate;
    HMDelegateCaller *_delegateCaller;
    unsigned int _generationCounter;
    HMMessageDispatcher *_msgDispatcher;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSUUID *_uuid;
    HMXpcClient *_xpcClient;
}

@property (nonatomic, retain) HMThreadSafeMutableArrayCollection *accessories;
@property (getter=isBrowsing, nonatomic) BOOL browsing;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMAccessoryBrowserDelegate> *delegate;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *discoveredAccessories;
@property (nonatomic) unsigned int generationCounter;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMMessageDispatcher *msgDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, retain) HMXpcClient *xpcClient;

- (void).cxx_destruct;
- (void)_fetchNewAccessories;
- (void)_fetchNewAccessoriesWithPrivacyCheck;
- (void)_handleBridgeStatusNotification:(id)arg1;
- (void)_handleNewAccessoriesFound:(id)arg1;
- (void)_handleNewAccessoriesRemoved:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_start;
- (void)_startSearchingForNewAccessories;
- (void)_stopSearchingForNewAccessories;
- (void)_updateNewAccessories:(id)arg1;
- (id)accessories;
- (id)clientQueue;
- (void)dealloc;
- (id)delegate;
- (id)delegateCaller;
- (id)discoveredAccessories;
- (unsigned int)generationCounter;
- (id)init;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (BOOL)isBrowsing;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)propertyQueue;
- (void)setAccessories:(id)arg1;
- (void)setBrowsing:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setGenerationCounter:(unsigned int)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setXpcClient:(id)arg1;
- (void)startSearchingForNewAccessories;
- (void)stopSearchingForNewAccessories;
- (id)uuid;
- (id)xpcClient;

@end
