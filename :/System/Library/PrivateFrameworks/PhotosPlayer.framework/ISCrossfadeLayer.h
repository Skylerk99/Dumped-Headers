/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:07 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class ISCrossfadeItem, ISPlaybackSpec, CALayer;

@interface ISCrossfadeLayer : CALayer {

	ISCrossfadeItem* _crossfadeItem;
	ISPlaybackSpec* _playbackSpec;
	CALayer* __contentLayer;
	CALayer* __heroLayer;

}

@property (nonatomic,retain) ISCrossfadeItem * crossfadeItem;                         //@synthesize crossfadeItem=_crossfadeItem - In the implementation block
@property (nonatomic,retain) ISPlaybackSpec * playbackSpec;                           //@synthesize playbackSpec=_playbackSpec - In the implementation block
@property (nonatomic,readonly) CALayer * _contentLayer;                               //@synthesize _contentLayer=__contentLayer - In the implementation block
@property (setter=_setHeroLayer:,nonatomic,retain) CALayer * _heroLayer;              //@synthesize _heroLayer=__heroLayer - In the implementation block
-(CALayer *)_contentLayer;
-(void)_updateContents;
-(void)setPlaybackSpec:(ISPlaybackSpec *)arg1 ;
-(id)init;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)layoutSublayers;
-(void)pause;
-(void)playFromBeginning;
-(ISPlaybackSpec *)playbackSpec;
-(void)setCrossfadeItem:(ISCrossfadeItem *)arg1 ;
-(ISCrossfadeItem *)crossfadeItem;
-(void)_updateFrameLayers;
-(void)_setHeroLayer:(id)arg1 ;
-(CALayer *)_heroLayer;
@end

