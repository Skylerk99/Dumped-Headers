/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:04 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DAValidityCheckConsumer.h>

@class ACAccountStore, ACAccount, NSMutableDictionary, NSMutableArray, MFAccountValidator, AAAutoAccountVerifier, DAAccount, NSString;

@interface AAUICloudSyncServicesController : NSObject <DAValidityCheckConsumer> {

	ACAccountStore* _accountStore;
	ACAccount* _account;
	NSMutableDictionary* _queuedDataclassActions;
	NSMutableArray* _dataclassesRequiringMergeDecision;
	BOOL _didUserConsentToMerge;
	BOOL _isVerifyingExistingEmailAccount;
	MFAccountValidator* _validator;
	AAAutoAccountVerifier* _verifier;
	DAAccount* _accountBeingValidated;
	/*^block*/id _handler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_accountClassForAddress:(id)arg1 ;
+(id)_usernameFromAddress:(id)arg1 ;
+(id)_domainFromAddress:(id)arg1 ;
+(BOOL)canAutoSetupMailAccount:(id)arg1 ;
+(BOOL)needSetupForMailAccount:(id)arg1 ;
-(id)init;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(BOOL)_shouldInitiallyEnableDataclass:(id)arg1 forAccount:(id)arg2 ;
-(void)_presentMergeConfirmationForDataclasses:(id)arg1 account:(id)arg2 ;
-(BOOL)_dataclassBoundToSingleAccountAndOnAlready:(id)arg1 withAccount:(id)arg2 ;
-(void)_validateExistingEmailAccount:(id)arg1 withPassword:(id)arg2 ;
-(void)_createAndValidateDAMailAccountWithProperties:(id)arg1 ;
-(void)_createAndValidateMailAccountWithProperties:(id)arg1 ;
-(void)_validateDAAccount:(id)arg1 ;
-(void)_validateMailAccount:(id)arg1 ;
-(void)_addDAEmailAccount:(id)arg1 ;
-(void)_addMailAccount:(id)arg1 ;
-(void)setCloudServicesEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setBackupEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)completeEnablingCloudServicesWithCompletion:(/*^block*/id)arg1 ;
-(void)verifyAccountWithAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setupMailAccount:(id)arg1 password:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDeviceLocatorEnabled:(BOOL)arg1 ;
-(void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3 ;
-(void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(BOOL)arg3 ;
-(id)_account;
@end

