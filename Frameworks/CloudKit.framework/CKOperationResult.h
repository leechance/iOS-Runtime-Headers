/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKOperationResult : NSObject <NSSecureCoding> {
    NSError *_error;
    CKOperationMetrics *_metrics;
    NSString *_operationID;
    NSArray *_requestUUIDs;
    NSDictionary *_responseHTTPHeadersByRequestUUID;
    NSDictionary *_w3cNavigationTimingByRequestUUID;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) CKOperationMetrics *metrics;
@property (nonatomic, retain) NSString *operationID;
@property (nonatomic, retain) NSArray *requestUUIDs;
@property (nonatomic, retain) NSDictionary *responseHTTPHeadersByRequestUUID;
@property (nonatomic, retain) NSDictionary *w3cNavigationTimingByRequestUUID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)metrics;
- (id)operationID;
- (id)requestUUIDs;
- (id)responseHTTPHeadersByRequestUUID;
- (void)setError:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setOperationID:(id)arg1;
- (void)setRequestUUIDs:(id)arg1;
- (void)setResponseHTTPHeadersByRequestUUID:(id)arg1;
- (void)setW3cNavigationTimingByRequestUUID:(id)arg1;
- (id)w3cNavigationTimingByRequestUUID;

@end
