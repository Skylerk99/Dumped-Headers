/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/XPCClientDelegate.h>

@protocol WPAdvertisingDelegate;
@class XPCClient, NSString;

@interface WPAdvertising : NSObject <XPCClientDelegate> {

	long long _state;
	XPCClient* _connection;
	id<WPAdvertisingDelegate> _delegate;

}

@property (assign) long long state;                                           //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) XPCClient * connection;                          //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) id<WPAdvertisingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<WPAdvertisingDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<WPAdvertisingDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(XPCClient *)connection;
-(void)setConnection:(XPCClient *)arg1 ;
-(void)connectionInterrupted;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)updateState:(long long)arg1 ;
-(void)messageArrived:(id)arg1 ;
-(void)connectionDied;
-(void)registerService:(id)arg1 ;
-(void)deregisterService:(id)arg1 ;
@end

