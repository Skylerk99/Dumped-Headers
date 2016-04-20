//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "UIGestureRecognizerDelegate.h"

@class CADisplayLink, NSString;

@interface PHVideoCallVideoGroupView : UIControl <UIGestureRecognizerDelegate>
{
    CADisplayLink *_displayLink;
    struct CGPoint _velocity;
    struct CGPoint _target;
    struct CGRect _cornerLocationsRect;
    _Bool _startedThrowAnimation;
    long long _corner;
}

@property(nonatomic) struct CGRect cornerLocationsRect; // @synthesize cornerLocationsRect=_cornerLocationsRect;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)cancelThrowAnimation;
- (void)finishedThrowAnimation;
- (void)updateThrowAnimation:(id)arg1;
- (void)startThrowAnimation;
- (double)_gridViewRubberBandValueForValue:(double)arg1 target:(double)arg2 timeInterval:(double)arg3 velocity:(double *)arg4;
- (void)handlePanDetected:(id)arg1;
- (void)handlePanGestureFinished:(id)arg1;
- (void)addPanningGestureRecognizer;
- (void)refreshPositionInCorner;
- (struct CGPoint)centerPointForCurrentVideoGroupCorner;
- (void)setCorner:(long long)arg1;
- (void)setTransformForNewCenter:(struct CGPoint)arg1;
- (struct CGPoint)transformedCenter;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
