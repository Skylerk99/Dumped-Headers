/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEODBWriter.h>

@interface GEOPlaceDataDBWriter : GEODBWriter {

	sqlite3_stmtRef _sqlInsertPhoneNumber;
	sqlite3_stmtRef _sqlInsertKeyString;
	sqlite3_stmtRef _sqlDeleteAllPhoneNumbers;
	sqlite3_stmtRef _sqlDeleteKeyStringForMUID;
	sqlite3_stmtRef _sqlDeletePlaceDataForMUID;
	BOOL _canCreateDebugTable;

}
-(void)clear;
-(void)deleteComponentForKey:(_GEOPlaceDataComponentKey)arg1 ;
-(void)setComponent:(id)arg1 forKey:(_GEOPlaceDataComponentKey)arg2 ;
-(void)setComponentsFromPlaceData:(id)arg1 ;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(void)deletePlaceDataForMUID:(unsigned long long)arg1 ;
-(void)performTableCreationTasks;
-(void)_createKeyStringTable;
-(void)_setMUID:(id)arg1 forKey:(GEOTileKey)arg2 ;
-(void)_populateDBKey:(GEOTileKey*)arg1 forMUID:(unsigned long long)arg2 ;
-(void)deletePhoneNumberMapping;
-(void)_setMUID:(unsigned long long)arg1 forPhoneNumber:(long long)arg2 ;
-(void)_createPhoneNumberTable;
-(void)performStatementPreparationTasks;
-(void)_openIfNecessary;
@end

