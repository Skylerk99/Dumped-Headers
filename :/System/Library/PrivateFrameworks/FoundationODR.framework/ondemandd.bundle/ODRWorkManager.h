/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:34 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FoundationODR.framework/ondemandd.bundle/ondemandd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ODRWorkManager : NSObject {

	int _outstandingWorkCount;

}

@property (assign) int outstandingWorkCount;              //@synthesize outstandingWorkCount=_outstandingWorkCount - In the implementation block
+(id)sharedInstance;
-(void)addWork:(id)arg1 ;
-(void)removeWork:(id)arg1 ;
-(BOOL)sentinelFileIsPresent;
-(void)startHandlingQueuedWork;
-(void)incrementOutstandingWorkCount;
-(void)_saveChanges;
-(void)decrementOutstandingWorkCount;
-(id)enqueueAssetDownloadsForBundleID:(id)arg1 andContext:(id)arg2 ;
-(id)enqueueFakeWorkForBundleID:(id)arg1 andContext:(id)arg2 ;
-(id)_fetchWork;
-(int)outstandingWorkCount;
-(void)setOutstandingWorkCount:(int)arg1 ;
-(id)init;
@end

