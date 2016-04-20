/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:32 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSArray;

@interface HMDMessageFilterChain : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _messageFilters;

}

@property (nonatomic,copy,readonly) NSArray * filters; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * messageFilters;                     //@synthesize messageFilters=_messageFilters - In the implementation block
-(id)init;
-(NSArray *)filters;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)addMessageFilter:(id)arg1 ;
-(void)resetConfiguration;
-(BOOL)shouldCloudSyncData;
-(NSMutableArray *)messageFilters;
-(void)_executeChainForMessage:(id)arg1 queue:(id)arg2 target:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)executeChainForMessage:(id)arg1 queue:(id)arg2 target:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)removeMessageFilter:(id)arg1 ;
-(void)setMessageFilters:(NSMutableArray *)arg1 ;
@end

