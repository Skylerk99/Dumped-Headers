/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:58 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <Foundation/NSThread.h>

@class NSXPCConnection, BrightnessSystemClientExportedObj, NSTimer, NSArray;

@interface BrightnessSystemClientInternal : NSThread {

	NSXPCConnection* _connection;
	id _remote;
	BrightnessSystemClientExportedObj* exportedObj;
	BOOL _initializationComplete;
	NSTimer* _timer;
	NSArray* clientProperties;
	BOOL shouldKeepRunning;
	CFRunLoopRef _rl;

}
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(void)main;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)timerFire:(id)arg1 ;
-(void)destroyClient;
-(void)registerNotificationBlock:(/*^block*/id)arg1 forProperties:(id)arg2 ;
-(id)copyPropertyForKey:(id)arg1 ;
@end

