/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:07 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ISFairPlayRentalInfo : NSObject {

	unsigned _playbackDuration;
	unsigned _playbackStartTime;
	unsigned _rentalDuration;
	unsigned _rentalStartTime;

}

@property (assign,nonatomic) unsigned playbackDuration;               //@synthesize playbackDuration=_playbackDuration - In the implementation block
@property (assign,nonatomic) unsigned playbackStartTime;              //@synthesize playbackStartTime=_playbackStartTime - In the implementation block
@property (assign,nonatomic) unsigned rentalDuration;                 //@synthesize rentalDuration=_rentalDuration - In the implementation block
@property (assign,nonatomic) unsigned rentalStartTime;                //@synthesize rentalStartTime=_rentalStartTime - In the implementation block
-(unsigned)rentalStartTime;
-(unsigned)playbackStartTime;
-(void)setPlaybackStartTime:(unsigned)arg1 ;
-(void)setRentalStartTime:(unsigned)arg1 ;
-(unsigned)playbackDuration;
-(void)setPlaybackDuration:(unsigned)arg1 ;
-(void)setRentalDuration:(unsigned)arg1 ;
-(unsigned)rentalDuration;
@end

