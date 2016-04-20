/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:42 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, NSArray;

@interface MusicNowPlayingTitlesView : UIView {

	NSMutableArray* _labels;
	NSMutableArray* _marqueeViews;
	BOOL _needsViewUpdate;
	BOOL _marqueeEnabled;
	BOOL _clampLabels;
	NSArray* _attributedTexts;
	UIEdgeInsets _contentInset;
	UIEdgeInsets _marqueeFadeEdgeInsets;

}

@property (nonatomic,copy) NSArray * attributedTexts;                                    //@synthesize attributedTexts=_attributedTexts - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                  //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) double firstBaselineOffsetFromTop; 
@property (getter=isMarqueeEnabled,nonatomic,readonly) BOOL marqueeEnabled;              //@synthesize marqueeEnabled=_marqueeEnabled - In the implementation block
@property (assign,nonatomic) UIEdgeInsets marqueeFadeEdgeInsets;                         //@synthesize marqueeFadeEdgeInsets=_marqueeFadeEdgeInsets - In the implementation block
@property (assign,nonatomic) BOOL clampLabels;                                           //@synthesize clampLabels=_clampLabels - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)_updateViewsIfNeeded;
-(void)_layoutLabel:(id)arg1 withMarqueeView:(id)arg2 previousLabelBaselineOffsetFromBottom:(double)arg3 previousMarqueeViewFrame:(CGRect)arg4 ;
-(void)_applyMarqueeFade;
-(double)_baselineOffsetForAttributedText:(id)arg1 returningFont:(out id*)arg2 ;
-(void)setMarqueeEnabled:(BOOL)arg1 withOptions:(long long)arg2 ;
-(void)resetMarqueePosition;
-(void)_setupLabel:(inout id*)arg1 marqueeView:(inout id*)arg2 withAttributedText:(id)arg3 ;
-(double)firstBaselineOffsetFromTop;
-(void)setAttributedTexts:(NSArray *)arg1 ;
-(void)setMarqueeFadeEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setClampLabels:(BOOL)arg1 ;
-(NSArray *)attributedTexts;
-(BOOL)isMarqueeEnabled;
-(UIEdgeInsets)marqueeFadeEdgeInsets;
-(BOOL)clampLabels;
@end

