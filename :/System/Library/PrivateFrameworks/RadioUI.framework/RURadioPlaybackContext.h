/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPPlaybackContext.h>

@class NSMapTable, NSArray, SSVPlaybackLease, MPAVItem, RadioStation, RadioStationMatchContext;

@interface RURadioPlaybackContext : MPPlaybackContext {

	NSMapTable* _preparedAdSlotByRadioTrack;
	NSArray* _allPreparedAdSlotRadioTracks;
	SSVPlaybackLease* _playbackLease;
	MPAVItem* _prefixItem;
	RadioStation* _station;
	RadioStationMatchContext* _stationMatchContext;
	NSArray* _tracks;

}

@property (nonatomic,copy,readonly) NSArray * allPreparedAdSlotRadioTracks;               //@synthesize allPreparedAdSlotRadioTracks=_allPreparedAdSlotRadioTracks - In the implementation block
@property (nonatomic,retain) SSVPlaybackLease * playbackLease;                            //@synthesize playbackLease=_playbackLease - In the implementation block
@property (nonatomic,retain) MPAVItem * prefixItem;                                       //@synthesize prefixItem=_prefixItem - In the implementation block
@property (nonatomic,retain) RadioStation * station;                                      //@synthesize station=_station - In the implementation block
@property (nonatomic,retain) RadioStationMatchContext * stationMatchContext;              //@synthesize stationMatchContext=_stationMatchContext - In the implementation block
@property (nonatomic,copy) NSArray * tracks;                                              //@synthesize tracks=_tracks - In the implementation block
+(Class)queueFeederClass;
+(void)setDefaultPlaybackLease:(id)arg1 ;
-(id)descriptionComponents;
-(SSVPlaybackLease *)playbackLease;
-(id)init;
-(void)configureWithStationPlaybackMetadata:(id)arg1 ;
-(void)setStation:(RadioStation *)arg1 ;
-(void)setStationMatchContext:(RadioStationMatchContext *)arg1 ;
-(void)setPrefixItem:(MPAVItem *)arg1 ;
-(NSArray *)allPreparedAdSlotRadioTracks;
-(id)preparedAdSlotForRadioTrack:(id)arg1 ;
-(void)addPreparedAdSlot:(id)arg1 forRadioTrack:(id)arg2 ;
-(RadioStationMatchContext *)stationMatchContext;
-(MPAVItem *)prefixItem;
-(void)setTracks:(NSArray *)arg1 ;
-(void)setPlaybackLease:(SSVPlaybackLease *)arg1 ;
-(RadioStation *)station;
-(NSArray *)tracks;
@end

