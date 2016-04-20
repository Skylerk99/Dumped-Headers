/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDimmingViewDelegate.h>

@protocol _UISearchControllerPresenting, UIViewControllerTransitionCoordinator;
@class UIPresentationController, UIView, UIDimmingView;

@interface _UISearchPresentationAssistant : NSObject <UIDimmingViewDelegate> {

	UIPresentationController* _searchPresentationController;
	UIView* _searchBarContainerView;
	UIDimmingView* _dimmingView;
	BOOL _isFormSheetPresentation;
	BOOL _presentationWasAnimated;
	UIPresentationController*<_UISearchControllerPresenting> _adaptivePresentationController;
	id<UIViewControllerTransitionCoordinator> _transitioningToSizeCoordinator;

}

@property (assign,nonatomic) BOOL presentationWasAnimated;                                                                         //@synthesize presentationWasAnimated=_presentationWasAnimated - In the implementation block
@property (assign,nonatomic) UIPresentationController*<_UISearchControllerPresenting> adaptivePresentationController;              //@synthesize adaptivePresentationController=_adaptivePresentationController - In the implementation block
@property (nonatomic,retain) id<UIViewControllerTransitionCoordinator> transitioningToSizeCoordinator;                             //@synthesize transitioningToSizeCoordinator=_transitioningToSizeCoordinator - In the implementation block
-(void)dealloc;
-(id)initWithSearchPresentationController:(id)arg1 ;
-(void)setPresentationWasAnimated:(BOOL)arg1 ;
-(void)ensureAppropriatelySizedSearchBar:(id)arg1 ;
-(id)searchBarContainerView;
-(BOOL)searchBarToBecomeTopAttached;
-(double)statusBarAdjustment;
-(id)dimmingView;
-(void)setAdaptivePresentationController:(UIPresentationController*<_UISearchControllerPresenting>)arg1 ;
-(double)resultsControllerContentOffset;
-(BOOL)shouldAccountForStatusBar;
-(UIPresentationController*<_UISearchControllerPresenting>)adaptivePresentationController;
-(void)dimmingViewWasTapped:(id)arg1 ;
-(BOOL)presentationIsPopoverToOverFullScreenAdaptation;
-(id)_searchBarContainerSuperview;
-(CGRect)optimalFrameForSearchBar:(id)arg1 ;
-(BOOL)_currentTransitionIsRotating;
-(BOOL)searchBarWillResizeForScopeBar;
-(CGRect)_containerFrame;
-(id)_searchControllerPresenting;
-(BOOL)_statusBarPreferredHiddenForInterfaceOrientation:(long long)arg1 ;
-(id)locateNavigationController;
-(double)_statusBarHeightChangeDueToRotation;
-(BOOL)_statusBarPreferredHidden;
-(void)removeContainerViewFromSuperview;
-(CGSize)updateSearchBarContainerFrame;
-(BOOL)presentationWasAnimated;
-(id<UIViewControllerTransitionCoordinator>)transitioningToSizeCoordinator;
-(void)setTransitioningToSizeCoordinator:(id<UIViewControllerTransitionCoordinator>)arg1 ;
@end

