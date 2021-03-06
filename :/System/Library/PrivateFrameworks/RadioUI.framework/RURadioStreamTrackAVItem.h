/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RadioUI/RURadioAVItem.h>
#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>

@class _MPRadioStreamMetadata, NSArray, NSData, NSString;

@interface RURadioStreamTrackAVItem : RURadioAVItem <AVAssetResourceLoaderDelegate> {

	_MPRadioStreamMetadata* _adamIDMetadata;
	long long _albumStoreID;
	NSArray* _buyOffers;
	_MPRadioStreamMetadata* _effectiveMetadata;
	NSData* _jingleTimedMetadata;
	double _playStartDateTimeSinceReferenceDate;
	NSData* _previousAdamIDBlob;
	_MPRadioStreamMetadata* _radioStreamTrackMetadata;
	long long _storeID;
	_MPRadioStreamMetadata* _timedMetadata;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(long long)_expectedPlaybackMode;
-(void)loadAssetAndPlayerItem;
-(long long)storeItemInt64ID;
-(id)artist;
-(BOOL)isExplicitTrack;
-(id)mainTitle;
-(long long)albumStoreID;
-(id)buyOffers;
-(BOOL)isLikedStateEnabled;
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(void)_allowsHighQualityMusicStreamingOnCellularDidChangeNotification:(id)arg1 ;
-(id)album;
-(void)setPlayerItem:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)supportsRadioTrackActions;
-(long long)albumBuyButtonType;
-(id)albumBuyButtonText;
-(id)mpuReporting_jingleTimedMetadata;
-(BOOL)mpuReporting_shouldUseRelativeTimePositions;
-(id)mpuReporting_storeItemID;
-(BOOL)_canUseStoreAdamIDForSubscriptionAdamID;
-(id)initWithStreamTrack:(id)arg1 ;
-(id)_createMetadataForRadioStreamTrack;
-(void)_reloadMetadataAndPostNotificationsIfNeeded:(BOOL)arg1 ;
-(id)streamTrack;
-(float)_maximumBitRateForNetworkType:(long long)arg1 ;
-(void)_getCurrentTimedMetadata:(id*)arg1 pings:(id*)arg2 adamIDBlob:(id*)arg3 jingleTimedMetadata:(id*)arg4 ;
-(void)_handleStoreIDDidChange;
-(void)_updateEffectiveMetadataAndPostNotifications:(BOOL)arg1 ;
-(id)effectiveArtworkCollection;
-(BOOL)isAlwaysLive;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
@end

