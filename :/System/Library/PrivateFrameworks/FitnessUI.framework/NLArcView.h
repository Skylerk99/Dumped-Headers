/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:33 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKit/UIView.h>

@class NLArcLayer, CALayer, CAGradientLayer, NLArcMaskLayer;

@interface NLArcView : UIView {

	NLArcLayer* _baseRing;
	CALayer* _iconLayer;
	CAGradientLayer* _gradientLayer;
	NLArcMaskLayer* _arcMaskLayer;
	CALayer* _whiteDotIndicatorLayer;
	CALayer* _coloredDotIndicatorLayer;
	BOOL _shouldDrawIndicator;
	BOOL _shouldShowIcon;
	double _radius;
	double _indicatorPercentage;

}

@property (assign,nonatomic) double arcStart; 
@property (assign,nonatomic) double lineWidth; 
@property (assign,nonatomic) double radius;                           //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) BOOL shouldDrawIndicator;                //@synthesize shouldDrawIndicator=_shouldDrawIndicator - In the implementation block
@property (assign,nonatomic) BOOL shouldShowIcon;                     //@synthesize shouldShowIcon=_shouldShowIcon - In the implementation block
@property (assign,nonatomic) double indicatorPercentage;              //@synthesize indicatorPercentage=_indicatorPercentage - In the implementation block
-(void)setBaseColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(void)setIcon:(id)arg1 ;
-(void)setGradientColors:(id)arg1 ;
-(double)arcStart;
-(void)setArcStart:(double)arg1 ;
-(BOOL)shouldDrawIndicator;
-(double)indicatorPercentage;
-(double)percentageFull;
-(id)_whiteDotIndicatorLayer;
-(id)_coloredDotIndicatorLayer;
-(void)_positionIndicator;
-(void)setRadius:(double)arg1 animated:(BOOL)arg2 ;
-(void)setPercentageFull:(double)arg1 animated:(BOOL)arg2 ;
-(void)setPercentageFull:(double)arg1 animatedWithDuration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)_showIndicatorIfNecessary;
-(void)setPercentageFull:(double)arg1 ;
-(void)setPercentageFull:(double)arg1 animatedWithDuration:(double)arg2 ;
-(void)setPercentageUnfull:(double)arg1 animatedWithDuration:(double)arg2 ;
-(void)setShouldDrawIndicator:(BOOL)arg1 ;
-(void)setIndicatorPercentage:(double)arg1 ;
-(void)animateToCenter:(CGPoint)arg1 radius:(double)arg2 lineWidth:(double)arg3 duration:(double)arg4 ;
-(void)setShouldShowIcon:(BOOL)arg1 ;
-(BOOL)shouldShowIcon;
-(void)setRadius:(double)arg1 ;
-(double)radius;
@end

