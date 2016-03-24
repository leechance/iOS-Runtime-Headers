/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

@interface BYAppleIDAccountsManager : NSObject {
    AASetupAssistantService *_aaService;
    AALoginPluginManager *_appleIDLoginPluginManager;
}

@property (setter=setAAService:, nonatomic, retain) AASetupAssistantService *aaService;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)aaService;
- (void)enableDataClassesForAccount:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initForDelegateBundleIDs:(id)arg1;
- (void)loginDelegateAccountsWithUsername:(id)arg1 password:(id)arg2 skipiTunes:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)setAAService:(id)arg1;

@end
