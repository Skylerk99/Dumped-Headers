/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RadioUI/RURadioAVPlayer.h>

@interface MusicAVPlayer : RURadioAVPlayer
+(id)sharedAVPlayer;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_connectAVPlayer;
-(id)_expectedAssetTypesForPlaybackMode:(long long)arg1 ;
-(BOOL)hasVolumeControl;
-(void)_streamingDownloadSessionControllerDidFailDownloadSessionNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_musicPlayer_defaultsDidChangeNotification:(id)arg1 ;
-(void)beginPlayback;
-(void)beginOrTogglePlayback;
-(void)seekAlbum:(int)arg1 ;
-(void)seekPlaylist:(int)arg1 ;
@end

