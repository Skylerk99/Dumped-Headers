/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthEntity.h>

@interface HDDataTypeSourceOrderEntity : HDHealthEntity
+(id)databaseTable;
+(id)columnsDefinition;
+(long long)protectionClass;
+(id)propertyForSyncProvenance;
+(id)joinClausesForProperty:(id)arg1 ;
+(id)tableAliases;
+(BOOL)saveOrderedSourceIDs:(id)arg1 type:(id)arg2 userOrdered:(BOOL)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(id)orderedSourceIDsForType:(id)arg1 userOrdered:(BOOL*)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(BOOL)_saveOrderedSourceIDs:(id)arg1 dataTypeCode:(long long)arg2 userOrdered:(BOOL)arg3 syncProvenance:(long long)arg4 database:(id)arg5 error:(id*)arg6 ;
+(BOOL)_insertCodableObjectTypeSourceOrders:(id)arg1 syncStore:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 ;
@end

