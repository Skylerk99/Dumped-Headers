/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:33 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSArray, PSListController;

@interface SignatureEditingPane : PSListController {

	NSArray* _defaultSignatureSpecifiers;
	NSArray* _accountSignaturesSpecifiers;
	PSListController* _parentListController;
	BOOL _useAccountSignatures;
	BOOL _singleAccountActive;

}

@property (assign,nonatomic) PSListController * parentListController;              //@synthesize parentListController=_parentListController - In the implementation block
+(BOOL)hasMultipleMailAccounts;
-(id)specifiers;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)suspend;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setParentListController:(PSListController *)arg1 ;
-(PSListController *)parentListController;
-(void)_setSignature:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_signatureWithSpecifier:(id)arg1 ;
-(void)_setAccountSignature:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_accountSignatureWithSpecifier:(id)arg1 ;
-(id)accountSignaturesSpecifiers;
-(id)defaultSignatureSpecifiers;
-(void)commitChangesAndDismissKeyboard:(BOOL)arg1 ;
@end

