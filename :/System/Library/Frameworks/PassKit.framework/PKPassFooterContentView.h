/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:18 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class PKPass, UIButton, UIView, PKPaymentPass;

@interface PKPassFooterContentView : UIView {

	BOOL _isVisibleAsFooter;
	BOOL _isPassAuthorized;
	long long _style;
	PKPass* _pass;
	UIButton* _infoButton;
	UIView* _bottomRule;

}

@property (nonatomic,readonly) long long style;                          //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) PKPass * pass;                            //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * paymentPass; 
@property (nonatomic,readonly) UIButton * infoButton;                    //@synthesize infoButton=_infoButton - In the implementation block
@property (nonatomic,readonly) UIView * bottomRule;                      //@synthesize bottomRule=_bottomRule - In the implementation block
@property (nonatomic,readonly) BOOL isVisibleAsFooter;                   //@synthesize isVisibleAsFooter=_isVisibleAsFooter - In the implementation block
@property (nonatomic,readonly) BOOL isPassAuthorized;                    //@synthesize isPassAuthorized=_isPassAuthorized - In the implementation block
-(PKPaymentPass *)paymentPass;
-(BOOL)isPassAuthorized;
-(void)willBecomeVisibleAnimated:(BOOL)arg1 ;
-(void)willBecomeHiddenAnimated:(BOOL)arg1 ;
-(void)didBecomeVisibleAnimated:(BOOL)arg1 ;
-(void)didBecomeHiddenAnimated:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 pass:(id)arg2 ;
-(UIView *)bottomRule;
-(void)_infoButtonPressed:(id)arg1 ;
-(BOOL)isVisibleAsFooter;
-(void)dealloc;
-(void)layoutSubviews;
-(long long)style;
-(UIButton *)infoButton;
-(PKPass *)pass;
@end

