/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:52 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTrigger/_VTStatePolicy.h>

@interface _VTSiriAssertionPolicy : _VTStatePolicy {

	unsigned char _siriAssertionState;

}
-(void)dealloc;
-(BOOL)isEnabled;
-(id)initWithCallback:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_registerForSiriAssertionStateUpdates;
-(void)_unregisterForSiriAssertionStateUpdates;
-(void)_enableAssertionReceived;
-(void)_disableAssertionReceived;
@end

