/* Generated by RuntimeBrowser.
 */

@protocol HAPPairSetupSessionClientDelegate <HAPPairSetupSessionDelegate>

@required

- (void)pairSetupSession:(void *)arg1 didReceiveSetupCodeRequestWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: HAPPairSetupSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*

@optional

- (BOOL)pairSetupSession:(HAPPairSetupSession *)arg1 didReceiveBackoffRequestWithTimeInterval:(double)arg2;
- (void)pairSetupSessionDidReceiveInvalidSetupCode:(HAPPairSetupSession *)arg1;

@end
