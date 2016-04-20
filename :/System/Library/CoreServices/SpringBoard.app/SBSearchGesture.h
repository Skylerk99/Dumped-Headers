/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIScrollViewDelegate.h>

@class NSHashTable, SBSearchScrollView, UIPanGestureRecognizer, NSMutableSet, UIView, NSString;

@interface SBSearchGesture : NSObject <UIScrollViewDelegate> {

	NSHashTable* _observers;
	SBSearchScrollView* _scrollView;
	BOOL _suppressObserverCallbacks;
	UIPanGestureRecognizer* _panGestureRecognizer;
	double _lastOffset;
	NSMutableSet* _disabledReasons;
	BOOL _isActivated;
	BOOL _isDismissing;
	BOOL _animatingResetOrReveal;
	UIView* _targetView;

}

@property (nonatomic,retain) UIView * targetView;                                                        //@synthesize targetView=_targetView - In the implementation block
@property (getter=isAnimatingResetOrReveal,nonatomic,readonly) BOOL animatingResetOrReveal;              //@synthesize animatingResetOrReveal=_animatingResetOrReveal - In the implementation block
@property (getter=isActivated,nonatomic,readonly) BOOL activated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)resetAnimated:(BOOL)arg1 ;
-(void)revealAnimated:(BOOL)arg1 ;
-(void)_iconEditingStateChanged:(id)arg1 ;
-(void)_openFolderChanged:(id)arg1 ;
-(void)_displayLaunched:(id)arg1 ;
-(void)updateForRotation;
-(void)_updateForFinalContentOffset;
-(void)_updateForScrollingEnded;
-(void)_updateScrollingEnabled;
-(BOOL)_isShowingSearch;
-(void)setDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(BOOL)isAnimatingResetOrReveal;
-(BOOL)isActivated;
-(void)dealloc;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)requireGestureRecognizerToFail:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(UIView *)targetView;
-(void)setTargetView:(UIView *)arg1 ;
@end

