/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, AVController, SBUISound, NSTimer, NSHashTable, NSMutableArray;

@interface SBSoundController : NSObject {

	NSMutableDictionary* _soundsBySystemSoundIDs;
	AVController* _avController;
	SBUISound* _avControllerSound;
	NSTimer* _avControllerMaxDurationTimer;
	id _avControllerObserver;
	NSMutableDictionary* _soundsByToneIdentifiers;
	NSMutableDictionary* _toneAlertsByToneIdentifiers;
	NSHashTable* _observers;
	unsigned long long _pendingCallbacks;
	NSMutableArray* _pendedCallbacks;

}
+(id)sharedInstance;
-(BOOL)handleVolumeButtonDownEvent;
-(void)_ringerStateChanged:(id)arg1 ;
-(BOOL)_playRingtone:(id)arg1 ;
-(BOOL)_playSong:(id)arg1 ;
-(BOOL)_playAVItem:(id)arg1 forSound:(id)arg2 ;
-(BOOL)_playToneAlert:(id)arg1 ;
-(void)_soundDidStartPlaying:(id)arg1 ;
-(void)_cleanupSystemSound:(unsigned)arg1 andKill:(BOOL)arg2 ;
-(void)_killAVController;
-(void)_stopToneAlertForSound:(id)arg1 ;
-(void)_beginPendingCallbacksBlock;
-(void)_endPendingCallbacksBlock;
-(BOOL)stopAllSounds;
-(void)_soundDidFinishPlaying:(id)arg1 ;
-(void)_maxDurationReachedForAVController;
-(void)_enqueueCallback:(/*^block*/id)arg1 ;
-(BOOL)isPlayingAnySound;
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)_playSystemSound:(id)arg1 ;
-(BOOL)isPlaying:(id)arg1 ;
-(BOOL)playSound:(id)arg1 environments:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)stopSound:(id)arg1 ;
@end

