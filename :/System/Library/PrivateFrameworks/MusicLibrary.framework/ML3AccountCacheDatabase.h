/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ML3DatabaseConnection;

@interface ML3AccountCacheDatabase : NSObject {

	ML3DatabaseConnection* _databaseConnection;

}
-(id)init;
-(id)_databasePath;
-(BOOL)_internalSetAppleID:(id)arg1 forDSID:(unsigned long long)arg2 ;
-(BOOL)_clearCacheDatabase;
-(BOOL)_closeDatabase;
-(BOOL)_openDatabaseIsRetry:(BOOL)arg1 ;
-(BOOL)setAppleID:(id)arg1 forDSID:(unsigned long long)arg2 ;
-(id)appleIDForDSID:(unsigned long long)arg1 ;
-(BOOL)_openDatabase;
@end

