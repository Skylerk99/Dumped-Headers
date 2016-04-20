/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:50 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView, UILabel, UIView, NSMutableArray, NSTimer;

@interface UICalloutView : UIControl {

	UIImageView* _leftCap;
	UIImageView* _rightCap;
	UIImageView* _topAnchor;
	UIImageView* _bottomAnchor;
	UIImageView* _leftBackground;
	UIImageView* _rightBackground;
	UILabel* _title;
	UILabel* _subtitle;
	UILabel* _temporary;
	UIView* _leftView;
	UIView* _rightView;
	SCD_Struct_UI43 _anchor;
	CGRect _frame;
	id _delegate;
	struct {
		unsigned animated : 1;
		unsigned didMoveCalled : 1;
		unsigned hasPendingAnimatedLayout : 1;
		unsigned canAnchorFromBottom : 1;
		unsigned reserved : 28;
	}  _flags;
	NSMutableArray* _fadeInViews;
	NSMutableArray* _fadeOutViews;
	NSTimer* _layoutAnimationTimer;
	double _maximumWidth;

}

@property (nonatomic,readonly) double UICalloutViewCapHeight; 
@property (nonatomic,readonly) double UICalloutViewCapPaddingTop; 
@property (nonatomic,readonly) double UICalloutViewLayoutDuration; 
@property (nonatomic,readonly) double UICalloutViewButtonPadding; 
@property (nonatomic,readonly) double UICalloutViewHorizontalMargin; 
@property (nonatomic,readonly) double UICalloutViewHorizontalPadding; 
@property (nonatomic,readonly) double UICalloutViewVerticalMargin; 
@property (nonatomic,readonly) double UICalloutViewMinimumWidth; 
@property (assign,nonatomic) double maximumWidth;                                  //@synthesize maximumWidth=_maximumWidth - In the implementation block
@property (assign,nonatomic) long long titleLineBreakMode; 
@property (assign,nonatomic) long long subtitleLineBreakMode; 
@property (assign,nonatomic) long long titleTextAlignment; 
@property (assign,nonatomic) long long subtitleTextAlignment; 
@property (nonatomic,retain) UIView * leftView;                                    //@synthesize leftView=_leftView - In the implementation block
@property (nonatomic,retain) UIView * rightView;                                   //@synthesize rightView=_rightView - In the implementation block
@property (assign,nonatomic) BOOL canAnchorFromBottom; 
+(double)defaultHeight;
+(id)_backgroundImage;
+(id)_bottomAnchorImage;
+(id)_leftCapImage;
+(id)_rightCapImage;
+(id)_topAnchorImage;
+(id)sharedCalloutView;
-(BOOL)isExpanded;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setTitle:(id)arg1 ;
-(id)delegate;
-(id)title;
-(void)animationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(CGPoint)anchorPoint;
-(void)_fadeViewsIn:(BOOL)arg1 ;
-(void)setMaximumWidth:(double)arg1 ;
-(double)maximumWidth;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(id)subtitle;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(void)_setLeftView:(id)arg1 ;
-(void)_layoutSubviews:(BOOL)arg1 ;
-(void)_scheduleViewToFadeOut:(id)arg1 ;
-(void)_scheduleLayoutAnimation;
-(void)_scheduleViewToFadeIn:(id)arg1 ;
-(void)_setRightView:(id)arg1 ;
-(void)completeBounceAnimation;
-(void)_setLayoutAnimationTimer:(id)arg1 ;
-(void)_layoutAnimation;
-(void)setLeftView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setSubtitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)getActualAnchorPoint:(CGPoint*)arg1 frame:(CGRect*)arg2 position:(int*)arg3 forDesiredAnchorPoint:(CGPoint)arg4 boundaryRect:(CGRect)arg5 ;
-(void)_setOriginForScale:(double)arg1 ;
-(void)_markDidMoveCalled;
-(double)UICalloutViewCapHeight;
-(double)UICalloutViewCapPaddingTop;
-(double)UICalloutViewLayoutDuration;
-(double)UICalloutViewButtonPadding;
-(double)UICalloutViewHorizontalMargin;
-(double)UICalloutViewHorizontalPadding;
-(double)UICalloutViewVerticalMargin;
-(double)UICalloutViewMinimumWidth;
-(void)setLeftView:(UIView *)arg1 ;
-(void)setRightView:(UIView *)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(void)setTemporaryTitle:(id)arg1 ;
-(id)temporaryTitle;
-(long long)titleLineBreakMode;
-(void)setTitleLineBreakMode:(long long)arg1 ;
-(long long)subtitleLineBreakMode;
-(void)setSubtitleLineBreakMode:(long long)arg1 ;
-(long long)titleTextAlignment;
-(void)setTitleTextAlignment:(long long)arg1 ;
-(long long)subtitleTextAlignment;
-(void)setSubtitleTextAlignment:(long long)arg1 ;
-(void)setCanAnchorFromBottom:(BOOL)arg1 ;
-(BOOL)canAnchorFromBottom;
-(void)setAnchorPoint:(CGPoint)arg1 boundaryRect:(CGRect)arg2 animate:(BOOL)arg3 ;
-(void)fadeOutWithDuration:(double)arg1 ;
-(void)removeTarget:(id)arg1 ;
-(UIView *)leftView;
-(UIView *)rightView;
@end

