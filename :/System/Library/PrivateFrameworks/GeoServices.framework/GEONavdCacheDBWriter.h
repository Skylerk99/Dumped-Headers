/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:15 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEODBWriter.h>

@interface GEONavdCacheDBWriter : GEODBWriter {

	sqlite3_stmtRef _sqlInsertCache;
	sqlite3_stmtRef _sqlDeleteRowForRowID;
	sqlite3_stmtRef _sqlUpdateCache;
	sqlite3_stmtRef _sqlDeleteAllRows;

}
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(void)performTableCreationTasks;
-(void)performStatementPreparationTasks;
-(void)_openIfNecessary;
-(BOOL)_updateRowId:(long long)arg1 withKey:(id)arg2 value:(id)arg3 ;
-(void)_deleteRowsWithRowIDs:(id)arg1 ;
-(long long)_insertWithKey:(id)arg1 value:(id)arg2 ;
-(void)_deleteAllRows;
-(void)_createCacheTable;
@end

