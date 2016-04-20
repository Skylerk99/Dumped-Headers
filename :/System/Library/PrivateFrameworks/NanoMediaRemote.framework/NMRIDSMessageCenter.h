/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue, NMRIDSMessageCenterDelegate;
@class NSObject, IDSService, NSMutableDictionary, NSString;

@interface NMRIDSMessageCenter : NSObject <IDSServiceDelegate> {

	NSObject*<OS_dispatch_queue> _idsQueue;
	IDSService* _idsService;
	NSMutableDictionary* _messageHandlers;
	id<NMRIDSMessageCenterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NMRIDSMessageCenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<NMRIDSMessageCenterDelegate>)arg1 ;
-(id<NMRIDSMessageCenterDelegate>)delegate;
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(BOOL)_sendMessageWithProtobufData:(id)arg1 messageType:(unsigned short)arg2 priority:(unsigned long long)arg3 timeout:(double)arg4 bypassDuet:(BOOL)arg5 skipStorage:(BOOL)arg6 isResponse:(BOOL)arg7 additionalOptions:(id)arg8 resultingMessageIdentifier:(id*)arg9 error:(id*)arg10 ;
-(void)setMessageHandlerTarget:(id)arg1 action:(SEL)arg2 forIncomingMessagesOfType:(unsigned short)arg3 ;
-(void)startHandlingMessages;
-(BOOL)sendMessageWithProtobufData:(id)arg1 messageType:(unsigned short)arg2 priority:(unsigned long long)arg3 timeout:(double)arg4 bypassDuet:(BOOL)arg5 skipStorage:(BOOL)arg6 expectReply:(BOOL)arg7 queueOneIdentifier:(id)arg8 resultingMessageIdentifier:(id*)arg9 error:(id*)arg10 ;
-(BOOL)sendMessageWithProtobufData:(id)arg1 messageType:(unsigned short)arg2 priority:(unsigned long long)arg3 timeout:(double)arg4 bypassDuet:(BOOL)arg5 skipStorage:(BOOL)arg6 inReplyTo:(id)arg7 resultingMessageIdentifier:(id*)arg8 error:(id*)arg9 ;
@end

