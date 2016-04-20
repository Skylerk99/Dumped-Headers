/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:37 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/StoreKit-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView, UILabel, NSString;

@interface SKStarRatingControl : UIControl {

	UIImageView* _backgroundImageView;
	UILabel* _explanationLabel;
	UIImageView* _foregroundImageView;
	CGSize _hitPadding;
	double _starWidth;
	CGPoint _trackingLastPoint;
	CGPoint _trackingStartPoint;
	float _value;

}

@property (nonatomic,copy) NSString * explanationText; 
@property (assign,nonatomic) double starWidth;                      //@synthesize starWidth=_starWidth - In the implementation block
@property (assign,nonatomic) float value; 
-(NSString *)explanationText;
-(void)_updateValueForPoint:(CGPoint)arg1 ;
-(BOOL)canHandleSwipes;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(float)value;
-(void)setValue:(float)arg1 ;
-(CGRect)hitRect;
-(void)sizeToFit;
-(BOOL)_alwaysHandleScrollerMouseEvent;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithBackgroundImage:(id)arg1 foregroundImage:(id)arg2 ;
-(void)setExplanationText:(NSString *)arg1 ;
-(void)setHitPadding:(CGSize)arg1 ;
-(void)setStarWidth:(double)arg1 ;
-(id)_newExplanationLabel;
-(double)starWidth;
-(CGRect)_foregroundImageClipBounds;
@end

