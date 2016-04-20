/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@class WBSSQLiteDatabase, NSDictionary, NSArray;

@interface WBSSQLiteStatement : NSObject {

	WBSSQLiteDatabase* _database;
	sqlite3_stmtRef _handle;
	NSDictionary* _columnNamesToIndexes;
	NSArray* _columnNames;

}

@property (nonatomic,readonly) NSArray * columnNames; 
@property (nonatomic,readonly) NSDictionary * columnNamesToIndexes; 
@property (nonatomic,readonly) sqlite3_stmtRef handle;                           //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) WBSSQLiteDatabase * database;                     //@synthesize database=_database - In the implementation block
-(int)execute;
-(sqlite3_stmtRef)handle;
-(void)dealloc;
-(void)invalidate;
-(void)reset;
-(BOOL)_isValid;
-(NSArray *)columnNames;
-(id)initWithDatabase:(id)arg1 query:(id)arg2 ;
-(id)fetch;
-(void)bindDouble:(double)arg1 atParameterIndex:(unsigned long long)arg2 ;
-(void)bindInt64:(long long)arg1 atParameterIndex:(unsigned long long)arg2 ;
-(void)bindNullAtParameterIndex:(unsigned long long)arg1 ;
-(void)bindString:(id)arg1 atParameterIndex:(unsigned long long)arg2 ;
-(void)bindData:(id)arg1 atParameterIndex:(unsigned long long)arg2 ;
-(void)bindInt:(int)arg1 atParameterIndex:(unsigned long long)arg2 ;
-(NSDictionary *)columnNamesToIndexes;
-(WBSSQLiteDatabase *)database;
@end

