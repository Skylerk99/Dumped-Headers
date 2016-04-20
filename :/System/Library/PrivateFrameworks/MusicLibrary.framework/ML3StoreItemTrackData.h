/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSData, NSDateFormatter;

@interface ML3StoreItemTrackData : NSObject {

	NSArray* _lookupItems;
	NSArray* _storeItems;
	NSData* _trackData;
	NSArray* _parsedStoreItemsImportProperties;
	NSDateFormatter* _storePlatformDateFormatter;

}

@property (nonatomic,readonly) NSData * trackData; 
@property (nonatomic,readonly) NSArray * parsedStoreItemsImportProperties; 
@property (nonatomic,readonly) unsigned long long trackCount; 
+(id)_allSongItemsFromLookupItems:(id)arg1 ;
+(unsigned)_mediaTypeForStoreItemKind:(id)arg1 ;
+(double)_songDurationFromOffersArray:(id)arg1 ;
+(id)_artworkTokenFromStoreItem:(id)arg1 ;
+(id)_artworkTokenForItemWithCollectionID:(unsigned long long)arg1 itemID:(unsigned long long)arg2 ;
+(id)_allSongItemsFromCollectionLookupItem:(id)arg1 ;
+(id)_artworkTokenFromLookupItem:(id)arg1 ;
-(id)_storePlatformDateFormatter;
-(unsigned long long)trackCount;
-(id)initWithLookupItems:(id)arg1 ;
-(NSData *)trackData;
-(NSArray *)parsedStoreItemsImportProperties;
-(id)_storeItemsImportPropertiesFromLookupItems:(id)arg1 ;
-(id)_storeItemsImportPropertiesFromStoreItems:(id)arg1 ;
-(id)_storeItemsImportPropertiesFromTrackData:(id)arg1 ;
-(id)_importDictionaryForLookupItem:(id)arg1 parentCollectionCache:(id)arg2 ;
-(id)_importDictionaryForStoreItem:(id)arg1 ;
-(id)_parentDictForItemAlbumId:(id)arg1 ;
-(id)initWithStoreItems:(id)arg1 ;
-(id)initWithTrackData:(id)arg1 ;
@end

