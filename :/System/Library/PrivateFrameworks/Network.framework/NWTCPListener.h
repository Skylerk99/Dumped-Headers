/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:29 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_tcp_listener;
@class NWEndpoint, NSError, NSObject, NWParameters;

@interface NWTCPListener : NSObject {

	NWEndpoint* _localEndpoint;
	NSError* _error;
	NSObject*<OS_tcp_listener> _internalListener;
	NWParameters* _parameters;
	NWEndpoint* _endpoint;
	id _delegate;

}

@property (retain) NWEndpoint * localEndpoint;                               //@synthesize localEndpoint=_localEndpoint - In the implementation block
@property (retain) NSError * error;                                          //@synthesize error=_error - In the implementation block
@property (retain) NSObject*<OS_tcp_listener> internalListener;              //@synthesize internalListener=_internalListener - In the implementation block
@property (retain) NWParameters * parameters;                                //@synthesize parameters=_parameters - In the implementation block
@property (retain) NWEndpoint * endpoint;                                    //@synthesize endpoint=_endpoint - In the implementation block
@property (__weak) id delegate;                                              //@synthesize delegate=_delegate - In the implementation block
-(NWEndpoint *)localEndpoint;
-(NSError *)error;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(NWParameters *)parameters;
-(void)setParameters:(NWParameters *)arg1 ;
-(NWEndpoint *)endpoint;
-(void)handleError:(int)arg1 ;
-(void)handleNewConnection:(id)arg1 ;
-(void)startInternal;
-(id)initWithParameters:(id)arg1 delegate:(id)arg2 ;
-(id)initWithLaunchdKey:(id)arg1 parameters:(id)arg2 delegate:(id)arg3 ;
-(id)initWithBonjourServiceEndpoint:(id)arg1 parameters:(id)arg2 delegate:(id)arg3 ;
-(void)setInternalListener:(NSObject*<OS_tcp_listener>)arg1 ;
-(NSObject*<OS_tcp_listener>)internalListener;
-(void)setLocalEndpoint:(NWEndpoint *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setEndpoint:(NWEndpoint *)arg1 ;
@end

