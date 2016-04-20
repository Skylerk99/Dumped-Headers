/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCReachabilityDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSProgress, NSMutableSet, NSMutableDictionary, NSString;

@interface BRCGlobalProgress : NSObject <BRCReachabilityDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _operationTimer;
	unsigned _operationTimerSuspendCount;
	long long _firstOperationToken;
	BOOL _showAdditionalLocalizedDescription;
	BOOL _networkReachable;
	NSProgress* _parentProgress;
	br_pacer_tRef _updateUnitCountPacer;
	long long _sumOfCompletedUnitCountDelta;
	long long _sumOfTotalUnitCountDelta;
	NSMutableSet* _containersWaitingInitialFaults;
	NSMutableDictionary* _uploadVersionSizes;
	NSMutableDictionary* _uploadProgresses;
	NSMutableDictionary* _downloadVersionSizes;
	NSMutableDictionary* _downloadProgresses;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_keyPathsToObserve;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)addProgress:(id)arg1 forDocument:(id)arg2 inGroup:(char)arg3 ;
-(void)dumpToContext:(id)arg1 ;
-(void)networkReachabilityChanged:(BOOL)arg1 ;
-(void)willScheduleDocumentForDownload:(id)arg1 ;
-(void)didDeleteDocument:(id)arg1 ;
-(void)didUpdateDocument:(id)arg1 ;
-(void)didUpdateContainer:(id)arg1 changes:(unsigned)arg2 ;
-(void)_updateParentProgressLocalizedDescription;
-(void)_destroyParentProgressWithReason:(char)arg1 ;
-(char)_trackingKind;
-(void)_stopObservingProgress:(id)arg1 ;
-(long long)_computeDeltaFromSize:(long long)arg1 toSize:(long long)arg2 versionSize:(long long)arg3 progressSize:(long long)arg4 isFinished:(BOOL)arg5 ;
-(void)_updateState:(id)arg1 forContainerID:(id)arg2 shouldBeAdded:(BOOL)arg3 ;
-(void)_createNewParentProgressInGroup:(id)arg1 completedUnitCount:(long long)arg2 totalUnitCount:(long long)arg3 ;
-(void)_updateUploadStateForDocumentID:(id)arg1 withSyncUpState:(unsigned)arg2 versionSize:(long long)arg3 ;
-(void)_cancelDownloadForDocumentID:(id)arg1 ;
-(void)_cancelUploadForDocumentID:(id)arg1 willRetryTransfer:(BOOL)arg2 ;
-(void)_startObservingProgress:(id)arg1 ;
-(long long)_transferSizeWithVersionSize:(long long)arg1 ;
-(void)_resumeProgressForAnotherOperationIfNeeded;
-(void)_createNewIndeterminateParentProgress;
-(long long)_syncUpSizeWithVersionSize:(long long)arg1 ;
-(void)willResumeDocumentUpload:(id)arg1 ;
-(void)stopPublishingProgress;
-(void)removeProgressBecauseTransferFailed:(id)arg1 willRetryTransfer:(BOOL)arg2 ;
@end

