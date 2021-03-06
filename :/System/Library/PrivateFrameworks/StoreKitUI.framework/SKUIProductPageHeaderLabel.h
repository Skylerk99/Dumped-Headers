/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIColor, UIImage, NSArray;

@interface SKUIProductPageHeaderLabel : UIView {

	NSString* _text;
	UIColor* _textColor;
	NSString* _contentRating;
	UIImage* _contentRatingImage;
	NSArray* _secondaryContentRatingImages;
	UIColor* _ratingColor;
	BOOL _isPad;

}

@property (assign,nonatomic) BOOL isPad;                                          //@synthesize isPad=_isPad - In the implementation block
@property (nonatomic,copy) NSString * text;                                       //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                 //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) NSString * contentRating;                            //@synthesize contentRating=_contentRating - In the implementation block
@property (nonatomic,retain) NSArray * secondaryContentRatingImages;              //@synthesize secondaryContentRatingImages=_secondaryContentRatingImages - In the implementation block
@property (nonatomic,retain) UIColor * ratingColor;                               //@synthesize ratingColor=_ratingColor - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIColor *)textColor;
-(id)_textAttributes;
-(void)setContentRating:(NSString *)arg1 ;
-(void)setIsPad:(BOOL)arg1 ;
-(void)setRatingColor:(UIColor *)arg1 ;
-(void)setSecondaryContentRatingImages:(NSArray *)arg1 ;
-(NSString *)contentRating;
-(BOOL)isPad;
-(id)_imageForContentRating:(id)arg1 ;
-(CTFramesetterRef)_newTextFramesetter;
-(double)secondaryImageWidth;
-(NSArray *)secondaryContentRatingImages;
-(UIColor *)ratingColor;
@end

