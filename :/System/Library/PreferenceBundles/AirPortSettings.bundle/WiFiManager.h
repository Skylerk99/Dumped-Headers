/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:34 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortSettings/AirPortSettings-Structs.h>
#import <libobjc.A.dylib/SFRemoteHotspotSessionDelegate.h>

@class NSString, NSArray, WiFiNetwork, NSDictionary, NSMutableDictionary, NSMutableArray, NSSet, NSMutableSet, SFRemoteHotspotSession;

@interface WiFiManager : NSObject <SFRemoteHotspotSessionDelegate> {

	WiFiManagerClientRef _manager;
	WiFiDeviceClientRef _device;
	SCDynamicStoreRef _store;
	SCPreferencesRef _prefs;
	NSString* _interfaceName;
	NSArray* _dynamicStoreKeys;
	NSString* _ipv4StateKey;
	NSString* _ipv6StateKey;
	WiFiNetwork* _current;
	WiFiNetworkRef _currentWiFiNetworkRef;
	NSDictionary* _currentNetworkScanDict;
	NSMutableDictionary* _configurationDict;
	NSMutableArray* _hotspotNetworks;
	NSMutableDictionary* _networks;
	NSMutableArray* _favorites;
	NSMutableArray* _favoritesArray;
	NSMutableDictionary* _customSettings;
	NSSet* _managedNetworkNames;
	NSMutableSet* _networksInCurrentScan;
	NSMutableArray* _hiddenFavoritesQueue;
	BOOL _isConnected;
	BOOL _enabled;
	int _autojoin;
	BOOL _associating;
	BOOL _joiningEnterprise;
	BOOL _joiningRemoteHotspot;
	long long _remoteHotspotScanAttempts;
	BOOL _isDirty;
	BOOL _shouldScan;
	BOOL _initialPowerOnScan;
	BOOL _haveValidIPv4Address;
	NSMutableArray* _scanList;
	int _rssiThreshold;
	int _scanningMode;
	WiFiNetwork* _joinNetwork;
	WiFiNetwork* _scanForHiddenNetwork;
	WiFiNetwork* _deferredJoin;
	unsigned _consecutiveScanFailures;
	unsigned _enterpriseAssociationAttempts;
	BOOL _settingScanResults;
	int _supportsWAPI;
	BOOL _globalProxyEnabled;
	BOOL _hs20Supported;
	BOOL _hs20ProfilesInstalled;
	NSMutableDictionary* _hs20LabelDict;
	NSMutableDictionary* _captivePlugInDict;
	SFRemoteHotspotSession* _remoteSession;
	BOOL _networkSyncingEnabled;
	BOOL _waitingForCircleStatusCheck;
	double _scanTimestamp;

}

@property (assign) double scanTimestamp;                            //@synthesize scanTimestamp=_scanTimestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)releaseSharedInstance;
+(id)__scanChannelDictForChannelNumber:(id)arg1 supportedChannels:(id)arg2 ;
-(void)_load;
-(void)_setScanResults:(id)arg1 ;
-(void)_initDynamicStoreMonitor;
-(void)_getCurrentNetworkInfo;
-(void)_copyAutojoinPropertiesToNetwork:(id)arg1 ;
-(id)_scanListForChannels:(id)arg1 ;
-(id)_scanListForNetworks:(id)arg1 ;
-(id)_scanDictForChannels:(id)arg1 andNetworks:(id)arg2 ;
-(void)_addNetworkForDictionary:(id)arg1 ;
-(void)_associationAttemptFinishedWithError:(id)arg1 onNetwork:(WiFiNetworkRef)arg2 ;
-(BOOL)_forgetWiFiNetwork:(id)arg1 ;
-(BOOL)_forgetNetworkWithSSID:(id)arg1 ;
-(void)_setupNewSetForNetwork:(id)arg1 ;
-(void)_storeCustomSettingsForNetwork:(id)arg1 ;
-(void)_applySetForCurrentNetwork;
-(id)_loadCustomSettingsForNetwork:(id)arg1 ;
-(void)_remoteHotspotJoinFailed;
-(id)_interfaceName;
-(BOOL)forgetWiFiNetwork:(id)arg1 ;
-(void)_loadFavorites;
-(void)_postEnterpriseNotification:(id)arg1 ;
-(void)_checkIsCurrentNetwork:(id)arg1 ;
-(void)_updateAutojoinInformation;
-(void)_loadCustomSettings;
-(void)_updateHiddenFavoritesQueue;
-(void)_checkCloudNetworkSyncStatus;
-(void)_logScanResults:(id)arg1 ;
-(void)_checkForGasQueries;
-(void)_refreshHs20LabeledNetworks:(id)arg1 ;
-(void)_scanCompletedWithResults:(id)arg1 ;
-(id)_networkFromDictionary:(id)arg1 ;
-(void)_updateDynamicStoreKeys:(id)arg1 ;
-(void)_dynamicStoreChanged:(id)arg1 ;
-(void)_deleteSetForNetworkWithSSID:(id)arg1 ;
-(SCNetworkSetRef)_createNewSetForNetwork:(id)arg1 ;
-(SCNetworkSetRef)_defaultSetRetained;
-(SCNetworkSetRef)_setForNetwork:(id)arg1 ;
-(void)_applyCustomProxySettings:(id)arg1 forService:(SCNetworkServiceRef)arg2 setKeychain:(BOOL)arg3 ;
-(void)_resetDynamicStoreMonitor;
-(void)_delayedPerformSelector:(id)arg1 ;
-(id)_currentNetwork;
-(id)_arrayFromCommaSeparatedString:(id)arg1 ;
-(void)_enterpriseAssociationResult:(id)arg1 withInfo:(id)arg2 ;
-(void)_scanFailedWithError:(id)arg1 ;
-(void)_gasQueryCompletedWithResults:(id)arg1 ;
-(void)_setIPv4StateKey:(id)arg1 ;
-(void)_linkChangedWithDict:(id)arg1 ;
-(void)_linkChanged;
-(void)_powerChanged;
-(void)_deleteSetForNetwork:(id)arg1 ;
-(void)_postNotificationName:(id)arg1 ;
-(void)_delayedPerformSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 ;
-(SCDynamicStoreRef)store;
-(BOOL)enabled;
-(void)dealloc;
-(id)init;
-(BOOL)setEnabled:(BOOL)arg1 ;
-(BOOL)wifiIsTethering;
-(id)currentCachedNetwork;
-(BOOL)canSupportWAPI;
-(void)forgetNetwork:(id)arg1 ;
-(BOOL)isNetworkCloudSynced:(id)arg1 ;
-(BOOL)isCarplayOnlyNetwork:(id)arg1 ;
-(void)renewLease;
-(void)loadCustomSettingsForNetwork:(id)arg1 ;
-(BOOL)canForgetNetwork:(id)arg1 ;
-(BOOL)canSetAutoJoin:(id)arg1 ;
-(BOOL)canSetAutoLogin:(id)arg1 ;
-(BOOL)globalProxyEnabled;
-(void)saveCustomSettingsForNetwork:(id)arg1 ;
-(void)setAutoJoin:(BOOL)arg1 forNetwork:(id)arg2 ;
-(BOOL)networkEnabled:(id)arg1 ;
-(void)setAutoLogin:(BOOL)arg1 forNetwork:(id)arg2 ;
-(BOOL)autoLogin:(id)arg1 ;
-(void)loadConfiguration;
-(id)knownNetworks;
-(void)disablePersonalHotspot;
-(void)disconnectFromCurrentNetwork;
-(BOOL)personalHotspotHasClients;
-(id)getCarNameFromCarplayNetwork:(id)arg1 ;
-(id)hotspotNetworks;
-(id)availableNetworks;
-(void)endHotspotScan;
-(void)beginHotspotScan;
-(int)autojoinMode;
-(void)setAutojoinMode:(int)arg1 ;
-(void)beginCaptivePlugInScan;
-(void)endCaptivePlugInScan;
-(void)removeNetworkNamed:(id)arg1 ;
-(void)releaseResources:(BOOL)arg1 ;
-(void)cleanupNetworks;
-(void)setShouldScan:(BOOL)arg1 ;
-(BOOL)scanForNetwork:(id)arg1 ;
-(void)cancelEnterpriseTrust:(id)arg1 forUser:(BOOL)arg2 ;
-(void)startRemoteHotspotSession:(id)arg1 ;
-(BOOL)isInCarplaySession:(id)arg1 ;
-(void)joinNetwork:(id)arg1 isHidden:(BOOL)arg2 ;
-(void)joinNetwork:(id)arg1 ;
-(void)attemptEnterpriseAssociation;
-(void)acceptEnterpriseTrust:(id)arg1 ;
-(void)cancelEnterpriseAssociation;
-(void)relayCircleStatusCheck:(id)arg1 ;
-(id)findEqualKnownWiFiNetworks:(id)arg1 ;
-(void)_cancelEnterpriseAssociation;
-(BOOL)_scanForHiddenNetwork:(id)arg1 ;
-(void)setWiFiTetheringOff;
-(SCPreferencesRef)getSCRef;
-(BOOL)isCaptive:(id)arg1 ;
-(BOOL)isPreferredAdhocNetwork:(id)arg1 ;
-(id)findEqualKnownNetworks:(WiFiNetworkRef)arg1 ;
-(BOOL)haveValidIPv6;
-(id)labelForNetwork:(id)arg1 ;
-(BOOL)scanning;
-(id)currentNetworkInfo;
-(id)currentNetworkStrength;
-(BOOL)isPowerRestricted;
-(void)asyncCircleStatusCheck:(id)arg1 ;
-(void)forgetNetworkName:(id)arg1 ;
-(void)movedKnownNetworkAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(id)findMatchingSSIDKnownNetworks:(id)arg1 ;
-(BOOL)haveValidIP;
-(BOOL)haveValidIPv4OrIPv6AddressForNetwork:(id)arg1 ;
-(BOOL)isAssociatingToNetwork:(id)arg1 ;
-(BOOL)isJoiningRemoteHotspotNetwork:(id)arg1 ;
-(BOOL)isJoiningRemoteHotspot;
-(BOOL)isAssociating;
-(BOOL)deviceSupportsHS20;
-(double)scanTimestamp;
-(void)setScanTimestamp:(double)arg1 ;
-(id)currentNetwork:(BOOL)arg1 ;
-(void)session:(id)arg1 updatedFoundDevices:(id)arg2 ;
-(BOOL)connected;
@end

