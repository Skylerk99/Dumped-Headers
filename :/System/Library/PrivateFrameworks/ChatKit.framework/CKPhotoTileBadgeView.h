/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UIView, UIImageView, UILabel;

@interface CKPhotoTileBadgeView : UIView {

	BOOL _enabled;
	BOOL _selected;
	UIButton* _actionButton;
	UIView* __backgroundView;
	UIImageView* __badgeImageView;
	UILabel* __textLabel;

}

@property (nonatomic,retain) UIButton * actionButton;                      //@synthesize actionButton=_actionButton - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) UIView * _backgroundView;                   //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (nonatomic,readonly) UIImageView * _badgeImageView;              //@synthesize _badgeImageView=__badgeImageView - In the implementation block
@property (nonatomic,readonly) UILabel * _textLabel;                       //@synthesize _textLabel=__textLabel - In the implementation block
+(double)horizontalBadgeInset;
+(double)verticalBadgeInset;
-(UIButton *)actionButton;
-(UIImageView *)_badgeImageView;
-(void)_updateBadgeImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)_backgroundView;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(UILabel *)_textLabel;
-(void)setActionButton:(UIButton *)arg1 ;
-(void)_updateBadgeText;
-(CGSize)maximumSize;
@end

