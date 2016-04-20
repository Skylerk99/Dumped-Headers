/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:30 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TelephonyUI/TelephonyUI-Structs.h>
@interface TPDialerSoundController : NSObject {

	CFSetRef _inflightSounds;
	unsigned _soundsActivated : 1;
	unsigned long long _incompleteSoundCount;

}

@property (assign) unsigned long long incompleteSoundCount;              //@synthesize incompleteSoundCount=_incompleteSoundCount - In the implementation block
+(void)_delayedDeactivate;
-(void)dealloc;
-(id)init;
-(void)_stopAllSoundsForcingCallbacks:(BOOL)arg1 ;
-(void)stopSoundForDialerCharacter:(unsigned)arg1 ;
-(void)playSoundForDialerCharacter:(unsigned)arg1 ;
-(void)applicationSuspendedNotification:(id)arg1 ;
-(void)applicationResumedNotification:(id)arg1 ;
-(void)setSoundsActivated:(BOOL)arg1 ;
-(unsigned long long)incompleteSoundCount;
-(void)setIncompleteSoundCount:(unsigned long long)arg1 ;
-(void)soundCompletedPlaying:(unsigned)arg1 ;
@end

