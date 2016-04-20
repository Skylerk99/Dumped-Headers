/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:50 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMSystemMonitorListener
@optional
-(void)systemApplicationWillEnterForeground;
-(void)systemDidBecomeIdle;
-(void)systemDidBecomeUnidle;
-(void)screenSaverDidStart;
-(void)screenSaverDidStop;
-(void)screenLocked;
-(void)screenUnlocked;
-(void)systemWillSleep;
-(void)systemDidWake;
-(void)systemDidEnterMemoryPressure;
-(void)systemDidLeaveMemoryPressure;
-(void)systemWillShutdown;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationDidBecomeActive;
-(void)systemApplicationWillResignActive;
-(void)systemApplicationDidSuspend;
-(void)systemApplicationDidResume;
-(void)systemApplicationDidSuspendForEventsOnly;
-(void)systemApplicationDidResumeForEventsOnly;
-(void)notificationCenterWillAppear;
-(void)notificationCenterDidDisappear;
-(void)systemDidStartBackup;
-(void)systemDidStopBackup;
-(void)systemDidFinishMigration;
-(void)systemRestoreStateDidChange;
-(void)systemDidFastUserSwitchOut;
-(void)systemDidFastUserSwitchIn;
-(void)systemDidLogout;
-(void)systemDidLock;
-(void)systemDidUnlock;
-(void)systemScreenDidPowerUp;
-(void)systemScreenDidPowerDown;
-(void)systemDidLeaveFirstDataProtectionLock;
-(void)systemDidLeaveDataProtectionLock;
-(void)systemDidEnterDataProtectionLock;

@end

