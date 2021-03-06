/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary;

@interface SPXPCServer : NSObject {

	NSObject*<OS_xpc_object> _conn;
	NSMutableSet* _connections;
	NSMutableDictionary* _handlerMap;
	NSObject*<OS_dispatch_queue> _connectionsQueue;
	/*^block*/id _disconnectHandler;
	/*^block*/id _defaultMessageHandler;
	NSObject*<OS_dispatch_queue> _eventQueue;
	NSObject*<OS_dispatch_queue> _timerQueue;
	double _idleTimerInterval;
	BOOL _shutdown;

}

@property (nonatomic,copy) id defaultMessageHandler;              //@synthesize defaultMessageHandler=_defaultMessageHandler - In the implementation block
@property (nonatomic,copy) id disconnectHandler;                  //@synthesize disconnectHandler=_disconnectHandler - In the implementation block
-(void)dealloc;
-(void)_handleNewConnection:(id)arg1 ;
-(BOOL)shutdown;
-(void)startListening;
-(void)setDisconnectHandler:(id)arg1 ;
-(id)disconnectHandler;
-(/*^block*/id)_handlerForMessageName:(id)arg1 ;
-(id)_highAvailabilityQueue;
-(id)initListenerWithServiceName:(id)arg1 onQueue:(id)arg2 ;
-(void)setDefaultMessageHandler:(id)arg1 ;
-(id)initListenerWithServiceName:(id)arg1 ;
-(void)setHandlerForMessageName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)defaultMessageHandler;
@end

