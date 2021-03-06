/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLPreviewTransitionAnimator.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>

@class QLDismissGestureRecognizer, QLPreviewController, UIView, NSString;

@interface QLSlidePresentationAnimator : QLPreviewTransitionAnimator <UIViewControllerInteractiveTransitioning> {

	QLDismissGestureRecognizer* _gestureRecognizer;
	QLPreviewController* _previewController;
	UIView* _backgroundColorView;

}

@property (readonly) QLDismissGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateSlideProgress;
-(void)finishTransition:(BOOL)arg1 ;
-(void)finishAnimatingDismissalWithCompletionHandler:(/*^block*/id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(QLDismissGestureRecognizer *)gestureRecognizer;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)prepareForTransition;
@end

