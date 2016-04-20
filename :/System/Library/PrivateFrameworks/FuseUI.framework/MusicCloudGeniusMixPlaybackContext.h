/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicQueryPlaybackContext.h>
#import <libobjc.A.dylib/MPShuffleControllerDataSource.h>
#import <libobjc.A.dylib/MusicGeniusMixQueueFeederDataSource.h>

@class MPMediaPlaylist, MPMediaItem, NSArray, MPShuffleController, NSString;

@interface MusicCloudGeniusMixPlaybackContext : MusicQueryPlaybackContext <MPShuffleControllerDataSource, MusicGeniusMixQueueFeederDataSource> {

	BOOL _hasValidQueryItems;
	NSArray* _queryItems;
	MPShuffleController* _shuffleController;
	MPMediaPlaylist* _mixPlaylist;
	MPMediaItem* _requiredInitialMediaItem;

}

@property (nonatomic,readonly) MPMediaPlaylist * mixPlaylist;                     //@synthesize mixPlaylist=_mixPlaylist - In the implementation block
@property (nonatomic,retain) MPMediaItem * requiredInitialMediaItem;              //@synthesize requiredInitialMediaItem=_requiredInitialMediaItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)queueFeederClass;
-(id)shuffleController:(id)arg1 identifierForItemAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)shuffleController:(id)arg1 countOfItemIdentifier:(id)arg2 withMaximumCount:(unsigned long long)arg3 ;
-(unsigned long long)itemCountForShuffleController:(id)arg1 ;
-(void)dealloc;
-(id)initWithGeniusMixPlaylist:(id)arg1 requiredInitialMediaItem:(id)arg2 error:(id*)arg3 ;
-(MPMediaPlaylist *)mixPlaylist;
-(unsigned long long)geniusMixQueueFeederMediaItemCount:(id)arg1 ;
-(id)geniusMixQueueFeeder:(id)arg1 queryForMediaItemAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)geniusMixQueueFeeder:(id)arg1 indexOfMediaItem:(id)arg2 ;
-(id)geniusMixQueueFeeder:(id)arg1 mediaItemAtIndex:(unsigned long long)arg2 ;
-(void)_musicCloudGeniusMixPlaybackContext_mediaLibraryDidChangeNotification:(id)arg1 ;
-(id)_queryItems;
-(MPMediaItem *)requiredInitialMediaItem;
-(void)setRequiredInitialMediaItem:(MPMediaItem *)arg1 ;
@end

