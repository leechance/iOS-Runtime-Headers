/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICKeychainUtilities : NSObject

+ (BOOL)addDevicePasscodeGuardedItem:(id)arg1 forIdentifier:(id)arg2 error:(id*)arg3;
+ (BOOL)addItem:(id)arg1 forIdentifier:(id)arg2 secAccessControlObject:(id)arg3 error:(id*)arg4;
+ (BOOL)addItemWithoutGuardian:(id)arg1 forIdentifier:(id)arg2 error:(id*)arg3;
+ (BOOL)addTouchIDGuardedItem:(id)arg1 forIdentifier:(id)arg2 error:(id*)arg3;
+ (void)beginEvaluatePolicyReplyBlock;
+ (void)endEvaluatePolicyReplyBlock;
+ (id)getItemForIdentifier:(id)arg1 alertTextForAuthentication:(id)arg2 error:(id*)arg3;
+ (BOOL)looselyAuthenticateWithDevicePasscodeWithAlertText:(id)arg1;
+ (BOOL)removeItemForIdentifier:(id)arg1 error:(id*)arg2;
+ (id)secAccessControlObjectWithCreationFlag:(long)arg1 error:(id*)arg2;
+ (BOOL)touchIDIsEnrolled;

@end
