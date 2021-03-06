/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:17 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, ACAccountStore;

@interface PSUIPrivacyController : PSListController {

	PSSpecifier* _locationSpecifier;
	ACAccountStore* _accountStore;

}
+(void)formatSearchEntries:(id)arg1 parent:(id)arg2 ;
-(id)specifiers;
-(BOOL)shouldReloadSpecifiersOnResume;
-(void)setCapabilityEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)capabilityEnabled:(id)arg1 ;
-(BOOL)hasSocialSpecifiers:(id)arg1 ;
-(void)updateLocationServicesVisibility;
-(id)_accountStore;
-(id)locationServicesEnabled:(id)arg1 ;
@end

