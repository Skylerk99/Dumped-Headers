/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:34 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIDataclassConfigurationViewController.h>

@class MailAccount;

@interface AccountPSSyncController : ACUIDataclassConfigurationViewController

@property (nonatomic,readonly) MailAccount * mailAccount; 
-(MailAccount *)mailAccount;
-(id)specifiers;
-(void)viewDidLoad;
-(BOOL)shouldAutomaticallyTryEnablingDataclassDuringSetup:(id)arg1 ;
-(Class)accountInfoControllerClass;
-(BOOL)shouldVerifyBeforeAccountSave;
-(id)valueForAccountSummaryCell;
@end

