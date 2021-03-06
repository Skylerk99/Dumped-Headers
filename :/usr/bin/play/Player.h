/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:57:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/bin/play
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <play/AVAudioPlayerDelegate.h>

@class AVAudioPlayer, NSString;

@interface Player : NSObject <AVAudioPlayerDelegate> {

	AVAudioPlayer* player;
	NSString* path;

}

@property (retain) NSString * path; 
@property (retain) AVAudioPlayer * player; 
-(char)prepAudio;
-(void)setPlayer:(AVAudioPlayer *)arg1 ;
-(void)play;
-(AVAudioPlayer *)player;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(char)arg2 ;
@end

