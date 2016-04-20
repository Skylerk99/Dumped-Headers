/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:01 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSDate, NSObject;

@interface MPNowPlayingInfoCenter : NSObject {

	NSDictionary* _nowPlayingInfo;
	NSDictionary* _queuedNowPlayingInfo;
	NSDate* _pushDate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (copy) NSDictionary * nowPlayingInfo; 
+(id)defaultCenter;
-(void)_pushNowPlayingInfoAndRetry:(BOOL)arg1 ;
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)nowPlayingInfo;
-(id)init;
-(id)_init;
@end

