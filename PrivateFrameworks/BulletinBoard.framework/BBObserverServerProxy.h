/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBObserverServerProxy : NSObject <BBObserverClientInterface, BBObserverServerInterface> {
    NSXPCConnection *_connection;
    BOOL _isEstablished;
    BOOL _isValid;
    BBZeroingWeakReference *_observerZWR;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) BBZeroingWeakReference *observerZWR;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)xpcInterface;

- (void)clearBulletinIDs:(id)arg1 inSection:(id)arg2;
- (void)clearBulletinsFromDate:(id)arg1 toDate:(id)arg2 inSections:(id)arg3;
- (void)clearSection:(id)arg1;
- (id)connection;
- (void)dealloc;
- (BOOL)established;
- (void)finishedWithBulletinID:(id)arg1 transactionID:(unsigned int)arg2;
- (void)getActiveAlertBehaviorOverridesWithHandler:(id /* block */)arg1;
- (void)getAttachmentAspectRatioForBulletinID:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getAttachmentPNGDataForBulletinID:(id)arg1 sizeConstraints:(id)arg2 withHandler:(id /* block */)arg3;
- (void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withHandler:(id /* block */)arg3;
- (void)getBulletinsWithHandler:(id /* block */)arg1;
- (void)getObserverDebugInfo:(id /* block */)arg1;
- (void)getPrimaryAttachmentDataForBulletinID:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getPrivilegedSenderTypesWithHandler:(id /* block */)arg1;
- (void)getSectionInfoForActiveSectionsWithHandler:(id /* block */)arg1;
- (void)getSectionInfoForSectionIDs:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getSectionInfoWithHandler:(id /* block */)arg1;
- (void)getSectionOrderRuleWithHandler:(id /* block */)arg1;
- (void)getSectionParametersForSectionID:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getSortDescriptorsForSectionID:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getUniversalSectionIDForSectionID:(id)arg1 withHandler:(id /* block */)arg2;
- (void)handleResponse:(id)arg1;
- (id)initWithObserver:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (BOOL)isValid;
- (void)noteAlertBehaviorOverrideStateChanged:(id)arg1;
- (void)noteAlertBehaviorOverridesChanged:(id)arg1;
- (void)noteServerReceivedResponseForBulletin:(id)arg1;
- (id)observer;
- (id)observerZWR;
- (id)queue;
- (void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeeds:(unsigned int)arg3;
- (void)requestFutureBulletinsForSectionID:(id)arg1;
- (void)requestNoticesBulletinsForSectionID:(id)arg1;
- (void)requestTodayBulletinsForSectionID:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setObserverFeed:(unsigned int)arg1 asLightsAndSirensGateway:(id)arg2 priority:(unsigned int)arg3;
- (void)setObserverFeed:(unsigned int)arg1 attachToLightsAndSirensGateway:(id)arg2;
- (void)setObserverZWR:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)updateBulletin:(id)arg1 forFeeds:(unsigned int)arg2;
- (void)updateBulletin:(id)arg1 forFeeds:(unsigned int)arg2 withHandler:(id /* block */)arg3;
- (void)updateSectionInfo:(id)arg1;
- (void)updateSectionOrder:(id)arg1;
- (void)updateSectionOrderRule:(id)arg1;
- (void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2;

@end
