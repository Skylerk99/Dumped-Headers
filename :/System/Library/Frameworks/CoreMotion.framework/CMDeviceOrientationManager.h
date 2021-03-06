/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreMotion/CoreMotion-Structs.h>
@interface CMDeviceOrientationManager : NSObject {

	id _internal;

}
+(void)dummySelector:(id)arg1 ;
+(void)initialize;
-(id)initPrivate;
-(void)deallocPrivate;
-(void)onDeviceOrientation:(const Sample*)arg1 ;
-(void)onMotionPreferencesUpdated;
-(void)stopDeviceOrientationUpdatesPrivate;
-(void)onNotification:(id)arg1 ;
-(void)setDeviceOrientationCallbackModePrivate:(int)arg1 ;
-(void)startDeviceOrientationUpdatesPrivateToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(BOOL)isDeviceOrientationAvailable;
-(void)signalAndReleaseSemaphoreIfNecessaryPrivate;
-(void)updateAggregateDictionaryPrivate;
-(BOOL)orientationNotificationsDisabled;
-(id)stringForOrientation:(int)arg1 ;
-(BOOL)isDeviceOrientationActive;
-(void)startDeviceOrientationUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopDeviceOrientationUpdates;
-(id)deviceOrientationBlocking;
-(void)dealloc;
-(id)init;
@end

