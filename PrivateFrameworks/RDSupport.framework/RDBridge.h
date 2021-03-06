/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RDSupport.framework/RDSupport
 */

@interface RDBridge : NSObject <IDSServiceDelegate> {
    NSObject<OS_dispatch_source> *_connectionHealthCheckTimer;
    int _connectionState;
    <RDBridgeDelegate> *_delegate;
    RDMulticastService *_multicastService;
    IDSService *_remoteService;
    NSObject<OS_dispatch_source> *_sleepFailSafeTimer;
}

@property (nonatomic) int connectionState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RDBridgeDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (retain) RDMulticastService *multicastService;
@property (retain) IDSService *remoteService;
@property (readonly) Class superclass;

+ (id)descriptionForConnectionState:(int)arg1;
+ (id)statusStringForConnectionState:(int)arg1;

- (void).cxx_destruct;
- (void)changeGizmoLanguage:(id)arg1 locale:(id)arg2;
- (int)connectionState;
- (int)currentConnectionState;
- (id)currentConnectionStateDescription;
- (id)currentConnectionStateString;
- (id)delegate;
- (id)initWithOptions:(id)arg1;
- (void)initializeIDSConnection;
- (void)initializeMulticastDiscovery;
- (id)multicastService;
- (void)notifyDelegateOfIncomingData:(id)arg1;
- (void)performIDSHealthCheck;
- (void)postConnectionStatusDidChangeNotification;
- (void)reinitializeIDSConnection;
- (id)remoteService;
- (void)requestGizmoConfigurationWithContext:(id)arg1;
- (void)requestGizmoLanguagesAndLocalesWithContext:(id)arg1;
- (void)requestGizmoResetNotificationCenterIfNecessary;
- (void)requestGizmoToDisableSleep;
- (void)requestGizmoToEnableSleep;
- (void)requestGizmoToStartPlayingDemoMovie;
- (void)requestGizmoToStopPlayingDemoMovie;
- (void)requestRebootCompanion:(BOOL)arg1 andGizmo:(BOOL)arg2;
- (void)sendIDSPayload:(id)arg1;
- (void)sendPayload:(id)arg1;
- (void)sendRequestWithID:(id)arg1 context:(id)arg2;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)setConnectionState:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMulticastService:(id)arg1;
- (void)setRemoteService:(id)arg1;
- (void)startConnectionHealthCheck;
- (void)stopIDSHealthCheck;
- (void)updateFailSafeEnableScreenSaver;

@end
