/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:12 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UICurrentContextPresentationController.h>

@class UIView;

@interface _UIFullscreenPresentationController : _UICurrentContextPresentationController {

	UIView* _counterRotatedView;
	double _counterRotatedAngle;
	CGRect _counterRotatedOriginalBounds;
	long long _originalOrientation;
	/*^block*/id finalRotationBlock;

}
-(void)dealloc;
-(long long)presentationStyle;
-(CGRect)frameOfPresentedViewInContainerView;
-(void)_setPresentedViewController:(id)arg1 ;
-(BOOL)shouldRemovePresentersView;
-(BOOL)shouldPresentInFullscreen;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3 ;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)_removeCounterRotation;
-(BOOL)_invokesDelegatesOnOrientationChange;
-(void)_placeCounterRotationViewWithView:(id)arg1 inWindow:(id)arg2 fromOrientation:(long long)arg3 toOrientation:(long long)arg4 force:(BOOL)arg5 ;
@end

