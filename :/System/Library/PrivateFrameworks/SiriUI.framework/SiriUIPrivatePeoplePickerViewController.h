/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:47 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUISnippetViewController.h>
#import <SiriUI/SiriUIObjectPickerViewControllerDelegate.h>

@class SAABPersonPicker, SiriUIObjectPickerViewController, NSString;

@interface SiriUIPrivatePeoplePickerViewController : SiriUISnippetViewController <SiriUIObjectPickerViewControllerDelegate> {

	SAABPersonPicker* _picker;
	SiriUIObjectPickerViewController* _pickerController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)loadView;
-(void)_showPicker:(id)arg1 ;
-(id)_pickerController;
-(id)viewControllerForPickerPresentation:(id)arg1 ;
-(void)pickerViewController:(id)arg1 willPresentPicker:(id)arg2 ;
-(void)pickerViewController:(id)arg1 willDismissPicker:(id)arg2 ;
-(void)pickerViewController:(id)arg1 didSelectObject:(id)arg2 fromPicker:(id)arg3 ;
-(id)initWithSnippet:(id)arg1 ;
-(Class)transparentFooterViewClass;
-(void)configureReusableTransparentFooterView:(id)arg1 ;
-(double)desiredHeightForTransparentFooterView;
@end

