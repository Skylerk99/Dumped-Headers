/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:26 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLockScreenViewControllerDelegate.h>
#import <libobjc.A.dylib/SBUIBiometricEventObserver.h>
#import <SpringBoard/SBUIBiometricEventMonitorDelegate.h>
#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>
#import <SpringBoard/SBPassKitPrearmTriggerDelegate.h>
#import <SpringBoard/SBPasscodeEntryAlertViewControllerDelegate.h>
#import <SpringBoard/SBAlertObserver.h>

@class SBLockScreenViewControllerBase, SBPasscodeEntryAlertViewController, SBPasscodeLockDisableAssertion, NSMutableSet, NSHashTable, SBPassKitPrearmTrigger, PKPaymentService, NSString;

@interface SBLockScreenManager : NSObject <SBLockScreenViewControllerDelegate, SBUIBiometricEventObserver, SBUIBiometricEventMonitorDelegate, PKPaymentServiceDelegate, SBPassKitPrearmTriggerDelegate, SBPasscodeEntryAlertViewControllerDelegate, SBAlertObserver> {

	SBLockScreenViewControllerBase* _lockScreenViewController;
	BOOL _isUILocked;
	BOOL _isWaitingToLockUI;
	BOOL _appRequestedPasscodeEntry;
	BOOL _uiHasBeenLockedOnce;
	BOOL _uiUnlocking;
	SBPasscodeEntryAlertViewController* _passcodeEntryController;
	SBPasscodeLockDisableAssertion* _disablePasscodeLockWhileUIUnlockedAssertion;
	NSMutableSet* _disableLockScreenIfPossibleAssertions;
	NSHashTable* _disableUnlockAssertions;
	BOOL _isInLostMode;
	unsigned long long _failedMesaUnlockAttempts;
	BOOL _bioAuthenticatedWhileMenuButtonDown;
	NSMutableSet* _bioUnlockingDisabledRequesters;
	SBPassKitPrearmTrigger* _prearmTrigger;
	BOOL _presentingPassKitInterface;
	PKPaymentService* _paymentService;
	BOOL _didMatchBeforeTriggerTimeout;

}

@property (nonatomic,readonly) SBLockScreenViewControllerBase * lockScreenViewController;              //@synthesize lockScreenViewController=_lockScreenViewController - In the implementation block
@property (readonly) BOOL isUILocked;                                                                  //@synthesize isUILocked=_isUILocked - In the implementation block
@property (readonly) BOOL isWaitingToLockUI;                                                           //@synthesize isWaitingToLockUI=_isWaitingToLockUI - In the implementation block
@property (readonly) BOOL shouldHandlePocketStateChanges; 
@property (readonly) BOOL bioAuthenticatedWhileMenuButtonDown;                                         //@synthesize bioAuthenticatedWhileMenuButtonDown=_bioAuthenticatedWhileMenuButtonDown - In the implementation block
@property (assign,getter=isUIUnlocking,nonatomic) BOOL UIUnlocking;                                    //@synthesize uiUnlocking=_uiUnlocking - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedInstanceCreateIfNeeded:(BOOL)arg1 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(BOOL)hasUIEverBeenLocked;
-(BOOL)isUILocked;
-(SBLockScreenViewControllerBase *)lockScreenViewController;
-(void)activateLostModeForRemoteLock:(BOOL)arg1 ;
-(void)applicationRequestedDeviceUnlock;
-(void)noteMenuButtonDown;
-(void)noteMenuButtonUp;
-(BOOL)shouldLockUIAfterEndingCall;
-(BOOL)isUIUnlocking;
-(BOOL)isInLostMode;
-(void)alertDidDeactivate:(id)arg1 ;
-(void)remoteLock:(BOOL)arg1 ;
-(void)triggerDidTimeoutForFingerOn:(id)arg1 ;
-(void)triggerDidFire:(id)arg1 ;
-(void)triggerDidTimeoutForDoubleTap:(id)arg1 ;
-(void)enableLostModePlugin;
-(void)_addDisableUnlockAssertion:(id)arg1 ;
-(void)_removeDisableUnlockAssertion:(id)arg1 ;
-(BOOL)_attemptUnlockWithPasscode:(id)arg1 finishUIUnlock:(BOOL)arg2 ;
-(void)applicationRequestedDeviceUnlockWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isLockScreenDisabledForAssertion;
-(void)_bioAuthenticated:(id)arg1 ;
-(BOOL)bioAuthenticatedWhileMenuButtonDown;
-(void)setBioUnlockingDisabled:(BOOL)arg1 forRequester:(id)arg2 ;
-(BOOL)passcodeEntryAlertViewController:(id)arg1 authenticatePasscode:(id)arg2 ;
-(void)exitLostModeIfNecessaryFromRemoteRequest:(BOOL)arg1 ;
-(void)updateSpringBoardStatusBarForLockScreenTeardown;
-(void)addLockScreenDisableAssertion:(id)arg1 ;
-(void)removeLockScreenDisableAssertion:(id)arg1 ;
-(BOOL)isWaitingToLockUI;
-(BOOL)shouldHandlePocketStateChanges;
-(void)startUIUnlockFromSource:(int)arg1 withOptions:(id)arg2 ;
-(BOOL)attemptUnlockWithPasscode:(id)arg1 ;
-(id)_newLockScreenController;
-(void)_setUILocked:(BOOL)arg1 ;
-(void)activationChanged:(id)arg1 ;
-(void)_deviceLockedChanged:(id)arg1 ;
-(void)_lockUI;
-(void)_handleExternalUIUnlock:(id)arg1 ;
-(void)_deviceBlockedChanged:(id)arg1 ;
-(void)_resetOrRestoreStateChanged:(id)arg1 ;
-(void)_lockScreenDimmed:(id)arg1 ;
-(void)_frontmostDisplayChanged:(id)arg1 ;
-(BOOL)_shouldLockAfterEndingTelephonyCall;
-(BOOL)_shouldLockAfterEndingFaceTimeCall;
-(void)_activateLockScreenAnimated:(BOOL)arg1 automatically:(BOOL)arg2 inScreenOffMode:(BOOL)arg3 dimInAnimation:(BOOL)arg4 dismissNotificationCenter:(BOOL)arg5 ;
-(void)_relockUIForButtonPress:(BOOL)arg1 afterCall:(BOOL)arg2 ;
-(void)cancelApplicationRequestedDeviceLockEntry;
-(void)_postLockCompletedNotification:(BOOL)arg1 ;
-(void)_sendUILockStateChangedNotification;
-(BOOL)_shouldAutoUnlockFromUnlockSource:(int)arg1 ;
-(void)_finishUIUnlockFromSource:(int)arg1 withOptions:(id)arg2 ;
-(void)setUIUnlocking:(BOOL)arg1 ;
-(void)_lockFeaturesForRemoteLock:(BOOL)arg1 ;
-(void)_handlePassKitDismissal;
-(void)paymentServiceReceivedInterruption;
-(void)contactlessInterfaceDidDismissForPassesWithUniqueIdentifiers:(id)arg1 fromSource:(long long)arg2 ;
-(id)init;
-(BOOL)handleKeyHIDEvent:(IOHIDEventRef)arg1 ;
-(void)unlockUIFromSource:(int)arg1 withOptions:(id)arg2 ;
-(void)lockUIFromSource:(int)arg1 withOptions:(id)arg2 ;
-(void)biometricEventMonitor:(id)arg1 handleBiometricEvent:(unsigned long long)arg2 ;
-(BOOL)biometricEventMonitorShouldRelockAfterBioUnlock:(id)arg1 ;
@end

