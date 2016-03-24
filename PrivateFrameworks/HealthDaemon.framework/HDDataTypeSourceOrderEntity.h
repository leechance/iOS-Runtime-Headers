/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataTypeSourceOrderEntity : HDHealthEntity

+ (BOOL)_insertCodableObjectTypeSourceOrders:(id)arg1 syncStore:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4;
+ (BOOL)_saveOrderedSourceIDs:(id)arg1 dataTypeCode:(int)arg2 userOrdered:(BOOL)arg3 syncProvenance:(long long)arg4 database:(id)arg5 error:(id*)arg6;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)orderedSourceIDsForType:(id)arg1 userOrdered:(BOOL*)arg2 healthDaemon:(id)arg3 error:(id*)arg4;
+ (id)propertyForSyncProvenance;
+ (int)protectionClass;
+ (BOOL)saveOrderedSourceIDs:(id)arg1 type:(id)arg2 userOrdered:(BOOL)arg3 healthDaemon:(id)arg4 error:(id*)arg5;
+ (id)tableAliases;

@end
