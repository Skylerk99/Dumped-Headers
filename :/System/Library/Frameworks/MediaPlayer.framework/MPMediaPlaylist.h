/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaItemCollection.h>

@class NSArray, MPMediaQuery, NSString;

@interface MPMediaPlaylist : MPMediaItemCollection {

	NSArray* _representativeArtists;
	MPMediaQuery* _seedTracksQuery;

}

@property (nonatomic,readonly) unsigned long long persistentID; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long playlistAttributes; 
@property (nonatomic,readonly) NSArray * seedItems; 
+(void)registerSupportedCustomProperties;
+(void)_createFilterableDictionary;
+(BOOL)canFilterByProperty:(id)arg1 ;
+(BOOL)_isValidPlaylistProperty:(id)arg1 ;
-(id)MPU_contentItemIdentifierCollection;
-(id)artworkCatalog;
-(id)artworkCatalogsWithMaximumCount:(unsigned long long)arg1 ;
-(id)tiledArtworkCatalogWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 ;
-(id)initWithMultiverseIdentifier:(id)arg1 ;
-(id)initWithPersistentID:(unsigned long long)arg1 ;
-(id)seedTracksQuery;
-(BOOL)isCloudMix;
-(BOOL)existsInLibrary;
-(unsigned long long)playlistAttributes;
-(NSArray *)seedItems;
-(void)removeFirstItem;
-(id)multiverseIdentifier;
-(id)representativeArtists;
-(BOOL)canPlayUsingNetworkType:(long long)arg1 ;
-(void)setUserSelectedArtworkImage:(id)arg1 ;
-(unsigned long long)persistentID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)items;
-(unsigned long long)mediaTypes;
-(id)representativeItem;
-(id)valueForProperty:(id)arg1 ;
@end

