/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:34 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GAXProfileManagerDelegate;
#import <GAXBackboardServer/GAXBackboardServer-Structs.h>
@class NSMutableDictionary, NSDictionary, NSArray, AXAccessQueueTimer, NSString, NSData;

@interface GAXProfileManager : NSObject {

	unsigned _configuration;
	NSMutableDictionary* _userAppPropertiesMap;
	NSMutableDictionary* _userGlobalPropertiesMap;
	NSMutableDictionary* _singleAppModeAppPropertiesMap;
	NSMutableDictionary* _singleAppModeGlobalPropertiesMap;
	NSDictionary* _profileKeyToRetrieveSelectorMap;
	NSDictionary* _fallbackPropertyValues;
	NSArray* _appSpecificProfileKeys;
	NSArray* _globalProfileKeys;
	id<GAXProfileManagerDelegate> _delegate;
	AXAccessQueueTimer* _managedConfigurationNotificationCoalesceTimer;
	AXAccessQueueTimer* _profileFeatureChangedNotificationTimer;
	NSString* _singleAppModeAppID;

}

@property (assign,nonatomic) id<GAXProfileManagerDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned configuration;                                                          //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) BOOL isUserMode; 
@property (nonatomic,readonly) BOOL isSingleAppMode; 
@property (nonatomic,readonly) BOOL isAppSelfLockMode; 
@property (nonatomic,readonly) BOOL shouldAllowKeyboardTextInput; 
@property (nonatomic,readonly) BOOL shouldAllowTouch; 
@property (nonatomic,readonly) BOOL shouldAllowMotion; 
@property (nonatomic,readonly) BOOL shouldAllowLockButton; 
@property (nonatomic,readonly) BOOL shouldAllowVolumeButtons; 
@property (nonatomic,readonly) BOOL shouldAllowRingerSwitch; 
@property (nonatomic,readonly) BOOL shouldAllowProximity; 
@property (nonatomic,readonly) BOOL shouldAllowAutolock; 
@property (nonatomic,readonly) long long appTimeoutDuration; 
@property (nonatomic,readonly) BOOL timeRestrictionsEnabled; 
@property (nonatomic,readonly) BOOL shouldEnableVoiceOver; 
@property (nonatomic,readonly) BOOL shouldEnableZoom; 
@property (nonatomic,readonly) BOOL shouldEnableInvertColors; 
@property (nonatomic,readonly) BOOL shouldEnableGrayscale; 
@property (nonatomic,readonly) BOOL shouldEnableAssistiveTouch; 
@property (nonatomic,readonly) BOOL shouldEnableSpeakSelection; 
@property (nonatomic,readonly) BOOL shouldEnableMonoAudio; 
@property (nonatomic,readonly) BOOL shouldDisableVoiceOver; 
@property (nonatomic,readonly) BOOL shouldDisableZoom; 
@property (nonatomic,readonly) BOOL shouldDisableInvertColors; 
@property (nonatomic,readonly) BOOL shouldDisableGrayscale; 
@property (nonatomic,readonly) BOOL shouldDisableAssistiveTouch; 
@property (nonatomic,readonly) BOOL shouldDisableSpeakSelection; 
@property (nonatomic,readonly) BOOL shouldDisableMonoAudio; 
@property (nonatomic,readonly) BOOL shouldAllowToggleOfVoiceOver; 
@property (nonatomic,readonly) BOOL shouldAllowToggleOfZoom; 
@property (nonatomic,readonly) BOOL shouldAllowToggleOfInvertColors; 
@property (nonatomic,readonly) BOOL shouldAllowToggleOfGrayscale; 
@property (nonatomic,readonly) BOOL shouldAllowToggleOfAssistiveTouch; 
@property (nonatomic,readonly) NSData * ignoredTouchRegionsPortrait; 
@property (nonatomic,readonly) NSData * ignoredTouchRegionsLandscape; 
@property (nonatomic,readonly) NSDictionary * restrictionStates; 
@property (nonatomic,readonly) NSDictionary * unappliedRestrictionStates; 
@property (nonatomic,readonly) BOOL shouldAllowHomeButton; 
@property (nonatomic,readonly) BOOL shouldAutolaunchCrashedApps; 
@property (nonatomic,readonly) BOOL shouldAutolaunchAppsAfterSystemCrash; 
@property (nonatomic,readonly) BOOL shouldAutolaunchAppsAfterLowBatteryPowerDown; 
@property (nonatomic,readonly) BOOL shouldAllowExit; 
@property (nonatomic,retain) NSString * singleAppModeAppID;                                                   //@synthesize singleAppModeAppID=_singleAppModeAppID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userAppPropertiesMap;                                      //@synthesize userAppPropertiesMap=_userAppPropertiesMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userGlobalPropertiesMap;                                   //@synthesize userGlobalPropertiesMap=_userGlobalPropertiesMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * singleAppModeAppPropertiesMap;                             //@synthesize singleAppModeAppPropertiesMap=_singleAppModeAppPropertiesMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * singleAppModeGlobalPropertiesMap;                          //@synthesize singleAppModeGlobalPropertiesMap=_singleAppModeGlobalPropertiesMap - In the implementation block
@property (nonatomic,retain) NSDictionary * profileKeyToRetrieveSelectorMap;                                  //@synthesize profileKeyToRetrieveSelectorMap=_profileKeyToRetrieveSelectorMap - In the implementation block
@property (nonatomic,retain) NSDictionary * fallbackPropertyValues;                                           //@synthesize fallbackPropertyValues=_fallbackPropertyValues - In the implementation block
@property (nonatomic,retain) NSArray * appSpecificProfileKeys;                                                //@synthesize appSpecificProfileKeys=_appSpecificProfileKeys - In the implementation block
@property (nonatomic,retain) NSArray * globalProfileKeys;                                                     //@synthesize globalProfileKeys=_globalProfileKeys - In the implementation block
@property (nonatomic,retain) AXAccessQueueTimer * managedConfigurationNotificationCoalesceTimer;              //@synthesize managedConfigurationNotificationCoalesceTimer=_managedConfigurationNotificationCoalesceTimer - In the implementation block
@property (nonatomic,retain) AXAccessQueueTimer * profileFeatureChangedNotificationTimer;                     //@synthesize profileFeatureChangedNotificationTimer=_profileFeatureChangedNotificationTimer - In the implementation block
-(BOOL)shouldAllowExit;
-(BOOL)isUserMode;
-(BOOL)isSingleAppMode;
-(id)selfLockAppIDs;
-(void)_initializeProfileKeyToRetrieveSelectorMap;
-(void)_initializeFallbackPropertyValues;
-(void)_initializeProfileKeys;
-(void)_updateConfigurationAndNotifyDelegate:(BOOL)arg1 ;
-(void)_handleSingleAppModeStateDidChange:(id)arg1 ;
-(BOOL)shouldAllowKeyboardTextInput;
-(BOOL)shouldAllowTouch;
-(BOOL)shouldAllowMotion;
-(BOOL)shouldAllowRingerSwitch;
-(BOOL)shouldAllowProximity;
-(BOOL)shouldAllowLockButton;
-(BOOL)shouldAllowVolumeButtons;
-(BOOL)shouldAllowAutolock;
-(long long)appTimeoutDuration;
-(BOOL)timeRestrictionsEnabled;
-(BOOL)shouldEnableVoiceOver;
-(BOOL)shouldEnableZoom;
-(BOOL)shouldEnableInvertColors;
-(BOOL)shouldEnableGrayscale;
-(BOOL)shouldEnableAssistiveTouch;
-(BOOL)shouldEnableSpeakSelection;
-(BOOL)shouldEnableMonoAudio;
-(BOOL)shouldAllowToggleOfVoiceOver;
-(BOOL)shouldAllowToggleOfZoom;
-(BOOL)shouldAllowToggleOfInvertColors;
-(BOOL)shouldAllowToggleOfGrayscale;
-(BOOL)shouldAllowToggleOfAssistiveTouch;
-(NSData *)ignoredTouchRegionsPortrait;
-(NSData *)ignoredTouchRegionsLandscape;
-(NSDictionary *)restrictionStates;
-(NSDictionary *)unappliedRestrictionStates;
-(BOOL)shouldAllowHomeButton;
-(BOOL)shouldAutolaunchCrashedApps;
-(BOOL)shouldAutolaunchAppsAfterSystemCrash;
-(BOOL)shouldAutolaunchAppsAfterLowBatteryPowerDown;
-(void)setProfileKeyToRetrieveSelectorMap:(NSDictionary *)arg1 ;
-(void)setFallbackPropertyValues:(NSDictionary *)arg1 ;
-(void)setAppSpecificProfileKeys:(NSArray *)arg1 ;
-(void)setGlobalProfileKeys:(NSArray *)arg1 ;
-(id)_globalPropertyMapForConfiguration:(unsigned)arg1 ;
-(id)_appPropertyMapForConfiguration:(unsigned)arg1 ;
-(NSDictionary *)fallbackPropertyValues;
-(NSString *)singleAppModeAppID;
-(id)_valueForRetrieveSelector:(SEL)arg1 ;
-(id)_valueForProfileKey:(id)arg1 ;
-(void)updateProperty:(id)arg1 withValue:(id)arg2 ;
-(long long)stateForRestrictionWithIdentifier:(id)arg1 ;
-(NSMutableDictionary *)userAppPropertiesMap;
-(NSMutableDictionary *)singleAppModeAppPropertiesMap;
-(NSMutableDictionary *)userGlobalPropertiesMap;
-(NSMutableDictionary *)singleAppModeGlobalPropertiesMap;
-(BOOL)_isProfileKeyGlobal:(id)arg1 ;
-(id)_appIDForConfiguration:(unsigned)arg1 ;
-(id)_fallbackValueForProfieKey:(id)arg1 ;
-(id)_profileKeyForRetrieveSelector:(SEL)arg1 ;
-(NSDictionary *)profileKeyToRetrieveSelectorMap;
-(NSArray *)globalProfileKeys;
-(void)_updateSingleAppModeStateFromManagedConfiguration;
-(id)_singleAppModeAppIDs;
-(void)_updateProperty:(id)arg1 withValue:(id)arg2 saveChanges:(BOOL)arg3 ;
-(void)setSingleAppModeAppID:(NSString *)arg1 ;
-(id)_guidedAccessProfileKeyForManagedConfigKey:(id)arg1 shouldInvertValue:(BOOL*)arg2 ;
-(void)_applyWebTextDefineProperty:(BOOL)arg1 properties:(id)arg2 ;
-(void)setSingleAppModeAppPropertiesMap:(NSMutableDictionary *)arg1 ;
-(AXAccessQueueTimer *)managedConfigurationNotificationCoalesceTimer;
-(void)setManagedConfigurationNotificationCoalesceTimer:(AXAccessQueueTimer *)arg1 ;
-(BOOL)shouldDisableVoiceOver;
-(BOOL)shouldDisableZoom;
-(BOOL)shouldDisableInvertColors;
-(BOOL)shouldDisableGrayscale;
-(BOOL)shouldDisableAssistiveTouch;
-(BOOL)shouldDisableSpeakSelection;
-(BOOL)shouldDisableMonoAudio;
-(BOOL)isAppSelfLockMode;
-(id)ignoredTouchRegionsForOrientation:(long long)arg1 ;
-(id)statesForRestrictionsWithIdentifiers:(id)arg1 ;
-(SCD_Struct_GA0)profileAccessibilityFeatureSet;
-(void)setStatesForRestrictions:(id)arg1 ;
-(void)setIgnoredTouchRegions:(id)arg1 forOrientation:(long long)arg2 ;
-(BOOL)isAppPrivilagedToSelfLock:(id)arg1 ;
-(void)notifySelfLockStateDidChange;
-(int)isAvailabilityValid:(unsigned long long)arg1 forSelfLockAppToEnableGuidedAccess:(BOOL)arg2 ;
-(id)unappliedChangedStatesForRestrictions;
-(void)clearUnappliedChangedStatesForRestrictions;
-(SEL)_retrieveSelectorForProfileKey:(id)arg1 ;
-(id)_fallbackValueForRetrieveSelector:(SEL)arg1 ;
-(AXAccessQueueTimer *)profileFeatureChangedNotificationTimer;
-(void)setProfileFeatureChangedNotificationTimer:(AXAccessQueueTimer *)arg1 ;
-(void)setSingleAppModeGlobalPropertiesMap:(NSMutableDictionary *)arg1 ;
-(NSArray *)appSpecificProfileKeys;
-(void)setUserAppPropertiesMap:(NSMutableDictionary *)arg1 ;
-(void)setUserGlobalPropertiesMap:(NSMutableDictionary *)arg1 ;
-(void)setDelegate:(id<GAXProfileManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id<GAXProfileManagerDelegate>)delegate;
-(void)setConfiguration:(unsigned)arg1 ;
-(unsigned)configuration;
@end

