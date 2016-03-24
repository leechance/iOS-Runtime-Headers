/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSWatchMetricsEventsController : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    SSWatchMetricsEventTable *_table;
}

@property (readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, readonly) SSWatchMetricsEventTable *table;

+ (id)_numberFormatter;

- (void).cxx_destruct;
- (void)discardUnreportableEvents;
- (BOOL)insertWatchMetricEvent:(id)arg1 error:(id*)arg2;
- (void)markAsCompleted:(id)arg1;
- (void)markAsFailed:(id)arg1;
- (id)serialQueue;
- (id)table;
- (id)unreportedEventsSinceTimestamp:(long long)arg1;

@end
