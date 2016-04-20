/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:18 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UILabel, PKGlyphView, UIView, NSLayoutConstraint, UIButton, PKPaymentAuthorizationLayout;

@interface PKPaymentAuthorizationFooterView : UIView {

	NSString* _title;
	UILabel* _labelView;
	PKGlyphView* _glyphView;
	UILabel* _passbookPaymentDetailsView;
	UIView* _separatorView;
	NSLayoutConstraint* _separatorLeftConstraint;
	NSLayoutConstraint* _payWithPasscodeCenterYConstraint;
	NSLayoutConstraint* _overallHeightConstraint;
	long long _state;
	UIButton* _payWithPasscodeButton;
	PKPaymentAuthorizationLayout* _layout;

}

@property (assign,nonatomic) long long state;                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) UIButton * payWithPasscodeButton;                 //@synthesize payWithPasscodeButton=_payWithPasscodeButton - In the implementation block
@property (assign,nonatomic) PKPaymentAuthorizationLayout * layout;              //@synthesize layout=_layout - In the implementation block
-(void)_createSubviews;
-(UIButton *)payWithPasscodeButton;
-(void)setState:(long long)arg1 string:(id)arg2 animated:(BOOL)arg3 ;
-(id)_titleAttributedStringForState:(long long)arg1 ;
-(id)_titleLabelAttributedString:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(PKPaymentAuthorizationLayout *)layout;
-(void)updateConstraints;
-(void)setLayout:(PKPaymentAuthorizationLayout *)arg1 ;
-(void)_prepareConstraints;
@end

