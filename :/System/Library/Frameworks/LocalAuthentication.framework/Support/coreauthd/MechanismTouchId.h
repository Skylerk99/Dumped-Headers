/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:50 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/coreauthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <coreauthd/MechanismBase.h>
#import <coreauthd/LABiometricClient.h>

@protocol LARemoteUI;
@class NSNumber;

@interface MechanismTouchId : MechanismBase <LABiometricClient> {

	unsigned long long _failures;
	NSNumber* _failureLimit;
	NSNumber* _fingerDetectTimeout;
	BOOL _matched;
	BOOL _detecting;
	unsigned long long _fingerOffCounter;
	id<LARemoteUI> _remoteUiDelegate;

}

@property (__weak) id<LARemoteUI> remoteUiDelegate;              //@synthesize remoteUiDelegate=_remoteUiDelegate - In the implementation block
-(BOOL)isAvailableWithError:(id*)arg1 ;
-(void)runWithHints:(id)arg1 eventsDelegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)backgroundMechanismForEventProcessing:(id)arg1 ;
-(void)_startFingerDetectPhase;
-(void)_startBiometry;
-(id<LARemoteUI>)remoteUiDelegate;
-(void)_setFingerDetectTimeout;
-(void)_finishFingerDetectPhase;
-(void)setRemoteUiDelegate:(id<LARemoteUI>)arg1 ;
-(void)_stopBiometry;
-(void)biometryLost;
-(id)init;
-(void)willFinish;
-(void)matchResult:(id)arg1 ;
-(void)statusMessage:(int)arg1 ;
@end

