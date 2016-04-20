/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:01 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <libobjc.A.dylib/MCProfileConnectionXPCProtocol.h>

@protocol MCInteractionDelegate, OS_dispatch_queue;
@class NSDictionary, NSData, NSObject, NSMutableArray, NSXPCConnection, NSString;

@interface MCProfileConnection : NSObject <MCProfileConnectionXPCProtocol> {

	CFBagRef _observers;
	id<MCInteractionDelegate> _interactionDelegate;
	NSDictionary* _preflightResponse;
	NSData* _originalProfileData;
	NSObject*<OS_dispatch_queue> _notificationSyncQueue;
	NSObject*<OS_dispatch_queue> _xpcConnectionSyncQueue;
	NSObject*<OS_dispatch_queue> _publicXPCConnectionSyncQueue;
	NSMutableArray* _notificationTokens;
	/*^block*/id userInputReplyBlock;
	/*^block*/id passcodeReplyBlock;
	/*^block*/id showWarningsReplyBlock;
	NSXPCConnection* _publicXPCConnection;
	NSXPCConnection* _xpcConnection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSXPCConnection * xpcConnection;                    //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * publicXPCConnection;              //@synthesize publicXPCConnection=_publicXPCConnection - In the implementation block
+(id)profileInstallationErrorWithUnderlyingError:(id)arg1 ;
+(id)sharedConnection;
-(BOOL)installConfigurationProfileWithData:(id)arg1 ;
-(id)allowedAppBundleIDsForBidirectionalDataMovementAfterApplyingFilterToBundleIDs:(id)arg1 localAppBundleID:(id)arg2 localAccountIsManaged:(BOOL)arg3 ;
-(void)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 hostAppBundleID:(id)arg2 accountIsManaged:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)mayShareToAirDropOriginatingAccountIsManaged:(BOOL)arg1 ;
-(BOOL)mayShareToMessagesOriginatingAccountIsManaged:(BOOL)arg1 ;
-(id)allowedOpenInAppBundleIDsAfterApplyingFilterToAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingAccountIsManaged:(BOOL)arg3 ;
-(BOOL)isURLManaged:(id)arg1 ;
-(BOOL)mayOpenFromManagedToUnmanaged;
-(BOOL)mayOpenFromUnmanagedToManaged;
-(BOOL)isOpenInRestrictionInEffect;
-(BOOL)isAirDropUnmanagedForced;
-(id)allowedImportFromAppBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 importingAppBundleID:(id)arg2 importingAccountIsManaged:(BOOL)arg3 ;
-(BOOL)shouldApplyFilterForBundleID:(id)arg1 sourceAccountManagement:(int)arg2 outAllowManagedAccounts:(BOOL*)arg3 outAllowUnmanagedAccounts:(BOOL*)arg4 ;
-(BOOL)isAppManaged:(id)arg1 ;
-(BOOL)mayShowLocalAccountsForBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
-(id)filteredMailSheetAccountsForBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
-(id)filteredOpenInAccounts:(id)arg1 originatingAppBundleID:(id)arg2 sourceAccountManagement:(int)arg3 ;
-(void)storeCloudConfigurationDetails:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)retrieveCloudConfigurationDetailsCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)activationRecordIndicatesCloudConfigurationIsAvailable;
-(BOOL)shouldShowCloudConfigurationUI;
-(void)markStoredProfileForPurposeAsInstalled:(int)arg1 ;
-(void)profileDataStoredForPurpose:(int)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)retrieveAndStoreCloudConfigurationDetailsCompletionBlock:(/*^block*/id)arg1 ;
-(void)retrieveCloudConfigurationFromURL:(id)arg1 username:(id)arg2 password:(id)arg3 anchorCertificates:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)wasCloudConfigurationApplied;
-(BOOL)wasTeslaCloudConfigurationApplied;
-(BOOL)isAwaitingDeviceConfigured;
-(void)cloudConfigurationUIDidCompleteWasApplied:(BOOL)arg1 ;
-(void)storeCloudConfigurationDetails:(id)arg1 ;
-(BOOL)shouldSkipSetupPanes;
-(BOOL)shouldShowSetupAssistant;
-(void)installProfileDataStoredForPurpose:(int)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)storeProfileData:(id)arg1 configurationSource:(int)arg2 purpose:(int)arg3 ;
-(BOOL)shouldInstallStoredProfileForPurpose:(int)arg1 ;
-(void)setupAssistantDidFinish;
-(BOOL)isTeslaCloudConfigurationAvailable;
-(BOOL)isSupervised;
-(id)cloudConfigurationDetails;
-(id)knownAirPrintIPPURLStrings;
-(int)appWhitelistState;
-(id)effectiveWhitelistedAppBundleIDs;
-(BOOL)isInSingleAppMode;
-(BOOL)isPasscodeRequiredToAccessWhitelistedApps;
-(BOOL)mayEnterPasscodeToAccessNonWhitelistedApps;
-(id)parentalControlsAvailableAppBundleIDsForWhitelisting;
-(id)parentalControlsWhitelistedAppBundleIDs;
-(void)setParentalControlsWhitelistedAppBundleIDs:(id)arg1 ;
-(BOOL)isParentalControlsAllowPasscodeAccessToNonWhitelistedAppsUIForcedByRestrictions;
-(BOOL)parentalControlsAllowPasscodeAccessToNonWhitelistedApps;
-(void)parentalControlsSetAllowPasscodeAccessToNonWhitelistedApps:(BOOL)arg1 ;
-(id)autonomousSingleAppModePermittedBundleIDs;
-(id)effectiveBlacklistedAppBundleIDs;
-(int)hostMayPairWithOptions:(id)arg1 challenge:(id)arg2 ;
-(void)lockdownDidReceiveActivationRecord:(id)arg1 ;
-(void)setWebContentFilterAutoPermittedURLStrings:(id)arg1 ;
-(void)addWebContentFilterAutoPermittedURLString:(id)arg1 ;
-(void)addUserBookmark:(id)arg1 ;
-(id)webContentFilterUserBlacklistedURLStrings;
-(id)webContentFilterEffectiveBlacklistedURLStrings;
-(void)setWebContentFilterUserBlacklistedURLStrings:(id)arg1 ;
-(void)removeWebContentFilterUserBlacklistedURLString:(id)arg1 ;
-(void)setUserBookmarks:(id)arg1 ;
-(id)userBookmarks;
-(BOOL)isWebFilterUIActive;
-(void)stashWebContentFilterAutoPermittedURLStrings;
-(void)stashWebContentFilterUserBlacklistedURLStrings;
-(void)unstashWebContentFilterAutoPermittedURLStrings;
-(void)unstashWebContentFilterUserBlacklistedURLStrings;
-(void)unstashUserBookmarksFromLabel:(id)arg1 ;
-(id)defaultUserBookmarks;
-(void)stashUserBookmarksWithLabel:(id)arg1 newUserBookmarks:(id)arg2 ;
-(void)doMCICDidUpdateStatus:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)doMCICDidBeginInstallingNextProfileData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)doMCICDidFinishInstallationWithIdentifier:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)doMCICDidRequestUserInput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)doMCICDidFinishPreflightWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)doMCICDidRequestShowUserWarnings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)doMCICDidRequestCurrentPasscodeWithCompletion:(/*^block*/id)arg1 ;
-(void)checkInIfNeeded;
-(id)_localizedRestricitionSourceDescriptionFromMDMName:(id)arg1 exchangeName:(id)arg2 exchangeCount:(long long)arg3 profileName:(id)arg4 profileCount:(long long)arg5 ;
-(id)activationLockBypassKeyCreateNewIfNeeded:(BOOL)arg1 ;
-(void)checkCarrierProfile;
-(void)notifyDeviceUnlocked;
-(void)notifyKeybagUpdated;
-(void)performBootTimeChecks;
-(void)removeExpiredProfiles;
-(void)storeCertificateData:(id)arg1 forHostIdentifier:(id)arg2 ;
-(void)rereadManagedAppAttributes;
-(void)checkCarrierProfileForceInstallation:(BOOL)arg1 ;
-(id)managedEmailDomains;
-(BOOL)isWallpaperModificationAllowed;
-(void)flush;
-(BOOL)isAutomaticAppUpdatesAllowed;
-(BOOL)isCloudSyncAllowed:(id)arg1 ;
-(void)shutDown;
-(id)trustedCodeSigningIdentities;
-(void)setTrustedCodeSigningIdentities:(id)arg1 ;
-(BOOL)isUIAppInstallationAllowed;
-(void)waitForMigrationIncludingPostRestoreMigration:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)migrateWithContext:(int)arg1 passcodeWasSetInBackup:(BOOL)arg2 forceAllowHostPairing:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)managedAppIDsWithFlags:(int)arg1 ;
-(BOOL)isMultitaskingAllowed;
-(void)setMultitaskingAllowed:(BOOL)arg1 ;
-(BOOL)isFingerprintUnlockAllowed;
-(id)managedWiFiNetworkNames;
-(id)managedSystemConfigurationServiceIDs;
-(id)doNotBackupAppIDs;
-(id)doNotDocumentSyncAppIDs;
-(void)setManagedEmailDomains:(id)arg1 ;
-(id)managedMedia;
-(void)processProfilesPostRestore;
-(void)processProfilesPostMigrate;
-(void)migratePostDataMigrator;
-(BOOL)isCloudKeychainSyncAllowed;
-(BOOL)isVehicleUIAllowed;
-(BOOL)isOTAPKIUpdatesAllowed;
-(BOOL)isAutomaticAppDownloadsAllowed;
-(BOOL)isAppCellularDataModificationAllowed;
-(BOOL)isWebTextDefineAllowed;
-(BOOL)isWebContentFilteringInEffect;
-(BOOL)isAdTrackingLimited;
-(BOOL)isLockScreenWiFiModificationAllowed;
-(BOOL)isAppInstallationAllowed;
-(BOOL)isAppRemovalAllowed;
-(BOOL)isAppRatingLimitInEffect;
-(BOOL)isAirDropAllowed;
-(BOOL)isLockScreenNotificationsViewAllowed;
-(BOOL)isLockScreenTodayViewAllowed;
-(BOOL)isLockScreenControlCenterAllowed;
-(BOOL)isControlCenterAllowedInApps;
-(BOOL)isActivationLockAllowed;
-(BOOL)isAssistantUserGeneratedContentAllowed;
-(BOOL)isAirPlayOutgoingRequestsPairingPasswordRequired;
-(BOOL)isAirPlayIncomingRequestsPairingPasswordRequired;
-(BOOL)isGeotagSharingAllowed;
-(BOOL)isEnterpriseBookBackupAllowed;
-(BOOL)isEnterpriseBookMetadataSyncAllowed;
-(BOOL)isDiagnosticSubmissionAllowed;
-(BOOL)hasDiagnosticSubmissionAllowedBeenSet;
-(BOOL)isAppAnalyticsAllowed;
-(BOOL)hasAppAnalyticsAllowedBeenSet;
-(BOOL)isPodcastsAllowed;
-(BOOL)isiCloudDriveAllowed;
-(BOOL)isUninstalledAppNearMeSuggestionsAllowed;
-(BOOL)isFingerprintForContactlessPaymentAllowed;
-(BOOL)isScreenShotAllowed;
-(BOOL)isScreenRecordingAllowed;
-(BOOL)isMusicServiceAllowed;
-(BOOL)isMusicArtistActivityAllowed;
-(BOOL)isAutoCorrectionAllowed;
-(BOOL)isPredictiveKeyboardAllowed;
-(BOOL)isKeyboardShortcutsAllowed;
-(BOOL)isSpellCheckAllowed;
-(void)setAutoCorrectionAllowed:(BOOL)arg1 ;
-(void)setPredictiveKeyboardAllowed:(BOOL)arg1 ;
-(void)setKeyboardShortcutsAllowed:(BOOL)arg1 ;
-(void)setSpellCheckAllowed:(BOOL)arg1 ;
-(BOOL)isNewsAllowed;
-(BOOL)isFeatureM1Allowed;
-(void)setFeatureM1Allowed:(BOOL)arg1 ;
-(id)appsRestrictedFromCloudSync;
-(BOOL)isSpotlightInternetResultsAllowed;
-(id)activationLockBypassKey;
-(void)deleteActivationLockBypassKey;
-(id)activationLockBypassHash;
-(BOOL)isMUAllowed;
-(void)setGracePeriod:(unsigned long long)arg1 passcode:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(unsigned long long)gracePeriod;
-(BOOL)shouldDestroyOldKeybag;
-(void)setAirPlaySettingsUIAllowed:(BOOL)arg1 ask:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isAirPlaySettingsUIAllowedOutAsk:(BOOL*)arg1 ;
-(void)setMediaPurchaseAllowed:(BOOL)arg1 ask:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isMediaPurchaseAllowedOutAsk:(BOOL*)arg1 ;
-(void)setExplicitContentAllowed:(BOOL)arg1 ask:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isExplicitContentAllowedOutAsk:(BOOL*)arg1 ;
-(void)setConferenceRoomDisplayModeEnabled:(BOOL)arg1 ask:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isConferenceRoomDisplayModeEnabledOutAsk:(BOOL*)arg1 ;
-(void)setConferenceRoomDisplaySettingsUIAllowed:(BOOL)arg1 ask:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isConferenceRoomDisplaySettingsUIAllowedOutAsk:(BOOL*)arg1 ;
-(BOOL)isContactlessPaymentAllowed;
-(BOOL)isInAppPaymentAllowed;
-(BOOL)isInstalledAppNearMeSuggestionsAllowed;
-(BOOL)isAutomaticAppUpdatesModificationAllowed;
-(void)setFingerprintUnlockAllowed:(BOOL)arg1 passcode:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)isFingerprintModificationAllowed;
-(BOOL)isDeviceNameModificationAllowed;
-(id)managedAppIDs;
-(void)setAutomaticAppUpdatesAllowed:(BOOL)arg1 ;
-(BOOL)isActivityContinuationAllowed;
-(BOOL)isOnDeviceAppInstallationAllowed;
-(BOOL)isPasscodeSet;
-(id)passcodeExpiryDateOutError:(id*)arg1 ;
-(void)lockDeviceImmediately:(BOOL)arg1 ;
-(void)notifyUserHasSeenComplianceMessageWithLastLockDate:(id)arg1 ;
-(void)recomputeUserComplianceWarningSynchronously;
-(int)_getPasscodeComplianceWarningExpiryDate:(id)arg1 lastLockDate:(id)arg2 outLocalizedTitle:(id*)arg3 outLocalizedMessage:(id*)arg4 ;
-(void)lockDevice;
-(BOOL)isPasscodeModificationAllowed;
-(BOOL)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 outError:(id*)arg3 ;
-(BOOL)currentPasscodeIsCompliantWithGlobalRestrictionsOutError:(id*)arg1 ;
-(BOOL)currentPasscodeIsCompliantWithProfileRestrictionsOutError:(id*)arg1 ;
-(int)getPasscodeComplianceWarningLastLockDate:(id)arg1 outLocalizedTitle:(id*)arg2 outLocalizedMessage:(id*)arg3 ;
-(void)getPasscodeComplianceWarningLastLockDate:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)recomputeUserComplianceWarning;
-(void)notifyClientsToRecomputeCompliance;
-(int)unlockScreenType;
-(int)unlockScreenTypeWithOutSimplePasscodeType:(int*)arg1 ;
-(BOOL)passcode:(id)arg1 meetsCurrentConstraintsOutError:(id*)arg2 ;
-(BOOL)changePasscodeFrom:(id)arg1 to:(id)arg2 outError:(id*)arg3 ;
-(BOOL)unlockDeviceWithPasscode:(id)arg1 outError:(id*)arg2 ;
-(int)newPasscodeEntryScreenType;
-(int)newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int*)arg1 ;
-(id)localizedDescriptionOfCurrentPasscodeConstraints;
-(BOOL)isContentProtectionInEffect;
-(BOOL)isPasscodeRequired;
-(BOOL)isPasscodeRequiredByProfiles;
-(BOOL)isBoolSettingLockedDownByRestrictions:(id)arg1 ;
-(void)setBoolValue:(BOOL)arg1 forSetting:(id)arg2 ;
-(int)effectiveBoolValueForSetting:(id)arg1 ;
-(void)setParametersForSettingsByType:(id)arg1 passcode:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)resetAllSettingsToDefaultsIsUserInitiated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)defaultValueForSetting:(id)arg1 ;
-(void)setParametersForSettingsByType:(id)arg1 passcode:(id)arg2 ;
-(void)setBoolValue:(BOOL)arg1 forSetting:(id)arg2 passcode:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setBoolValue:(BOOL)arg1 ask:(BOOL)arg2 forSetting:(id)arg3 passcode:(id)arg4 completion:(/*^block*/id)arg5 ;
-(int)defaultBoolValueForSetting:(id)arg1 ;
-(id)effectiveParametersForBoolSetting:(id)arg1 ;
-(id)effectiveParametersForUnionSetting:(id)arg1 ;
-(int)effectiveBoolValueForSetting:(id)arg1 outAsk:(BOOL*)arg2 ;
-(id)effectiveParametersForIntersectionSetting:(id)arg1 ;
-(BOOL)isSettingLockedDownByRestrictions:(id)arg1 ;
-(id)_settingsLockedDownByRestrictions:(id)arg1 ;
-(BOOL)_areProfilesRestrictingSettings:(id)arg1 outMDMName:(id*)arg2 outExchangeName:(id*)arg3 outExchangeCount:(long long*)arg4 outProfileName:(id*)arg5 outProfileCount:(long long*)arg6 ;
-(BOOL)isIntersectionSettingLockedDownByRestrictions:(id)arg1 ;
-(BOOL)isUnionSettingLockedDownByRestrictions:(id)arg1 ;
-(id)effectiveUserSettings;
-(void)setParameters:(id)arg1 forBoolSetting:(id)arg2 ;
-(void)setParameters:(id)arg1 forValueSetting:(id)arg2 ;
-(id)parametersForBoolSetting:(id)arg1 ;
-(id)parametersForIntersectionSetting:(id)arg1 ;
-(id)parametersForUnionSetting:(id)arg1 ;
-(id)defaultValuesForIntersectionSetting:(id)arg1 ;
-(id)defaultValuesForUnionSetting:(id)arg1 ;
-(BOOL)areSettingsLockedDownByRestrictions:(id)arg1 ;
-(void)removeBoolSetting:(id)arg1 ;
-(void)removeValueSetting:(id)arg1 ;
-(void)resetAllSettingsToDefaults;
-(id)defaultParametersForBoolSetting:(id)arg1 ;
-(id)defaultParametersForValueSetting:(id)arg1 ;
-(id)defaultParametersForIntersectionSetting:(id)arg1 ;
-(id)defaultParametersForUnionSetting:(id)arg1 ;
-(void)setParametersForSettingsByType:(id)arg1 ;
-(id)effectiveValuesForIntersectionSetting:(id)arg1 ;
-(id)effectiveValuesForUnionSetting:(id)arg1 ;
-(void)setValues:(id)arg1 forIntersectionSetting:(id)arg2 ;
-(void)setValues:(id)arg1 forUnionSetting:(id)arg2 ;
-(id)effectiveParametersForValueSetting:(id)arg1 ;
-(BOOL)isValueSettingLockedDownByRestrictions:(id)arg1 ;
-(void)setValue:(id)arg1 forSetting:(id)arg2 ;
-(id)localizedRestrictionSourceDescriptionForFeatures:(id)arg1 ;
-(id)parametersForValueSetting:(id)arg1 ;
-(void)setValue:(id)arg1 forSetting:(id)arg2 passcode:(id)arg3 ;
-(void)setBoolValue:(BOOL)arg1 forSetting:(id)arg2 passcode:(id)arg3 ;
-(id)userSettings;
-(id)effectiveValueForSetting:(id)arg1 ;
-(BOOL)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 localizedWarningMessage:(id)arg5 outRestrictionChanged:(BOOL*)arg6 outEffectiveSettingsChanged:(BOOL*)arg7 outError:(id*)arg8 ;
-(int)boolRestrictionForFeature:(id)arg1 ;
-(id)valueRestrictionForFeature:(id)arg1 ;
-(id)objectRestrictionForFeature:(id)arg1 ;
-(id)allClientUUIDsForClientType:(id)arg1 ;
-(id)userInfoForClientUUID:(id)arg1 ;
-(void)setUserInfo:(id)arg1 forClientUUID:(id)arg2 ;
-(id)effectiveRestrictions;
-(int)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 localizedWarningMessage:(id)arg5 complianceBlocking:(int)arg6 displayImmediateAlert:(BOOL)arg7 outRestrictionChanged:(BOOL*)arg8 outEffectiveSettingsChanged:(BOOL*)arg9 outError:(id*)arg10 ;
-(void)removeOrphanedClientRestrictions;
-(id)effectiveWhitelistedAppsAndOptions;
-(void)setInteractionDelegate:(id)arg1 ;
-(void)isProfileInstalledWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeProfileWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)installedProfileDataWithIdentifier:(id)arg1 ;
-(id)_queueDataForAcceptance:(id)arg1 originalFileName:(id)arg2 originatingBundleID:(id)arg3 transitionToUI:(BOOL)arg4 outError:(id*)arg5 ;
-(id)installedProfileIdentifiersWithFilterFlags:(int)arg1 ;
-(id)installProfileData:(id)arg1 options:(id)arg2 outError:(id*)arg3 ;
-(BOOL)_openSensitiveURLString:(id)arg1 unlock:(BOOL)arg2 ;
-(BOOL)transitionToProfileAcceptanceUIAndReturnToBundleID:(id)arg1 ;
-(id)installedProfilesWithFilterFlags:(int)arg1 ;
-(void)installProfileData:(id)arg1 options:(id)arg2 interactionDelegate:(id)arg3 ;
-(id)installedProfileIdentifiers;
-(id)installedConfigurationProfileInfoWithOutMDMProfileInfo:(id*)arg1 ;
-(id)popProfileDataFromHeadOfInstallationQueue;
-(id)popProvisioningProfileDataFromHeadOfInstallationQueue;
-(id)queueFileDataForAcceptance:(id)arg1 originalFileName:(id)arg2 outError:(id*)arg3 ;
-(id)queueFileDataForAcceptance:(id)arg1 originalFileName:(id)arg2 forBundleID:(id)arg3 outError:(id*)arg4 ;
-(id)installProfileData:(id)arg1 outError:(id*)arg2 ;
-(void)removeProfileWithIdentifier:(id)arg1 ;
-(void)removeProfileAsyncWithIdentifier:(id)arg1 ;
-(id)updateProfileWithIdentifier:(id)arg1 outError:(id*)arg2 ;
-(id)acceptedMIMETypes;
-(id)acceptedFileExtensions;
-(BOOL)transitionToProfileOverviewUI;
-(BOOL)transitionToProfileAcceptanceUI;
-(BOOL)showProfileErrorUIWithProfileIdentifier:(id)arg1 outError:(id*)arg2 ;
-(BOOL)installProvisioningProfileData:(id)arg1 managingProfileIdentifier:(id)arg2 outError:(id*)arg3 ;
-(BOOL)removeProvisioningProfileWithUUID:(id)arg1 outError:(id*)arg2 ;
-(void)_detectProfiledCrashes;
-(void)installProfileData:(id)arg1 interactionDelegate:(id)arg2 ;
-(void)updateProfileWithIdentifier:(id)arg1 interactionDelegate:(id)arg2 ;
-(void)preflightUserInputResponses:(id)arg1 forPayloadIndex:(unsigned long long)arg2 ;
-(void)cancelUserInputResponses;
-(void)submitUserInputResponses:(id)arg1 ;
-(void)__checkForProfiledCrash;
-(void)respondToWarningsContinueInstallation:(BOOL)arg1 ;
-(void)respondToCurrentPasscodeRequestContinue:(BOOL)arg1 passcode:(id)arg2 ;
-(BOOL)isChaperoned;
-(id)chaperoneOrganization;
-(id)installedMDMProfileIdentifier;
-(id)installedProfileWithIdentifier:(id)arg1 ;
-(int)effectiveRestrictedBoolValueForSetting:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)profileFromProfileData:(id)arg1 outError:(id*)arg2 ;
-(id)queueProfileDataForAcceptance:(id)arg1 outError:(id*)arg2 ;
-(id)queueProfileDataForInstallation:(id)arg1 outError:(id*)arg2 ;
-(id)queueFileDataForProfileInstallation:(id)arg1 originalFileName:(id)arg2 outError:(id*)arg3 ;
-(BOOL)isPasscodeRequiredByPolicy;
-(id)passcodeExpiryDate;
-(BOOL)validatePasscode:(id)arg1 ;
-(BOOL)validatePasscode:(id)arg1 andUnlockContentProtectedDevice:(BOOL)arg2 ;
-(BOOL)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 outRestrictionChanged:(BOOL*)arg4 outEffectiveSettingsChanged:(BOOL*)arg5 outError:(id*)arg6 ;
-(void)setPasscodeWasSetInBackup:(BOOL)arg1 ;
-(int)restrictedBoolValueForFeature:(id)arg1 ;
-(id)objectForFeature:(id)arg1 ;
-(id)valueForFeature:(id)arg1 ;
-(void)dealloc;
-(id)_init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)_queueCreateAndResumeXPCConnection;
-(void)_queueCreateAndResumePublicXPCConnection;
-(void)_createAndResumeXPCConnection;
-(void)_createAndResumePublicXPCConnection;
-(void)_restrictionDidChange;
-(void)_passcodePolicyDidChange;
-(void)_passcodeDidChange;
-(void)_profileListDidChange;
-(void)_effectiveSettingsDidChange:(id)arg1 ;
-(void)_appWhitelistDidChange:(id)arg1 ;
-(NSXPCConnection *)publicXPCConnection;
-(void)_applyToObservers:(/*^block*/id)arg1 ;
-(void)_internalDefaultsDidChange;
-(void)checkIn;
-(void)checkInAsynchronously;
-(void)_defaultsDidChange;
@end

