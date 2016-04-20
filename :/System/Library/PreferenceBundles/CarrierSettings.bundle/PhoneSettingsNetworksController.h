/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:36 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/CarrierSettings.bundle/CarrierSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListItemsController.h>

@class NSArray, NSMutableArray, UIAlertView, PSSpecifier, NSString;

@interface PhoneSettingsNetworksController : PSListItemsController {

	NSArray* _networks;
	NSMutableArray* _networksSpecifiersArray;
	long long _indexOfNetworkToJoin;
	int _state;
	UIAlertView* _errorAlertView;
	PSSpecifier* _automaticSpecifier;
	PSSpecifier* _searchingSpecifier;
	PSSpecifier* _titleSpecifier;
	NSString* _cachedMobileIdentity;
	BOOL _isBeingPresented;

}

@property (retain) NSArray * networks;                                     //@synthesize networks=_networks - In the implementation block
@property (retain) NSMutableArray * networksSpecifiersArray;               //@synthesize networksSpecifiersArray=_networksSpecifiersArray - In the implementation block
@property (readonly) long long indexOfNetworkToJoin;                       //@synthesize indexOfNetworkToJoin=_indexOfNetworkToJoin - In the implementation block
@property (readonly) int state;                                            //@synthesize state=_state - In the implementation block
@property (retain,readonly) UIAlertView * errorAlertView;                  //@synthesize errorAlertView=_errorAlertView - In the implementation block
@property (retain,readonly) PSSpecifier * automaticSpecifier; 
@property (retain,readonly) PSSpecifier * searchingSpecifier; 
@property (retain,readonly) PSSpecifier * titleSpecifier; 
+(id)descriptionForState:(int)arg1 ;
-(void)_transitionToState:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(int)state;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(PSSpecifier *)titleSpecifier;
-(PSSpecifier *)automaticSpecifier;
-(void)_registerEventListeners;
-(void)_deregisterEventListeners;
-(BOOL)_isInManualMode;
-(BOOL)_isInAutomaticMode;
-(int)_currentNetworkSelectionState;
-(BOOL)_currentNetworkIsInNetworkList;
-(NSArray *)networks;
-(void)_selectedItemFromNetworkListAtIndex:(long long)arg1 ;
-(void)_errorDialogDismissed;
-(void)_receivedNetworkList;
-(void)_failedToReceiveNetworkList;
-(void)_failedToSwitchToNetwork;
-(void)_switchedToNetwork;
-(void)_changedOperator;
-(void)setNetworks:(NSArray *)arg1 ;
-(void)_updateSpecifierContents;
-(BOOL)_indexOfNetworkToJoinIsValid;
-(long long)indexOfNetworkToJoin;
-(void)_updateNavBarTitle;
-(void)_setAutomaticSwitchOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_showNetworkRetrievalError;
-(PSSpecifier *)searchingSpecifier;
-(NSMutableArray *)networksSpecifiersArray;
-(void)setNetworksSpecifiersArray:(NSMutableArray *)arg1 ;
-(id)_carrierSpecifierWithDictionary:(id)arg1 ;
-(long long)_indexOfCurrentNetwork;
-(void)_handleRadioOffErrorNotification:(id)arg1 ;
-(void)_handleSimChangedNotification:(id)arg1 ;
-(void)_handleNetworkSettingsDisabledNotification:(id)arg1 ;
-(void)_handleNetworksChangedNotification:(id)arg1 ;
-(void)_handleNetworkSelectionChangedNotification:(id)arg1 ;
-(void)_handleOperatorChangedNotification:(id)arg1 ;
-(void)_handleManualNetworkRequiresReselectionNotification:(id)arg1 ;
-(id)_localizedNetworkNameForNetworkDictionary:(id)arg1 ;
-(id)_carrierSpecifierWithName:(id)arg1 ;
-(void)_autoSwitchTurnedOn;
-(void)_autoSwitchTurnedOff;
-(long long)_indexOfNetworkWithCode:(id)arg1 ;
-(void)setAutomaticSwitchState:(id)arg1 forSpecifier:(id)arg2 ;
-(id)getAutomaticSwitchStateForSpecifier:(id)arg1 ;
-(UIAlertView *)errorAlertView;
-(void)_updateCachedMobileIdentity;
-(void)_settingsResumed;
-(id)descriptionDictionary;
-(BOOL)shouldReloadSpecifiersOnResume;
-(void)willBecomeActive;
-(void)listItemSelected:(id)arg1 ;
-(void)_updateCells;
@end

