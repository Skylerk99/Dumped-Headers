/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/CMPocketStateDelegate.h>

@class NSTimer, NSMutableSet, CMPocketStateManager, NSString;

@interface SBBacklightController : NSObject <CMPocketStateDelegate> {

	double _minimumLockIdleTime;
	NSTimer* _autoLockTimer;
	double _lastTimeIdleCausedDim;
	double _nextLockDurationAfterDim;
	unsigned _disableAutoDimming : 1;
	NSMutableSet* _idleTimerDisabledReasons;
	CMPocketStateManager* _pocketStateManager;
	long long _pocketStateType;
	BOOL _isPendingScreenUnblankAfterCACommit;
	BOOL _undimmedForBulletinSinceLastUserEvent;
	BOOL _allowIdleTimerToBeReset;

}

@property (nonatomic,readonly) BOOL isPendingScreenUnblankAfterCACommit;              //@synthesize isPendingScreenUnblankAfterCACommit=_isPendingScreenUnblankAfterCACommit - In the implementation block
@property (nonatomic,readonly) BOOL screenIsOn; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)deviceSupportsBacklightRamping;
+(id)_sharedInstanceCreateIfNeeded:(BOOL)arg1 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(void)setBacklightFactor:(float)arg1 source:(int)arg2 ;
-(void)autoLockPrefsChanged;
-(BOOL)screenIsOn;
-(void)cancelLockScreenIdleTimer;
-(void)reloadDefaults;
-(void)resetLockScreenIdleTimer;
-(void)preventIdleSleepForNumberOfSeconds:(float)arg1 ;
-(void)setBacklightFactorToZeroForProx;
-(void)restoreBacklightFactorForProx;
-(BOOL)isPendingScreenUnblankAfterCACommit;
-(void)resetIdleTimerAndUndimForBulletin;
-(void)clearIdleTimer;
-(double)defaultLockScreenDimInterval;
-(void)animateBacklightToFactor:(float)arg1 duration:(double)arg2 source:(int)arg3 completion:(/*^block*/id)arg4 ;
-(double)defaultLockScreenDimIntervalWhenNotificationsPresent;
-(void)_deferredScreenUnblankDone;
-(void)_batterySaverModeDidChange:(id)arg1 ;
-(void)_setBacklightFactorToZeroForProx;
-(void)_cancelSetBacklightFactorToZeroAfterDelay;
-(void)_resetIdleTimerAndUndim:(BOOL)arg1 source:(int)arg2 ;
-(void)_clearAutoLockTimer;
-(BOOL)_lockScreenWantsUserEventNotifications;
-(BOOL)shouldTurnOnScreenForBacklightSource:(int)arg1 ;
-(void)_undimFromSource:(int)arg1 ;
-(double)_nextLockTimeDuration;
-(double)_nextIdleTimeDuration;
-(void)adjustIdleLockDuration:(double*)arg1 idleDimDuration:(double*)arg2 ;
-(double)_currentLockScreenIdleTimerInterval;
-(void)_resetLockScreenIdleTimerWithDuration:(double)arg1 mode:(int)arg2 ;
-(void)_performDeferredBacklightRampWorkWithInfo:(id)arg1 ;
-(void)_animateBacklightToFactor:(float)arg1 duration:(double)arg2 source:(int)arg3 silently:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)preventIdleSleep;
-(void)_startFadeOutAnimationIfNecessary;
-(void)_autoLockTimerFired:(id)arg1 ;
-(void)_lockScreenDimTimerFired;
-(void)_didIdle;
-(void)_userEventsDidIdle;
-(void)allowIdleSleep;
-(void)turnOnScreenFullyWithBacklightSource:(int)arg1 ;
-(void)setBacklightFactorPending:(float)arg1 ;
-(void)_userEventOccurred;
-(void)_userEventPresenceTimerExpired;
-(void)_requestedUserEventNotificationOccurred;
-(void)_startAllowingIdleTimer;
-(void)pocketStateManager:(id)arg1 didUpdateState:(long long)arg2 ;
-(id)init;
-(id)idleTimerDisabledReasons;
-(void)resetLockScreenIdleTimerWithDuration:(double)arg1 ;
-(void)setIdleTimerDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)resetIdleTimerAndUndim:(BOOL)arg1 ;
@end

