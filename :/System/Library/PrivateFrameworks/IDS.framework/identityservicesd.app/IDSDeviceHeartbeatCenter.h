/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IMSystemMonitorListener.h>

@class IMTimer, NSMutableDictionary;

@interface IDSDeviceHeartbeatCenter : NSObject <IMSystemMonitorListener> {

	IMTimer* _getDependantHeartbeatTimer;
	NSMutableDictionary* _usersToHeartbeatDatesMap;
	BOOL _isSetup;

}
+(id)sharedInstance;
-(void)accountsChanged;
-(BOOL)_fetchExpiryDatesIfNecessary;
-(void)_cleanupKeychain;
-(BOOL)_scheduleDependantRegistrations;
-(void)_scheduleRescueHeartBeat;
-(void)invalidateTimer;
-(id)_getNextExpirationDate;
-(void)_updateDependantRegistrations;
-(void)_heartBeat;
-(void)updateExpiry:(double)arg1 forUser:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)printInfo;
-(void)systemDidWake;
-(void)setup;
@end

