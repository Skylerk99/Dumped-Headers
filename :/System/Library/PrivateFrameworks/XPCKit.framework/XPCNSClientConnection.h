/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <XPCKit/XPCClientConnectionDelegate.h>

@protocol XPCNSClientConnectionDelegate;
@class XPCClientConnection, NSString;

@interface XPCNSClientConnection : NSObject <XPCClientConnectionDelegate> {

	XPCClientConnection* _clientConnection;
	id<XPCNSClientConnectionDelegate> _delegate;

}

@property (nonatomic,readonly) id<XPCNSClientConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<XPCNSClientConnectionDelegate>)delegate;
-(void)shutDownCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithServiceName:(id)arg1 delegate:(id)arg2 ;
-(void)sendMessageReliably:(id)arg1 data:(id)arg2 maxRetryCount:(int)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)sendMessage:(id)arg1 data:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)XPCClientConnection:(id)arg1 didReceiveRequest:(id)arg2 ;
@end

