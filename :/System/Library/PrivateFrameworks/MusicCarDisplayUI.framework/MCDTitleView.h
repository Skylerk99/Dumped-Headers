/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:18 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, NSLayoutConstraint, UILabel;

@interface MCDTitleView : UIView {

	UIImageView* _explicitImageView;
	NSLayoutConstraint* _explicitImageViewWidthConstraint;
	NSLayoutConstraint* _titlePaddingConstraint;
	BOOL _explicitTrack;
	UILabel* _titleLabel;

}

@property (nonatomic,readonly) UILabel * titleLabel;                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,getter=isExplicitTrack,nonatomic) BOOL explicitTrack;              //@synthesize explicitTrack=_explicitTrack - In the implementation block
-(BOOL)isExplicitTrack;
-(void)setExplicitTrack:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)_addConstraints;
-(id)_addLabelWithFont:(id)arg1 ;
@end

