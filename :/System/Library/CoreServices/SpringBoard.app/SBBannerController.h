/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBUIBannerTargetImplementation.h>
#import <SpringBoard/SBAssistantObserver.h>
#import <SpringBoard/SBAlertObserver.h>
#import <SpringBoard/SBBannerContextViewControllerDelegate.h>
#import <SpringBoard/SBBannerGestureHandlerDelegate.h>
#import <SpringBoard/SBBannerDismissSystemGestureRecognizerDelegate.h>
#import <SpringBoard/SBBulletinWindowClient.h>
#import <SpringBoard/SBBulletinBusyClient.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSHashTable, NSMutableArray, SBAlert, UIImage, SBBannerContainerViewController, SBBannerGestureHandler, NSMapTable, SBLockScreenActionContext, SBBannerDismissSystemGestureRecognizer, NSString;

@interface SBBannerController : NSObject <SBUIBannerTargetImplementation, SBAssistantObserver, SBAlertObserver, SBBannerContextViewControllerDelegate, SBBannerGestureHandlerDelegate, SBBannerDismissSystemGestureRecognizerDelegate, SBBulletinWindowClient, SBBulletinBusyClient, UIGestureRecognizerDelegate> {

	NSHashTable* _sources;
	NSMutableArray* _pendingBannerContextsNeedingRepop;
	SBAlert* _topAlert;
	UIImage* _bannerViewBackgroundImage;
	SBBannerContainerViewController* _bannerViewController;
	BOOL _soundIsPlaying;
	BOOL _dismissalOverdue;
	BOOL _replaceDelayIsActive;
	BOOL _showingStickyDurationBanner;
	BOOL _suppressingBanners;
	BOOL _enableDelayActive;
	BOOL _assistantIsFullyVisible;
	BOOL _locked;
	unsigned long long _transitionCount;
	long long _activeGestureType;
	SBBannerGestureHandler* _activeGestureHandler;
	long long _overdueDismissReason;
	/*^block*/id _overdueCompletionBlock;
	BOOL _dismissingBannerForAssistantReveal;
	BOOL _dismissingBannerForAssistantDismiss;
	/*^block*/id _assistantRevealCompletionBlock;
	/*^block*/id _assistantDismissCompletionBlock;
	NSMapTable* _bannerContextToViewControllerCache;
	SBLockScreenActionContext* _lockScreenActionContext;
	SBBannerDismissSystemGestureRecognizer* _dismissSystemGestureRecognizer;

}

@property (nonatomic,retain) SBAlert * topAlert;                                               //@synthesize topAlert=_topAlert - In the implementation block
@property (nonatomic,retain) SBLockScreenActionContext * lockScreenActionContext;              //@synthesize lockScreenActionContext=_lockScreenActionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) void* bannerTargetIdentifier; 
@property (nonatomic,readonly) long long bannerTargetIdiom; 
+(id)_sharedInstanceCreateIfNecessary:(BOOL)arg1 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(void)dismissBannerWithAnimation:(BOOL)arg1 reason:(long long)arg2 forceEvenIfBusy:(BOOL)arg3 ;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(void)alertBannerSuppressionChanged:(id)arg1 ;
-(void)_lockStateChanged:(id)arg1 ;
-(SBLockScreenActionContext *)lockScreenActionContext;
-(BOOL)isShowingBanner;
-(BOOL)isTransitioningBanner;
-(void)dismissBannerWithAnimation:(BOOL)arg1 reason:(long long)arg2 forceEvenIfBusy:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)invalidateLockScreenActionContext;
-(void)bulletinWindowStoppedBeingBusy;
-(void)_updateBannerSuppressionState;
-(void)_screenUndimmmed:(id)arg1 ;
-(void)_handleDismissBannerSystemGesture:(id)arg1 ;
-(void)setTopAlert:(SBAlert *)arg1 ;
-(void)_setOverdueCompletionBlock:(/*^block*/id)arg1 ;
-(void)_fireCompletionBlockForBannerAnimationForAssistantRevealIfNecessary;
-(void)_fireCompletionBlockForBannerAnimationForAssistantDismissIfNecessary;
-(void)_removeActiveGestureHandler;
-(void)_cancelBannerDismissTimers;
-(void)_tryToDismissWithAnimation:(BOOL)arg1 reason:(long long)arg2 forceEvenIfBusy:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)_bannerView;
-(void)setLockScreenActionContext:(SBLockScreenActionContext *)arg1 ;
-(void)_removePendingContextsForSourceNeedingRepop:(id)arg1 ;
-(id)_bannerContext;
-(void)dismissBannerWithAnimation:(BOOL)arg1 reason:(long long)arg2 ;
-(void)_presentBannerForContext:(id)arg1 reason:(long long)arg2 ;
-(BOOL)_dequeueBannerIfPossible;
-(id)_pendingBannerContextForSourceNeedingRepop:(id)arg1 ;
-(BOOL)_dequeueBannerIfPossibleIgnoringStickyBanner:(BOOL)arg1 existingDismissReason:(long long)arg2 ;
-(id)_newBannerContextViewController;
-(void)_dismissOverdueOrDequeueIfPossible;
-(void)_updateBannerSuppressionStateAndDequeueIfPossible:(BOOL)arg1 withDelay:(BOOL)arg2 ;
-(void)_dequeueAfterDelayIfPossible;
-(BOOL)_isItemShowable:(id)arg1 fromSource:(id)arg2 ;
-(id)_viewControllerForPresentation;
-(BOOL)_canDequeueIgnoringStickyBanner:(BOOL)arg1 ;
-(id)_dequeueNextBannerContext;
-(void)_performTransition:(long long)arg1 withAnimation:(BOOL)arg2 context:(id)arg3 reason:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)_updateGestureHandlerWithState:(long long)arg1 type:(long long)arg2 ;
-(void)_handleGestureState:(long long)arg1 location:(CGPoint)arg2 displacement:(double)arg3 velocity:(double)arg4 ;
-(id)_newGestureHandlerForType:(long long)arg1 ;
-(BOOL)_shouldPendStickyBannerContext:(id)arg1 withReason:(long long)arg2 ;
-(void)_handleSystemDismissGestureWithState:(long long)arg1 position:(CGPoint)arg2 velocity:(CGPoint)arg3 ;
-(void)_setBannerSticky:(BOOL)arg1 ;
-(void)_performRevealTransitionWithContext:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performReplaceTransitionWithContext:(id)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performHideTransitionWithContext:(id)arg1 animated:(BOOL)arg2 reason:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setBannerViewControllerForContext:(id)arg1 ;
-(void)_updateLockScreenForBannerVisible:(BOOL)arg1 ;
-(void)_addBannerGestureRecognizersToView:(id)arg1 ;
-(void)_playSoundIfNecessaryForContext:(id)arg1 ;
-(void)_stopCurrentSound;
-(void)_handleBannerPanGesture:(id)arg1 ;
-(void)_playSoundForContext:(id)arg1 ;
-(void)_soundDidFinishPlayingForBannerContext:(id)arg1 ;
-(void)_dismissIntervalElapsed;
-(void)_replaceIntervalElapsed;
-(void)_setupBannerDismissTimers;
-(double)currentBannerHeight;
-(BOOL)isTrackingDismissGesture;
-(BOOL)isShowingModalBannerWithKeyboard;
-(id)_bannerItem;
-(void)assistant:(id)arg1 viewWillAppear:(long long)arg2 ;
-(void)assistant:(id)arg1 viewDidAppear:(long long)arg2 ;
-(void)assistant:(id)arg1 viewWillDisappear:(long long)arg2 ;
-(void)assistant:(id)arg1 viewDidDisappear:(long long)arg2 ;
-(void)bannerViewController:(id)arg1 willSelectAction:(id)arg2 withContext:(id)arg3 ;
-(void)bannerViewControllerDidSelectAction:(id)arg1 ;
-(void)bannerViewControllerDidRequestDismissal:(id)arg1 ;
-(void)bannerViewControllerDidRequestSticky:(id)arg1 ;
-(void)bannerViewController:(id)arg1 didRequestSticky:(BOOL)arg2 ;
-(void)bannerViewControllerDidReceiveRaiseGesture:(id)arg1 ;
-(void)bannerViewControllerDidShrinkForKeyboard:(id)arg1 ;
-(void)bannerViewControllerDidPullDown:(id)arg1 ;
-(void)handler:(id)arg1 pulledBannerByDisplacement:(double)arg2 ;
-(void)setBannerAlpha:(double)arg1 ;
-(id)_bannerViewBackgroundImage;
-(id)_newBannerViewForContext:(id)arg1 ;
-(SBAlert *)topAlert;
-(double)bannerHeight;
-(void)dealloc;
-(id)init;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void*)bannerTargetIdentifier;
-(long long)bannerTargetIdiom;
-(void)registerSource:(id)arg1 ;
-(void)unregisterSource:(id)arg1 ;
-(void)modallyPresentBannerWithContext:(id)arg1 ;
-(BOOL)isShowingModalBanner;
-(void)signalSource:(id)arg1 ;
-(id)currentBannerContextForSource:(id)arg1 ;
-(void)dismissCurrentBannerContextForSource:(id)arg1 ;
-(void)cacheBannerForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeCachedBannerForContext:(id)arg1 ;
@end

