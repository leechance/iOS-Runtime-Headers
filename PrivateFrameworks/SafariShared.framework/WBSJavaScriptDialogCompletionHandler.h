/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSJavaScriptDialogCompletionHandler : NSObject {
    id /* block */ _alertCompletionHandler;
    id /* block */ _confirmCompletionHandler;
    int _dialogMode;
    id /* block */ _promptCompletionHandler;
}

@property (nonatomic, copy) id /* block */ alertCompletionHandler;
@property (nonatomic, copy) id /* block */ confirmCompletionHandler;
@property (nonatomic) int dialogMode;
@property (nonatomic, copy) id /* block */ promptCompletionHandler;

- (void).cxx_destruct;
- (id /* block */)alertCompletionHandler;
- (void)cancel;
- (id /* block */)confirmCompletionHandler;
- (int)dialogMode;
- (id)initWithAlertCompletionHandler:(id /* block */)arg1;
- (id)initWithConfirmCompletionHandler:(id /* block */)arg1;
- (id)initWithPromptCompletionHandler:(id /* block */)arg1;
- (id /* block */)promptCompletionHandler;
- (void)setAlertCompletionHandler:(id /* block */)arg1;
- (void)setConfirmCompletionHandler:(id /* block */)arg1;
- (void)setDialogMode:(int)arg1;
- (void)setPromptCompletionHandler:(id /* block */)arg1;

@end
