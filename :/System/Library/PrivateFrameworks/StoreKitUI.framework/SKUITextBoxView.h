/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:10 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIControl.h>

@class SKUIColorScheme, UILabel, UIImageView, NSString;

@interface SKUITextBoxView : UIControl {

	SKUIColorScheme* _colorScheme;
	UIEdgeInsets _contentInsets;
	UILabel* _moreButtonLabel;
	long long _numberOfVisibleLines;
	double _rating;
	UIImageView* _ratingImageView;
	UILabel* _ratingLabel;
	UILabel* _subtitleLabel;
	CTFrameRef _textFrame;
	UIEdgeInsets _titleInsets;
	UILabel* _titleLabel;
	CTFrameRef _titleTextFrame;
	CTLineRef _truncationToken;
	long long _truncationStyle;
	NSString* _underlyingText;

}

@property (nonatomic,retain) SKUIColorScheme * colorScheme;               //@synthesize colorScheme=_colorScheme - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                  //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets titleInsets;                    //@synthesize titleInsets=_titleInsets - In the implementation block
@property (assign,nonatomic) long long numberOfVisibleLines;              //@synthesize numberOfVisibleLines=_numberOfVisibleLines - In the implementation block
@property (assign,nonatomic) long long truncationStyle;                   //@synthesize truncationStyle=_truncationStyle - In the implementation block
@property (nonatomic,copy) NSString * moreButtonTitle; 
@property (nonatomic,copy) NSString * subtitle; 
@property (assign,nonatomic) double rating;                               //@synthesize rating=_rating - In the implementation block
@property (nonatomic,copy) NSString * ratingText; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)reset;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setRating:(double)arg1 ;
-(double)rating;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(NSString *)ratingText;
-(CTFrameRef)_textFrame;
-(void)setNumberOfVisibleLines:(long long)arg1 ;
-(void)setFixedWidthTextFrame:(CTFrameRef)arg1 ;
-(void)setMoreButtonTitle:(NSString *)arg1 ;
-(void)setFixedWidthTitleTextFrame:(CTFrameRef)arg1 ;
-(void)setRatingText:(NSString *)arg1 ;
-(NSString *)moreButtonTitle;
-(id)_moreButtonLabel;
-(CGSize)_textSizeToFitSize:(CGSize)arg1 ;
-(void)setTextFrameWithText:(id)arg1 ;
-(void)setTruncationStyle:(long long)arg1 ;
-(long long)numberOfVisibleLines;
-(long long)truncationStyle;
-(UIEdgeInsets)titleInsets;
-(void)setTitleInsets:(UIEdgeInsets)arg1 ;
@end

