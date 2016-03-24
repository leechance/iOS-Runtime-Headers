/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTRemoteObject : NSObject <IDSServiceDelegate> {
    NSObject<OS_dispatch_queue> *_clientQueue;
    <BLTAbstractIDSDevice> *_defaultPairedDevice;
    NSLock *_defaultPairedDeviceLock;
    BOOL _full;
    NSObject<OS_dispatch_queue> *_idsQueue;
    NSMutableDictionary *_idsRequestMessageTypeToSelector;
    NSMutableDictionary *_idsSendIDToCompletionHandler;
    NSMutableDictionary *_idsSendIDToResponseHandler;
    double _lastTimeRaisedBadIDSProtobuf;
    BLTPBProtobufSequenceNumberManager *_sequenceNumberManager;
    NSLock *_sequenceNumberSendLock;
    <BLTAbstractIDSService> *_service;
    NSString *_serviceName;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <BLTAbstractIDSDevice> *defaultPairedDevice;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BLTPBProtobufSequenceNumberManager *sequenceNumberManager;
@property (nonatomic, readonly) <BLTAbstractIDSService> *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_callSendCompletionHandlerWithSuccess:(BOOL)arg1 identifier:(id)arg2 error:(id)arg3;
- (void)_handleDebugException;
- (void)_handleNewSessionState:(unsigned int)arg1;
- (void)_queueHandleIDSProtobuf:(id)arg1;
- (void)_queuePerformSend:(id /* block */)arg1 responseToRequest:(id)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 shortDescription:(id)arg5 onlyOneFor:(id)arg6 didSend:(id /* block */)arg7 andResponse:(id /* block */)arg8;
- (void)_queueSendMessage:(id)arg1 type:(unsigned short)arg2 responseToRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 didSend:(id /* block */)arg7 andResponse:(id /* block */)arg8 didQueue:(id /* block */)arg9;
- (void)_sendAckInitialSequenceNumberForSession:(id)arg1 sessionState:(unsigned int)arg2;
- (void)_sendAckInitialSequenceNumberForSession:(id)arg1 withAssert:(BOOL)arg2 sessionState:(unsigned int*)arg3;
- (void)_sendAssertForSession;
- (void)_sendMessage:(id)arg1 type:(unsigned short)arg2 responseToRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 didSend:(id /* block */)arg7 andResponse:(id /* block */)arg8 didQueue:(id /* block */)arg9;
- (BOOL)_sequenceErrorDidHappenAndHandled:(int)arg1 service:(id)arg2 incomingIdentifier:(id)arg3;
- (void)_setStandaloneTestModeEnabled:(BOOL)arg1;
- (void)_storeProtobufAction:(SEL)arg1 messageType:(unsigned short)arg2 messageSendType:(int)arg3;
- (id)clientQueue;
- (unsigned int)connectionStatus;
- (void)dealloc;
- (id)defaultPairedDevice;
- (void)disableStandaloneTestMode;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned int)arg1 maximumSendDelay:(unsigned int)arg2 minimumResponseDelay:(unsigned int)arg3 maximumResponseDelay:(unsigned int)arg4;
- (void)handleAckInitialSequenceNumberRequest:(id)arg1;
- (void)handleFileURL:(id)arg1 extraMetadata:(id)arg2;
- (void)handleIDSProtobuf:(id)arg1;
- (void)handleIncomingMessage:(id)arg1;
- (bool)hasSentUDID;
- (id)initWithServiceName:(id)arg1 idsQueueName:(char *)arg2;
- (id)initWithServiceName:(id)arg1 idsQueueName:(char *)arg2 andClientQueue:(id)arg3;
- (void)registerProtobufHandlers;
- (void)saveHasSentUDID;
- (void)sendFileURL:(id)arg1 withTimeout:(id)arg2 extraMetadata:(id)arg3 didSend:(id /* block */)arg4 didQueue:(id /* block */)arg5;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 didSend:(id /* block */)arg3;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 didSend:(id /* block */)arg4;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 didSend:(id /* block */)arg4 didQueue:(id /* block */)arg5;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 didSend:(id /* block */)arg5;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 onlyOneFor:(id)arg5 didSend:(id /* block */)arg6 andResponse:(id /* block */)arg7;
- (void)sendResponse:(id)arg1 type:(unsigned short)arg2 withRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 didSend:(id /* block */)arg7;
- (id)sequenceNumberManager;
- (id)service;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)setClientQueue:(id)arg1;
- (void)setProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2;
- (void)setProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2;

@end
