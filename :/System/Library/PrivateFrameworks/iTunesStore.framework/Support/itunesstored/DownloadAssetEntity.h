/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSSQLiteEntity.h>

@class NSArray;

@interface DownloadAssetEntity : SSSQLiteEntity

@property (nonatomic,readonly) NSArray * sinfs; 
+(id)newDownloadKeyCookieWithValue:(id)arg1 URL:(id)arg2 ;
+(id)copyDatabaseDictionaryWithRequestProperties:(id)arg1 ;
+(void)initialize;
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)arg1 ;
+(id)databasePropertyToGetClientProperty:(id)arg1 ;
+(id)databasePropertyToSetClientProperty:(id)arg1 ;
+(Class)memoryEntityClass;
-(id)copyStoreDownloadKeyCookie;
-(id)copyURLRequestProperties;
-(NSArray *)sinfs;
-(BOOL)deleteFromDatabase;
@end

