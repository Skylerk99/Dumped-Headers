/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSampleEntity.h>

@interface HDCorrelationSampleEntity : HDSampleEntity
+(Class)_associatedDataObjectClass;
+(id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5 ;
+(id)codableObjectsFromObjectCollection:(id)arg1 ;
+(id)codableRepresentationEncoderForHealthDaemon:(id)arg1 database:(id)arg2 ;
+(BOOL)addCodableObject:(id)arg1 toCollection:(id)arg2 ;
+(id)createTableSQL;
+(BOOL)acceptsObject:(id)arg1 ;
+(BOOL)isBackedByTable;
+(Class)propertyApplierClass;
+(id)deleteStatementsForRelatedEntitiesInDatabase:(id)arg1 ;
+(id)_objectsWithIDs:(id)arg1 healthDaemon:(id)arg2 ;
-(BOOL)deleteFromDatabase:(id)arg1 error:(id*)arg2 ;
@end

