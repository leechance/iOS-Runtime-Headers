/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
 */

@interface FBUIUserAgent : NSObject <FBUIUserAgentInternal> {
    BOOL _systemApp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (getter=isSystemApp, nonatomic) BOOL systemApp;

+ (id)sharedAgent;

- (id)currentProcess;
- (id)init;
- (BOOL)isSystemApp;
- (id)mainDisplay;
- (id)mainQueue;
- (id)mainScene;
- (id)processManager;
- (id)sceneManager;
- (void)setSystemApp:(BOOL)arg1;

@end
