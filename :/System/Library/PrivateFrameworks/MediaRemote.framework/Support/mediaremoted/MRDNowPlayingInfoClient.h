/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, MRNowPlayingArtwork;

@interface MRDNowPlayingInfoClient : NSObject {

	unsigned _playbackState;
	NSDictionary* _nowPlayingInfo;
	MRNowPlayingArtwork* _nowPlayingArtwork;

}

@property (nonatomic,copy) NSDictionary * nowPlayingInfo;                          //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
@property (nonatomic,retain) MRNowPlayingArtwork * nowPlayingArtwork;              //@synthesize nowPlayingArtwork=_nowPlayingArtwork - In the implementation block
@property (assign,nonatomic) unsigned playbackState;                               //@synthesize playbackState=_playbackState - In the implementation block
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)nowPlayingInfo;
-(unsigned)playbackState;
-(void)dealloc;
-(id)init;
-(void)setPlaybackState:(unsigned)arg1 ;
-(MRNowPlayingArtwork *)nowPlayingArtwork;
-(void)setNowPlayingArtwork:(MRNowPlayingArtwork *)arg1 ;
@end

