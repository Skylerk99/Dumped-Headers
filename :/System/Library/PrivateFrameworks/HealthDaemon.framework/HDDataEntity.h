/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>
#import <libobjc.A.dylib/HDSQLiteEntity.h>

@class NSString;

@interface HDDataEntity : HDHealthEntity <HDSQLiteEntity>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)databaseTable;
+(id)columnsDefinition;
+(long long)protectionClass;
+(id)propertyForSyncProvenance;
+(id)_databaseTable;
+(Class)_associatedDataObjectClass;
+(id)_propertySettersForDataObject;
+(id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5 ;
+(id)codableObjectsFromObjectCollection:(id)arg1 ;
+(id)codableRepresentationEncoderForHealthDaemon:(id)arg1 database:(id)arg2 ;
+(BOOL)addCodableObject:(id)arg1 toCollection:(id)arg2 ;
+(id)joinClausesForProperty:(id)arg1 ;
+(id)associationPropertyForEntityClass:(Class)arg1 ;
+(id)columnNameForSortIdentifier:(id)arg1 ;
+(Class)_deletedEntityClass;
+(long long)preferredEntityType;
+(void)enumerateObjectsOfType:(long long)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 sourceIdentifier:(id)arg4 authorizationFilter:(/*^block*/id)arg5 limit:(unsigned long long)arg6 anchor:(id*)arg7 handler:(/*^block*/id)arg8 ;
+(BOOL)requiresSampleTypePredicate;
+(void)enumerateObjectsWithHealthDaemon:(id)arg1 predicate:(id)arg2 sourceIdentifier:(id)arg3 authorizationFilter:(/*^block*/id)arg4 orderBy:(id)arg5 directions:(id)arg6 limit:(unsigned long long)arg7 handler:(/*^block*/id)arg8 ;
+(void)enumerateObjectsOfType:(long long)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 sourceIdentifier:(id)arg4 authorizationFilter:(/*^block*/id)arg5 orderBy:(id)arg6 directions:(id)arg7 limit:(unsigned long long)arg8 handler:(/*^block*/id)arg9 ;
+(id)propertySettersAndOrderedProperties:(id*)arg1 ;
+(id)propertyApplierWithProperties:(id)arg1 propertySetters:(id)arg2 authorizationFilter:(/*^block*/id)arg3 database:(id)arg4 ;
+(BOOL)acceptsObject:(id)arg1 ;
+(id)sourceIDsForObjectsOfType:(long long)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 error:(id*)arg4 ;
+(long long)countOfObjectsOfType:(long long)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 withError:(id*)arg4 ;
+(id)disambiguatedSQLForProperty:(id)arg1 ;
+(void)insertDataObjects:(id)arg1 withProvenance:(id)arg2 creationDate:(double)arg3 healthDaemon:(id)arg4 skipInsertionFilter:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
+(/*^block*/id)objectInsertionFilter;
+(id)entitiesToDeleteBeforeInsertingObject:(id)arg1 provenance:(id)arg2 error:(id*)arg3 database:(id)arg4 ;
+(id)_insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4 ;
+(BOOL)journalObjects:(id)arg1 withProvenance:(id)arg2 creationDate:(double)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(void)deleteDataObjects:(id)arg1 restrictedSourceEntity:(id)arg2 failIfNotFound:(BOOL)arg3 healthDaemon:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(BOOL)_deleteDataObjectWithUUID:(id)arg1 type:(long long)arg2 restrictedSourceEntity:(id)arg3 failIfNotFound:(BOOL)arg4 deletionContext:(id)arg5 provenanceIdentifier:(id*)arg6 error:(id*)arg7 ;
+(id)_dataObjectWithEntity:(id)arg1 type:(long long)arg2 propertyApplier:(id)arg3 row:(HDSQLiteRowRef)arg4 healthDaemon:(id)arg5 ;
+(id)_aggregatedPropertySettersForDataObjectWithOrderedProperties:(id*)arg1 ;
+(id)_propertiesForFetchingDataObjectsWithAssociations:(id)arg1 ;
+(BOOL)_addCodableObjectsToCollections:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3 queryHandler:(/*^block*/id)arg4 ;
+(Class)_ancestorWithProperty:(id)arg1 ;
+(BOOL)isBackedByTable;
+(void)_removeObjectWithPersistentID:(long long)arg1 database:(id)arg2 ;
+(BOOL)_deleteDataEntityWithPredicate:(id)arg1 restrictedSourceEntity:(id)arg2 failIfNotFound:(BOOL)arg3 deletionContext:(id)arg4 provenanceIdentifier:(id*)arg5 error:(id*)arg6 ;
+(Class)propertyApplierClass;
+(id)insertDataObject:(id)arg1 withProvenance:(id)arg2 creationDate:(double)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(BOOL)deleteDataObjects:(id)arg1 restrictedSourceEntity:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(id)dataEntityForObject:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3 ;
+(id)objectWithUUID:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3 ;
+(BOOL)addCodableObjectsToCollections:(id)arg1 excludedSyncStore:(id)arg2 syncAnchorRange:(HDSyncAnchorRange)arg3 lastSyncAnchor:(long long*)arg4 predicate:(id)arg5 limit:(unsigned long long)arg6 healthDaemon:(id)arg7 error:(id*)arg8 ;
+(id)codableObjectCollectionsWithExcludedSyncStore:(id)arg1 syncAnchorRange:(HDSyncAnchorRange)arg2 lastSyncAnchor:(long long*)arg3 predicate:(id)arg4 limit:(unsigned long long)arg5 healthDaemon:(id)arg6 error:(id*)arg7 ;
+(id)foreignDatabaseColumnForProperty:(id)arg1 ;
+(id)foreignDatabaseTableForProperty:(id)arg1 ;
+(id)foreignKeyColumnForTable:(id)arg1 ;
+(id)deleteStatementsForRelatedEntitiesInDatabase:(id)arg1 ;
+(id)anyInDatabase:(id)arg1 predicate:(id)arg2 ;
-(long long)_dataID;
-(long long)dataAnchor;
@end

