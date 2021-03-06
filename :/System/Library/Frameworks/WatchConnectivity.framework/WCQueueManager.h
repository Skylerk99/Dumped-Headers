/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:19 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSMutableDictionary;

@interface WCQueueManager : NSObject {

	BOOL _canSend;
	BOOL _messageOutstanding;
	NSMutableArray* _messageQueue;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _inFlightMessages;

}

@property (assign) BOOL canSend;                                        //@synthesize canSend=_canSend - In the implementation block
@property (assign) BOOL messageOutstanding;                             //@synthesize messageOutstanding=_messageOutstanding - In the implementation block
@property (retain) NSMutableArray * messageQueue;                       //@synthesize messageQueue=_messageQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (retain) NSMutableDictionary * inFlightMessages;              //@synthesize inFlightMessages=_inFlightMessages - In the implementation block
-(id)init;
-(void)cancelQueuedMessages;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)allowMessageSending;
-(void)handleSentMessageWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)onqueue_allowMessageSending;
-(void)setCanSend:(BOOL)arg1 ;
-(void)onqueue_attemptToSend;
-(void)onqueue_sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)onqueue_enqueueMessage:(id)arg1 ;
-(BOOL)messageOutstanding;
-(id)onqueue_peekMessage;
-(NSMutableDictionary *)inFlightMessages;
-(void)setMessageOutstanding:(BOOL)arg1 ;
-(void)onqueue_handleAcceptanceWithCurrentAccepted:(BOOL)arg1 nextAvailable:(BOOL)arg2 ;
-(void)onqueue_dequeueMessage;
-(void)onqueue_handleSentMessageWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)onqueue_cancelQueuedMessages;
-(void)onqueue_clearQueuedMessages;
-(void)onqueue_cancelDaemonMessages;
-(void)setInFlightMessages:(NSMutableDictionary *)arg1 ;
-(void)setMessageQueue:(NSMutableArray *)arg1 ;
-(NSMutableArray *)messageQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(BOOL)canSend;
@end

