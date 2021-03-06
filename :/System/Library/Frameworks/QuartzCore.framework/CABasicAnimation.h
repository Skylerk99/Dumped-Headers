/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAPropertyAnimation.h>

@interface CABasicAnimation : CAPropertyAnimation

@property (assign) BOOL roundsToInteger; 
@property (assign) double startAngle; 
@property (assign) double endAngle; 
@property (retain) id fromValue; 
@property (retain) id toValue; 
@property (retain) id byValue; 
+(id)normalizedAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 ;
-(void)pkui_updateForAdditiveAnimationFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 withLayerPoint:(CGPoint)arg3 ;
-(void)pkui_updateForAdditiveAnimationFromScalar:(double)arg1 toScalar:(double)arg2 withLayerScalar:(double)arg3 ;
-(void)pkui_updateForAdditiveAnimationFromSize:(CGSize)arg1 toSize:(CGSize)arg2 withLayerSize:(CGSize)arg3 ;
-(void)pkui_updateForAdditiveAnimationFromTransform:(CATransform3D)arg1 toTransform:(CATransform3D)arg2 withLayerTransform:(CATransform3D)arg3 ;
-(void)pkui_updateForAdditiveAnimationFromScalar:(double)arg1 toScalar:(double)arg2 ;
-(void)pkui_updateForAdditiveAnimationFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(void)pkui_updateForAdditiveAnimationFromSize:(CGSize)arg1 toSize:(CGSize)arg2 ;
-(void)pkui_updateForAdditiveAnimationFromTransform:(CATransform3D)arg1 toTransform:(CATransform3D)arg2 ;
-(BOOL)roundsToInteger;
-(void)setRoundsToInteger:(BOOL)arg1 ;
-(void)setStartAngle:(double)arg1 ;
-(double)startAngle;
-(void)setEndAngle:(double)arg1 ;
-(double)endAngle;
-(id)byValue;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(id)fromValue;
-(void)setFromValue:(id)arg1 ;
-(void)setToValue:(id)arg1 ;
-(id)toValue;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(void)setByValue:(id)arg1 ;
-(void)CA_prepareRenderValue;
-(double)_timeFunction:(double)arg1 ;
@end

