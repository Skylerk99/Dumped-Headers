/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:52 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, _VTSiriEnabledPolicy, _VTVoiceTriggerEnabledPolicy, _VTSpringBoardStartedPolicy, _VTFirstUnlockAfterRebootPolicy, _VTSiriAssertionPolicy, _VTBatteryPolicy, _VTLowPowerModePolicy, _VTOTASoftwareUpdateCheckingPolicy, _VTLockscreenPolicy;

@interface VTStateManagerSingleton : NSObject {

	NSMutableSet* _instances;
	NSObject*<OS_dispatch_queue> _queue;
	_VTSiriEnabledPolicy* _siriEnabledPolicy;
	_VTVoiceTriggerEnabledPolicy* _vtEnabledPolicy;
	_VTSpringBoardStartedPolicy* _springboardPolicy;
	_VTFirstUnlockAfterRebootPolicy* _firstUnlockAfterRebootPolicy;
	_VTSiriAssertionPolicy* _siriAssertionPolicy;
	_VTBatteryPolicy* _batteryPolicy;
	_VTLowPowerModePolicy* _lowPowerModePolicy;
	_VTOTASoftwareUpdateCheckingPolicy* _softwareUpdateCheckingPolicy;
	_VTLockscreenPolicy* _lockscreenPolicy;
	BOOL _voiceTriggerIsEnabled;
	BOOL _batteryPolicyOverriden;

}
+(void)initialize;
+(id)singleton;
-(void)dealloc;
-(id)_init;
-(void)_handlePolicyUpdate:(id)arg1 ;
-(void)_stateTransitionDidOccur:(BOOL)arg1 ;
-(void)_powerlog:(id)arg1 ;
-(void)register:(id)arg1 ;
-(void)unregister:(id)arg1 ;
@end

