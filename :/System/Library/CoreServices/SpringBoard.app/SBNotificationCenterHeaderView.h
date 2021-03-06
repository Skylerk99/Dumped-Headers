/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:19 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardFoundation/_SBFVibrantTableViewHeaderFooterView.h>
#import <SpringBoard/SBModalLayoutCaching.h>

@class UILabel, UIImageView, SBNotificationsClearButton, NSString;

@interface SBNotificationCenterHeaderView : _SBFVibrantTableViewHeaderFooterView <SBModalLayoutCaching> {

	UILabel* _titleLabel;
	UIImageView* _iconImageView;
	SBNotificationsClearButton* _clearButton;
	BOOL _showingClear;
	long long _layoutMode;
	/*^block*/id _clearButtonVisibleAction;
	/*^block*/id _clearButtonFinalAction;

}

@property (nonatomic,retain,readonly) UILabel * titleLabel;                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain,readonly) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,copy) id clearButtonVisibleAction;                         //@synthesize clearButtonVisibleAction=_clearButtonVisibleAction - In the implementation block
@property (nonatomic,copy) id clearButtonFinalAction;                           //@synthesize clearButtonFinalAction=_clearButtonFinalAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long layoutMode;                              //@synthesize layoutMode=_layoutMode - In the implementation block
+(id)titleFontForLayoutMode:(long long)arg1 ;
+(double)_titleBaseline;
-(void)_removeClearButton;
-(void)_addClearButton;
-(void)resetAnimated:(BOOL)arg1 ;
-(CGRect)_clearButtonFrame;
-(void)setLayoutMode:(long long)arg1 ;
-(void)setHasClearButton:(BOOL)arg1 ;
-(id)clearButtonVisibleAction;
-(void)setClearButtonVisibleAction:(id)arg1 ;
-(id)clearButtonFinalAction;
-(void)setClearButtonFinalAction:(id)arg1 ;
-(long long)layoutMode;
-(CGRect)contentBounds;
-(UIImageView *)iconImageView;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setBackgroundView:(id)arg1 ;
-(long long)initialGraphicsQuality;
-(void)buttonAction:(id)arg1 ;
@end

