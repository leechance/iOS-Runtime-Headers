/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRelayStream : HAPRelayStream <HMDRelayManagerDelegate, IDSServiceDelegateHomeKit> {
    NSData *_accessToken;
    NSString *_accessoryIdentifier;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSString *_controllerIdentifier;
    IDSService *_idsService;
    BOOL _opened;
    NSMutableArray *_pendingSentMessageIdentifiers;
    HMDRelayManager *_relayManger;
    BOOL _suspended;
}

@property (nonatomic, readonly, copy) NSData *accessToken;
@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly, copy) NSString *controllerIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) IDSService *idsService;
@property (getter=isOpened, nonatomic) BOOL opened;
@property (nonatomic, readonly) NSMutableArray *pendingSentMessageIdentifiers;
@property (nonatomic, readonly) HMDRelayManager *relayManger;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic) BOOL suspended;

- (void).cxx_destruct;
- (void)_closeWithError:(id)arg1;
- (id)accessToken;
- (id)accessoryIdentifier;
- (id)clientQueue;
- (void)close;
- (id)controllerIdentifier;
- (id)idsService;
- (id)initWithRelayManager:(id)arg1 idsService:(id)arg2 accessoryIdentifier:(id)arg3 accessToken:(id)arg4;
- (BOOL)isOpened;
- (BOOL)isSuspended;
- (unsigned int)mtu;
- (void)open;
- (id)pendingSentMessageIdentifiers;
- (void)relayManager:(id)arg1 didUpdateControllerIdentifier:(id)arg2;
- (id)relayManger;
- (void)resume;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingAccessoryData:(id)arg3 fromAccessoryID:(id)arg4 context:(id)arg5;
- (void)setClientQueue:(id)arg1;
- (void)setIdsService:(id)arg1;
- (void)setOpened:(BOOL)arg1;
- (void)setSuspended:(BOOL)arg1;
- (void)suspend;
- (id)writeData:(id)arg1 error:(id*)arg2;

@end
