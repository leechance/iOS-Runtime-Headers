/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
 */

@interface LKLoginController : NSObject <LKLoginControllerProtocol> {
    id /* block */ _completionHandler;
    NSXPCConnection *_connection;
    id /* block */ _dictionaryCompletionHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (retain) NSXPCConnection *connection;
@property (nonatomic, copy) id /* block */ dictionaryCompletionHandler;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)chooseUserWithIdentifier:(id)arg1 inClassWithID:(id)arg2 password:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (id /* block */)completionHandler;
- (id)connection;
- (id /* block */)dictionaryCompletionHandler;
- (void)fetchClassRosterWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)lastLoginForAppleID:(id)arg1;
- (void)loginAppleID:(id)arg1 password:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)proxy;
- (id)recentUsers;
- (void)saveClassConfiguration:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setConnection:(id)arg1;
- (void)setDictionaryCompletionHandler:(id /* block */)arg1;

@end
