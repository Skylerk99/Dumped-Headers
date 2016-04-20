/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface EventDispatcher : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableArray* _eventMonitors;

}
+(void)observeXPCServer:(id)arg1 ;
+(id)eventDispatcher;
+(void)connectEventMonitorWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_clientDisconnectNotification:(id)arg1 ;
-(void)postEventWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)_addClient:(id)arg1 ;
@end

