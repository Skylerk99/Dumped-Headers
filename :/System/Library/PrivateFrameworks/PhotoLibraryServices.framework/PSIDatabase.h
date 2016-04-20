/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSDictionary, NSObject, PSITokenizer, NSMutableString, NSMutableArray, NSString;

@interface PSIDatabase : NSObject {

	sqlite3Ref _db;
	NSDictionary* _preparedStatements;
	CFDictionaryRef _groupObjectsById;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _searchQueue;
	long long _options;
	int _queryCounter;
	PSITokenizer* _tokenizer;
	NSMutableString* _tokenizerOutputString;
	NSMutableArray* _tokenizerOutputTokens;
	NSMutableArray* _tokenizerOutputNormalizedTokens;
	SCD_Struct_PS28 _tokenizerOutputRanges[8];
	NSString* _path;

}

@property (nonatomic,copy,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) long long options;                 //@synthesize options=_options - In the implementation block
+(void)dropDatabaseAtPath:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(sqlite3Ref)_openDatabaseAtPath:(id)arg1 options:(long long)arg2 ;
+(void)_dropDatabase:(sqlite3Ref)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)newQueryWithSearchText:(id)arg1 isWildcardSearch:(BOOL)arg2 ;
-(id)newQueryWithSearchText:(id)arg1 ;
-(id)initWithPath:(id)arg1 options:(long long)arg2 ;
-(void)dealloc;
-(NSString *)path;
-(long long)options;
-(void)dropDatabaseWithCompletion:(/*^block*/id)arg1 ;
-(void)addAssets:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeAssetsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)query:(id)arg1 searchString:(id)arg2 earlyResultsHandler:(/*^block*/id)arg3 resultsHandler:(/*^block*/id)arg4 ;
-(void)_inqPrepareAndExecuteStatement:(const char*)arg1 ;
-(sqlite3_stmtRef)_inqPrepareStatement:(const char*)arg1 ;
-(void)_inqPerformBatch:(/*^block*/id)arg1 ;
-(void)_inqAsync:(/*^block*/id)arg1 ;
-(void)_inqRemoveUUID:(id)arg1 isInBatch:(BOOL)arg2 ;
-(unsigned long long)_inqAddUUID:(id)arg1 string:(id)arg2 category:(short)arg3 owningGroupId:(unsigned long long)arg4 isInBatch:(BOOL)arg5 ;
-(id)_inqNewContentStringForGroupId:(unsigned long long)arg1 ;
-(CFArrayRef)_inqNewAssetUUIDsForAssetIds:(const void*)arg1 count:(long long)arg2 ;
-(sqlite3_stmtRef)_inqPreparedContainsStatementWithPrefix:(const char*)arg1 matchingIds:(const void*)arg2 count:(long long)arg3 ;
-(void)_inqExecutePreparedStatement:(sqlite3_stmtRef)arg1 withStatementBlock:(/*^block*/id)arg2 ;
-(void)_inqGetTokensFromString:(id)arg1 forIndexing:(BOOL)arg2 useWildcard:(BOOL)arg3 tokenOutput:(tokenOutput_t*)arg4 ;
-(void)_inqSync:(/*^block*/id)arg1 ;
-(CFSetRef)_inqNewGroupIdsMatchingToken:(id)arg1 ;
-(id)_inqNewGroupArraysFromGroupIdSets:(id)arg1 forQuery:(id)arg2 ;
-(void)_query:(id)arg1 recursiveAddToGroupResults:(id)arg2 aggregate:(id)arg3 atIndex:(unsigned long long)arg4 outOf:(unsigned long long)arg5 inGroupArrays:(id)arg6 ;
-(void)_inqRecycleGroups;
-(void)_inSearchQueueAsync:(/*^block*/id)arg1 ;
-(void*)_inqNewGroupsFromDeleteOperation:(BOOL)arg1 matchingGroupIds:(const void*)arg2 count:(long long)arg3 ;
-(unsigned long long)_inqAssetIdForUUID:(id)arg1 insertIfNeeded:(BOOL)arg2 ;
-(unsigned long long)_inqGroupIdForCategory:(short)arg1 owningGroupId:(unsigned long long)arg2 contentString:(id)arg3 insertIfNeeded:(BOOL)arg4 tokenOutput:(const tokenOutput_t*)arg5 ;
-(void)_inqUpdatePrefixTreeWithGroupId:(unsigned long long)arg1 text:(id)arg2 ;
-(void)_inqUpdateGATableWithGroupId:(unsigned long long)arg1 assetId:(unsigned long long)arg2 ;
-(CFSetRef)_inqNewGroupIdsForAssetId:(unsigned long long)arg1 ;
-(void)_inqExecutePreparedStatement:(sqlite3_stmtRef)arg1 allowError:(int)arg2 withStatementBlock:(/*^block*/id)arg3 ;
-(id)_inqDequeueGroupObjectWithId:(unsigned long long)arg1 isCachedGroup:(BOOL*)arg2 ;
-(CFArrayRef)_inqNewAssetIdsForGroupId:(unsigned long long)arg1 ;
-(void)addAsset:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeAssetWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)group:(id)arg1 fetchOwningContentString:(BOOL)arg2 assetUUIDs:(NSRange)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)query:(id)arg1 searchString:(id)arg2 resultsHandler:(/*^block*/id)arg3 ;
@end

