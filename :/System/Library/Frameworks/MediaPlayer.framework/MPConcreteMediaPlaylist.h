/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:00 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaPlaylist.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, MPMediaQuery;

@interface MPConcreteMediaPlaylist : MPMediaPlaylist <NSCoding, NSCopying> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _properties;
	MPMediaQuery* _itemsQuery;
	void* _clusterPlaylist;

}
-(id)mediaLibrary;
-(id)valuesForProperties:(id)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(BOOL)existsInLibrary;
-(void)removeFirstItem;
-(id)multiverseIdentifier;
-(id)initWithProperties:(id)arg1 itemsQuery:(id)arg2 ;
-(id)itemsQuery;
-(void)populateWithSeedItem:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_updateLibraryForPlaylistEdit:(id)arg1 ;
-(void)addItem:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)addItems:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)removeItems:(id)arg1 atFilteredIndexes:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)removeAllItems;
-(void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)populateWithSeedItem:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)beginGeneratingGeniusClusterItemsWithSeedItems:(id)arg1 error:(id*)arg2 ;
-(id)geniusClusterItemsWithCount:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)endGeneratingGeniusClusterItems;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)items;
-(unsigned long long)mediaTypes;
-(id)representativeItem;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
@end

