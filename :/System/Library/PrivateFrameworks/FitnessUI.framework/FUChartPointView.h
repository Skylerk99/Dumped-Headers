/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:33 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface FUChartPointView : UIView {

	int _pointStyle;
	UIColor* _color;
	double _radius;

}

@property (assign,nonatomic) int pointStyle;               //@synthesize pointStyle=_pointStyle - In the implementation block
@property (assign,nonatomic) UIColor * color;              //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double radius;                //@synthesize radius=_radius - In the implementation block
+(id)pointWithColor:(id)arg1 radius:(double)arg2 style:(int)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)init;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithColor:(id)arg1 radius:(double)arg2 style:(int)arg3 ;
-(int)pointStyle;
-(void)setPointStyle:(int)arg1 ;
-(void)_drawSolidCircleInContext:(CGContextRef)arg1 ;
-(void)_drawHollowCircleInContext:(CGContextRef)arg1 ;
-(void)_drawSolidSquareInContext:(CGContextRef)arg1 ;
-(void)_drawHollowSquareInContext:(CGContextRef)arg1 ;
-(void)_drawBullseyeCircleInContext:(CGContextRef)arg1 ;
-(void)_drawBullseyeSquareInContext:(CGContextRef)arg1 ;
-(void)_drawGlowingCircleInContext:(CGContextRef)arg1 ;
-(void)setRadius:(double)arg1 ;
-(double)radius;
@end

