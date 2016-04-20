/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:53 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSAppleIDSplashViewController.h>

@class CNFRegController;

@interface CNFRegAppleIDSplashViewController : PSAppleIDSplashViewController {

	BOOL _showBusyUIOnAppearance;
	CNFRegController* _regController;
	long long _serviceType;

}

@property (retain) CNFRegController * regController;              //@synthesize regController=_regController - In the implementation block
@property (assign) long long serviceType;                         //@synthesize serviceType=_serviceType - In the implementation block
@property (assign) BOOL showBusyUIOnAppearance;                   //@synthesize showBusyUIOnAppearance=_showBusyUIOnAppearance - In the implementation block
+(BOOL)shouldShowSplashViewForService:(id)arg1 inProgressRegisteringNonPhoneAccount:(id*)arg2 ;
+(id)_inProgressRegisteringNonPhoneAccountForService:(id)arg1 ;
-(id)serviceName;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CNFRegController *)regController;
-(void)setRegController:(CNFRegController *)arg1 ;
-(void)continueRegisteringAccount:(id)arg1 ;
-(BOOL)showBusyUIOnAppearance;
-(void)setShowBusyUIOnAppearance:(BOOL)arg1 ;
-(id)_imService;
-(void)_handleRegistarResults:(BOOL)arg1 alertController:(id)arg2 ;
-(void)_showSettingsController;
-(void)_cnfSignInWithUsername:(id)arg1 password:(id)arg2 ;
-(void)_completeIfAccountIsAlreadyRegistered;
-(void)_applicationDidResume:(id)arg1 ;
-(void)setServiceType:(long long)arg1 ;
-(long long)serviceType;
-(void)setSpecifier:(id)arg1 ;
-(void)handleAuthCompletionWithResults:(id)arg1 ;
-(id)serviceDescription;
-(id)serviceIcon;
@end

