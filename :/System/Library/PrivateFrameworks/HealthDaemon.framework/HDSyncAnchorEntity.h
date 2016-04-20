/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthEntity.h>

@interface HDSyncAnchorEntity : HDHealthEntity
+(id)databaseTable;
+(id)columnsDefinition;
+(long long)protectionClass;
+(id)uniquedColumns;
+(BOOL)resetNextSyncAnchor:(long long)arg1 forEntityClass:(Class)arg2 store:(id)arg3 healthDatabase:(id)arg4 error:(id*)arg5 ;
+(BOOL)getReceivedAnchorsWithSet:(id)arg1 store:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 ;
+(BOOL)setAcknowledgedAnchorsWithMap:(id)arg1 store:(id)arg2 resetNext:(BOOL)arg3 healthDatabase:(id)arg4 error:(id*)arg5 ;
+(long long)nextSyncAnchorForEntityClass:(Class)arg1 store:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 ;
+(BOOL)setNextSyncAnchor:(long long)arg1 forEntityClass:(Class)arg2 store:(id)arg3 healthDatabase:(id)arg4 error:(id*)arg5 ;
+(BOOL)setReceivedAnchor:(long long)arg1 forEntityClass:(Class)arg2 store:(id)arg3 healthDatabase:(id)arg4 error:(id*)arg5 ;
+(long long)receivedAnchorForEntityClass:(Class)arg1 store:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 ;
+(BOOL)resetSyncStore:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(long long)_syncAnchorForProperty:(id)arg1 entityClass:(Class)arg2 store:(id)arg3 healthDatabase:(id)arg4 error:(id*)arg5 ;
+(BOOL)_setSyncAnchor:(long long)arg1 forProperties:(id)arg2 entityClass:(Class)arg3 store:(id)arg4 enforceOrder:(BOOL)arg5 healthDatabase:(id)arg6 error:(id*)arg7 ;
+(BOOL)_setSyncAnchor:(long long)arg1 forProperties:(id)arg2 entityClass:(Class)arg3 store:(id)arg4 enforceOrder:(BOOL)arg5 database:(id)arg6 error:(id*)arg7 ;
+(id)_predicateForSyncStore:(id)arg1 ;
+(id)_predicateForSyncEntityClass:(Class)arg1 syncStore:(id)arg2 ;
+(id)_predicateForSyncEntityClass:(Class)arg1 ;
@end

