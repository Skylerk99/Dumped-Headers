/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSString, NSMutableDictionary;

@interface CKFetchRecordVersionsOperation : CKDatabaseOperation {

	BOOL _isDeleted;
	BOOL _shouldFetchAssetContent;
	NSArray* _recordIDs;
	NSArray* _desiredKeys;
	NSString* _minimumVersionETag;
	/*^block*/id _fetchRecordVersionsProgressBlock;
	/*^block*/id _fetchRecordVersionsCompletionBlock;
	NSMutableDictionary* _recordErrors;

}

@property (nonatomic,copy) NSArray * recordIDs;                                //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                              //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy) NSString * minimumVersionETag;                      //@synthesize minimumVersionETag=_minimumVersionETag - In the implementation block
@property (nonatomic,copy) id fetchRecordVersionsProgressBlock;                //@synthesize fetchRecordVersionsProgressBlock=_fetchRecordVersionsProgressBlock - In the implementation block
@property (nonatomic,copy) id fetchRecordVersionsCompletionBlock;              //@synthesize fetchRecordVersionsCompletionBlock=_fetchRecordVersionsCompletionBlock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordErrors;               //@synthesize recordErrors=_recordErrors - In the implementation block
@property (assign,nonatomic) BOOL isDeleted;                                   //@synthesize isDeleted=_isDeleted - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                     //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSMutableDictionary *)recordErrors;
-(void)setRecordErrors:(NSMutableDictionary *)arg1 ;
-(id)fetchRecordVersionsProgressBlock;
-(id)fetchRecordVersionsCompletionBlock;
-(BOOL)isDeleted;
-(void)setFetchRecordVersionsProgressBlock:(id)arg1 ;
-(void)setFetchRecordVersionsCompletionBlock:(id)arg1 ;
-(unsigned long long)activityStart;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(NSArray *)desiredKeys;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(BOOL)shouldFetchAssetContent;
-(NSArray *)recordIDs;
-(void)setIsDeleted:(BOOL)arg1 ;
-(NSString *)minimumVersionETag;
-(void)setMinimumVersionETag:(NSString *)arg1 ;
-(id)initWithRecordIDs:(id)arg1 ;
@end

