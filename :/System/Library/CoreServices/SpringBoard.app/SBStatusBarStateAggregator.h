/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBDateTimeOverrideObserver.h>

@class NSHashTable, NSDateFormatter, NSTimer, NSString, NSArray, SBSStatusBarStyleOverridesAssertion;

@interface SBStatusBarStateAggregator : NSObject <SBDateTimeOverrideObserver> {

	unsigned long long _coalescentBlockDepth;
	BOOL _hasPostedOnce;
	unsigned long long _itemPostState[27];
	BOOL _nonItemDataChanged;
	SCD_Struct_SB40 _data;
	int _actions;
	NSHashTable* _postObservers;
	BOOL _notifyingPostObservers;
	long long _showsRecordingOverrides;
	NSDateFormatter* _timeItemDateFormatter;
	NSTimer* _timeItemTimer;
	NSString* _timeItemTimeString;
	NSString* _operatorName;
	NSString* _serviceString;
	NSString* _serviceCrossfadeString;
	NSArray* _countryCodesShowingEmergencyOnlyStatus;
	unsigned long long _airplaneTransitionToken;
	BOOL _suppressCellServiceForAirplaneModeTransition;
	BOOL _showsActivityIndicatorOnHomeScreen;
	long long _activityIndicatorEverywhereCount;
	long long _syncActivityIndicatorCount;
	NSString* _activityDisplayIdentifier;
	BOOL _showingNotChargingItem;
	NSString* _batteryDetailString;
	BOOL _alarmEnabled;
	BOOL _applyingAssistantStyle;
	int _locationStatusBarIconType;
	SBSStatusBarStyleOverridesAssertion* _siriEyesFreeStatusBarStyleOverrideAssertion;
	SBSStatusBarStyleOverridesAssertion* _tetheringStatusBarStyleOverrideAssertion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)_thermalColorForLevel:(int)arg1 ;
+(id)sharedInstance;
-(void)beginCoalescentBlock;
-(void)endCoalescentBlock;
-(void)updateStatusBarItem:(int)arg1 ;
-(void)setShowsActivityIndicatorOnHomeScreen:(BOOL)arg1 ;
-(void)setShowsActivityIndicatorEverywhere:(BOOL)arg1 ;
-(void)setShowsSyncActivityIndicator:(BOOL)arg1 ;
-(void)setShowsOverridesForRecording:(BOOL)arg1 ;
-(void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2 ;
-(void)setAlarmEnabled:(BOOL)arg1 ;
-(void)_stopTimeItemTimer;
-(void)_removeAssistantEyesFreeStatusBarStyleOverride;
-(void)_removeTetheringStatusBarStyleOverrideAssertion;
-(void)_resetTimeItemFormatter;
-(void)_updateSignalStrengthItem;
-(void)_updateServiceItem;
-(void)_updateDataNetworkItem;
-(void)_updateBatteryItems:(id)arg1 ;
-(void)_tickRefCount:(long long*)arg1 up:(BOOL)arg2 withTransitionBlock:(/*^block*/id)arg3 ;
-(void)_requestActions:(int)arg1 ;
-(void)_notifyItemChanged:(int)arg1 ;
-(void)_updateTetheringState;
-(void)_buildLocationState;
-(void)_restartTimeItemTimer;
-(void)_noteNotChargingStatusChanged;
-(void)_noteAirplaneModeChanged;
-(void)_updateCarPlayItem;
-(BOOL)_setItem:(int)arg1 enabled:(BOOL)arg2 ;
-(id)_displayStringForSIMStatus:(id)arg1 ;
-(id)_sbCarrierNameForOperator:(id)arg1 ;
-(id)_displayStringForRegistrationStatus:(int)arg1 ;
-(BOOL)_shouldShowEmergencyOnlyStatus;
-(BOOL)_simStatusMeansLocked:(id)arg1 ;
-(BOOL)_shouldShowNotChargingItem;
-(void)_notifyNonItemDataChanged;
-(void)_updateTimeItems;
-(void)_updateQuietModeItem;
-(void)_updateAirplaneMode;
-(void)_updateBluetoothBatteryItem;
-(void)_updateBluetoothItem;
-(void)_updateTTYItem;
-(void)_updateAlarmItem;
-(void)_updateLocationItem;
-(void)_updateRotationLockItem;
-(void)_updateAirplayItem;
-(void)_updateAssistantItem;
-(void)_updateVPNItem;
-(void)_updateCallForwardingItem;
-(void)_updateActivityItem;
-(void)_updateThermalColorItem;
-(void)_postItem:(int)arg1 withState:(unsigned long long)arg2 ;
-(void)_setShowingNotChargingItem;
-(void)_updateLocationState;
-(void)sendStatusBarActions:(int)arg1 ;
-(void)addPostingObserver:(id)arg1 ;
-(void)removePostingObserver:(id)arg1 ;
-(void)_registerForNotifications;
-(void)dealloc;
-(id)init;
-(id)operatorName;
@end

