/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:01 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightUI/SPUISearchParsecCell.h>

@class UITextView, SKUIItemOfferButton, UILabel, UIView;

@interface SPUISearchParseciTunesCell : SPUISearchParsecCell {

	UITextView* _descriptionTextView;
	SKUIItemOfferButton* _appStoreButton;
	UILabel* _ratingLabel;
	UIView* _starView;

}
+(BOOL)supportsSection:(id)arg1 result:(id)arg2 ;
+(id)fullStar;
+(id)halfStar;
+(id)emptyStar;
-(void)updateFontSizes;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(id)subtitleLabel;
-(void)updateConstraints;
-(void)buttonPressed;
-(void)updateWithSection:(id)arg1 result:(id)arg2 traitCollection:(id)arg3 ;
-(id)accessoryViewForSection:(id)arg1 result:(id)arg2 ;
-(void)updateButtonState;
-(id)appStoreButton;
-(void)updateStarViewWithRating:(double)arg1 ;
@end

