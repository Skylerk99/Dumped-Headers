/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>

@protocol UIPageControllerDelegate;
@class NSMutableArray, UIView, UIScrollView, UIPageControl, UIViewController;

@interface UIPageController : UIViewController {

	NSMutableArray* _viewControllers;
	UIView* _wrapperViews[3];
	int _notificationState[3];
	UIScrollView* _scrollView;
	UIPageControl* _pageControl;
	id<UIPageControllerDelegate> _delegate;
	int _pageSpacing;
	long long _visibleIndex;
	long long _pageCount;
	struct {
		unsigned delegateViewControllerAtIndex : 1;
		unsigned delegateWillBeginPaging : 1;
		unsigned delegateDidEndPaging : 1;
		unsigned displaysPageControl : 1;
		unsigned wraps : 1;
	}  _pageControllerFlags;

}

@property (assign,nonatomic) id<UIPageControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double pageSpacing; 
@property (assign,nonatomic) BOOL displaysPageControl; 
@property (nonatomic,retain,readonly) UIViewController * visibleViewController; 
@property (assign,nonatomic) long long pageCount; 
@property (assign,nonatomic) long long visibleIndex; 
@property (assign,nonatomic) BOOL wraps; 
-(id)pl_existingViewControllerAtIndex:(unsigned long long)arg1 ;
-(void)setVisibleIndex:(long long)arg1 preservingLoadedViewControllers:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)reloadViewControllerAtIndex:(long long)arg1 ;
-(id)_pageControllerScrollView;
-(void)setDelegate:(id<UIPageControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<UIPageControllerDelegate>)delegate;
-(id)_scrollView;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_isSupportedInterfaceOrientation:(long long)arg1 ;
-(id)_nextViewController;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(BOOL)_allowsAutorotation;
-(id)rotatingHeaderView;
-(id)rotatingFooterView;
-(BOOL)_shouldUseOnePartRotation;
-(void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)_getRotationContentSettings:(SCD_Struct_UI35*)arg1 ;
-(void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 ;
-(UIViewController *)visibleViewController;
-(long long)pageCount;
-(void)_scrollView:(id)arg1 boundsDidChangeToSize:(CGSize)arg2 ;
-(void)_scrollViewDidScroll:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(void)_scrollViewWillBeginPaging;
-(void)_scrollViewDidEndPaging;
-(long long)visibleIndex;
-(CGRect)_scrollViewFrame;
-(void)_createPageControl;
-(BOOL)_isViewControllerBeingUnloaded:(id)arg1 atIndex:(long long)arg2 ;
-(void)_adjustScrollViewContentInsets;
-(void)_replaceViewControllerAtIndex:(long long)arg1 withViewController:(id)arg2 ;
-(id)_visibleViewController;
-(void)_setPreviousViewController:(id)arg1 ;
-(void)_setVisibleViewController:(id)arg1 ;
-(void)_notifyVisibleViewController:(int)arg1 animated:(BOOL)arg2 ;
-(void)_setNextViewController:(id)arg1 ;
-(id)_loadPreviousViewController;
-(id)_loadVisibleViewControllerAndNotify:(BOOL)arg1 ;
-(id)_loadNextViewController;
-(id)_previousViewController;
-(void)_notifyViewController:(id)arg1 ofState:(int)arg2 previousState:(int)arg3 animated:(BOOL)arg4 ;
-(int)_previousViewControllerNotificationState;
-(int)_visibleViewControllerNotificationState;
-(int)_nextViewControllerNotificationState;
-(void)_notifyPreviousViewController:(int)arg1 animated:(BOOL)arg2 ;
-(void)_notifyNextViewController:(int)arg1 animated:(BOOL)arg2 ;
-(BOOL)_hasPreviousViewController;
-(BOOL)_hasNextViewController;
-(void)_setNextViewControllerNotificationState:(int)arg1 ;
-(void)_setVisibleViewControllerNotificationState:(int)arg1 ;
-(void)_setPreviousViewControllerNotificationState:(int)arg1 ;
-(void)setVisibleIndex:(long long)arg1 ;
-(BOOL)_needToLoadPrevious;
-(BOOL)_needToLoadNext;
-(void)setVisibleIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_pageChanged:(id)arg1 ;
-(BOOL)_doesVisibleViewControllerSupportInterfaceOrientation:(long long)arg1 ;
-(void)setPageSpacing:(double)arg1 ;
-(double)pageSpacing;
-(BOOL)_needToLoadVisible;
-(BOOL)_hasVisibleViewController;
-(void)setPageCount:(long long)arg1 ;
-(BOOL)wraps;
-(void)setWraps:(BOOL)arg1 ;
-(BOOL)displaysPageControl;
-(void)setDisplaysPageControl:(BOOL)arg1 ;
-(long long)indexOfViewController:(id)arg1 ;
@end

