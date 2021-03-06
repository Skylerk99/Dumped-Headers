/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>

@protocol OS_dispatch_queue;
@class HKQueryAnchor, NSObject, NSMutableArray;

@interface HDAnchoredObjectQueryServer : HDQueryServer {

	BOOL _deliversUpdates;
	BOOL _initialResultsSent;
	BOOL _suspended;
	BOOL _objectsDeleted;
	BOOL _includeDeletedObjects;
	HKQueryAnchor* _startAnchor;
	unsigned long long _deliveredResults;
	NSObject*<OS_dispatch_queue> _batchQueue;
	NSMutableArray* _addedSamplesPendingResume;
	NSMutableArray* _deletedSamplesPendingResume;
	BOOL _shouldResetAnchor;
	HKQueryAnchor* _anchor;
	unsigned long long _limit;

}

@property (nonatomic,readonly) HKQueryAnchor * anchor;                //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,readonly) unsigned long long limit;              //@synthesize limit=_limit - In the implementation block
-(HKQueryAnchor *)anchor;
-(id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 healthDaemon:(id)arg6 ;
-(void)_queue_start;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)samplesOfTypeWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(BOOL)_shouldListenForUpdates;
-(BOOL)_queue_shouldAccumulateUpdates;
-(id)_maxRowIDInDatabase;
-(BOOL)_queue_shouldAcceptUpdates;
-(void)_queue_samplesWereRemovedWithAnchor:(id)arg1 ;
-(BOOL)_shouldObserveOnPause;
-(unsigned long long)limit;
@end

