/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/_SBFVibrantView.h>

@class _SBFVibrantSettings, UIView, UIColor, NSString;

@interface SBChevronView : UIView <_SBFVibrantView> {

	UIView* _leftGrabberView;
	UIView* _rightGrabberView;
	double _animationDuration;
	long long _state;
	UIColor* _color;
	double _alphaComponent;
	_SBFVibrantSettings* _vibrantSettings;
	UIView* _tintView;
	UIView* _backgroundView;
	BOOL _unified;
	UIView* _alphaContainerView;

}

@property (assign,nonatomic) double animationDuration; 
@property (assign,nonatomic) long long state;                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) UIColor * color;                                    //@synthesize color=_color - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _SBFVibrantSettings * vibrantSettings;              //@synthesize vibrantSettings=_vibrantSettings - In the implementation block
-(BOOL)_setUnified:(BOOL)arg1 ;
-(void)_layoutGrabberView:(id)arg1 forState:(long long)arg2 ;
-(CGRect)_frameForGrabberView:(id)arg1 forState:(long long)arg2 unified:(BOOL)arg3 ;
-(CGAffineTransform)_transformForGrabberView:(id)arg1 forState:(long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(NSString *)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)setAnimationDuration:(double)arg1 ;
-(void)setBackgroundView:(id)arg1 ;
-(double)animationDuration;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithColor:(id)arg1 ;
-(BOOL)_setState:(long long)arg1 ;
-(_SBFVibrantSettings *)vibrantSettings;
-(void)setVibrantSettings:(_SBFVibrantSettings *)arg1 ;
-(void)setState:(long long)arg1 animated:(BOOL)arg2 ;
@end

