/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CallDBManager.h>

@interface CallDBManagerServer : CallDBManager
+(id)getDestinationModelForVersion:(long long)arg1 ;
+(long long)getNextVersionToMigrateToCurrentVersion:(long long)arg1 ;
+(long long)getNextVersionToMigrateToBaseVersion:(long long)arg1 ;
+(id)getUniqueIdsForAllRecords:(id)arg1 ;
+(id)getObjectIdsForAllRecords:(id)arg1 ;
+(id)getObjectIdsForDuplicateRecordsWithUniqueIds:(id)arg1 andHavingObjectIds:(id)arg2 ;
+(id)getDestinationModel:(long long)arg1 ;
+(id)migrateDatabaseToBaseVersion:(id)arg1 ;
-(id)tempDBLocation:(unsigned char*)arg1 ;
-(void)moveCallsFromTempDatabase;
-(id)permDBLocation:(unsigned char*)arg1 ;
-(void)createPermanent;
-(void)createTemporary;
-(BOOL)bootUpDBAtLocationWithRecovery:(id)arg1 isEncrypted:(BOOL)arg2 ;
-(BOOL)bootUpDBAtLocation:(id)arg1 isEncrypted:(BOOL)arg2 ;
-(BOOL)handleBootUpFailure:(id)arg1 ;
-(BOOL)removeDuplicatesFromDBAtLocation:(id)arg1 dbVersion:(long long)arg2 isEncrypted:(BOOL)arg3 ;
-(BOOL)handleDatabaseMigration:(id)arg1 isEncrypted:(BOOL)arg2 isRetry:(BOOL)arg3 ;
-(id)getUUIDsOfNMostRecentRecords:(unsigned long long)arg1 fromManagedObjectContext:(id)arg2 ;
-(void)prepareForMigrationDBAtURL:(id)arg1 withModelAtURL:(id)arg2 andIsEncrypted:(BOOL)arg3 ;
@end

