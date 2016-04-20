/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDDeletedObjectEntity.h>

@interface HDDeletedSampleEntity : HDDeletedObjectEntity
+(id)databaseTable;
+(id)columnsDefinition;
+(long long)protectionClass;
+(id)_propertySettersForDataObject;
+(id)insertDeletedObjectForObject:(id)arg1 provenanceIdentifier:(id)arg2 deletionDate:(id)arg3 inDatabase:(id)arg4 error:(id*)arg5 ;
+(id)insertDeletedObject:(id)arg1 dataType:(id)arg2 provenanceIdentifier:(id)arg3 deletionDate:(id)arg4 inDatabase:(id)arg5 error:(id*)arg6 ;
+(void)enumerateDeletedSamplesWithType:(id)arg1 database:(id)arg2 predicate:(id)arg3 sourceIdentifier:(id)arg4 authorizationFilter:(/*^block*/id)arg5 limit:(unsigned long long)arg6 deletedObjectsAnchor:(long long)arg7 sampleAnchor:(long long*)arg8 handler:(/*^block*/id)arg9 ;
+(BOOL)enumerateDeletedSamplesWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 sourceIdentifier:(id)arg4 limit:(unsigned long long)arg5 anchor:(id)arg6 error:(id*)arg7 handler:(/*^block*/id)arg8 ;
@end

