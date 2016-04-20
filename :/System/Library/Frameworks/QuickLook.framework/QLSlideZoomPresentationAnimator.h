/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLSlidePresentationAnimator.h>

@class UIView, UIViewController;

@interface QLSlideZoomPresentationAnimator : QLSlidePresentationAnimator {

	UIView* _previewView;
	UIView* _animationContainer;
	UIViewController* _toViewController;
	UIView* _containerView;
	CGAffineTransform _scaleDownTransform;
	UIView* _transitioningView;
	CGPoint _finalCenter;
	CGAffineTransform _imageScaleDownTransform;

}
-(void)finishAnimatingDismissalWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)prepareForTransition;
@end

