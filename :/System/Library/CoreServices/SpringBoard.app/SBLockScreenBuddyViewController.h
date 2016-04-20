/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:26 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBLockOverlayViewController.h>
#import <SpringBoard/SBLockScreenBuddyViewDelegate.h>

@class NSMutableArray, SBLockScreenViewController, NSDictionary, NSArray, NSTimer, SBActivationInfoViewController, NSString, SBBuddyRegulatoryInfoViewController, SBBuddyWiFiScanner;

@interface SBLockScreenBuddyViewController : SBLockOverlayViewController <SBLockScreenBuddyViewDelegate> {

	NSMutableArray* _currentStringsOrdering;
	BOOL _needsTransitionFromFakeLogoToWelcomeStrings;
	BOOL _cyclingLabels;
	BOOL _viewVisible;
	BOOL _canShowActivationInfo;
	BOOL _showingBootLogo;
	BOOL _startsWithBlackBackground;
	BOOL _hasResultsFromWifiScan;
	BOOL _shouldResetOrderingOnNextCycle;
	SBLockScreenViewController* _lockScreenViewController;
	NSDictionary* _localizedStrings;
	NSArray* _stringsOrdering;
	unsigned long long _currentStringIndex;
	NSTimer* _stringCycleTimer;
	SBActivationInfoViewController* _activationInfoViewController;
	NSString* _telephonyPrimaryLanguage;
	NSString* _wifiPrimaryLanguage;
	SBBuddyRegulatoryInfoViewController* _regulatoryInfoViewController;
	SBBuddyWiFiScanner* _wifiScanner;

}

@property (nonatomic,readonly) NSString * slideToUnlockText; 
@property (assign,nonatomic) SBLockScreenViewController * lockScreenViewController;                           //@synthesize lockScreenViewController=_lockScreenViewController - In the implementation block
@property (nonatomic,copy) NSDictionary * localizedStrings;                                                   //@synthesize localizedStrings=_localizedStrings - In the implementation block
@property (nonatomic,copy) NSArray * stringsOrdering;                                                         //@synthesize stringsOrdering=_stringsOrdering - In the implementation block
@property (assign,nonatomic) unsigned long long currentStringIndex;                                           //@synthesize currentStringIndex=_currentStringIndex - In the implementation block
@property (nonatomic,copy) NSString * wifiPrimaryLanguage;                                                    //@synthesize wifiPrimaryLanguage=_wifiPrimaryLanguage - In the implementation block
@property (nonatomic,copy) NSString * telephonyPrimaryLanguage;                                               //@synthesize telephonyPrimaryLanguage=_telephonyPrimaryLanguage - In the implementation block
@property (nonatomic,retain) NSTimer * stringCycleTimer;                                                      //@synthesize stringCycleTimer=_stringCycleTimer - In the implementation block
@property (nonatomic,retain) SBActivationInfoViewController * activationInfoViewController;                   //@synthesize activationInfoViewController=_activationInfoViewController - In the implementation block
@property (nonatomic,retain) SBBuddyRegulatoryInfoViewController * regulatoryInfoViewController;              //@synthesize regulatoryInfoViewController=_regulatoryInfoViewController - In the implementation block
@property (assign,getter=isShowingBootLogo,nonatomic) BOOL showingBootLogo;                                   //@synthesize showingBootLogo=_showingBootLogo - In the implementation block
@property (assign,nonatomic) BOOL startsWithBlackBackground;                                                  //@synthesize startsWithBlackBackground=_startsWithBlackBackground - In the implementation block
@property (assign,nonatomic) BOOL hasResultsFromWifiScan;                                                     //@synthesize hasResultsFromWifiScan=_hasResultsFromWifiScan - In the implementation block
@property (assign,nonatomic) BOOL shouldResetOrderingOnNextCycle;                                             //@synthesize shouldResetOrderingOnNextCycle=_shouldResetOrderingOnNextCycle - In the implementation block
@property (nonatomic,retain) SBBuddyWiFiScanner * wifiScanner;                                                //@synthesize wifiScanner=_wifiScanner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBLockScreenViewController *)lockScreenViewController;
-(void)setInScreenOffMode:(BOOL)arg1 ;
-(id)initWithLockScreenViewController:(id)arg1 ;
-(void)setLockScreenViewController:(SBLockScreenViewController *)arg1 ;
-(void)buddyView:(id)arg1 didChangeToStyle:(unsigned long long)arg2 ;
-(void)stopCyclingLocalizedStrings;
-(void)_didShowBootSetupLogo:(id)arg1 ;
-(void)_didHideBootSetupLogo:(id)arg1 ;
-(void)setStringsOrdering:(NSArray *)arg1 ;
-(void)_fetchLanguageFromTelephony;
-(id)buddyView;
-(id)_currentStringsDictionary;
-(void)_transitionFromFakeBootLogoToWelcomeStrings;
-(void)_resetDisplayedLocalizedStringsImmediately:(BOOL)arg1 ;
-(void)_startCyclingLocalizedStrings;
-(NSTimer *)stringCycleTimer;
-(void)setStringCycleTimer:(NSTimer *)arg1 ;
-(BOOL)startsWithBlackBackground;
-(void)_infoButtonTapped:(id)arg1 ;
-(void)_noteLogoVisible:(BOOL)arg1 ;
-(void)_cancelWifiScan;
-(void)_removeAllHiddenReasons;
-(BOOL)isShowingBootLogo;
-(void)_startCyclingLocalizedStringsWithDelay:(double)arg1 ;
-(id)_currentLanguageIdentifier;
-(unsigned long long)currentStringIndex;
-(NSString *)telephonyPrimaryLanguage;
-(NSString *)wifiPrimaryLanguage;
-(NSArray *)stringsOrdering;
-(void)setTelephonyPrimaryLanguage:(NSString *)arg1 ;
-(id)_importantLanguageIdentifiers;
-(void)setWifiPrimaryLanguage:(NSString *)arg1 ;
-(void)setShouldResetOrderingOnNextCycle:(BOOL)arg1 ;
-(void)_cycleTimerDidFire:(id)arg1 ;
-(void)setCurrentStringIndex:(unsigned long long)arg1 ;
-(void)_updateDisplayedStrings;
-(BOOL)shouldResetOrderingOnNextCycle;
-(SBActivationInfoViewController *)activationInfoViewController;
-(SBBuddyRegulatoryInfoViewController *)regulatoryInfoViewController;
-(void)_regulatoryInfoButtonTapped:(id)arg1 ;
-(void)setActivationInfoViewController:(SBActivationInfoViewController *)arg1 ;
-(void)setRegulatoryInfoViewController:(SBBuddyRegulatoryInfoViewController *)arg1 ;
-(SBBuddyWiFiScanner *)wifiScanner;
-(void)setWifiScanner:(SBBuddyWiFiScanner *)arg1 ;
-(void)_updateWifiPrimaryLanguageFromGuessedCountries:(id)arg1 ;
-(void)setShowingBootLogo:(BOOL)arg1 ;
-(void)setStartsWithBlackBackground:(BOOL)arg1 ;
-(BOOL)hasResultsFromWifiScan;
-(void)setHasResultsFromWifiScan:(BOOL)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setLocalizedStrings:(NSDictionary *)arg1 ;
-(NSDictionary *)localizedStrings;
-(void)_startWifiScan;
-(NSString *)slideToUnlockText;
-(void)handleTapGestureFromView:(id)arg1 ;
@end

