/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:10 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSLock;

@interface BSXPCConnectionListenerManager : NSObject {

	NSObject*<OS_dispatch_queue> _listeningQueue;
	NSMutableDictionary* _services;
	NSLock* _servicesLock;
	NSObject*<OS_dispatch_queue> _defaultHandlerQueue;

}
+(id)sharedInstance;
+(id)defaultHandlerQueue;
+(void)stopListeningForService:(id)arg1 ;
+(void)listenForService:(id)arg1 onQueue:(id)arg2 withHandler:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)_init;
-(id)_defaultHandlerQueue;
-(void)_addService:(id)arg1 withHandler:(id)arg2 onQueue:(id)arg3 ;
-(void)_removeService:(id)arg1 ;
@end

