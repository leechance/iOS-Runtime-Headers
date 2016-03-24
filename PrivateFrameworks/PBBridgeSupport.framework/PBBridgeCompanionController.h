/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBridgeCompanionController : PBBridgeIDSServiceDelegate <IDSServiceDelegate, NSURLConnectionDelegate, PBBridgeCompanionProtocol, RUILoaderDelegate> {
    NSURLConnection *_activationConnection;
    NSMutableData *_activationData;
    NSMutableURLRequest *_activationRequest;
    int _activationState;
    NSTimer *_activationTimeout;
    BOOL _allowAnyHTTPSCertificate;
    BOOL _awaitingCustomResponse;
    BOOL _connectionFailed;
    NSString *_contentType;
    <PBBridgeConnectionDelegate> *_delegate;
    unsigned short _granularActivationState;
    id /* block */ _initialSyncPrepCompletion;
    NSString *_internalLastSendMessageID;
    BOOL _isEstablishingPairing;
    id /* block */ _lockedOnAnimationCompletion;
    BOOL _nonSilentActivation;
    BOOL _passcodeSet;
    NSString *_remoteActivationUserAgent;
    RUIStyle *_remoteUIStyle;
    NSMutableDictionary *_reportMapping;
    <RUILoaderDelegate> *_ruiDelegate;
    RUILoader *_ruiLoader;
    BOOL _selectedPairedUnlock;
    BOOL _sentActivationRequest;
    BOOL _sentSessionRequest;
    struct __MKBAssertion { } *_unlockPairingAssertion;
}

@property (nonatomic, retain) NSURLConnection *activationConnection;
@property (nonatomic, retain) NSMutableData *activationData;
@property (nonatomic, retain) NSMutableURLRequest *activationRequest;
@property (nonatomic) int activationState;
@property (nonatomic, retain) NSTimer *activationTimeout;
@property (nonatomic) BOOL allowAnyHTTPSCertificate;
@property (nonatomic) BOOL awaitingCustomResponse;
@property (nonatomic) BOOL connectionFailed;
@property (nonatomic, copy) NSString *contentType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PBBridgeConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short granularActivationState;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) id /* block */ initialSyncPrepCompletion;
@property (nonatomic, retain) NSString *internalLastSendMessageID;
@property (nonatomic) BOOL isEstablishingPairing;
@property (nonatomic, copy) id /* block */ lockedOnAnimationCompletion;
@property (nonatomic) BOOL nonSilentActivation;
@property (nonatomic) BOOL passcodeSet;
@property (nonatomic, copy) NSString *remoteActivationUserAgent;
@property (nonatomic, retain) RUIStyle *remoteUIStyle;
@property (nonatomic, retain) NSMutableDictionary *reportMapping;
@property (nonatomic) <RUILoaderDelegate> *ruiDelegate;
@property (nonatomic, retain) RUILoader *ruiLoader;
@property (nonatomic) BOOL selectedPairedUnlock;
@property (nonatomic) BOOL sentActivationRequest;
@property (nonatomic) BOOL sentSessionRequest;
@property (readonly) Class superclass;

+ (id)displayNameWithFirstName:(id)arg1 lastName:(id)arg2;
+ (void)iCloudFirstName:(id*)arg1 lastName:(id*)arg2;
+ (void)meCardFirstName:(id*)arg1 lastName:(id*)arg2;

- (void).cxx_destruct;
- (void)_cleanup;
- (id)_connectionWithRequest:(id)arg1;
- (BOOL)_dumpCustomRequestBody;
- (BOOL)_sendRemoteCommandWithMessageID:(unsigned short)arg1 withArguments:(id)arg2;
- (BOOL)_sendResponseToMessage:(id)arg1 withResponseMessageID:(unsigned short)arg2 withArguments:(id)arg3;
- (unsigned short)_testActivationResponseType;
- (id)activationConnection;
- (id)activationData;
- (id)activationRequest;
- (int)activationState;
- (id)activationTimeout;
- (void)activationTimeout:(id)arg1;
- (BOOL)allowAnyHTTPSCertificate;
- (BOOL)awaitingCustomResponse;
- (void)beganWaitingForPresentationOfActivationEvent;
- (void)beganWaitingForUserResponseToActivationEvent;
- (void)beginSetupTransaction;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (BOOL)connectionFailed;
- (id)contentType;
- (id)customDescriptionOfMessageType:(unsigned short)arg1;
- (id)delegate;
- (void)enableSiriForGizmo:(id)arg1;
- (void)endSetupTransaction;
- (void)getCompanionLanguage:(id)arg1;
- (void)getCompanionRegion:(id)arg1;
- (void)getSiriState:(id)arg1;
- (void)gizmoActivationFailed:(id)arg1;
- (void)gizmoBecameAvailableWantsConfirmation:(id)arg1;
- (void)gizmoDidBeginActivating:(id)arg1;
- (void)gizmoDidBeginUnlockPairing:(id)arg1;
- (void)gizmoDidEndPasscodeCreation:(id)arg1;
- (void)gizmoDidEndUnlockPairing:(id)arg1;
- (void)gizmoDidFinishActivating:(id)arg1;
- (void)gizmoFailedToCreatePasscode:(id)arg1;
- (unsigned short)granularActivationState;
- (void)handleOfflineTermsResponse:(id)arg1;
- (void)handlePerformanceResults:(id)arg1;
- (void)handleWarrantySentinelResponse:(id)arg1;
- (id)init;
- (id /* block */)initialSyncPrepCompletion;
- (id)internalLastSendMessageID;
- (void)invalidateTimeoutTimer;
- (BOOL)isEstablishingPairing;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;
- (id /* block */)lockedOnAnimationCompletion;
- (BOOL)nonSilentActivation;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (double)offsetEventTime;
- (BOOL)passcodeSet;
- (void)queryGizmoForOfflineTerms;
- (void)queryGizmoForShowWarrantySentinelAndRestoreDeviceName:(id)arg1;
- (void)refreshTimeoutTimer;
- (id)remoteActivationUserAgent;
- (id)remoteUIStyle;
- (id)reportMapping;
- (id)reporterForConnection:(id)arg1;
- (id)ruiDelegate;
- (id)ruiLoader;
- (BOOL)selectedPairedUnlock;
- (void)sendGizmoPasscodeRestrictions;
- (void)sendProxyActivationRequest:(id)arg1;
- (void)sendProxyActivationWithCustomRequest:(id)arg1;
- (BOOL)sentActivationRequest;
- (BOOL)sentSessionRequest;
- (id)serviceIdentifier;
- (void)setActivationConnection:(id)arg1;
- (void)setActivationData:(id)arg1;
- (void)setActivationRequest:(id)arg1;
- (void)setActivationState:(int)arg1;
- (void)setActivationTimeout:(id)arg1;
- (void)setAllowAnyHTTPSCertificate:(BOOL)arg1;
- (void)setAwaitingCustomResponse:(BOOL)arg1;
- (void)setConnectionFailed:(BOOL)arg1;
- (void)setContentType:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGranularActivationState:(unsigned short)arg1;
- (void)setInitialSyncPrepCompletion:(id /* block */)arg1;
- (void)setInternalLastSendMessageID:(id)arg1;
- (void)setIsEstablishingPairing:(BOOL)arg1;
- (void)setLockedOnAnimationCompletion:(id /* block */)arg1;
- (void)setNonSilentActivation:(BOOL)arg1;
- (void)setPasscodeSet:(BOOL)arg1;
- (void)setRemoteActivationUserAgent:(id)arg1;
- (void)setRemoteUIStyle:(id)arg1;
- (void)setReportMapping:(id)arg1;
- (void)setReporter:(id)arg1 forConnection:(id)arg2;
- (void)setRuiDelegate:(id)arg1;
- (void)setRuiLoader:(id)arg1;
- (void)setSelectedPairedUnlock:(BOOL)arg1;
- (void)setSentActivationRequest:(BOOL)arg1;
- (void)setSentSessionRequest:(BOOL)arg1;
- (void)setupServiceMessageSelectorMappings;
- (void)startEstablishingPairing;
- (void)tellGizmoToBeginActivation;
- (void)tellGizmoToDeleteWarrantySentinel;
- (void)tellGizmoToPopToControllerType:(unsigned int)arg1;
- (void)tellGizmoToPrepareForInitialSyncWithCompletion:(id /* block */)arg1;
- (void)tellGizmoToPushControllerType:(unsigned int)arg1;
- (void)tellGizmoToRetryActivation;
- (void)tellGizmoToSeCrownOrientationRight:(BOOL)arg1;
- (void)tellGizmoToSetDiagnosticsEnabled:(BOOL)arg1;
- (void)tellGizmoToSetLocationEnabled:(BOOL)arg1;
- (void)tellGizmoToShowLockedOnAnimationTimeToFlash:(double)arg1 animationCompletion:(id /* block */)arg2;
- (void)tellGizmoToUpdateSyncProgressTo:(float)arg1 withState:(int)arg2;
- (void)transportBecameReachable;
- (void)transportBecameUnreachable;
- (id)viewControllerForAlertPresentation;
- (void)watchDidPrepareForInitialSync:(id)arg1;

@end
