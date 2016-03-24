/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDPCSController : NSObject {
    CDPContext *_context;
    <CDPDProtectedCloudStorageProxy> *_pcsProxy;
}

@property (nonatomic, retain) <CDPDProtectedCloudStorageProxy> *pcsProxy;

- (void).cxx_destruct;
- (void)_checkiCDPStatusWithCompletion:(id /* block */)arg1;
- (void)_disableCDPWithCompletion:(id /* block */)arg1;
- (void)_enableCDPWithCompletion:(id /* block */)arg1;
- (void)checkiCDPStatusWithCompletion:(id /* block */)arg1;
- (void)disableCDPWithCompletion:(id /* block */)arg1;
- (void)enableCDPWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)pcsProxy;
- (void)setPcsProxy:(id)arg1;

@end
