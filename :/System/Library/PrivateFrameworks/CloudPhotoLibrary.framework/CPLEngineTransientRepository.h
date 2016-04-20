/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:51 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class NSMutableArray, NSString, CPLPlatformObject;

@interface CPLEngineTransientRepository : CPLEngineStorage <CPLAbstractObject> {

	unsigned long long _popState;
	NSMutableArray* _remainingClassesToBePopped;
	unsigned long long _maximumCountOfRecordsInBatches;

}

@property (assign,nonatomic) unsigned long long maximumCountOfRecordsInBatches;              //@synthesize maximumCountOfRecordsInBatches=_maximumCountOfRecordsInBatches - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
+(id)orderedClassesForDelete;
+(id)orderedClassesForChangesForLargeSync;
+(id)orderedClassesForChanges;
-(BOOL)openWithError:(id*)arg1 ;
-(id)initWithEngineStore:(id)arg1 name:(id)arg2 ;
-(BOOL)resetTransientRepositoryWithError:(id*)arg1 ;
-(BOOL)prepareForMinglingWithError:(id*)arg1 ;
-(BOOL)popChangeBatch:(id*)arg1 error:(id*)arg2 ;
-(id)transientSyncAnchor;
-(BOOL)storeTransientSyncAnchor:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasRecordWithIdentifier:(id)arg1 ;
-(unsigned long long)countOfAssetChanges;
-(id)_changeWithIdentifier:(id)arg1 ;
-(BOOL)appendBatch:(id)arg1 alreadyMingled:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_appendBatchToStorage:(id)arg1 alreadyMingled:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_popChangeBatchOfDeletedRecords:(id*)arg1 maximumCount:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_popChangeBatchOfChangedRecords:(id*)arg1 maximumCount:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)resetMingledRecordsWithError:(id*)arg1 ;
-(BOOL)deleteMingledRecordsWithError:(id*)arg1 ;
-(unsigned long long)countOfUnmingledRecords;
-(unsigned long long)maximumCountOfRecordsInBatches;
-(void)setMaximumCountOfRecordsInBatches:(unsigned long long)arg1 ;
@end

