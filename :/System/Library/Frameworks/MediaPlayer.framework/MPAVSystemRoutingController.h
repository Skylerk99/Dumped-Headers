/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:57 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSPointerArray, NSObject;

@interface MPAVSystemRoutingController : NSObject {

	NSPointerArray* _clientRoutingControllers;
	long long _clientDiscoveryMode;
	NSObject*<OS_dispatch_queue> _serialQueue;
	int _debugNotifyToken;

}
+(id)sharedRoutingController;
-(void)_clientRoutingControllerDidUpdateDiscoveryModeNotification:(id)arg1 ;
-(void)_debugLogSystemControllerState;
-(void)_onQueueUpdateClientRouteDiscoveryMode;
-(void)_updateClientRouteDiscoveryMode;
-(void)registerClientRoutingController:(id)arg1 ;
-(void)unregisterClientRoutingController:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_init;
@end

