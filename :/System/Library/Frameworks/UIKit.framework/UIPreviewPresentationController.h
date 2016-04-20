/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:12 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPresentationController.h>
#import <UIKit/UIInteractionProgressObserver.h>
#import <UIKit/_UIPreviewActionSheetViewDelegate.h>
#import <UIKit/_UIPlatterMenuDynamicsControllerDelegate.h>
#import <UIKit/UIForcePresentationController.h>

@protocol _UIForcePresentationControllerDelegate;
@class UIGestureRecognizer, UIInteractionProgress, UIView, UIScrollView, _UIPreviewActionSheetView, UIPreviewForceInteractionProgress, _UIPreviewPresentationContainerView, UIVisualEffectView, _UIPreviewPresentationEffectView, _UIPreviewQuickActionView, NSLayoutConstraint, UIImageView, UITapGestureRecognizer, _UIPlatterMenuDynamicsController, _UIPlatterPanningVelocityIntegrator, _UIPreviewPresentationAnimator, NSString;

@interface UIPreviewPresentationController : UIPresentationController <UIInteractionProgressObserver, _UIPreviewActionSheetViewDelegate, _UIPlatterMenuDynamicsControllerDelegate, UIForcePresentationController> {

	BOOL _sourceViewSnapshotAndScaleTransformSuppressed;
	BOOL _didSendBeginEvent;
	BOOL _leadingQuickActionViewSelected;
	BOOL _trailingQuickActionViewSelected;
	BOOL _isAnimatingActionSheet;
	BOOL _hasAskedForDismissalInternally;
	BOOL _hasAskedForCommitInternally;
	BOOL _preDismissAnimationsInflight;
	BOOL _panningGestureRecognizerInProgress;
	BOOL _breathing;
	UIGestureRecognizer* _panningGestureRecognizer;
	/*^block*/id _presentationPhaseCompletionBlock;
	id<_UIForcePresentationControllerDelegate> _forcePresentationControllerDelegate;
	UIInteractionProgress* _interactionProgressForPresentation;
	unsigned long long _currentPresentationPhase;
	UIView* _actionSheetContainerView;
	UIScrollView* _containerScrollView;
	_UIPreviewActionSheetView* _previewActionSheet;
	UIPreviewForceInteractionProgress* _interactionProgressForCommit;
	UIPreviewForceInteractionProgress* _interactionProgressForBreathing;
	_UIPreviewPresentationContainerView* _presentationContainerView;
	UIVisualEffectView* _presentationBackgroundView;
	_UIPreviewPresentationEffectView* _revealContainerView;
	UIView* _highlightedPreviewCellSnapshotView;
	UIView* _initialPreviewCellSnapshotView;
	UIView* _updatedPreviewCellSnapshotView;
	_UIPreviewQuickActionView* _leadingQuickActionView;
	_UIPreviewQuickActionView* _trailingQuickActionView;
	NSLayoutConstraint* _leadingQuickActionViewEdgeConstraint;
	NSLayoutConstraint* _trailingQuickActionViewEdgeConstraint;
	UIImageView* _actionSheetAvailableImageView;
	NSLayoutConstraint* _containerScrollViewXConstraint;
	UITapGestureRecognizer* _tapToDismissGestureRecognizer;
	UIGestureRecognizer* _modalPreviewActionsPanningGestureRecognizer;
	_UIPlatterMenuDynamicsController* _platterMenuController;
	_UIPlatterPanningVelocityIntegrator* _revealPanningVelocityIntegrator;
	_UIPreviewPresentationAnimator* _unhighlightPreviewCellSnapshotViewAnimator;

}

@property (nonatomic,retain) UIInteractionProgress * interactionProgressForPresentation;                                         //@synthesize interactionProgressForPresentation=_interactionProgressForPresentation - In the implementation block
@property (assign,nonatomic) double presentationViewCornerRadius; 
@property (assign,nonatomic) unsigned long long currentPresentationPhase;                                                        //@synthesize currentPresentationPhase=_currentPresentationPhase - In the implementation block
@property (nonatomic,retain) UIView * actionSheetContainerView;                                                                  //@synthesize actionSheetContainerView=_actionSheetContainerView - In the implementation block
@property (nonatomic,retain) UIScrollView * containerScrollView;                                                                 //@synthesize containerScrollView=_containerScrollView - In the implementation block
@property (nonatomic,retain) _UIPreviewActionSheetView * previewActionSheet;                                                     //@synthesize previewActionSheet=_previewActionSheet - In the implementation block
@property (nonatomic,retain) UIPreviewForceInteractionProgress * interactionProgressForCommit;                                   //@synthesize interactionProgressForCommit=_interactionProgressForCommit - In the implementation block
@property (nonatomic,retain) UIPreviewForceInteractionProgress * interactionProgressForBreathing;                                //@synthesize interactionProgressForBreathing=_interactionProgressForBreathing - In the implementation block
@property (nonatomic,retain) _UIPreviewPresentationContainerView * presentationContainerView;                                    //@synthesize presentationContainerView=_presentationContainerView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * presentationBackgroundView;                                                    //@synthesize presentationBackgroundView=_presentationBackgroundView - In the implementation block
@property (nonatomic,retain) _UIPreviewPresentationEffectView * revealContainerView;                                             //@synthesize revealContainerView=_revealContainerView - In the implementation block
@property (nonatomic,retain) UIView * highlightedPreviewCellSnapshotView;                                                        //@synthesize highlightedPreviewCellSnapshotView=_highlightedPreviewCellSnapshotView - In the implementation block
@property (nonatomic,retain) UIView * initialPreviewCellSnapshotView;                                                            //@synthesize initialPreviewCellSnapshotView=_initialPreviewCellSnapshotView - In the implementation block
@property (nonatomic,retain) UIView * updatedPreviewCellSnapshotView;                                                            //@synthesize updatedPreviewCellSnapshotView=_updatedPreviewCellSnapshotView - In the implementation block
@property (nonatomic,retain) _UIPreviewQuickActionView * leadingQuickActionView;                                                 //@synthesize leadingQuickActionView=_leadingQuickActionView - In the implementation block
@property (nonatomic,retain) _UIPreviewQuickActionView * trailingQuickActionView;                                                //@synthesize trailingQuickActionView=_trailingQuickActionView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leadingQuickActionViewEdgeConstraint;                                          //@synthesize leadingQuickActionViewEdgeConstraint=_leadingQuickActionViewEdgeConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trailingQuickActionViewEdgeConstraint;                                         //@synthesize trailingQuickActionViewEdgeConstraint=_trailingQuickActionViewEdgeConstraint - In the implementation block
@property (nonatomic,retain) UIImageView * actionSheetAvailableImageView;                                                        //@synthesize actionSheetAvailableImageView=_actionSheetAvailableImageView - In the implementation block
@property (assign,nonatomic) BOOL leadingQuickActionViewSelected;                                                                //@synthesize leadingQuickActionViewSelected=_leadingQuickActionViewSelected - In the implementation block
@property (assign,nonatomic) BOOL trailingQuickActionViewSelected;                                                               //@synthesize trailingQuickActionViewSelected=_trailingQuickActionViewSelected - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * containerScrollViewXConstraint;                                                //@synthesize containerScrollViewXConstraint=_containerScrollViewXConstraint - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapToDismissGestureRecognizer;                                             //@synthesize tapToDismissGestureRecognizer=_tapToDismissGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * modalPreviewActionsPanningGestureRecognizer;                                  //@synthesize modalPreviewActionsPanningGestureRecognizer=_modalPreviewActionsPanningGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingActionSheet;                                                                        //@synthesize isAnimatingActionSheet=_isAnimatingActionSheet - In the implementation block
@property (nonatomic,retain) _UIPlatterMenuDynamicsController * platterMenuController;                                           //@synthesize platterMenuController=_platterMenuController - In the implementation block
@property (nonatomic,retain) _UIPlatterPanningVelocityIntegrator * revealPanningVelocityIntegrator;                              //@synthesize revealPanningVelocityIntegrator=_revealPanningVelocityIntegrator - In the implementation block
@property (assign,nonatomic) BOOL hasAskedForDismissalInternally;                                                                //@synthesize hasAskedForDismissalInternally=_hasAskedForDismissalInternally - In the implementation block
@property (assign,nonatomic) BOOL hasAskedForCommitInternally;                                                                   //@synthesize hasAskedForCommitInternally=_hasAskedForCommitInternally - In the implementation block
@property (assign,nonatomic) BOOL preDismissAnimationsInflight;                                                                  //@synthesize preDismissAnimationsInflight=_preDismissAnimationsInflight - In the implementation block
@property (assign,nonatomic) BOOL panningGestureRecognizerInProgress;                                                            //@synthesize panningGestureRecognizerInProgress=_panningGestureRecognizerInProgress - In the implementation block
@property (nonatomic,retain) _UIPreviewPresentationAnimator * unhighlightPreviewCellSnapshotViewAnimator;                        //@synthesize unhighlightPreviewCellSnapshotViewAnimator=_unhighlightPreviewCellSnapshotViewAnimator - In the implementation block
@property (getter=isBreathing,nonatomic,readonly) BOOL breathing;                                                                //@synthesize breathing=_breathing - In the implementation block
@property (assign,nonatomic) BOOL didSendBeginEvent;                                                                             //@synthesize didSendBeginEvent=_didSendBeginEvent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id presentationPhaseCompletionBlock;                                                                  //@synthesize presentationPhaseCompletionBlock=_presentationPhaseCompletionBlock - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * panningGestureRecognizer;                                                     //@synthesize panningGestureRecognizer=_panningGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL _sourceViewSnapshotAndScaleTransformSuppressed;                                                //@synthesize sourceViewSnapshotAndScaleTransformSuppressed=_sourceViewSnapshotAndScaleTransformSuppressed - In the implementation block
@property (nonatomic,readonly) UIView * _revealContainerView; 
@property (assign,nonatomic,__weak) id<_UIForcePresentationControllerDelegate> forcePresentationControllerDelegate;              //@synthesize forcePresentationControllerDelegate=_forcePresentationControllerDelegate - In the implementation block
+(BOOL)_shouldApplyVisualEffectsToPresentingView;
+(id)_visualEffectForPresentationPhase:(unsigned long long)arg1 traitCollection:(id)arg2 ;
-(void)dealloc;
-(BOOL)previewActionSheetCanSelectItem:(id)arg1 ;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2 ;
-(void)containerViewDidLayoutSubviews;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 ;
-(BOOL)shouldRemovePresentersView;
-(BOOL)_canDismissPresentation;
-(BOOL)_canCommitPresentation;
-(void)_willCommitPresentation;
-(id)presentationPhaseCompletionBlock;
-(void)setPresentationPhaseCompletionBlock:(id)arg1 ;
-(UIGestureRecognizer *)panningGestureRecognizer;
-(void)setPanningGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(BOOL)_sourceViewSnapshotAndScaleTransformSuppressed;
-(void)set_sourceViewSnapshotAndScaleTransformSuppressed:(BOOL)arg1 ;
-(UIView *)_revealContainerView;
-(id<_UIForcePresentationControllerDelegate>)forcePresentationControllerDelegate;
-(void)setForcePresentationControllerDelegate:(id<_UIForcePresentationControllerDelegate>)arg1 ;
-(BOOL)shouldPresentInFullscreen;
-(BOOL)_shouldDisableInteractionDuringTransitions;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(BOOL)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(void)containerViewWillLayoutSubviews;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(BOOL)_shouldChangeStatusBarViewController;
-(id)_viewsParticipatingInNavigationControllerTransition;
-(id)_animatorForContainmentTransition;
-(BOOL)_shouldSavePresentedViewControllerForStateRestoration;
-(id)platterView;
-(void)setInteractionProgressForPresentation:(UIInteractionProgress *)arg1 ;
-(UIInteractionProgress *)interactionProgressForPresentation;
-(UIPreviewForceInteractionProgress *)interactionProgressForCommit;
-(void)setInteractionProgressForCommit:(UIPreviewForceInteractionProgress *)arg1 ;
-(void)setCurrentPresentationPhase:(unsigned long long)arg1 ;
-(void)setRevealPanningVelocityIntegrator:(_UIPlatterPanningVelocityIntegrator *)arg1 ;
-(_UIPreviewPresentationContainerView *)presentationContainerView;
-(CGRect)_preferredSourceViewRect;
-(void)_updateRevealContainerViewForSourceRect:(CGRect)arg1 ;
-(void)setPresentationBackgroundView:(UIVisualEffectView *)arg1 ;
-(_UIPreviewPresentationEffectView *)revealContainerView;
-(void)setContainerScrollView:(UIScrollView *)arg1 ;
-(void)setPresentationContainerView:(_UIPreviewPresentationContainerView *)arg1 ;
-(void)setActionSheetContainerView:(UIView *)arg1 ;
-(void)setContainerScrollViewXConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)containerScrollViewXConstraint;
-(void)_unhighlightPreviewCellSnapshotViewsIfNeeded;
-(void)_stopUnhighlightPreviewCellSnapshotViewAnimationIfNeeded;
-(void)_hideQuickActions;
-(void)_endBreathing;
-(void)_triggerQuickActionHandlerIfNeeded;
-(UIVisualEffectView *)presentationBackgroundView;
-(void)_layoutForDismissTransition;
-(BOOL)hasAskedForCommitInternally;
-(void)_invokeCommitHandlerFromInteractionProgress;
-(UIPreviewForceInteractionProgress *)interactionProgressForBreathing;
-(void)_updateBreathingTransformWithProgress:(double)arg1 animated:(BOOL)arg2 ;
-(void)_layoutForPreviewInteractionProgress:(double)arg1 ;
-(BOOL)isBreathing;
-(_UIPlatterMenuDynamicsController *)platterMenuController;
-(UIImageView *)actionSheetAvailableImageView;
-(BOOL)_hasPreviewActions;
-(_UIPreviewActionSheetView *)previewActionSheet;
-(id)_makeAndAddToViewHierarchyPreviewActionSheetForMenuItems:(id)arg1 ;
-(void)setPreviewActionSheet:(_UIPreviewActionSheetView *)arg1 ;
-(CGPoint)_dismissedActionSheetCenterForActionSheet:(id)arg1 ;
-(UIView *)initialPreviewCellSnapshotView;
-(UIView *)updatedPreviewCellSnapshotView;
-(id)_preferredVisualEffectForPreviewPresentationPhase:(unsigned long long)arg1 ;
-(UIView *)highlightedPreviewCellSnapshotView;
-(void)setHighlightedPreviewCellSnapshotView:(UIView *)arg1 ;
-(void)setInitialPreviewCellSnapshotView:(UIView *)arg1 ;
-(void)setUpdatedPreviewCellSnapshotView:(UIView *)arg1 ;
-(void)_preparePresentationContainerViewForPreviewTransition;
-(void)_preparePresentationContainerViewForPreviewInteraction;
-(void)_configureActionSheetChromeViews;
-(void)_updateVisibiltyOfPreviewActionChromeForCurrentState;
-(void)_setupInteractionProgressForBreathing;
-(void)_configureDynamicsController;
-(void)_configureInitialActionSheetViewIfNeeded;
-(_UIPreviewQuickActionView *)leadingQuickActionView;
-(_UIPreviewQuickActionView *)trailingQuickActionView;
-(unsigned long long)currentPresentationPhase;
-(_UIPlatterPanningVelocityIntegrator *)revealPanningVelocityIntegrator;
-(BOOL)hasAskedForDismissalInternally;
-(BOOL)_platterIsInInitialPositionMostly;
-(BOOL)preDismissAnimationsInflight;
-(BOOL)leadingQuickActionViewSelected;
-(BOOL)trailingQuickActionViewSelected;
-(void)_updateRevealContainerView:(id)arg1 forTableViewCell:(id)arg2 sourceRect:(CGRect)arg3 ;
-(void)setRevealContainerView:(_UIPreviewPresentationEffectView *)arg1 ;
-(void)_layoutForRevealUnhighlightTransition:(double)arg1 ;
-(void)setUnhighlightPreviewCellSnapshotViewAnimator:(_UIPreviewPresentationAnimator *)arg1 ;
-(_UIPreviewPresentationAnimator *)unhighlightPreviewCellSnapshotViewAnimator;
-(CGPoint)centerForPlatterWithMenuViewPresentedForActionSheet:(id)arg1 ;
-(double)platterContainerCenterX;
-(double)platterContainerCenterY;
-(CGPoint)centerForMenuPresentedForActionSheet:(id)arg1 ;
-(CGPoint)centerForMenuDismissedForActionSheet:(id)arg1 ;
-(void)_dismissPresentation;
-(NSLayoutConstraint *)leadingQuickActionViewEdgeConstraint;
-(double)_leadingQuickActionOffsetForCenterPosition:(CGPoint)arg1 swipeView:(id)arg2 ;
-(NSLayoutConstraint *)trailingQuickActionViewEdgeConstraint;
-(double)_trailingQuickActionOffsetForCenterPosition:(CGPoint)arg1 swipeView:(id)arg2 ;
-(id)leadingSwipeActionView;
-(CGPoint)centerForPlatterWithMenuViewDismissed;
-(id)trailingSwipeActionView;
-(CGRect)platterContainerBounds;
-(double)minimumSpacingBetweenPlatterAndMenu;
-(CGRect)platterBounds;
-(BOOL)_hasPreviewQuickActions;
-(void)setPlatterMenuController:(_UIPlatterMenuDynamicsController *)arg1 ;
-(BOOL)panningGestureRecognizerInProgress;
-(void)setHasAskedForCommitInternally:(BOOL)arg1 ;
-(void)_dismissPresentationWithCompletion:(/*^block*/id)arg1 ;
-(double)_quickActionSelectionOffset;
-(void)_dismissForHandledActionWithCompletion:(/*^block*/id)arg1 ;
-(void)_presentSubActionSheetForPreviewActionGroup:(id)arg1 ;
-(UIView *)actionSheetContainerView;
-(void)setPreDismissAnimationsInflight:(BOOL)arg1 ;
-(void)setHasAskedForDismissalInternally:(BOOL)arg1 ;
-(BOOL)_platterIsSelectingPreviewActions;
-(BOOL)_hasSelectedQuickAction;
-(void)_dismissForSelectionQuickActionAnimated;
-(void)_restorePlatterToInitialStatePositionAnimatedWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_platterIsInInitialPosition;
-(UIScrollView *)containerScrollView;
-(void)setLeadingQuickActionViewEdgeConstraint:(NSLayoutConstraint *)arg1 ;
-(CGPoint)initialCenterForLeadingSwipeActionView;
-(void)setLeadingQuickActionView:(_UIPreviewQuickActionView *)arg1 ;
-(void)setTrailingQuickActionViewEdgeConstraint:(NSLayoutConstraint *)arg1 ;
-(CGPoint)initialCenterForTrailingSwipeActionView;
-(void)setTrailingQuickActionView:(_UIPreviewQuickActionView *)arg1 ;
-(void)setActionSheetAvailableImageView:(UIImageView *)arg1 ;
-(CGPoint)centerForMenuDismissed;
-(void)_panningGestureRecognizerDidFire:(id)arg1 ;
-(void)setPanningGestureRecognizerInProgress:(BOOL)arg1 ;
-(void)setDidSendBeginEvent:(BOOL)arg1 ;
-(BOOL)didSendBeginEvent;
-(void)updateSwipeActionsIfApplicable;
-(void)setupAdditionalModalGestureRecognizers;
-(double)_quickActionsSelectionThresholdForPreviewMenuItemStyle:(long long)arg1 ;
-(void)setLeadingQuickActionViewSelected:(BOOL)arg1 ;
-(void)setTrailingQuickActionViewSelected:(BOOL)arg1 ;
-(void)setInteractionProgressForBreathing:(UIPreviewForceInteractionProgress *)arg1 ;
-(void)_beginBreathing;
-(UIGestureRecognizer *)modalPreviewActionsPanningGestureRecognizer;
-(void)setModalPreviewActionsPanningGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)tapToDismissGestureRecognizer;
-(void)_tapToDismissPreviewWithActionsDidFire:(id)arg1 ;
-(void)setTapToDismissGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(CGPoint)centerForPlatterWithMenuViewPresented;
-(CGPoint)centerForMenuPresented;
-(void)platterMenuDynamicsControllerDidDismissWithController:(id)arg1 ;
-(void)platterMenuDynamicsController:(id)arg1 didMoveSwipeView:(id)arg2 toPosition:(CGPoint)arg3 ;
-(double)presentationViewCornerRadius;
-(void)setPresentationViewCornerRadius:(double)arg1 ;
-(void)_layoutForRevealTransition;
-(void)_revealTransitionDidComplete:(BOOL)arg1 ;
-(void)_layoutForPreviewTransition;
-(void)_previewTransitionDidComplete:(BOOL)arg1 ;
-(void)_dismissTransitionDidComplete:(BOOL)arg1 ;
-(CGPoint)_presentedActionSheetCenterForActionSheet:(id)arg1 ;
-(void)_restorePlatterToInitialStatePositionAnimated;
-(BOOL)isAnimatingActionSheet;
-(void)setIsAnimatingActionSheet:(BOOL)arg1 ;
@end

