/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:52 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CNFRegFirstRunController.h>

@class PSSpecifier, NSArray, NSTimer, NSString;

@interface CNFRegEmailController : CNFRegFirstRunController {

	PSSpecifier* _emailSpecifier;
	PSSpecifier* _actionGroupSpecifier;
	PSSpecifier* _currentActionSpecifier;
	NSArray* _checkMailSpecifiers;
	NSTimer* _validationTimeoutTimer;
	NSString* _pendingAlias;
	BOOL _validating;

}

@property (nonatomic,copy) NSString * pendingAlias;              //@synthesize pendingAlias=_pendingAlias - In the implementation block
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)bundle;
-(void)systemApplicationWillEnterForeground;
-(void)systemApplicationDidEnterBackground;
-(id)selectedAliases;
-(id)specifierList;
-(id)logName;
-(void)_setFieldsEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setupEventHandlers;
-(void)_stopValidationModeAnimated:(BOOL)arg1 ;
-(void)_buildSpecifierCache:(id)arg1 ;
-(id)aliasSpecifiers;
-(void)setAliasSelected:(id)arg1 ;
-(void)_returnKeyPressed;
-(id)_rightButtonItem;
-(void)_handleValidationModeCancelled;
-(void)_updateControllerState;
-(void)_finishValidation;
-(void)_failValidationWithError:(id)arg1 ;
-(void)stopValidationTimeoutTimer;
-(BOOL)shouldShowAllVettedAliases;
-(BOOL)_phoneNumberInAliases:(id)arg1 ;
-(id)_createSpecifierForAlias:(id)arg1 ;
-(void)nextTapped;
-(void)_showCheckMailButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)startValidationTimeoutTimer;
-(id)emailTextField;
-(void)setPendingAlias:(NSString *)arg1 ;
-(BOOL)emailFieldIsEmpty;
-(NSString *)pendingAlias;
-(void)_refreshEnabledStateOfAliasSpecifiers;
-(double)timeoutDuration;
-(void)validationTimeout:(id)arg1 ;
-(void)_buildEmailSpecifierCache:(id)arg1 ;
-(void)_buildCheckMailSpecifierCache:(id)arg1 ;
-(void)_buildActionGroupSpecifierCache:(id)arg1 ;
-(BOOL)showActionSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)onlyLocalPhoneNumberSentinelAliasIsSelected;
-(void)checkMailTapped:(id)arg1 ;
-(void)emailFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2 ;
-(id)pendingAliasForSpecifier:(id)arg1 ;
-(void)setPendingAlias:(id)arg1 forSpecifier:(id)arg2 ;
-(id)titleString;
-(void)_updateUI;
@end

