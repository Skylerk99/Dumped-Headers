/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:27 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <libobjc.A.dylib/CAMNebulaDaemonClientProtocol.h>

@protocol CAMNebulaDaemonConnectionManagerDelegate, OS_dispatch_queue;
@class NSString, NSXPCConnection, NSObject, Protocol, NSMutableDictionary, NSMutableArray;

@interface CAMNebulaDaemonConnectionManager : NSObject <NSXPCConnectionDelegate, CAMNebulaDaemonClientProtocol> {

	NSString* _identifier;
	id<CAMNebulaDaemonConnectionManagerDelegate> _delegate;
	NSXPCConnection* __connection;
	NSString* __name;
	NSObject*<OS_dispatch_queue> __queue;
	Protocol* __allowedProtocol;
	NSMutableDictionary* __tasksPerIdentifier;
	NSMutableArray* __registeredTargets;
	NSMutableArray* __registeredProtocols;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<CAMNebulaDaemonConnectionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * _connection;                                           //@synthesize _connection=__connection - In the implementation block
@property (nonatomic,copy,readonly) NSString * _name;                                                   //@synthesize _name=__name - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _queue;                                     //@synthesize _queue=__queue - In the implementation block
@property (nonatomic,readonly) Protocol * _allowedProtocol;                                             //@synthesize _allowedProtocol=__allowedProtocol - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _tasksPerIdentifier;                               //@synthesize _tasksPerIdentifier=__tasksPerIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _registeredTargets;                                     //@synthesize _registeredTargets=__registeredTargets - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _registeredProtocols;                                   //@synthesize _registeredProtocols=__registeredProtocols - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_daemonProtocolInterface;
+(id)_clientProtocolInterface;
-(void)setDelegate:(id<CAMNebulaDaemonConnectionManagerDelegate>)arg1 ;
-(NSString *)description;
-(id<CAMNebulaDaemonConnectionManagerDelegate>)delegate;
-(NSString *)identifier;
-(NSString *)_name;
-(NSXPCConnection *)_connection;
-(NSObject*<OS_dispatch_queue>)_queue;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(void)forceStopTimelapseCaptureWithReasons:(long long)arg1 ;
-(id)_targetsForSelector:(SEL)arg1 ;
-(void)_getProxyForExecutingBlock:(/*^block*/id)arg1 ;
-(id)initWithConnection:(id)arg1 name:(id)arg2 identifier:(id)arg3 queue:(id)arg4 allowedProtocol:(id)arg5 ;
-(void)addTarget:(id)arg1 forProtocol:(id)arg2 ;
-(Protocol *)_allowedProtocol;
-(NSMutableDictionary *)_tasksPerIdentifier;
-(NSMutableArray *)_registeredTargets;
-(NSMutableArray *)_registeredProtocols;
@end

