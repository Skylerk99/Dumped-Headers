/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:42 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <MPUFoundation/MPUPercentDrivenInteractionTransition.h>

@protocol UIViewControllerContextTransitioning;
@class MusicNowPlayingTransitionController, UIPanGestureRecognizer, MusicNowPlayingPresentationController;

@interface MusicNowPlayingInteractionController : MPUPercentDrivenInteractionTransition {

	CGPoint _initialLocation;
	id<UIViewControllerContextTransitioning> _context;
	BOOL _transitionStarted;
	BOOL _transitionFinished;
	BOOL _transitionCanceled;
	BOOL _isRubberbanding;
	MusicNowPlayingTransitionController* _animationController;
	UIPanGestureRecognizer* _gestureRecognizer;
	MusicNowPlayingPresentationController* _presentationController;

}

@property (nonatomic,retain) MusicNowPlayingTransitionController * animationController;                   //@synthesize animationController=_animationController - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * gestureRecognizer;                                  //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,retain) MusicNowPlayingPresentationController * presentationController;              //@synthesize presentationController=_presentationController - In the implementation block
-(void)dealloc;
-(void)setAnimationController:(MusicNowPlayingTransitionController *)arg1 ;
-(void)setGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)gestureRecognizer;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)startInteractiveTransition:(id)arg1 ;
-(MusicNowPlayingTransitionController *)animationController;
-(void)updateInteractiveTransition:(double)arg1 ;
-(MusicNowPlayingPresentationController *)presentationController;
-(void)stopInteractiveTransition;
-(void)_panRecognized:(id)arg1 ;
-(void)setPresentationController:(MusicNowPlayingPresentationController *)arg1 ;
@end

