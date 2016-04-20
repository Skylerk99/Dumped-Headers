/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:07 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSSQLiteEntity.h>

@class NSArray, NSString;

@interface DownloadEntity : SSSQLiteEntity

@property (nonatomic,readonly) NSArray * allAssetCookies; 
@property (nonatomic,readonly) NSString * downloadKind; 
@property (nonatomic,readonly) unsigned long long itemIdentifier; 
@property (nonatomic,readonly) NSString * ITunesSafeGUID; 
+(id)copyValueDictionaryWithMetadata:(id)arg1 ;
+(void)initialize;
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)arg1 ;
+(id)foreignDatabaseColumnForProperty:(id)arg1 ;
+(id)foreignDatabaseTableForProperty:(id)arg1 ;
+(id)foreignKeyColumnForTable:(id)arg1 ;
+(id)foreignDatabaseTablesToDelete;
+(id)databasePropertyToGetClientProperty:(id)arg1 ;
+(id)databasePropertyToSetClientProperty:(id)arg1 ;
+(id)joinClauseForProperty:(id)arg1 ;
+(Class)memoryEntityClass;
-(id)finishWithFinalPhase:(id)arg1 ;
-(void)deleteScratchDirectory;
-(id)setAssetsUsingDownload:(id)arg1 ;
-(id)copyDownloadingIPodLibraryItem;
-(NSString *)ITunesSafeGUID;
-(id)anyAssetForAssetType:(id)arg1 ;
-(id)copyStoreDownloadMetadata;
-(NSArray *)allAssetCookies;
-(void)_applyPhase:(id)arg1 toUpdateWithStoreItemIdentifier:(long long)arg2 changeset:(id)arg3 ;
-(long long)addPersistentDownloadsWithClientID:(id)arg1 kind:(id)arg2 ;
-(void)_resetAssetProperty:(id)arg1 ;
-(id)_databaseAssetForAsset:(id)arg1 ;
-(id)copyAdditionalMetadataForStoreDownload:(id)arg1 ;
-(id)copyAssetsWithAssetType:(id)arg1 ;
-(id)rentalInformation;
-(void)resetAssetLocalPaths;
-(void)resetAssetURLs;
-(unsigned long long)itemIdentifier;
-(BOOL)deleteFromDatabase;
-(NSString *)downloadKind;
@end

