/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSTimer, NSObject, SBAlertItem, RadiosPreferences, TUCall;

@interface SBTelephonyManager : NSObject <RadiosPreferencesDelegate> {

	CTServerConnectionRef _serverConnection;
	BOOL _containsCellularRadio;
	BOOL _hasCellularTelephony;
	BOOL _hasCellularData;
	NSString* _cachedCTRegistrationCellStatus;
	NSString* _cachedCTRegistrationDisplayStatus;
	int _cachedCTRegistrationIsForcedHome;
	int _cellRegistrationStatus;
	int _registrationStatus;
	NSTimer* _fakeServiceTimer;
	NSTimer* _fakeCellServiceTimer;
	BOOL _signalStrengthHasBeenSet;
	int _signalStrength;
	int _signalStrengthBars;
	NSString* _operatorName;
	NSString* _lastKnownNetworkCountryCode;
	unsigned _usingWifi : 1;
	int _vpnConnectionStatus;
	unsigned _iTunesNeedsToRecheckActivation : 1;
	unsigned _pretendingToSearch : 1;
	unsigned _callForwardingIndicator : 2;
	NSObject*<OS_dispatch_queue> _wirelessModemDynamicStoreQueue;
	SCDynamicStoreRef _queue_wirelessModemDynamicStore;
	CFStringRef _queue_wirelessModemDynamicStoreSharingKey;
	BOOL _isNetworkTethering;
	int _numberOfNetworkTetheredDevices;
	unsigned _hasShownWaitingAlert : 1;
	SBAlertItem* _activationAlertItem;
	int _numActivationFailures;
	int _inEmergencyCallbackMode;
	unsigned _loggingCallAudio : 1;
	RadiosPreferences* _radioPrefs;
	int _needsUserIdentificationModule;
	NSString* _simStatus;
	int _suppressesCellDataIndicator;
	int _suppressesCellIndicators;
	int _lteConnectionShows4G;
	int _modemDataConnectionType;
	BOOL _modemDataConnectionTypeIsKnown;
	BOOL _fallingBackToCellular;
	tcp_connection_fallback_watch_sRef _cellularFallbackWatcher;
	void* _queue_fastDormancySuspendAssertion;
	TUCall* _incomingCall;
	TUCall* _activeCall;
	TUCall* _heldCall;
	TUCall* _outgoingCall;

}

@property (nonatomic,retain) TUCall * incomingCall;              //@synthesize incomingCall=_incomingCall - In the implementation block
@property (nonatomic,retain) TUCall * activeCall;                //@synthesize activeCall=_activeCall - In the implementation block
@property (nonatomic,retain) TUCall * heldCall;                  //@synthesize heldCall=_heldCall - In the implementation block
@property (nonatomic,retain) TUCall * outgoingCall;              //@synthesize outgoingCall=_outgoingCall - In the implementation block
+(id)sharedTelephonyManager;
+(CTServerConnectionRef)defaultTelephonyCenter;
+(id)sharedTelephonyManagerCreatingIfNecessary:(BOOL)arg1 ;
-(void)_proximityChanged:(id)arg1 ;
-(void)updateTTYIndicator;
-(BOOL)isInEmergencyCallbackMode;
-(BOOL)isEmergencyCallActive;
-(void)disconnectCallAndActivateHeld;
-(BOOL)isInAirplaneMode;
-(unsigned long long)faceTimeAudioCallCount;
-(unsigned long long)telephonyCallCount;
-(int)dataConnectionType;
-(void)callEventHandler:(id)arg1 ;
-(void)handleCallControlFailure:(id)arg1 ;
-(void)SBTelephonyDaemonRestartHandler;
-(void)updateSpringBoard;
-(void)telephonyAudioChangeHandler;
-(void)_headphoneChanged:(id)arg1 ;
-(void)_postDataConnectionTypeChanged;
-(void)setNetworkRegistrationEnabled:(BOOL)arg1 ;
-(void)updateCalls;
-(void)_queue_noteWirelessModemDynamicStoreChanged;
-(void)_updateDataConnectionType;
-(void)_postStartupNotification;
-(void)queue_setFastDormancySuspended:(BOOL)arg1 withConnection:(CTServerConnectionRef)arg2 ;
-(void)_performQueryInBackground:(/*^block*/id)arg1 withMainQueueResultHandler:(/*^block*/id)arg2 ;
-(void)updateCallForwardingIndicator;
-(void)_resetCTMMode;
-(id)SIMStatus;
-(BOOL)needsUserIdentificationModule;
-(void)setCallForwardingIndicator:(int)arg1 ;
-(void)_resetModemConnectionType;
-(void)_stopFakeService;
-(CFStringRef)_cachedCTRegistrationDisplayStatus;
-(void)_setRegistrationStatus:(int)arg1 ;
-(void)_updateRegistrationNow;
-(void)updateAirplaneMode;
-(void)setIncomingCall:(TUCall *)arg1 ;
-(void)setActiveCall:(TUCall *)arg1 ;
-(void)setHeldCall:(TUCall *)arg1 ;
-(void)setOutgoingCall:(TUCall *)arg1 ;
-(void)_fetchOperatorNameWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)updateLocale;
-(void)_updateLastKnownNetworkCountryCode;
-(TUCall *)outgoingCall;
-(id)_fastPickedRouteForCall;
-(BOOL)hasCellularTelephony;
-(unsigned long long)_callCountForService:(int)arg1 ;
-(void)_serverConnectionDidError:(SCD_Struct_SB14)arg1 ;
-(void)_setSuppressesCellDataIndicator:(int)arg1 ;
-(BOOL)_lteConnectionShows4G;
-(void)_setIsUsingWiFiConnection:(BOOL)arg1 ;
-(BOOL)cellularRadioCapabilityIsActive;
-(BOOL)_suppressesCellDataIndicator;
-(int)_updateModemDataConnectionTypeWithCTInfo:(id)arg1 ;
-(void)_setSuppressesCellIndicators:(int)arg1 ;
-(BOOL)isUsingVPNConnection;
-(void)_setCurrentActivationAlertItem:(id)arg1 ;
-(void)_setIsInEmergencyCallbackMode:(unsigned char)arg1 ;
-(BOOL)shouldPromptForTTY;
-(void)configureForTTY:(BOOL)arg1 ;
-(void)setLimitTransmitPowerPerBandEnabled:(BOOL)arg1 ;
-(void)_cancelFakeCellServiceTimer;
-(void)_setCellRegistrationStatus:(int)arg1 ;
-(void)_stopFakeCellService;
-(void)_cancelFakeServiceTimer;
-(void)_reallySetOperatorName:(id)arg1 ;
-(CFStringRef)_cachedCTRegistrationCellStatus;
-(void)_startFakeServiceIfNecessary;
-(BOOL)registeredWithoutCellular;
-(void)_setIsNetworkTethering:(BOOL)arg1 withNumberOfDevices:(int)arg2 ;
-(void)_avSystemControllerDidError:(id)arg1 ;
-(BOOL)containsCellularRadio;
-(BOOL)hasCellularData;
-(BOOL)emergencyCallSupported;
-(double)inCallDuration;
-(int)callForwardingIndicator;
-(id)_phoneApp;
-(void)setFastDormancySuspended:(BOOL)arg1 ;
-(void)_updateNetworkLocale;
-(id)lastKnownNetworkCountryCode;
-(void)updateDisplaySettings:(id)arg1 forOutgoingCallURL:(id)arg2 outURL:(id*)arg3 ;
-(BOOL)outgoingCallExists;
-(BOOL)multipleCallsExist;
-(BOOL)inCallUsingSpeakerOrReceiver;
-(BOOL)callWouldUseReceiver:(BOOL)arg1 ;
-(BOOL)shouldHangUpOnLock;
-(void)disconnectIncomingCall;
-(BOOL)isLoggingCallAudio;
-(void)_setIsLoggingCallAudio:(BOOL)arg1 ;
-(void)dumpBasebandState:(id)arg1 ;
-(BOOL)MALoggingEnabled;
-(BOOL)isNetworkRegistrationEnabled;
-(void)setIsInAirplaneMode:(BOOL)arg1 ;
-(BOOL)isUsingSlowDataConnection;
-(void)_setVPNConnectionStatus:(int)arg1 ;
-(id)copyMobileEquipmentInfo;
-(id)copyTelephonyCapabilities;
-(void)_provisioningUpdateWithStatus:(int)arg1 ;
-(id)ttyTitle;
-(void)postponementStatusChanged;
-(void)_setCachedCTRegistrationCellStatus:(CFStringRef)arg1 displayStatus:(CFStringRef)arg2 forcedHome:(BOOL)arg3 ;
-(BOOL)_pretendingToSearch;
-(void)_prepareToAnswerCall;
-(void)_setSignalStrength:(int)arg1 andBars:(int)arg2 ;
-(int)signalStrengthBars;
-(int)cellRegistrationStatus;
-(void)_setSIMStatus:(id)arg1 ;
-(int)registrationCauseCode;
-(void)noteSIMUnlockAttempt;
-(BOOL)isNetworkTethering;
-(int)numberOfNetworkTetheredDevices;
-(id)init;
-(void)_updateState;
-(BOOL)_isTTYEnabled;
-(BOOL)inCall;
-(CTServerConnectionRef)_serverConnection;
-(void)airplaneModeChanged;
-(int)signalStrength;
-(void)setOperatorName:(id)arg1 ;
-(int)registrationStatus;
-(void)_carrierBundleChanged;
-(void)_operatorBundleChanged;
-(id)operatorName;
-(TUCall *)incomingCall;
-(void)swapCalls;
-(void)disconnectAllCalls;
-(id)displayedCall;
-(TUCall *)activeCall;
-(TUCall *)heldCall;
-(BOOL)activeCallExists;
-(BOOL)incomingCallExists;
-(BOOL)heldCallExists;
-(unsigned long long)callCount;
@end

