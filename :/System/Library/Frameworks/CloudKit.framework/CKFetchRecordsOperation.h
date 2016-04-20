/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:00 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableDictionary, NSDictionary;

@interface CKFetchRecordsOperation : CKDatabaseOperation {

	BOOL _shouldFetchAssetContent;
	BOOL _isFetchCurrentUserOperation;
	NSArray* _recordIDs;
	NSArray* _desiredKeys;
	/*^block*/id _perRecordProgressBlock;
	/*^block*/id _perRecordCompletionBlock;
	/*^block*/id _fetchRecordsCompletionBlock;
	NSMutableDictionary* _signaturesOfAssetsByRecordIDAndKey;
	NSMutableDictionary* _recordIDsToRecords;
	NSMutableDictionary* _recordErrors;
	NSDictionary* _desiredPackageFileIndices;
	NSDictionary* _recordIDsToETags;
	NSDictionary* _recordIDsToVersionETags;
	NSDictionary* _webSharingIdentityDataByRecordID;

}

@property (nonatomic,copy) NSArray * recordIDs;                                                     //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                                   //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy) id perRecordProgressBlock;                                               //@synthesize perRecordProgressBlock=_perRecordProgressBlock - In the implementation block
@property (nonatomic,copy) id perRecordCompletionBlock;                                             //@synthesize perRecordCompletionBlock=_perRecordCompletionBlock - In the implementation block
@property (nonatomic,copy) id fetchRecordsCompletionBlock;                                          //@synthesize fetchRecordsCompletionBlock=_fetchRecordsCompletionBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                                          //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * signaturesOfAssetsByRecordIDAndKey;              //@synthesize signaturesOfAssetsByRecordIDAndKey=_signaturesOfAssetsByRecordIDAndKey - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordIDsToRecords;                              //@synthesize recordIDsToRecords=_recordIDsToRecords - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordErrors;                                    //@synthesize recordErrors=_recordErrors - In the implementation block
@property (nonatomic,copy) NSDictionary * desiredPackageFileIndices;                                //@synthesize desiredPackageFileIndices=_desiredPackageFileIndices - In the implementation block
@property (assign,nonatomic) BOOL isFetchCurrentUserOperation;                                      //@synthesize isFetchCurrentUserOperation=_isFetchCurrentUserOperation - In the implementation block
@property (nonatomic,retain) NSDictionary * recordIDsToETags;                                       //@synthesize recordIDsToETags=_recordIDsToETags - In the implementation block
@property (nonatomic,retain) NSDictionary * recordIDsToVersionETags;                                //@synthesize recordIDsToVersionETags=_recordIDsToVersionETags - In the implementation block
@property (nonatomic,retain) NSDictionary * webSharingIdentityDataByRecordID;                       //@synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID - In the implementation block
+(id)fetchCurrentUserRecordOperation;
-(void)fillOutOperationInfo:(id)arg1 ;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSMutableDictionary *)recordErrors;
-(void)setRecordErrors:(NSMutableDictionary *)arg1 ;
-(id)perRecordProgressBlock;
-(id)perRecordCompletionBlock;
-(void)setIsFetchCurrentUserOperation:(BOOL)arg1 ;
-(id)fetchRecordsCompletionBlock;
-(NSMutableDictionary *)recordIDsToRecords;
-(void)setRecordIDsToRecords:(NSMutableDictionary *)arg1 ;
-(id)init;
-(BOOL)isFetchCurrentUserOperation;
-(unsigned long long)activityStart;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(NSArray *)desiredKeys;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(BOOL)shouldFetchAssetContent;
-(NSArray *)recordIDs;
-(NSDictionary *)recordIDsToVersionETags;
-(NSDictionary *)recordIDsToETags;
-(void)setRecordIDsToETags:(NSDictionary *)arg1 ;
-(void)setRecordIDsToVersionETags:(NSDictionary *)arg1 ;
-(NSDictionary *)desiredPackageFileIndices;
-(NSMutableDictionary *)signaturesOfAssetsByRecordIDAndKey;
-(NSDictionary *)webSharingIdentityDataByRecordID;
-(void)setWebSharingIdentityDataByRecordID:(NSDictionary *)arg1 ;
-(void)setDesiredPackageFileIndices:(NSDictionary *)arg1 ;
-(void)setSignaturesOfAssetsByRecordIDAndKey:(NSMutableDictionary *)arg1 ;
-(void)setFetchRecordsCompletionBlock:(id)arg1 ;
-(void)setPerRecordProgressBlock:(id)arg1 ;
-(void)setPerRecordCompletionBlock:(id)arg1 ;
-(id)initWithRecordIDs:(id)arg1 ;
@end

