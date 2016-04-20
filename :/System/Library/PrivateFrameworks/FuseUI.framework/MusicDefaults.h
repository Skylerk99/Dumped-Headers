/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:42 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUApplicationDefaults.h>

@class NSArray, NSNumber, NSDictionary, NSString;

@interface MusicDefaults : MPUApplicationDefaults {

	BOOL _internalInstall;

}

@property (nonatomic,copy) NSArray * tabBarOrdering; 
@property (assign,nonatomic) BOOL lastEffectiveRadioExplicitTracksEnabled; 
@property (nonatomic,readonly) int eqPreset; 
@property (getter=isActivityContinuationEnabled,nonatomic,readonly) BOOL activityContinuationEnabled; 
@property (getter=isGroupByAlbumArtistEnabled,nonatomic,readonly) BOOL groupByAlbumArtistEnabled; 
@property (assign,getter=isGeniusUserEnabled,nonatomic) BOOL geniusUserEnabled; 
@property (assign,nonatomic) BOOL hasUserAcknowledgedWelcomeScreen; 
@property (assign,nonatomic) BOOL hasUserBeenNotifiedThatAudioBooksHaveMoved; 
@property (assign,nonatomic) BOOL hasUserRequestedSubscriptionHidden; 
@property (assign,nonatomic) BOOL lastKnownHasActiveSubscription; 
@property (nonatomic,retain) NSNumber * lastKnownStoreAccountUniqueIdentifier; 
@property (assign,nonatomic) BOOL lastKnownSupportsConnect; 
@property (nonatomic,copy) NSDictionary * lastKnownTabConfigurations; 
@property (getter=isPinningEnabled,nonatomic,readonly) BOOL pinningEnabled; 
@property (assign,nonatomic) unsigned long long playbackSpeed; 
@property (assign,nonatomic) BOOL playlistsOverviewShowsOnlyOfflinePlaylists; 
@property (assign,nonatomic) unsigned long long repeatType; 
@property (assign,nonatomic) BOOL searchShouldDefaultToMyMusic; 
@property (nonatomic,copy) NSString * selectedLibraryViewIdentifier; 
@property (getter=isShakeToShuffleEnabled,nonatomic,readonly) BOOL shakeToShuffleEnabled; 
@property (assign,getter=isShowCloudMediaEnabled,nonatomic) BOOL showCloudMediaEnabled; 
@property (nonatomic,copy) NSString * selectedPlaylistsOverviewFilter; 
@property (getter=isSortByArtistEnabled,nonatomic,readonly) BOOL sortByArtistEnabled; 
@property (getter=isSoundCheckEnabled,nonatomic,readonly) BOOL soundCheckEnabled; 
@property (assign,nonatomic) unsigned long long shuffleType; 
@property (assign,getter=isInternalInstall,nonatomic) BOOL internalInstall;                                        //@synthesize internalInstall=_internalInstall - In the implementation block
+(id)sharedDefaults;
-(void)setTabBarOrdering:(NSArray *)arg1 ;
-(void)migrateTabBarOrderingIfNeeded;
-(NSArray *)tabBarOrdering;
-(BOOL)lastEffectiveRadioExplicitTracksEnabled;
-(void)setLastEffectiveRadioExplicitTracksEnabled:(BOOL)arg1 ;
-(unsigned long long)repeatType;
-(unsigned long long)shuffleType;
-(void)setRepeatType:(unsigned long long)arg1 ;
-(void)setShuffleType:(unsigned long long)arg1 ;
-(unsigned long long)playbackSpeed;
-(void)setPlaybackSpeed:(unsigned long long)arg1 ;
-(BOOL)isShowCloudMediaEnabled;
-(void)setGeniusUserEnabled:(BOOL)arg1 ;
-(void)setShowCloudMediaEnabled:(BOOL)arg1 ;
-(void)setLastKnownTabConfigurations:(NSDictionary *)arg1 ;
-(NSDictionary *)lastKnownTabConfigurations;
-(BOOL)hasUserRequestedSubscriptionHidden;
-(NSNumber *)lastKnownStoreAccountUniqueIdentifier;
-(BOOL)lastKnownHasActiveSubscription;
-(void)setHasUserRequestedSubscriptionHidden:(BOOL)arg1 ;
-(void)setLastKnownHasActiveSubscription:(BOOL)arg1 ;
-(void)setLastKnownStoreAccountUniqueIdentifier:(NSNumber *)arg1 ;
-(void)setLastKnownSupportsConnect:(BOOL)arg1 ;
-(BOOL)lastKnownSupportsConnect;
-(NSString *)selectedPlaylistsOverviewFilter;
-(void)setSelectedPlaylistsOverviewFilter:(NSString *)arg1 ;
-(BOOL)playlistsOverviewShowsOnlyOfflinePlaylists;
-(BOOL)isSoundCheckEnabled;
-(int)eqPreset;
-(NSString *)selectedLibraryViewIdentifier;
-(void)setSelectedLibraryViewIdentifier:(NSString *)arg1 ;
-(BOOL)hasUserAcknowledgedWelcomeScreen;
-(void)setHasUserAcknowledgedWelcomeScreen:(BOOL)arg1 ;
-(BOOL)hasUserBeenNotifiedThatAudioBooksHaveMoved;
-(void)setHasUserBeenNotifiedThatAudioBooksHaveMoved:(BOOL)arg1 ;
-(BOOL)isActivityContinuationEnabled;
-(BOOL)isGroupByAlbumArtistEnabled;
-(BOOL)isGeniusUserEnabled;
-(BOOL)isPinningEnabled;
-(BOOL)isShakeToShuffleEnabled;
-(BOOL)isSortByArtistEnabled;
-(void)setPlaylistsOverviewShowsOnlyOfflinePlaylists:(BOOL)arg1 ;
-(BOOL)searchShouldDefaultToMyMusic;
-(void)setSearchShouldDefaultToMyMusic:(BOOL)arg1 ;
-(void)beginObservingDefaultsChanges;
-(void)ensureInvertedDefaultPlaybackSpeedHackIsInPlace;
-(void)setInternalInstall:(BOOL)arg1 ;
-(BOOL)isInternalInstall;
@end

