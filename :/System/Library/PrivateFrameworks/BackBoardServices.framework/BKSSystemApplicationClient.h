/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:10 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSBaseXPCClient.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, BKSSystemApplicationClientDelegate;
@class NSObject;

@interface BKSSystemApplicationClient : BSBaseXPCClient {

	NSObject*<OS_dispatch_queue> _callOutQueue;
	BOOL _pendingCheckIn;
	BOOL _sentConnect;
	NSObject*<OS_dispatch_semaphore> _checkinSemaphore;
	id<BKSSystemApplicationClientDelegate> _delegate;

}

@property (assign,nonatomic) id<BKSSystemApplicationClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)restart;
-(BOOL)ping;
-(void)setDelegate:(id<BKSSystemApplicationClientDelegate>)arg1 ;
-(void)dealloc;
-(id<BKSSystemApplicationClientDelegate>)delegate;
-(void)sendActions:(id)arg1 ;
-(void)connect;
-(void)_sendMessageOfType:(long long)arg1 packer:(/*^block*/id)arg2 replyHandler:(/*^block*/id)arg3 waitForReply:(BOOL)arg4 waitDuration:(unsigned long long)arg5 ;
-(void)_sendMessageOfType:(long long)arg1 packer:(/*^block*/id)arg2 ;
-(void)_queue_handleWatchdogPing:(id)arg1 ;
-(void)_sendMessageOfType:(long long)arg1 packer:(/*^block*/id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)queue_handleMessage:(id)arg1 ;
-(void)queue_connectionWasResumed;
-(void)queue_connectionWasInterrupted;
-(void)queue_connectionWasInvalidated;
-(void)finishBooting;
-(id)initWithCalloutQueue:(id)arg1 ;
-(void)_connect;
-(void)checkIn;
@end

