/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:15 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIButton.h>

@class NSString;

@interface SUItemOfferButton : UIButton {

	long long _animationHorizontalAlignment;
	NSString* _buttonStyle;
	NSString* _confirmationTitle;
	BOOL _isShowingConfirmation;
	NSString* _offerTitle;
	BOOL _shouldShowConfirmation;

}

@property (assign,nonatomic) long long animationHorizontalAlignment;                             //@synthesize animationHorizontalAlignment=_animationHorizontalAlignment - In the implementation block
@property (nonatomic,copy) NSString * confirmationTitle;                                         //@synthesize confirmationTitle=_confirmationTitle - In the implementation block
@property (nonatomic,copy) NSString * itemOfferButtonStyle;                                      //@synthesize buttonStyle=_buttonStyle - In the implementation block
@property (nonatomic,copy) NSString * offerTitle;                                                //@synthesize offerTitle=_offerTitle - In the implementation block
@property (assign,nonatomic) BOOL shouldShowConfirmation;                                        //@synthesize shouldShowConfirmation=_shouldShowConfirmation - In the implementation block
@property (assign,getter=isShowingConfirmation,nonatomic) BOOL showingConfirmation;              //@synthesize isShowingConfirmation=_isShowingConfirmation - In the implementation block
+(double)defaultAnimationDuration;
+(id)itemOfferButtonStyleForItem:(id)arg1 offer:(id)arg2 ;
-(BOOL)shouldShowConfirmation;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isShowingConfirmation;
-(void)setShowingConfirmation:(BOOL)arg1 ;
-(NSString *)confirmationTitle;
-(void)setConfirmationTitle:(NSString *)arg1 ;
-(void)setShowingConfirmation:(BOOL)arg1 duration:(double)arg2 ;
-(BOOL)configureForItem:(id)arg1 offer:(id)arg2 ;
-(void)setAnimationHorizontalAlignment:(long long)arg1 ;
-(void)setItemOfferButtonStyle:(NSString *)arg1 ;
-(void)setOfferTitle:(NSString *)arg1 ;
-(void)setShouldShowConfirmation:(BOOL)arg1 ;
-(void)_reloadButton;
-(SCD_Struct_SU17)_configurationForStyle:(id)arg1 ;
-(long long)animationHorizontalAlignment;
-(NSString *)offerTitle;
-(void)_applyConfiguration:(SCD_Struct_SU17)arg1 ;
-(NSString *)itemOfferButtonStyle;
@end

