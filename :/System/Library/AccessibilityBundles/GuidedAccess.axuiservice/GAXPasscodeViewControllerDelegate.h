/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:37 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GAXPasscodeViewControllerDelegate <NSObject>
@optional
-(void)passcodeViewController:(id)arg1 passcodeViewIsVisible:(BOOL)arg2;
-(void)passcodeViewController:(id)arg1 wasDismissedWithReason:(int)arg2;
-(BOOL)shouldShowCancelButtonForPasscodeViewController:(id)arg1;
-(void)passcodeViewController:(id)arg1 isPasscode:(id)arg2 correctWithCompletionHandler:(/*^block*/id)arg3;
-(void)passcodeViewController:(id)arg1 didFinishSettingUpPasscode:(id)arg2;

@end

