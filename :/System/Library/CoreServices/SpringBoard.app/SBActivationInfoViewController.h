/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSString, UIView, UITextView, UIButton;

@interface SBActivationInfoViewController : UIViewController {

	NSString* _meid;
	NSString* _imei;
	NSString* _iccid;
	NSString* _csn;
	BOOL _isOnBootstrap;
	double _alertHeight;
	UIView* _containerView;
	UITextView* _textView;
	UIButton* _regulatoryInfoButton;

}

@property (nonatomic,readonly) UIButton * regulatoryInfoButton;              //@synthesize regulatoryInfoButton=_regulatoryInfoButton - In the implementation block
-(id)_formattedIMEI;
-(id)_formattedCSN;
-(id)_formattedICCID;
-(void)_updateTextView;
-(id)_formattedString:(id)arg1 withSpaceAfterDigits:(unsigned long long)arg2 ;
-(UIButton *)regulatoryInfoButton;
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_simStatusChanged:(id)arg1 ;
@end

