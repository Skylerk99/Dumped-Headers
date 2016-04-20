/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:48 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUI.framework/AccessibilityUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, AXAccessQueue, NSMutableDictionary;

@interface AXUIClientConnection : NSObject {

	BOOL _connected;
	NSObject*<OS_xpc_object> _xpcConnection;
	AXAccessQueue* _connectionAccessQueue;
	NSMutableDictionary* _registeredClients;
	AXAccessQueue* _registeredClientsAccessQueue;

}

@property (assign,getter=isConnected,nonatomic) BOOL connected;                         //@synthesize connected=_connected - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcConnection;                    //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) AXAccessQueue * connectionAccessQueue;                     //@synthesize connectionAccessQueue=_connectionAccessQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * registeredClients;                   //@synthesize registeredClients=_registeredClients - In the implementation block
@property (nonatomic,retain) AXAccessQueue * registeredClientsAccessQueue;              //@synthesize registeredClientsAccessQueue=_registeredClientsAccessQueue - In the implementation block
+(id)sharedClientConnection;
-(void)dealloc;
-(id)init;
-(void)unregisterClient:(id)arg1 withIdentifier:(id)arg2 ;
-(void)performBlockWithXPCConnection:(/*^block*/id)arg1 ;
-(void)registerClient:(id)arg1 withIdentifier:(id)arg2 ;
-(void)setConnectionAccessQueue:(AXAccessQueue *)arg1 ;
-(void)setRegisteredClientsAccessQueue:(AXAccessQueue *)arg1 ;
-(void)setRegisteredClients:(NSMutableDictionary *)arg1 ;
-(AXAccessQueue *)connectionAccessQueue;
-(id)_clientWithIdentifier:(id)arg1 ;
-(AXAccessQueue *)registeredClientsAccessQueue;
-(NSMutableDictionary *)registeredClients;
-(BOOL)isConnected;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setConnected:(BOOL)arg1 ;
@end

