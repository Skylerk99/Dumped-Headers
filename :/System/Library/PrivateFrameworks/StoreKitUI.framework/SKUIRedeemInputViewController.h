/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:09 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIRedeemStepViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class SKUIRedeemTextField, UIImageView, NSString, SKUIRedeemITunesPassLockup, UIBarButtonItem;

@interface SKUIRedeemInputViewController : SKUIRedeemStepViewController <UITextFieldDelegate> {

	long long _category;
	SKUIRedeemTextField* _field;
	UIImageView* _imageView;
	NSString* _initialCode;
	SKUIRedeemITunesPassLockup* _passbookLockup;
	UIBarButtonItem* _redeemButton;

}

@property (nonatomic,readonly) long long category;                  //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSString * initialCode;                  //@synthesize initialCode=_initialCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cancelAction:(id)arg1 ;
-(void)dealloc;
-(long long)category;
-(void)loadView;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)_termsButtonAction:(id)arg1 ;
-(NSString *)initialCode;
-(id)initWithRedeemCategory:(long long)arg1 ;
-(void)setInitialCode:(NSString *)arg1 ;
-(void)_passbookLockupAction:(id)arg1 ;
-(void)_redeemConfigurationImagesDidLoad:(id)arg1 ;
-(id)_newTextFieldWithClientContext:(id)arg1 ;
-(void)_textFieldTextDidChange:(id)arg1 ;
-(void)_redeemAction:(id)arg1 ;
@end

