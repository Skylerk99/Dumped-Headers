/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:58 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class MPMediaQuery, MPMediaItem;

@interface MPLocalMediaQueryRemotePlaybackQueue : MPRemotePlaybackQueue {

	MPMediaQuery* _mediaQuery;
	MPMediaItem* _firstItem;
	unsigned long long _shuffleType;
	unsigned long long _repeatType;

}

@property (nonatomic,readonly) MPMediaQuery * mediaQuery;                   //@synthesize mediaQuery=_mediaQuery - In the implementation block
@property (nonatomic,readonly) MPMediaItem * firstItem;                     //@synthesize firstItem=_firstItem - In the implementation block
@property (nonatomic,readonly) unsigned long long shuffleType;              //@synthesize shuffleType=_shuffleType - In the implementation block
@property (nonatomic,readonly) unsigned long long repeatType;               //@synthesize repeatType=_repeatType - In the implementation block
-(id)createPlaybackContext;
-(unsigned long long)repeatType;
-(unsigned long long)shuffleType;
-(id)initWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 ;
-(BOOL)verifyWithError:(id*)arg1 ;
-(MPMediaQuery *)mediaQuery;
-(id)description;
-(MPMediaItem *)firstItem;
@end

