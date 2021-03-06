/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDClientProxy : NSObject <CKDSystemAvailabilityWatcher> {
    NSOperationQueue *_backgroundOperationThrottleQueue;
    NSString *_bundleIdentifier;
    NSArray *_cachedSandboxExtensions;
    BOOL _canOpenByID;
    BOOL _canUseCKBeforeFirstUnlock;
    BOOL _canUseCKDuringBuddy;
    BOOL _canUsePackages;
    NSObject<OS_dispatch_queue> *_cancellationQueue;
    NSOperationQueue *_cleanupOperationQueue;
    NSXPCConnection *_connection;
    CKDClientContext *_context;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_pendingContexts;
    NSMutableSet *_pendingOperationIDs;
    int _pid;
    NSString *_procName;
    BOOL _sandboxed;
    NSObject<OS_dispatch_queue> *_setupQueue;
    NSString *_sourceApplicationBundleIdentifier;
    CKWatchdog *_watchdog;
}

@property (nonatomic, retain) NSOperationQueue *backgroundOperationThrottleQueue;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSArray *cachedSandboxExtensions;
@property (nonatomic) BOOL canOpenByID;
@property (nonatomic) BOOL canUseCKBeforeFirstUnlock;
@property (nonatomic) BOOL canUseCKDuringBuddy;
@property (nonatomic) BOOL canUsePackages;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *cancellationQueue;
@property (nonatomic, retain) NSOperationQueue *cleanupOperationQueue;
@property (nonatomic) NSXPCConnection *connection;
@property (nonatomic, retain) CKDClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, retain) NSMutableArray *pendingContexts;
@property (nonatomic, retain) NSMutableSet *pendingOperationIDs;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) NSString *procName;
@property (getter=isSandboxed, nonatomic) BOOL sandboxed;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *setupQueue;
@property (nonatomic, retain) NSString *sourceApplicationBundleIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKWatchdog *watchdog;

+ (id)sharedClientThrottlingOperationQueue;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (int)_accountStatusWithClientContext:(id)arg1;
- (void)_addOperationWithOperationInfo:(id)arg1 factoryBlock:(id /* block */)arg2;
- (int)_applicationPermissionStatusFromUserPrivacySetting:(int)arg1;
- (id)_clientPrefixEntitlement;
- (void)_finishClientSetupWithClientContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_globalStatusForApplicationPermission:(unsigned int)arg1 setupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_handleCheckpointForOperationWithID:(id)arg1 withArguments:(id)arg2;
- (void)_handleCompletionForOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)_handleCompletionForOperationWithID:(id)arg1 isLongLived:(BOOL)arg2 withResult:(id)arg3 block:(id /* block */)arg4;
- (void)_handleProgressForOperation:(id)arg1 withArguments:(id)arg2;
- (void)_handleProgressForOperation:(id)arg1 withArguments:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleProgressForOperationWithID:(id)arg1 withArguments:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)_hasCustomAccountsEntitlement;
- (BOOL)_hasEntitlementForKey:(id)arg1;
- (BOOL)_hasEnvironmentEntitlement;
- (BOOL)_isConnectionAuthorizedForOperation:(id)arg1 error:(id*)arg2;
- (void)_setApplicationPermission:(unsigned int)arg1 enabled:(BOOL)arg2 setupInfo:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_setupClientWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_setupOperationQueues;
- (void)_startClientSetupWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)accountChangedWithID:(id)arg1;
- (void)accountStatusWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)accountsDidGrantAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsDidRevokeAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsWillDeleteAccount:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)applicationIdentifier;
- (id)apsEnvironmentEntitlement;
- (id)backgroundOperationThrottleQueue;
- (id)bundleIdentifier;
- (id)cachedSandboxExtensions;
- (BOOL)canOpenByID;
- (BOOL)canRunGivenAvailabilityState:(unsigned int)arg1;
- (BOOL)canUseCKBeforeFirstUnlock;
- (BOOL)canUseCKDuringBuddy;
- (BOOL)canUsePackages;
- (BOOL)canUsePackagesWithError:(id*)arg1;
- (void)cancelAllOperations;
- (void)cancelOperationWithIdentifier:(id)arg1;
- (id)cancellationQueue;
- (id)cleanupOperationQueue;
- (void)clearAssetCacheWithSetupInfo:(id)arg1 databaseScope:(int)arg2;
- (void)clearAuthTokensWithSetupInfo:(id)arg1 recordID:(id)arg2 databaseScope:(int)arg3;
- (void)clearRecordCacheWithSetupInfo:(id)arg1 databaseScope:(int)arg2;
- (id)connection;
- (id)context;
- (void)currentDeviceIDWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)currentUserIDWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)darkWakeEnabledEntitlement;
- (void)dealloc;
- (id)description;
- (void)fetchAllLongLivedOperationIDsWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchLongLivedOperationsWithIDs:(id)arg1 setupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)forceFinishClientSetupWithClientContext:(id)arg1;
- (void)getBehaviorOptionForKey:(id)arg1 isContainerOption:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)getNewWebSharingIdentityWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getPCSDiagnosticsForZonesWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getSandboxExtensionsWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)hasAllowAccessBeforeFirstUnlockSinceBootEntitlement;
- (BOOL)hasAllowAccessDuringBuddyEntitlement;
- (BOOL)hasCloudKitSystemServiceEntitlement;
- (BOOL)hasDarkWakeNetworkReachabilityEnabledEntitlement;
- (BOOL)hasDeviceIdentifierEntitlement;
- (BOOL)hasLightweightPCSEntitlement;
- (BOOL)hasMasqueradingEntitlement;
- (BOOL)hasProtectionDataEntitlement;
- (BOOL)hasTCCAuthorization;
- (id)initWithConnection:(id)arg1;
- (BOOL)isLongLived;
- (BOOL)isSandboxed;
- (id)openFileWithOpenInfo:(id)arg1 error:(id*)arg2;
- (id)operationQueue;
- (id)pendingContexts;
- (id)pendingOperationIDs;
- (void)performAcceptSharesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performDiscoverAllContactsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performDiscoverUserInfosOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchChangedRecordZonesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchEnvironmentOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchNotificationChangesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchRecordChangesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchRecordVersionsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchRecordZonesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchRecordsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchShareInfoOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchSharesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchSubscriptionsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchUserIdentitiesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchUserQuotaOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchWebAuthTokenOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performMarkNotificationsReadOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performModifyBadgeOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performModifyRecordAccessOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performModifyRecordZonesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performModifyRecordsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performModifySharesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performModifySubscriptionsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performModifyWebSharingOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performPublishAssetsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performQueryOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (int)pid;
- (id)procName;
- (void)purgeTmpDirectory;
- (void)repairZonePCSWithOperationInfo:(id)arg1 withBlock:(id /* block */)arg2;
- (void)requestApplicationPermission:(unsigned int)arg1 setupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)resetAllApplicationPermissionsWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)serverPreferredPushEnvironmentWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setApplicationPermission:(unsigned int)arg1 enabled:(BOOL)arg2 setupInfo:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setBackgroundOperationThrottleQueue:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCachedSandboxExtensions:(id)arg1;
- (void)setCanOpenByID:(BOOL)arg1;
- (void)setCanUseCKBeforeFirstUnlock:(BOOL)arg1;
- (void)setCanUseCKDuringBuddy:(BOOL)arg1;
- (void)setCanUsePackages:(BOOL)arg1;
- (void)setCancellationQueue:(id)arg1;
- (void)setCleanupOperationQueue:(id)arg1;
- (void)setClientProxyAvailable:(BOOL)arg1;
- (void)setConnection:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2 setupInfo:(id)arg3;
- (void)setOperationQueue:(id)arg1;
- (void)setPendingContexts:(id)arg1;
- (void)setPendingOperationIDs:(id)arg1;
- (void)setSandboxed:(BOOL)arg1;
- (void)setSetupQueue:(id)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setWatchdog:(id)arg1;
- (id)setupQueue;
- (id)sourceApplicationBundleIdentifier;
- (void)statusForApplicationPermission:(unsigned int)arg1 setupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)statusGroupsForApplicationPermission:(unsigned int)arg1 setupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)statusReport;
- (void)systemAvailabilityChanged:(unsigned int)arg1;
- (void)tearDown;
- (void)tossConfigWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updatePushTokens;
- (BOOL)usePublicTokenEntitlement;
- (id)watchdog;
- (void)wipeAllCachesAndDie;

@end
