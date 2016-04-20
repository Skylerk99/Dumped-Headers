/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSystemGestureWorkspaceTransaction.h>
#import <SpringBoard/SBMainDisplaySceneLayoutResizeUIManagerDelegate.h>

@class NSMutableArray, NSMutableDictionary, SBMainDisplaySceneLayoutViewController, SBLayoutElementViewController, FBUIApplicationSceneDeactivationAssertion, SBMainDisplaySceneLayoutResizeUIManager, SBMainWorkspaceTransaction, NSDate, NSTimer, NSString;

@interface SBAppResizeGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction <SBMainDisplaySceneLayoutResizeUIManagerDelegate> {

	NSMutableArray* _transactionCompletionBlocks;
	NSMutableArray* _finalActionCompletionBlocks;
	NSMutableDictionary* _cachedSnapshotViews;
	NSMutableDictionary* _cachedPlaceholderViews;
	BOOL _resizingSpeculatively;
	BOOL _hasResizedSpeculatively;
	BOOL _slidingOffOverlaySideApp;
	BOOL _finishingWithOverlaySideAppDismissal;
	BOOL _lastGestureWasFullResizeGesture;
	BOOL _performingFinalAction;
	SBMainDisplaySceneLayoutViewController* _layoutViewController;
	SBLayoutElementViewController* _primaryLayoutElementController;
	SBLayoutElementViewController* _sideLayoutElementController;
	FBUIApplicationSceneDeactivationAssertion* _appDeactivationAssertion;
	SBMainDisplaySceneLayoutResizeUIManager* _resizeUIManager;
	unsigned long long _lastResizeGestureRegion;
	SBMainWorkspaceTransaction* _currentWorkspaceTransaction;
	NSDate* _currentWorkspaceTransactionStartDate;
	NSTimer* _longPressPinTimer;
	NSTimer* _pinUnpinTapTimer;
	unsigned long long _pendingFinalActionCount;
	unsigned long long _currentGestureIdentifier;

}

@property (nonatomic,retain,readonly) SBMainDisplaySceneLayoutViewController * layoutViewController;                               //@synthesize layoutViewController=_layoutViewController - In the implementation block
@property (nonatomic,retain,readonly) SBLayoutElementViewController * primaryLayoutElementController;                              //@synthesize primaryLayoutElementController=_primaryLayoutElementController - In the implementation block
@property (nonatomic,retain,readonly) SBLayoutElementViewController * sideLayoutElementController;                                 //@synthesize sideLayoutElementController=_sideLayoutElementController - In the implementation block
@property (nonatomic,retain,readonly) FBUIApplicationSceneDeactivationAssertion * appDeactivationAssertion;                        //@synthesize appDeactivationAssertion=_appDeactivationAssertion - In the implementation block
@property (nonatomic,retain) SBMainDisplaySceneLayoutResizeUIManager * resizeUIManager;                                            //@synthesize resizeUIManager=_resizeUIManager - In the implementation block
@property (assign,nonatomic) unsigned long long lastResizeGestureRegion;                                                           //@synthesize lastResizeGestureRegion=_lastResizeGestureRegion - In the implementation block
@property (nonatomic,retain) SBMainWorkspaceTransaction * currentWorkspaceTransaction;                                             //@synthesize currentWorkspaceTransaction=_currentWorkspaceTransaction - In the implementation block
@property (nonatomic,copy) NSDate * currentWorkspaceTransactionStartDate;                                                          //@synthesize currentWorkspaceTransactionStartDate=_currentWorkspaceTransactionStartDate - In the implementation block
@property (assign,getter=isResizingSpeculatively,nonatomic) BOOL resizingSpeculatively;                                            //@synthesize resizingSpeculatively=_resizingSpeculatively - In the implementation block
@property (assign,nonatomic) BOOL hasResizedSpeculatively;                                                                         //@synthesize hasResizedSpeculatively=_hasResizedSpeculatively - In the implementation block
@property (assign,getter=isSlidingOffOverlaySideApp,nonatomic) BOOL slidingOffOverlaySideApp;                                      //@synthesize slidingOffOverlaySideApp=_slidingOffOverlaySideApp - In the implementation block
@property (assign,getter=isFinishingWithOverlaySideAppDismissal,nonatomic) BOOL finishingWithOverlaySideAppDismissal;              //@synthesize finishingWithOverlaySideAppDismissal=_finishingWithOverlaySideAppDismissal - In the implementation block
@property (assign,nonatomic) BOOL lastGestureWasFullResizeGesture;                                                                 //@synthesize lastGestureWasFullResizeGesture=_lastGestureWasFullResizeGesture - In the implementation block
@property (nonatomic,retain) NSTimer * longPressPinTimer;                                                                          //@synthesize longPressPinTimer=_longPressPinTimer - In the implementation block
@property (nonatomic,retain) NSTimer * pinUnpinTapTimer;                                                                           //@synthesize pinUnpinTapTimer=_pinUnpinTapTimer - In the implementation block
@property (assign,getter=isPerformingFinalAction,nonatomic) BOOL performingFinalAction;                                            //@synthesize performingFinalAction=_performingFinalAction - In the implementation block
@property (assign,nonatomic) unsigned long long pendingFinalActionCount;                                                           //@synthesize pendingFinalActionCount=_pendingFinalActionCount - In the implementation block
@property (assign,nonatomic) unsigned long long currentGestureIdentifier;                                                          //@synthesize currentGestureIdentifier=_currentGestureIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resizeGestureZoomAnimationFactory;
+(double)_rubberbandingStartScreenEdgeMargin;
+(id)resizeGestureZoomAnimationSettings;
-(void)systemGestureStateChanged:(id)arg1 ;
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)_finishWithCompletionType:(long long)arg1 ;
-(SBLayoutElementViewController *)sideLayoutElementController;
-(SBLayoutElementViewController *)primaryLayoutElementController;
-(id)initWithTransitionRequest:(id)arg1 layoutViewController:(id)arg2 ;
-(SBMainDisplaySceneLayoutResizeUIManager *)resizeUIManager;
-(void)setResizeUIManager:(SBMainDisplaySceneLayoutResizeUIManager *)arg1 ;
-(void)_dismissResizeUIAnimated:(BOOL)arg1 ;
-(SBMainDisplaySceneLayoutViewController *)layoutViewController;
-(long long)_sideAppWidthForResizeGestureRegion:(unsigned long long)arg1 ;
-(BOOL)_canTransitionIntoFullResizeWithLayoutState:(id)arg1 ;
-(double)_maxRubberBandOffsetForAppWidth:(double)arg1 ;
-(void)_getPrimaryAppTransform:(CGAffineTransform*)arg1 sideAppTransform:(CGAffineTransform*)arg2 forPrimaryTranslationAmount:(double)arg3 primaryScaleAmount:(double)arg4 sideTranslationAmount:(double)arg5 sideScaleAmount:(double)arg6 ;
-(unsigned long long)_resizeGestureRegionForLocation:(double)arg1 ;
-(void)_getPrimaryAppFrame:(CGRect*)arg1 sideAppFrame:(CGRect*)arg2 grabberHorizontalOffset:(double*)arg3 forResizeGestureLocation:(double)arg4 region:(unsigned long long)arg5 allowRubberbanding:(BOOL)arg6 ;
-(void)_getPrimaryAppTransform:(CGAffineTransform*)arg1 sideAppTransform:(CGAffineTransform*)arg2 grabberHorizontalOffset:(double*)arg3 forResizeGestureRegion:(unsigned long long)arg4 location:(double)arg5 allowRubberbanding:(BOOL)arg6 ;
-(unsigned long long)lastResizeGestureRegion;
-(void)setLastResizeGestureRegion:(unsigned long long)arg1 ;
-(void)_updateSlideOffUIWithDistance:(double)arg1 gestureRecognizer:(id)arg2 ;
-(BOOL)isSlidingOffOverlaySideApp;
-(void)setSlidingOffOverlaySideApp:(BOOL)arg1 ;
-(void)_updateFullResizeUIFromGestureRecognizer:(id)arg1 ;
-(void)_updateSlideOffUIFromGestureRecognizer:(id)arg1 ;
-(NSTimer *)pinUnpinTapTimer;
-(id)resizeGestureRecognizer;
-(BOOL)hasResizedSpeculatively;
-(SBMainWorkspaceTransaction *)currentWorkspaceTransaction;
-(id)_transactionForExecutingApplicationTransitionContext:(id)arg1 eventLabel:(id)arg2 ;
-(void)setResizingSpeculatively:(BOOL)arg1 ;
-(void)setHasResizedSpeculatively:(BOOL)arg1 ;
-(void)_addChildWorkspaceTransaction:(id)arg1 ;
-(BOOL)isFinishingWithOverlaySideAppDismissal;
-(void)_restartResizeUIWithGestureRecognizer:(id)arg1 ;
-(void)_updateResizeUIFromGestureRecognizer:(id)arg1 ;
-(BOOL)_isResizeGestureInSpeculativeResizeRegionForLocation:(double)arg1 ;
-(void)_beginSpeculativeResizeIfAppropriate;
-(void)_resizeGestureFinishedWithState:(long long)arg1 dividerPosition:(double)arg2 velocity:(double)arg3 absoluteDistanceTraveled:(double)arg4 directionalDistanceTraveled:(double)arg5 numberOfTouches:(unsigned long long)arg6 ;
-(void)_resizeGestureFinishedWithState:(long long)arg1 gestureRegion:(unsigned long long)arg2 velocity:(double)arg3 distanceTraveled:(double)arg4 numberOfTouches:(unsigned long long)arg5 ;
-(unsigned long long)_finalActionForGestureState:(long long)arg1 gestureRegion:(unsigned long long)arg2 distanceTraveled:(double)arg3 numberOfTouches:(unsigned long long)arg4 ;
-(void)setFinishingWithOverlaySideAppDismissal:(BOOL)arg1 ;
-(BOOL)isPerformingFinalAction;
-(BOOL)_shouldObscureAppsBeforePerformingFinalAction:(unsigned long long)arg1 ;
-(unsigned long long)_requiredResizeUIStateBeforeAnimatingViewsForFinalAction:(unsigned long long)arg1 ;
-(void)_animateElementViewsForFinalAction:(unsigned long long)arg1 animationFactory:(id)arg2 initialVelocity:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_performWhenCurrentWorkspaceTransactionCompletesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)pendingFinalActionCount;
-(void)setPendingFinalActionCount:(unsigned long long)arg1 ;
-(void)_performWhenCurrentFinalActionCompletesUsingBlock:(/*^block*/id)arg1 ;
-(void)_performFinalAction:(unsigned long long)arg1 velocity:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setPerformingFinalAction:(BOOL)arg1 ;
-(unsigned long long)currentGestureIdentifier;
-(unsigned long long)_affectedLayoutRolesForFinalAction:(unsigned long long)arg1 ;
-(id)_transitionContextForFinalAction:(unsigned long long)arg1 ;
-(unsigned long long)_requiredResizeUIStateBeforeDismissingResizeUIForFinalAction:(unsigned long long)arg1 ;
-(void)_dismissResizeUI;
-(void)_tellElementViewsWeEndedResize;
-(BOOL)lastGestureWasFullResizeGesture;
-(CGRect)_appFrameForElementWithRole:(long long)arg1 inLayoutState:(id)arg2 withSideAppPresentationStyle:(long long)arg3 sideAppWidth:(long long)arg4 inCoordinateSpace:(id)arg5 withHeight:(double)arg6 ;
-(void)setCurrentGestureIdentifier:(unsigned long long)arg1 ;
-(void)setLastGestureWasFullResizeGesture:(BOOL)arg1 ;
-(void)_tellElementViewsWeWillBeginResize;
-(void)_longPressPinTimerDidFire:(id)arg1 ;
-(void)setLongPressPinTimer:(NSTimer *)arg1 ;
-(void)_pinUnpinTapTimerDidFire:(id)arg1 ;
-(void)setPinUnpinTapTimer:(NSTimer *)arg1 ;
-(void)setCurrentWorkspaceTransaction:(SBMainWorkspaceTransaction *)arg1 ;
-(void)setCurrentWorkspaceTransactionStartDate:(NSDate *)arg1 ;
-(NSTimer *)longPressPinTimer;
-(FBUIApplicationSceneDeactivationAssertion *)appDeactivationAssertion;
-(void)_bailOutOfResizeUIInAnUnsightlyManner;
-(id)resizeUIManager:(id)arg1 cachedSceneSnapshotViewForLayoutElementViewController:(id)arg2 ;
-(void)resizeUIManager:(id)arg1 didCreateSceneSnapshotView:(id)arg2 forLayoutElementViewController:(id)arg3 ;
-(id)resizeUIManager:(id)arg1 cachedResizingPlaceholderViewForLayoutElementViewController:(id)arg2 ;
-(void)resizeUIManager:(id)arg1 didCreateResizingPlacholderView:(id)arg2 forLayoutElementViewController:(id)arg3 ;
-(void)resizeUIManager:(id)arg1 willChangeToState:(unsigned long long)arg2 ;
-(void)resizeUIManager:(id)arg1 willChangeDisplayModeOfAppController:(id)arg2 toDisplayMode:(long long)arg3 ;
-(void)_getPrimaryAppTransform:(CGAffineTransform*)arg1 forPrimaryTranslationAmount:(double)arg2 primaryScaleAmount:(double)arg3 ;
-(void)_getSideAppTransform:(CGAffineTransform*)arg1 forSideTranslationAmount:(double)arg2 sideScaleAmount:(double)arg3 ;
-(NSDate *)currentWorkspaceTransactionStartDate;
-(BOOL)isResizingSpeculatively;
-(void)_invalidateTimers;
-(void)dealloc;
-(double)_rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 outside:(BOOL*)arg5 ;
-(void)_resizeGestureDidUpdate:(id)arg1 ;
-(void)_didComplete;
-(BOOL)_canBeInterrupted;
-(void)_begin;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(void)_didInterruptWithReason:(id)arg1 ;
@end

