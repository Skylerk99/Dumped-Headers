/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:48 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OFViewControllerTransitioningContext <NSObject>
@property (assign,nonatomic) double progressVelocity; 
@required
-(void)finishInteractiveTransitionWithVelocity:(double)arg1;
-(id)containerView;
-(BOOL)isInteractive;
-(void)completeTransition:(BOOL)arg1;
-(void)startInteractiveTransition;
-(void)updateInteractiveTransition:(double)arg1;
-(id)fromViewController;
-(id)toViewController;
-(BOOL)initiallyInteractive;
-(double)progress;
-(BOOL)isCompleting;
-(void)cancelInteractiveTransitionWithVelocity:(double)arg1;
-(void)setProgressVelocity:(double)arg1;
-(void)updateNonInteractiveTransitionWithProgress:(double)arg1;
-(void)makeTransitionInteractiveWithInteractor:(id)arg1 andProgress:(double)arg2;
-(BOOL)isRubberBanding;
-(double)progressVelocity;
-(BOOL)wasCancelled;
-(BOOL)doEaseIn;
-(BOOL)doEaseOut;

@end

