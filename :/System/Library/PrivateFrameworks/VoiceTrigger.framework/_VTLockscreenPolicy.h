/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:52 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTrigger/_VTStatePolicy.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface _VTLockscreenPolicy : _VTStatePolicy <MCProfileConnectionObserver> {

	BOOL _siriRestrictedOnLockScreen;
	unsigned char _lockedState;
	int _lockscreenNotifyToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEnabled;
-(id)initWithCallback:(/*^block*/id)arg1 queue:(id)arg2 ;
-(BOOL)_deviceLockedWithPasscode;
-(void)_registerForLockscreenUpdates;
-(void)_unregisterForLockscreenUpdates;
@end

