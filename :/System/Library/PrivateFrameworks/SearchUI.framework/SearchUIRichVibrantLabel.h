/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class SearchUIVibrantLabel, UILabel, UIFont;

@interface SearchUIRichVibrantLabel : UIView {

	SearchUIVibrantLabel* _vibrantLabel;
	UILabel* _highlightLabel;

}

@property (retain) UIFont * font; 
@property (assign) long long numberOfLines; 
@property (assign) double preferredMaxLayoutWidth; 
@property (retain) SearchUIVibrantLabel * vibrantLabel;              //@synthesize vibrantLabel=_vibrantLabel - In the implementation block
@property (retain) UILabel * highlightLabel;                         //@synthesize highlightLabel=_highlightLabel - In the implementation block
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(id)viewForLastBaselineLayout;
-(long long)numberOfLines;
-(void)setPreferredMaxLayoutWidth:(double)arg1 ;
-(double)preferredMaxLayoutWidth;
-(void)setVibrantLabel:(SearchUIVibrantLabel *)arg1 ;
-(void)setHighlightLabel:(UILabel *)arg1 ;
-(BOOL)updateWithRichText:(id)arg1 ;
-(SearchUIVibrantLabel *)vibrantLabel;
-(UILabel *)highlightLabel;
-(id)initWithRichText:(id)arg1 style:(unsigned long long)arg2 ;
@end

