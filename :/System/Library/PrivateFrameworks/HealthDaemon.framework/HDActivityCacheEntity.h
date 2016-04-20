/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSampleEntity.h>

@interface HDActivityCacheEntity : HDSampleEntity
+(id)columnsDefinition;
+(id)_databaseTable;
+(Class)_associatedDataObjectClass;
+(id)_propertySettersForDataObject;
+(id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5 ;
+(id)codableObjectsFromObjectCollection:(id)arg1 ;
+(id)codableRepresentationEncoderForHealthDaemon:(id)arg1 database:(id)arg2 ;
+(BOOL)addCodableObject:(id)arg1 toCollection:(id)arg2 ;
+(id)entitiesToDeleteBeforeInsertingObject:(id)arg1 provenance:(id)arg2 error:(id*)arg3 database:(id)arg4 ;
+(id)activityCacheForIndex:(long long)arg1 healthDaemon:(id)arg2 error:(id*)arg3 ;
+(id)activityCachesInRangeStart:(id)arg1 end:(id)arg2 inHealthDaemon:(id)arg3 error:(id*)arg4 ;
@end

