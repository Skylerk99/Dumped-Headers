/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:12 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SGPreferenceStorage : NSObject
+(id)defaults;
+(void)setShowPastEvents:(BOOL)arg1 ;
+(BOOL)showSuggestionsCalendar;
+(void)setAllowGeocodeForTests:(BOOL)arg1 ;
+(void)setHidePastEventsForTests:(BOOL)arg1 ;
+(void)setShowCancelledEventsForTests:(BOOL)arg1 ;
+(BOOL)alwaysShowCancelledEvents;
+(void)setSyncHistoryToCloud:(BOOL)arg1 ;
+(void)registerBlockOnSuggestionsSettingsChange:(/*^block*/id)arg1 ;
+(void)resetAllPreferences;
+(void)setMessagesToHarvestImmediately:(long long)arg1 ;
+(BOOL)showPastEvents;
+(void)setShowContactsFoundInMailForTests:(BOOL)arg1 ;
+(void)updateBoolSettingKey:(id)arg1 withValue:(BOOL)arg2 ;
+(void)setShowEventsFoundInMailForTests:(BOOL)arg1 ;
+(void)setAllowGeocode:(BOOL)arg1 ;
+(void)setAlwaysShowCancelledEvents:(BOOL)arg1 ;
+(void)setShowEventsFoundInMail:(BOOL)arg1 ;
+(void)setNLEventsEnabledForTests:(BOOL)arg1 ;
+(long long)messagesToProcessImmediately;
+(void)removeDeprecatedDefaults;
+(id)defaultsForTests;
+(void)setProactiveEnabledForTests:(BOOL)arg1 ;
+(void)setShowContactsFoundInMail:(BOOL)arg1 ;
+(long long)suggestionsLogLevel;
+(BOOL)showEventsFoundInMail;
+(BOOL)showContactsFoundInMail;
+(BOOL)onlyShowSignificantPseudoContacts;
+(BOOL)allowGeocode;
+(BOOL)showNLEvents;
+(BOOL)syncHistoryToCloud;
@end

