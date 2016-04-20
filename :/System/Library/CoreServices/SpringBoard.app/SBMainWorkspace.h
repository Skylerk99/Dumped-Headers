/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:19 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWorkspace.h>
#import <libobjc.A.dylib/BSTransactionObserver.h>
#import <SpringBoard/SBAlertManagerDelegate.h>
#import <SpringBoard/SBAlertManagerObserver.h>
#import <SpringBoard/SBStarkScreenManagerObserver.h>
#import <SpringBoard/SBStarkScreenControllerObserver.h>
#import <SpringBoard/SBReachabilityObserver.h>
#import <SpringBoard/FBSystemServiceDelegate.h>
#import <libobjc.A.dylib/FBProcessManagerObserver.h>
#import <libobjc.A.dylib/FBApplicationProcessObserver.h>
#import <libobjc.A.dylib/BSWatchdogDelegate.h>
#import <libobjc.A.dylib/FBSceneManagerObserver.h>

@class FBSceneManager, SBMainAlertManager, BSEventQueueLock, SBScreenTimeTrackingController, FBDisplayLayoutTransition, SBWorkspaceTransaction, BSWatchdog, NSTimer, NSMutableArray, SBWindow, SBWindowSelfHostWrapper, NSMutableDictionary, NSMutableSet, SBAppStatusBarSettingsAssertion, SBAlertManager, NSSet, NSString;

@interface SBMainWorkspace : SBWorkspace <BSTransactionObserver, SBAlertManagerDelegate, SBAlertManagerObserver, SBStarkScreenManagerObserver, SBStarkScreenControllerObserver, SBReachabilityObserver, FBSystemServiceDelegate, FBProcessManagerObserver, FBApplicationProcessObserver, BSWatchdogDelegate, FBSceneManagerObserver> {

	BOOL _initialized;
	FBSceneManager* _sceneManager;
	SBMainAlertManager* _alertManager;
	BSEventQueueLock* _suspensionLock;
	BOOL _alertManagerIsDeactivatingAlert;
	BOOL _alertManagerIsActivatingLockAlert;
	SBScreenTimeTrackingController* _screenTimeTrackingController;
	FBDisplayLayoutTransition* _displayLayoutTransition;
	SBWorkspaceTransaction* _currentTransaction;
	BSEventQueueLock* _currentTransactionLock;
	BSWatchdog* _transactionWatchdog;
	NSTimer* _relaunchTimer;
	NSMutableArray* _applicationsToRelaunch;
	SBWindow* _reachabilityWindow;
	SBWindowSelfHostWrapper* _reachabilityHostWrapper;
	SBWindow* _reachabilityEffectWindow;
	NSMutableDictionary* _extensionHandlersByType;
	NSMutableSet* _foregroundAppPidsWhenDisplaySecureModeWasEnabled;
	SBAppStatusBarSettingsAssertion* _statusBarVisibilityAssertion;
	NSMutableDictionary* _appActivationFlagsForSceneUpdates;

}

@property (nonatomic,retain,readonly) SBAlertManager * alertManager;                                         //@synthesize alertManager=_alertManager - In the implementation block
@property (nonatomic,retain) SBWorkspaceTransaction * currentTransaction;                                    //@synthesize currentTransaction=_currentTransaction - In the implementation block
@property (nonatomic,retain,readonly) FBSceneManager * sceneManager;                                         //@synthesize sceneManager=_sceneManager - In the implementation block
@property (nonatomic,readonly) BOOL alertManagerIsActivatingLockAlert;                                       //@synthesize alertManagerIsActivatingLockAlert=_alertManagerIsActivatingLockAlert - In the implementation block
@property (nonatomic,retain,readonly) NSSet * foregroundAppPidsWhenDisplaySecureModeWasEnabled;              //@synthesize foregroundAppPidsWhenDisplaySecureModeWasEnabled=_foregroundAppPidsWhenDisplaySecureModeWasEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_instanceIfExists;
+(id)_sharedInstanceWithNilCheckPolicy:(long long)arg1 ;
+(id)sharedInstance;
+(id)debugDescription;
+(void)start;
-(void)handleReachabilityModeActivated;
-(void)handleReachabilityModeDeactivated;
-(id)layoutController;
-(id)createRequestForApplicationActivation:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)executeTransitionRequest:(id)arg1 ;
-(id)createRequestWithOptions:(unsigned long long)arg1 ;
-(BOOL)requestTransitionWithOptions:(unsigned long long)arg1 builder:(/*^block*/id)arg2 validator:(/*^block*/id)arg3 ;
-(SBAlertManager *)alertManager;
-(id)_applicationForIdentifier:(id)arg1 ;
-(id)_workspaceApplicationForApplication:(id)arg1 ;
-(id)_selectTransactionForAppActivationRequest:(id)arg1 ;
-(BOOL)alertManagerIsActivatingLockAlert;
-(void)_handleOpenURLRequest:(id)arg1 application:(id)arg2 options:(id)arg3 activationSettings:(id)arg4 origin:(id)arg5 withResult:(/*^block*/id)arg6 ;
-(void)_updateFrontMostApplicationEventPort;
-(int)_statusBarStyleOverridesToCancel;
-(int)_statusBarStyleOverridesToCancelWithoutConsideringAlerts;
-(void)_registerHandler:(id)arg1 forExtensionPoint:(id)arg2 ;
-(void)_unregisterHandler:(id)arg1 forExtensionPoint:(id)arg2 ;
-(NSSet *)foregroundAppPidsWhenDisplaySecureModeWasEnabled;
-(id)initWithDisplay:(id)arg1 eventQueue:(id)arg2 ;
-(BOOL)_executeTransitionRequest:(id)arg1 options:(unsigned long long)arg2 validator:(/*^block*/id)arg3 ;
-(BOOL)requestTransitionWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)executeTransitionRequest:(id)arg1 withValidator:(/*^block*/id)arg2 ;
-(id)transactionForTransitionRequest:(id)arg1 ;
-(void)_memoryPressureRelieved:(id)arg1 ;
-(void)_memoryPressureWarn:(id)arg1 ;
-(void)_deviceWillEnableDisplaySecureMode:(id)arg1 ;
-(void)_deviceWillDisableDisplaySecureMode:(id)arg1 ;
-(void)_medusaEnabledStateChanged:(id)arg1 ;
-(id)_selectTransactionForAppActivationRequest:(id)arg1 canDeactivateAlerts:(BOOL)arg2 ;
-(id)_transactionForTransitionRequest:(id)arg1 canDeactivateAlerts:(BOOL)arg2 ;
-(BOOL)_preflightTransitionRequest:(id)arg1 ;
-(void)_determineSourceForTransitionRequest:(id)arg1 ;
-(BOOL)_executeAlertTransitionRequest:(id)arg1 ;
-(BOOL)_executeApplicationTransitionRequest:(id)arg1 ;
-(void)_disableReachabilityImmediately:(BOOL)arg1 ;
-(BOOL)_setCurrentTransactionForRequest:(id)arg1 fallbackProvider:(/*^block*/id)arg2 ;
-(id)_workspaceApplicationForBundleIdentifier:(id)arg1 ;
-(id)_selectTransactionForReturningToTheLockScreenFromApp:(id)arg1 forceToBuddy:(BOOL)arg2 withResult:(/*^block*/id)arg3 ;
-(id)_selectTransactionForReturningToTheLockScreenWithRequest:(id)arg1 fromApp:(id)arg2 ;
-(id)_selectTransactionForAppActivationUnderMainScreenLockRequest:(id)arg1 ;
-(id)_selectTransactionForAppActivationUnderMainScreenLock:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)starkScreenManagerDidChangeCurrentController:(id)arg1 ;
-(void)_launchNextPendedAutoLaunchApp;
-(void)_invalidateRelaunchTimer;
-(void)_scheduleRelaunchTimerIfNecessary;
-(BOOL)_handleSetupExited:(id)arg1 ;
-(void)_noteSceneUpdateDidActivateApp:(BOOL)arg1 withSceneIdentifier:(id)arg2 ;
-(void)_handleBuddyLaunchFinished;
-(BOOL)_applicationProcessExited:(id)arg1 withContext:(id)arg2 ;
-(id)_selectTransactionForAppExited:(id)arg1 ;
-(id)_selectTransactionForAppRelaunch:(id)arg1 ;
-(void)_handleOpenApplicationRequest:(id)arg1 options:(id)arg2 origin:(id)arg3 withResult:(/*^block*/id)arg4 ;
-(id)_validateRequestToOpenApplication:(id)arg1 options:(id)arg2 origin:(id)arg3 errorCode:(long long*)arg4 ;
-(void)_promptUnlockWithHandler:(/*^block*/id)arg1 ;
-(id)_handlerForExtensionPoint:(id)arg1 ;
-(void)_updateStatusBarTimeItemEnabled;
-(void)_acquireStatusBarVisibilityAssertion:(BOOL)arg1 ;
-(void)_releaseStatusBarVisibilityAssertion;
-(void)alertManager:(id)arg1 topAlert:(id)arg2 requestsWallpaperStyleChangeWithAnimationFactory:(id)arg3 ;
-(void)starkScreenController:(id)arg1 didChangeStateFromState:(long long)arg2 ;
-(void)_exitReachabilityModeWithCompletion:(/*^block*/id)arg1 ;
-(void)handleCancelReachabilityRecognizer:(id)arg1 ;
-(void)handleRevealNotificationCenterGesture:(id)arg1 ;
-(CGRect)sceneFrameForAlerts:(id)arg1 ;
-(double)sceneLevelForAlerts;
-(BOOL)alertManager:(id)arg1 shouldDeactivateDismissedAlert:(id)arg2 ;
-(id)alertManager:(id)arg1 newAlertWindowForScene:(id)arg2 ;
-(BOOL)alertManager:(id)arg1 defaultShouldAutorotateForAlert:(id)arg2 ;
-(long long)alertManager:(id)arg1 defaultInterfaceOrientationForPresentationOfAlert:(id)arg2 ;
-(unsigned long long)alertManager:(id)arg1 defaultSupportedInterfaceOrientationsForAlert:(id)arg2 ;
-(void)alertManager:(id)arg1 willActivateAlert:(id)arg2 overAlerts:(id)arg3 ;
-(void)alertManager:(id)arg1 didActivateAlert:(id)arg2 overAlerts:(id)arg3 ;
-(void)alertManager:(id)arg1 willDeactivateAlert:(id)arg2 top:(BOOL)arg3 ;
-(void)alertManager:(id)arg1 didDeactivateAlert:(id)arg2 top:(BOOL)arg3 ;
-(void)alertManager:(id)arg1 didChangeTopAlertFromAlert:(id)arg2 toAlert:(id)arg3 ;
-(void)alertManager:(id)arg1 topAlert:(id)arg2 didChangeStatusBarVisibility:(BOOL)arg3 ;
-(void)alertManager:(id)arg1 topAlertDidChangeOrientationEventsEnabled:(id)arg2 ;
-(void)alertManager:(id)arg1 willTearDownAlertWindow:(id)arg2 ;
-(void)alertManager:(id)arg1 didTearDownAlertWindow:(id)arg2 ;
-(void)alertManager:(id)arg1 didRemoveAlert:(id)arg2 fromWindow:(id)arg3 ;
-(void)starkScreenManagerWillChangeCurrentController:(id)arg1 ;
-(id)transactionForTransitionRequestDeactivatingAlerts:(id)arg1 ;
-(id)_selectTransactionForReturningToTheLockScreenWithResult:(/*^block*/id)arg1 ;
-(void)updateInterruptedByCallSettingsFrom:(id)arg1 to:(id)arg2 ;
-(FBSceneManager *)sceneManager;
-(void)_finishInitialization;
-(void)_suspend;
-(void)_resume;
-(void)dealloc;
-(id)init;
-(NSString *)debugDescription;
-(void)transactionDidComplete:(id)arg1 ;
-(void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3 ;
-(void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3 ;
-(void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3 success:(BOOL)arg4 ;
-(void)systemServicePrepareForShutdown:(id)arg1 andReboot:(BOOL)arg2 ;
-(void)systemServicePrepareForExit:(id)arg1 andRelaunch:(BOOL)arg2 ;
-(void)systemService:(id)arg1 canActivateApplication:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)systemService:(id)arg1 handleOpenApplicationRequest:(id)arg2 options:(id)arg3 origin:(id)arg4 withResult:(/*^block*/id)arg5 ;
-(void)systemService:(id)arg1 handleOpenURLRequest:(id)arg2 application:(id)arg3 options:(id)arg4 origin:(id)arg5 withResult:(/*^block*/id)arg6 ;
-(void)systemService:(id)arg1 isPasscodeLockedOrBlockedWithResult:(/*^block*/id)arg2 ;
-(void)systemService:(id)arg1 handleActions:(id)arg2 origin:(id)arg3 withResult:(/*^block*/id)arg4 ;
-(void)process:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3 ;
-(void)processDidExit:(id)arg1 ;
-(void)applicationProcessDidExit:(id)arg1 withContext:(id)arg2 ;
-(void)applicationProcessWillLaunch:(id)arg1 ;
-(void)applicationProcessDidLaunch:(id)arg1 ;
-(void)applicationProcessDebuggingStateDidChange:(id)arg1 ;
-(void)watchdogStarted:(id)arg1 ;
-(void)watchdogFired:(id)arg1 ;
-(void)processManager:(id)arg1 didAddProcess:(id)arg2 ;
-(void)processManager:(id)arg1 didRemoveProcess:(id)arg2 ;
-(SBWorkspaceTransaction *)currentTransaction;
-(void)setCurrentTransaction:(SBWorkspaceTransaction *)arg1 ;
@end

