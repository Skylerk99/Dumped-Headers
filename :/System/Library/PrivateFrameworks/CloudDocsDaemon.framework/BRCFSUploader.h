/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCFSSchedulerBase.h>
#import <libobjc.A.dylib/BRCModule.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, BRCDeadlineToken, NSObject, BRCDeadlineScheduler, NSDictionary, NSString;

@interface BRCFSUploader : BRCFSSchedulerBase <BRCModule> {

	NSMutableDictionary* _thumbnailsOperations;
	BRCDeadlineToken* _retryQueueToken;
	NSObject*<OS_dispatch_queue> _thumbnailQueue;
	br_pacer_tRef _quotaPacer;
	BOOL _prepareReachedMax;
	BOOL _initialKickDone;
	BOOL _isDefaultOwnerOutOfQuota;
	BRCDeadlineScheduler* _uploadsDeadlineScheduler;

}

@property (nonatomic,readonly) BRCDeadlineScheduler * uploadsDeadlineScheduler;              //@synthesize uploadsDeadlineScheduler=_uploadsDeadlineScheduler - In the implementation block
@property (nonatomic,readonly) NSDictionary * thumbnailsOperationsByID;                      //@synthesize thumbnailsOperations=_thumbnailsOperations - In the implementation block
@property (assign,nonatomic) BOOL isDefaultOwnerOutOfQuota;                                  //@synthesize isDefaultOwnerOutOfQuota=_isDefaultOwnerOutOfQuota - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL isCancelled; 
-(void)_close;
-(void)suspend;
-(void)resume;
-(BOOL)isUploadingItem:(id)arg1 ;
-(id)initWithAccountSession:(id)arg1 ;
-(void)_schedule;
-(id)descriptionForThrottleID:(long long)arg1 zone:(id)arg2 now:(long long)arg3 context:(id)arg4 ;
-(void)updateThrottleID:(long long)arg1 zone:(id)arg2 state:(int)arg3 ;
-(void)_deleteThrottleID:(long long)arg1 zone:(id)arg2 ;
-(void)deleteThrottlesForZone:(id)arg1 ;
-(void)_cancelThrottles:(id)arg1 state:(int)arg2 ;
-(void)_transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned long long)arg2 sizeHint:(unsigned long long)arg3 ;
-(void)rescheduleThrottlesPendingInitialSyncInZone:(id)arg1 ;
-(void)transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned long long)arg2 sizeHint:(unsigned long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)quotaAvailableForOwner:(id)arg1 ;
-(void)cancelAndCleanupItemUpload:(id)arg1 ;
-(void)uploadItem:(id)arg1 ;
-(BRCDeadlineScheduler *)uploadsDeadlineScheduler;
-(void)ownerDidReceiveOutOfQuotaError:(id)arg1 ;
-(void)scheduleQuotaFetchIfNeededForOwner:(id)arg1 ;
-(void)finishedSyncingUpItem:(id)arg1 withOutOfQuotaError:(id)arg2 ;
-(NSDictionary *)thumbnailsOperationsByID;
-(void)_scheduleQuotaFetchForDefaultOwner;
-(void)_scheduleRetries;
-(void)_cancelThrottleID:(long long)arg1 ;
-(id)_buildItemTooLargeErrorIfNeeded:(id)arg1 syncContext:(id)arg2 ;
-(BOOL)hasItemsOverQuotaForOwner:(id)arg1 ;
-(void)setIsDefaultOwnerOutOfQuota:(BOOL)arg1 ;
-(void)_computeRecordForThrottleID:(long long)arg1 item:(id)arg2 ;
-(unsigned long long)_thumbnailOperationsMax;
-(BOOL)_updatePackageRecord:(id)arg1 item:(id)arg2 stageID:(id)arg3 error:(id*)arg4 ;
-(id)_documentItemForThrottleID:(long long)arg1 stageID:(id)arg2 ;
-(void)_updateRecord:(id)arg1 item:(id)arg2 thumbnailOperation:(id)arg3 stageID:(id)arg4 ;
-(void)_updateThrottleID:(long long)arg1 setStageID:(id)arg2 operationID:(id)arg3 ;
-(void)_updateRecord:(id)arg1 throttleID:(long long)arg2 thumbnailOperation:(id)arg3 stageID:(id)arg4 ;
-(void)_doneFetchingThumbnailForThrottleID:(id)arg1 ;
-(void)_startFetchThumbnail:(id)arg1 throttleID:(id)arg2 ;
-(BOOL)_finishPackageUploadWithRecord:(id)arg1 item:(id)arg2 error:(id*)arg3 ;
-(id)_documentItemForThrottleID:(long long)arg1 operationID:(id)arg2 ;
-(void)_finishedUploadingItem:(id)arg1 record:(id)arg2 throttleID:(long long)arg3 error:(id)arg4 ;
-(void)_retriedThrottleID:(long long)arg1 zone:(id)arg2 throttle:(id)arg3 operationID:(id)arg4 ;
-(void)_rescheduleThrottlesOutOfQuotaForDefaultOwnerWithAvailableSize:(long long)arg1 ;
-(void)_setQuotaAvailableForDefaultOwner:(unsigned long long)arg1 ;
-(BOOL)isDefaultOwnerOutOfQuota;
-(void)addAliasItem:(id)arg1 toUploadingItem:(id)arg2 ;
-(BOOL)hasItemsOverQuotaInZone:(id)arg1 ;
@end

