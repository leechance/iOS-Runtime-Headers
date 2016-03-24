/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotification.framework/UserNotification
 */

@interface UNNotificationSettingsService : NSObject {
    UNNotificationAuthorizationAlertController *_authorizationAlertController;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (void)_queue_bundleIdentifiersWithEnabledNotifications:(id)arg1 withResult:(id /* block */)arg2;
- (BOOL)_queue_isNotificationsModificationAllowedForBundleIdentifier:(id)arg1;
- (void)_queue_notificationSettingsForBundleIdentifier:(id)arg1 withResult:(id /* block */)arg2;
- (void)_queue_notificationTypesForBundleIdentifier:(id)arg1 withResult:(id /* block */)arg2;
- (void)_queue_registerNotificationSettings:(id)arg1 forBundleIdentifier:(id)arg2 withResult:(id /* block */)arg3;
- (void)_queue_registerNotificationTypes:(unsigned int)arg1 forBundleIdentifier:(id)arg2;
- (id)bundleIdentifiersWithEnabledNotifications:(id)arg1;
- (void)bundleIdentifiersWithEnabledNotifications:(id)arg1 withResult:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (void)notificationSettingsForBundleIdentifier:(id)arg1 withResult:(id /* block */)arg2;
- (unsigned int)notificationTypesForBundleIdentifier:(id)arg1;
- (void)notificationTypesForBundleIdentifier:(id)arg1 withResult:(id /* block */)arg2;
- (void)registerNotificationSettings:(id)arg1 forBundleIdentifier:(id)arg2 withResult:(id /* block */)arg3;
- (void)registerNotificationTypes:(unsigned int)arg1 forBundleIdentifier:(id)arg2;

@end
