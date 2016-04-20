/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:37 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSAppListController.h>

@class NSArray, NSDictionary, TIUserDictionaryController;

@interface KeyboardController : PSAppListController {

	BOOL _needsReloadSpecifiers;
	NSArray* _openShortcutsSpecifiers;
	NSDictionary* _offlineStatusForLanguage;
	TIUserDictionaryController* _dictionaryController;

}

@property (nonatomic,readonly) TIUserDictionaryController * dictionaryController;              //@synthesize dictionaryController=_dictionaryController - In the implementation block
@property (nonatomic,copy) NSDictionary * offlineStatusForLanguage;                            //@synthesize offlineStatusForLanguage=_offlineStatusForLanguage - In the implementation block
@property (assign,nonatomic) BOOL needsReloadSpecifiers;                                       //@synthesize needsReloadSpecifiers=_needsReloadSpecifiers - In the implementation block
@property (nonatomic,readonly) NSArray * openShortcutsSpecifiers;                              //@synthesize openShortcutsSpecifiers=_openShortcutsSpecifiers - In the implementation block
+(long long)compareUsingOrderInArray:(id)arg1 withFirst:(id)arg2 second:(id)arg3 ;
+(void)localizeAndSortPreferencesArray:(id)arg1 ;
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)hardwareKeyboardAvailabilityChanged;
-(id)bundle;
-(TIUserDictionaryController *)dictionaryController;
-(NSDictionary *)offlineStatusForLanguage;
-(void)presentPrivacySheet:(id)arg1 ;
-(void)_dismissConfirmationSheet;
-(void)managedKeyboardSettingsDidChange;
-(void)updateOfflineDictationStatus;
-(void)dictationEnabledConfirmed:(id)arg1 ;
-(void)dictationEnabledCancelled:(id)arg1 ;
-(void)dictationDisabledConfirmed:(id)arg1 ;
-(void)dictationDisabledCancelled:(id)arg1 ;
-(void)setNeedsReloadSpecifiers:(BOOL)arg1 ;
-(void)moveCharacterPreviewPreferenceToEndForGroup:(id)arg1 ;
-(void)loadPreferenceForInputModeIdentifier:(id)arg1 addNewPreferencesToArray:(id)arg2 defaultPreferenceIdentifiers:(id)arg3 additionalPreferenceIdentifiers:(id)arg4 mapPreferenceToInputMode:(id)arg5 ;
-(id)addAllPreferencesToArray:(id)arg1 mapPreferenceToInputMode:(id)arg2 ;
-(id)groupPreferences:(id)arg1 forMapping:(id)arg2 inputModes:(id)arg3 ;
-(id)sortPreferencesKeysByInputModeOrderAndCount:(id)arg1 inputModes:(id)arg2 ;
-(id)mergePreferences:(id)arg1 inputModesToPreferences:(id)arg2 ;
-(id)localizedDisplayNameForInputMode:(id)arg1 ;
-(void)moveSpaceConfirmationPreferenceToEndAndAddFooterTextForGroup:(id)arg1 ;
-(void)disableLockedDownPreferencesForGroup:(id)arg1 ;
-(void)movePeriodShortcutPreferenceToEndAndAddFooterTextForGroup:(id)arg1 ;
-(void)moveEnableDictationPreferenceToEndAndAddFooterTextForGroup:(id)arg1 ;
-(id)hardwareKeyboardSpecifier;
-(NSArray *)openShortcutsSpecifiers;
-(void)setOfflineStatusForLanguage:(NSDictionary *)arg1 ;
-(id)loadAllKeyboardPreferences;
-(void)addHardwareKeyboardAndShortcuts:(id)arg1 ;
-(void)addEnabledExtensionSpecifiersToArray:(id)arg1 ;
-(void)setKeyboardPreferenceValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)readAutocorrectionPreferenceValue:(id)arg1 ;
-(id)readPredictionPreferenceValue:(id)arg1 ;
-(id)readKeyboardAllowPaddlePreferenceValue:(id)arg1 ;
-(id)readCheckSpellingPreferenceValue:(id)arg1 ;
-(void)setAutocorrectionPreferenceValue:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setPredictionPreferenceValue:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setKeyboardAllowPaddlePreferenceValue:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setCheckSpellingPreferenceValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)dictationEnabled:(id)arg1 ;
-(void)setDictationEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(BOOL)needsReloadSpecifiers;
-(id)readPreferenceValue:(id)arg1 ;
@end

