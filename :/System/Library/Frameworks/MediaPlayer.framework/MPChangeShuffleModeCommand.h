/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:02 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommand.h>

@interface MPChangeShuffleModeCommand : MPRemoteCommand {

	unsigned long long _currentShuffleType;

}

@property (assign,nonatomic) unsigned long long currentShuffleType;              //@synthesize currentShuffleType=_currentShuffleType - In the implementation block
-(id)_mediaRemoteCommandInfoOptions;
-(void)setCurrentShuffleType:(unsigned long long)arg1 ;
-(unsigned long long)currentShuffleType;
@end

