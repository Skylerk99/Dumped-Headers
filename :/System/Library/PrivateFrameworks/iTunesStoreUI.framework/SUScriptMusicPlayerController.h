/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:14 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUScriptMediaItem, NSNumber;

@interface SUScriptMusicPlayerController : SUScriptObject {

	NSString* _playerType;

}

@property (readonly) double currentPlaybackTime; 
@property (readonly) SUScriptMediaItem * nowPlayingItem; 
@property (readonly) NSString * playbackState; 
@property (readonly) NSString * playerType; 
@property (copy) NSString * repeatMode; 
@property (copy) NSString * shuffleMode; 
@property (retain) NSNumber * volume; 
@property (readonly) NSString * playbackStateInterrupted; 
@property (readonly) NSString * playbackStatePaused; 
@property (readonly) NSString * playbackStatePlaying; 
@property (readonly) NSString * playbackStateSeekingBackward; 
@property (readonly) NSString * playbackStateSeekingForward; 
@property (readonly) NSString * playbackStateStopped; 
@property (readonly) NSString * repeatModeAll; 
@property (readonly) NSString * repeatModeDefault; 
@property (readonly) NSString * repeatModeNone; 
@property (readonly) NSString * repeatModeOne; 
@property (readonly) NSString * shuffleModeAlbums; 
@property (readonly) NSString * shuffleModeDefault; 
@property (readonly) NSString * shuffleModeOff; 
@property (readonly) NSString * shuffleModeSongs; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)scriptPlaybackStateForNativePlaybackState:(long long)arg1 ;
-(NSString *)repeatMode;
-(void)setRepeatMode:(NSString *)arg1 ;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(void)skipToNextItem;
-(void)skipToBeginning;
-(void)skipToPreviousItem;
-(SUScriptMediaItem *)nowPlayingItem;
-(NSString *)shuffleMode;
-(void)setShuffleMode:(NSString *)arg1 ;
-(void)setQueueWithQuery:(id)arg1 ;
-(void)play;
-(NSString *)playbackState;
-(double)currentPlaybackTime;
-(void)setVolume:(NSNumber *)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)pause;
-(id)attributeKeys;
-(NSNumber *)volume;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)setQueueWithItemCollection:(id)arg1 ;
-(NSString *)playerType;
-(id)initWithPlayerType:(id)arg1 ;
-(NSString *)repeatModeAll;
-(NSString *)repeatModeDefault;
-(NSString *)repeatModeNone;
-(NSString *)repeatModeOne;
-(NSString *)shuffleModeAlbums;
-(NSString *)shuffleModeDefault;
-(NSString *)shuffleModeOff;
-(NSString *)shuffleModeSongs;
-(NSString *)playbackStateInterrupted;
-(NSString *)playbackStatePaused;
-(NSString *)playbackStatePlaying;
-(NSString *)playbackStateSeekingBackward;
-(NSString *)playbackStateSeekingForward;
-(NSString *)playbackStateStopped;
@end

