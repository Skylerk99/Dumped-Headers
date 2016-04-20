/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:48 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GAXSpringboardServer/GAX_AXSpringBoardServerInstanceDelegate.h>
#import <AXSpringBoardServerInstance/AXSpringBoardServerInstanceDelegate.h>

@class UIWindow, NSMutableArray, UIAlertController, AXAssertion, AXSpringBoardServerSideAppManager, NSString;

@interface AXSpringBoardServerHelper : NSObject <GAX_AXSpringBoardServerInstanceDelegate, AXSpringBoardServerInstanceDelegate> {

	/*^block*/id _alertHandler;
	UIWindow* _presentationWindow;
	NSMutableArray* _visibleTripleClickItems;
	BOOL _shouldOverrideInterfaceOrientation;
	NSMutableArray* _notificationObservers;
	UIAlertController* _zoomConflictController;
	UIAlertController* _zoomTripleClickController;
	UIAlertController* _zoomBuddyUsageController;
	UIAlertController* _switchUsageConfirmedController;
	UIAlertController* _voiceOverUsageConfirmedController;
	UIAlertController* _touchAccommodationsUsageConfirmedController;
	UIAlertController* _tripleClickAlertController;
	double _lastVoiceAssetUpdateTime;
	UIAlertController* _alertControllerToDismissAfterPresentation;
	AXAssertion* _disableSystemGesturesAssertionForAlert;
	AXSpringBoardServerSideAppManager* _sideAppManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIAlertController * alertControllerToDismissAfterPresentation;              //@synthesize alertControllerToDismissAfterPresentation=_alertControllerToDismissAfterPresentation - In the implementation block
@property (nonatomic,retain) AXAssertion * disableSystemGesturesAssertionForAlert;                       //@synthesize disableSystemGesturesAssertionForAlert=_disableSystemGesturesAssertionForAlert - In the implementation block
@property (nonatomic,retain) AXSpringBoardServerSideAppManager * sideAppManager;                         //@synthesize sideAppManager=_sideAppManager - In the implementation block
+(void)initialize;
+(id)_lockScreenManager;
+(void)_updateAvailableSpeechAssets;
+(id)_assistantController;
+(id)_iconController;
+(id)_uiController;
+(id)_backlightController;
+(id)_awayController;
+(id)_lockController;
+(id)_notificationCenterController;
+(id)_syncController;
+(id)_wallpaperController;
+(id)_applicationController;
-(void)endRequiringWallpaperWithServerInstance:(id)arg1 ;
-(id)serverInstance:(id)arg1 appIconForBundleID:(id)arg2 format:(int)arg3 ;
-(id)serverInstance:(id)arg1 appNameForDisplayID:(id)arg2 ;
-(id)serverInstance:(id)arg1 mainScreenContextHostManagerForApplicationWithIdentifier:(id)arg2 ;
-(id)serverInstance:(id)arg1 hostViewForApplicationContextHostManager:(id)arg2 enableAndOrderFront:(BOOL)arg3 ;
-(void)serverInstance:(id)arg1 disableHostingForApplicationContextHostManager:(id)arg2 withHostView:(id)arg3 ;
-(id)snapshotInCallServiceRemoteViewWithServerInstance:(id)arg1 ;
-(id)mainSceneWindowWithServerInstance:(id)arg1 ;
-(id)mainScreenAlertWindowWithServerInstance:(id)arg1 ;
-(void)serverInstance:(id)arg1 activateApp:(id)arg2 ;
-(void)quitTopApplicationWithServerInstance:(id)arg1 ;
-(void)updateLockAndIdleTimersWithServerInstance:(id)arg1 ;
-(void)beginRequiringWallpaperWithServerInstance:(id)arg1 ;
-(void)animateWallpaperStyleToNormalWithServerInstance:(id)arg1 ;
-(void)animateWallpaperStyleToOriginalWithServerInstance:(id)arg1 ;
-(id)_wallpaperStyleAnimationFactoryWithDelay:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_visibleTripleClickItems;
-(id)_titleForTripleClickOption:(int)arg1 ;
-(BOOL)_valueForTripleClickOption:(int)arg1 ;
-(void)_performValidation;
-(void)_monitorSpeechAssetChanges;
-(void)setSideAppManager:(AXSpringBoardServerSideAppManager *)arg1 ;
-(void)_initializePassKitPrearmAccessibility;
-(id)_speechAssetUpdaterClient;
-(void)_clientUpdateAvailableSpeechAssets;
-(void)_checkClientForUpdates:(BOOL)arg1 ;
-(void)_axOptionChanged:(id)arg1 ;
-(void)_checkForAssetUpdatesNowAndNextWeek;
-(void)_handleTripleClickAskAlert;
-(void)_handleZoomInBuddyAlert;
-(void)_handleVoiceOverUsageConfirmation;
-(void)_handleZoomConflictAlert:(id)arg1 ;
-(void)_handleSwitchUsageConfirmed;
-(void)_handleTouchAccommodationsUsageConfirmed;
-(void)_handleZoomTripleClickAfterConflict;
-(void)_toggleTripleClickDisplay;
-(void)_dismissAndReleaseAlertController:(id)arg1 ;
-(BOOL)accessibilityShowNotificationCenter:(BOOL)arg1 ;
-(BOOL)accessibilityShowControlCenter:(BOOL)arg1 ;
-(AXSpringBoardServerSideAppManager *)sideAppManager;
-(void)_accessibilitySetAllowShowNotificationGestureOverride:(BOOL)arg1 ;
-(BOOL)_accessibilityIsUILocked;
-(BOOL)isBuddyRunning;
-(BOOL)isPreferencesFrontmost;
-(void)_cleanupAlertController:(id)arg1 ;
-(BOOL)_shouldShowTCOption:(int)arg1 ;
-(void)_sortVisibleItems;
-(void)_handleAlertActionPress:(id)arg1 controller:(id)arg2 ;
-(void)_displayAlertController:(id)arg1 ;
-(UIAlertController *)alertControllerToDismissAfterPresentation;
-(void)setAlertControllerToDismissAfterPresentation:(UIAlertController *)arg1 ;
-(AXAssertion *)disableSystemGesturesAssertionForAlert;
-(void)setDisableSystemGesturesAssertionForAlert:(AXAssertion *)arg1 ;
-(void)dismissAlertWithCancel;
-(void)_handleUsageConfirmationDialogWithMessage:(id)arg1 storedController:(id*)arg2 ;
-(void)serverInstance:(id)arg1 showAlertType:(long long)arg2 withHandler:(/*^block*/id)arg3 withData:(id)arg4 ;
-(void)hideAlertWithServerInstance:(id)arg1 ;
-(BOOL)handleToggleIncomingCallWithServerInstance:(id)arg1 ;
-(double)volumeLevelWithServerInstance:(id)arg1 ;
-(BOOL)isSideSwitchUsedForOrientationWithServerInstance:(id)arg1 ;
-(BOOL)isRingerMutedWithServerInstance:(id)arg1 ;
-(BOOL)isOrientationLockedWithServerInstance:(id)arg1 ;
-(void)serverInstance:(id)arg1 setOrientationLocked:(BOOL)arg2 ;
-(void)openCustomGestureCreationForASTWithServerInstance:(id)arg1 ;
-(void)openCustomGestureCreationForSCATWithServerInstance:(id)arg1 ;
-(void)resetDimTimerWithServerInstance:(id)arg1 ;
-(void)serverInstance:(id)arg1 showSpeechPlaybackControls:(BOOL)arg2 ;
-(double)reachabilityOffsetWithServerInstance:(id)arg1 ;
-(BOOL)_accessibilityAllowShowNotificationGestureOverride;
-(id)frontmostAppProcessWithServerInstance:(id)arg1 ;
-(BOOL)shouldOverrideInterfaceOrientation;
-(void)_handleHomeOrLockButtonPress;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(BOOL)isScreenLockedWithServerInstance:(id)arg1 ;
-(BOOL)isPasscodeRequiredOnLockWithServerInstance:(id)arg1 ;
-(BOOL)isSystemSleepingWithServerInstance:(id)arg1 ;
-(BOOL)isSyncingRestoringResettingOrUpdatingWithServerInstance:(id)arg1 ;
-(BOOL)areSystemGesturesDisabledNativelyWithServerInstance:(id)arg1 ;
-(BOOL)areSystemGesturesDisabledByAccessibilityWithServerInstance:(id)arg1 ;
-(id)installedAppsWithServerInstance:(id)arg1 ;
-(void)unlockDeviceWithServerInstance:(id)arg1 ;
-(void)backboardSnarfedMenuDownWithServerInstance:(id)arg1 ;
-(BOOL)isMediaPlayingWithServerInstance:(id)arg1 forBundleId:(id)arg2 ;
-(void)serverInstance:(id)arg1 pauseMedia:(BOOL)arg2 forBundleId:(id)arg3 ;
-(BOOL)hasActiveCallWithServerInstance:(id)arg1 ;
-(BOOL)hasActiveOrPendingCallWithServerInstance:(id)arg1 ;
-(BOOL)hasActiveOrPendingCallOrFaceTimeWithServerInstance:(id)arg1 ;
-(BOOL)isMakingEmergencyCallWithServerInstance:(id)arg1 ;
-(BOOL)isNotificationCenterVisibleWithServerInstance:(id)arg1 ;
-(void)toggleNotificationCenterWithServerInstance:(id)arg1 ;
-(BOOL)isControlCenterVisibleWithServerInstance:(id)arg1 ;
-(BOOL)serverInstance:(id)arg1 showNotificationCenter:(BOOL)arg2 ;
-(void)serverInstance:(id)arg1 showControlCenter:(BOOL)arg2 ;
-(BOOL)isAppSwitcherVisibleWithServerInstance:(id)arg1 ;
-(void)openAppSwitcherWithServerInstance:(id)arg1 ;
-(void)dismissAppSwitcherWithServerInstance:(id)arg1 ;
-(void)revealSpotlightWithServerInstance:(id)arg1 ;
-(BOOL)isSideSwitcherVisibleWithServerInstance:(id)arg1 ;
-(BOOL)clearSideAppStateWithServerInstance:(id)arg1 ;
-(void)openSiriWithServerInstance:(id)arg1 ;
-(void)dismissSiriWithServerInstance:(id)arg1 ;
-(BOOL)isSiriVisibleWithServerInstance:(id)arg1 ;
-(void)setSiriIsTalking:(BOOL)arg1 withServerInstance:(id)arg2 ;
-(void)openVoiceControlWithServerInstance:(id)arg1 ;
-(BOOL)isVoiceControlRunningWithServerInstance:(id)arg1 ;
-(BOOL)isSpeakThisTemporarilyDisabledWithServerInstance:(id)arg1 ;
-(id)allowedMedusaGesturesWithServerInstance:(id)arg1 ;
-(BOOL)serverInstance:(id)arg1 performMedusaGesture:(unsigned long long)arg2 ;
-(id)serverInstance:(id)arg1 springBoardSystemInfoQuery:(unsigned long long)arg2 ;
-(BOOL)isSystemAppShowingAnAlertWithServerInstance:(id)arg1 ;
-(id)focusedAppPIDWithServerInstance:(id)arg1 ;
-(int)purpleBuddyPIDWithServerInstance:(id)arg1 ;
-(id)runningAppPIDsWithServerInstance:(id)arg1 ;
-(BOOL)isSystemAppFrontmostExcludingSiri:(BOOL)arg1 withServerInstance:(id)arg2 ;
-(BOOL)isPurpleBuddyAppFrontmostWithServerInstance:(id)arg1 ;
-(BOOL)isSettingsAppFrontmostWithServerInstance:(id)arg1 ;
-(BOOL)isMultiTaskingActive;
-(id)focusedAppsWithServerInstance:(id)arg1 ;
-(id)serverInstance:(id)arg1 appWithIdentifier:(id)arg2 ;
-(id)focusedAppProcessWithServerInstance:(id)arg1 ;
-(id)runningAppProcessesWithServerInstance:(id)arg1 ;
-(void)setReachabilityActive:(BOOL)arg1 ;
@end

