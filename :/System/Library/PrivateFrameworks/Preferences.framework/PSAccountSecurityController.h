/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:13 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/KeychainSyncViewControllerDelegate.h>
#import <libobjc.A.dylib/KeychainSyncPhoneSettingsFragmentDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class PSSpecifier, NSArray, PSSetupController, KeychainSyncDevicePINController, KeychainSyncPhoneSettingsFragment, NSString, KeychainSyncCountryInfo, PSKeychainSyncManager, UIAlertView;

@interface PSAccountSecurityController : PSListController <KeychainSyncViewControllerDelegate, KeychainSyncPhoneSettingsFragmentDelegate, UIAlertViewDelegate> {

	PSSpecifier* _recoverySwitch;
	NSArray* _passcodeSpecifiers;
	PSSetupController* _devicePasscodeChangeSetupController;
	KeychainSyncDevicePINController* _devicePINController;
	KeychainSyncPhoneSettingsFragment* _phoneSettingsFragment;
	NSString* _SMSTarget;
	KeychainSyncCountryInfo* _SMSTargetCountryInfo;
	BOOL _secureBackupEnabled;
	PSKeychainSyncManager* _manager;
	UIAlertView* _invalidPhoneNumberAlert;
	UIAlertView* _changeDevicePasscodeAlert;
	UIAlertView* _disableRecoveryConfirmationAlert;
	int _securityCodeType;
	NSString* _securityCode;

}

@property (assign,nonatomic) int securityCodeType;                  //@synthesize securityCodeType=_securityCodeType - In the implementation block
@property (nonatomic,retain) NSString * securityCode;               //@synthesize securityCode=_securityCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(id)init;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)phoneSettingsFragment:(id)arg1 didChangePhoneNumber:(id)arg2 countryInfo:(id)arg3 ;
-(void)reloadSpecifiers;
-(void)cancelPressed;
-(int)securityCodeType;
-(void)setSecurityCodeType:(int)arg1 ;
-(void)keychainSyncController:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3 ;
-(void)handleBurnedRecord;
-(void)changeSecurityCode:(id)arg1 ;
-(void)setUseRecovery:(id)arg1 specifier:(id)arg2 ;
-(id)useRecoveryForSepecifier:(id)arg1 ;
-(id)passcodeSpecifiers;
-(void)_setShowsDoneButton:(BOOL)arg1 ;
-(void)setSecurityCode:(NSString *)arg1 ;
-(void)_showSecurityCodeChangeSheetOnSpecifier:(id)arg1 ;
-(NSString *)securityCode;
-(void)saveSMSTargetChanges;
-(void)navCancelPressed;
-(void)navDonePressed;
-(void)disableRecovery;
@end

