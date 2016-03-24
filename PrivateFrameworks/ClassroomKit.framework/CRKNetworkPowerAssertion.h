/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKNetworkPowerAssertion : NSObject {
    unsigned int _count;
    NSString *_name;
    unsigned int mPowerAssertion;
}

@property (nonatomic) unsigned int count;
@property (nonatomic, readonly, copy) NSString *name;

+ (void)decrement;
+ (void)increment;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned int)count;
- (void)decrement;
- (void)increment;
- (id)init;
- (id)name;
- (void)setCount:(unsigned int)arg1;

@end
