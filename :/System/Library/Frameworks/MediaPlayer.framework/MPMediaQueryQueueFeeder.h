/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPQueueFeeder.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <libobjc.A.dylib/MPShuffleControllerDataSource.h>

@class MPMediaLibraryConnectionAssertion, MPMediaQuery, NSArray, MPShuffleController, MPMutableBidirectionalDictionary, MPMediaItem, NSString;

@interface MPMediaQueryQueueFeeder : MPQueueFeeder <MPAVRoutingControllerDelegate, MPShuffleControllerDataSource> {

	MPMediaLibraryConnectionAssertion* _connectionAssertion;
	unsigned long long _feederRevisionID;
	BOOL _hasValidItems;
	MPMediaQuery* _query;
	NSArray* _queryItems;
	MPShuffleController* _shuffleController;
	vector<long long, std::__1::allocator<long long> >* _itemPIDs;
	MPMutableBidirectionalDictionary* _indexToIdentifierCache;
	unsigned long long _currentInvalidationRevision;
	BOOL _isPlaylistQueueFeeder;
	MPMediaItem* _cloudDialogAllowedMediaItem;

}

@property (nonatomic,copy) MPMediaQuery * query;                                     //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) MPMediaItem * cloudDialogAllowedMediaItem;              //@synthesize cloudDialogAllowedMediaItem=_cloudDialogAllowedMediaItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)audioSessionModeForMediaType:(unsigned long long)arg1 ;
+(Class)playbackItemMetadataClass;
-(id)_musicEntityValueProviding_representativeCollection;
-(id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(CGSize)arg2 destinationScale:(double)arg3 ;
-(id)entityUniqueIdentifier;
-(id)valueForEntityProperty:(id)arg1 ;
-(id)valuesForEntityProperties:(id)arg1 ;
-(id)MPU_contentItemIdentifierCollection;
-(unsigned long long)indexOfItemWithIdentifier:(id)arg1 ;
-(unsigned long long)itemCount;
-(id)copyRawItemAtIndex:(unsigned long long)arg1 ;
-(id)playbackInfoForIdentifier:(id)arg1 ;
-(id)identifierAtIndex:(unsigned long long)arg1 ;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(Class)itemClass;
-(BOOL)hasValidItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)shouldReuseQueueFeederForPlaybackContext:(id)arg1 ;
-(void)shuffleItemsWithAnchor:(unsigned long long*)arg1 ;
-(unsigned long long)itemTypeForIndex:(unsigned long long)arg1 ;
-(id)audioSessionModeForItemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)initialPlaybackQueueDepthForStartingIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfMediaItem:(id)arg1 ;
-(id)mediaItemAtIndex:(unsigned long long)arg1 ;
-(void)player:(id)arg1 currentItemWillChangeFromItem:(id)arg2 ;
-(id)shuffleController:(id)arg1 identifierForItemAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)shuffleController:(id)arg1 countOfItemIdentifier:(id)arg2 withMaximumCount:(unsigned long long)arg3 ;
-(unsigned long long)itemCountForShuffleController:(id)arg1 ;
-(void)_libraryDidChangeNotification:(id)arg1 ;
-(void)_allowsHighQualityMusicStreamingOnCellularDidChangeNotification:(id)arg1 ;
-(id)_mediaItemForPID:(unsigned long long)arg1 ;
-(void)setCloudDialogAllowedMediaItem:(MPMediaItem *)arg1 ;
-(unsigned long long)_playbackIndexByApplyShuffleType:(unsigned long long)arg1 withStartIndex:(unsigned long long)arg2 startIndexMediaItem:(id)arg3 shouldKeepConsistentQueueOrder:(BOOL)arg4 ;
-(unsigned long long)_indexForSongShuffledIndex:(unsigned long long)arg1 ;
-(id)_identifierAtIndex:(unsigned long long)arg1 ;
-(void)_invalidateMediaLibraryValues;
-(unsigned long long)_indexForPersistentID:(unsigned long long)arg1 ;
-(void)_handleMediaLibraryDidChange;
-(void)_verifyQueueInvalidationCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)unshuffledIndexOfAVItem:(id)arg1 ;
-(MPMediaItem *)cloudDialogAllowedMediaItem;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(MPMediaQuery *)query;
-(void)_commonInit;
-(void)setQuery:(MPMediaQuery *)arg1 ;
-(id)pathAtIndex:(unsigned long long)arg1 ;
-(id)itemForIdentifier:(id)arg1 ;
@end

