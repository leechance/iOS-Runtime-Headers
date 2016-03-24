/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATRemoteConnection : NSObject <CATHTTPMessageParserDelegate, NSStreamDelegate> {
    double _connectionTimeoutInterval;
    <CATRemoteConnectionDelegate> *_delegate;
    NSInputStream *_inputStream;
    NSString *_name;
    NSOutputStream *_outputStream;
    BOOL _usesSSL;
    NSTimer *mConnectionTimeoutTimer;
    NSError *mInterruptionError;
    CATHTTPMessageParser *mMessageParser;
    int mPeerTrustState;
    NSMutableArray *mPendingSendDataContexts;
    NSMutableData *mReadBuffer;
    int mState;
    NSArray *mTrustedCertificates;
}

@property (nonatomic) double connectionTimeoutInterval;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CATRemoteConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSInputStream *inputStream;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSOutputStream *outputStream;
@property (nonatomic, readonly) struct __SecTrust { }*peerTrust;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesSSL;

+ (void)createConnectionPairWithConnection:(id*)arg1 andConnection:(id*)arg2;
+ (void)load;

- (void).cxx_destruct;
- (void)close;
- (void)configureStreamSocketOptions;
- (void)connectionDidInterruptWithError:(id)arg1;
- (void)connectionDidReceiveData;
- (void)connectionShouldSendData;
- (void)connectionTimedOut;
- (double)connectionTimeoutInterval;
- (void)dealloc;
- (id)delegate;
- (void)delegateDidClose;
- (void)delegateDidFailToSecureUsingClientIdentity:(struct __SecIdentity { }*)arg1 trustedCertificates:(id)arg2;
- (void)delegateDidFailToSecureUsingServerIdentity:(struct __SecIdentity { }*)arg1 trustedCertificates:(id)arg2;
- (void)delegateDidFailToSendData:(id)arg1 userInfo:(id)arg2 error:(id)arg3;
- (void)delegateDidInterruptWithError:(id)arg1;
- (void)delegateDidOpen;
- (void)delegateDidReceiveData:(id)arg1;
- (void)delegateDidSecureUsingClientIdentity:(struct __SecIdentity { }*)arg1 trustedCertificates:(id)arg2;
- (void)delegateDidSecureUsingServerIdentity:(struct __SecIdentity { }*)arg1 trustedCertificates:(id)arg2;
- (void)delegateDidSendData:(id)arg1 userInfo:(id)arg2;
- (BOOL)evaluatePeerTrust:(struct __SecTrust { }*)arg1;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2;
- (id)initWithNetService:(id)arg1;
- (id)inputStream;
- (void)messageParser:(id)arg1 didParseData:(id)arg2;
- (id)name;
- (void)open;
- (id)outputStream;
- (struct __SecTrust { }*)peerTrust;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)secureUsingClientIdentity:(struct __SecIdentity { }*)arg1 trustedCertificates:(id)arg2;
- (BOOL)secureUsingIdentity:(struct __SecIdentity { }*)arg1 trustedCertificates:(id)arg2 isServer:(BOOL)arg3;
- (void)secureUsingServerIdentity:(struct __SecIdentity { }*)arg1 trustedCertificates:(id)arg2;
- (void)sendData:(id)arg1 userInfo:(id)arg2;
- (void)sendDataDidFail:(id)arg1 withError:(id)arg2;
- (void)sendDataDidSucceed:(id)arg1;
- (void)setConnectionTimeoutInterval:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInputStream:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOutputStream:(id)arg1;
- (void)setUsesSSL:(BOOL)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;
- (void)tryEvaluatingPeerTrustWithStream:(id)arg1;
- (BOOL)trySendingData:(id)arg1 error:(id*)arg2;
- (BOOL)usesSSL;

@end
