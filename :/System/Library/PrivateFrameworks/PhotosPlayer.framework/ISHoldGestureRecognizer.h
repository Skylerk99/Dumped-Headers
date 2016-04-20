/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:06 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableSet;

@interface ISHoldGestureRecognizer : UIGestureRecognizer {

	unsigned long long _numberOfTouchesActive;
	double _force;
	NSMutableSet* __activeTouches;

}

@property (nonatomic,readonly) unsigned long long numberOfTouchesActive;              //@synthesize numberOfTouchesActive=_numberOfTouchesActive - In the implementation block
@property (nonatomic,readonly) double force;                                          //@synthesize force=_force - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _activeTouches;                         //@synthesize _activeTouches=__activeTouches - In the implementation block
+(BOOL)isGlutenFree;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(double)force;
-(void)reset;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(void)_updateForce;
-(unsigned long long)numberOfTouchesActive;
-(NSMutableSet *)_activeTouches;
@end

