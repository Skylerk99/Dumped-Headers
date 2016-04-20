/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:57 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray, MPUContentItemIdentifierCollection, NSString, MPStoreArtworkRequestToken, NSDate;

@interface MPStoreItemMetadata : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _downloadAssetDictionary;
	NSDictionary* _downloadMetadataDictionary;
	BOOL _hasOverrideChildStorePlatformDictionaries;
	NSArray* _overrideChildStorePlatformDictionaries;
	MPStoreItemMetadata* _parentStoreItemMetadata;
	NSDictionary* _storePlatformDictionary;

}

@property (nonatomic,copy,readonly) MPUContentItemIdentifierCollection * contentItemIdentifierCollection; 
@property (nonatomic,copy,readonly) NSString * artistName; 
@property (nonatomic,readonly) MPStoreArtworkRequestToken * artworkRequestToken; 
@property (nonatomic,copy,readonly) id artistStoreID; 
@property (nonatomic,copy,readonly) NSArray * artworkTrackIDs; 
@property (nonatomic,copy,readonly) NSArray * childrenStoreIDs; 
@property (nonatomic,copy,readonly) NSString * collectionName; 
@property (nonatomic,copy,readonly) id collectionStoreID; 
@property (nonatomic,copy,readonly) NSString * copyrightText; 
@property (nonatomic,copy,readonly) NSString * curatorName; 
@property (nonatomic,readonly) unsigned long long discCount; 
@property (nonatomic,readonly) unsigned long long discNumber; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,copy,readonly) NSString * editorNotes; 
@property (nonatomic,copy,readonly) NSDictionary * effectiveStorePlatformDictionary; 
@property (getter=isExplicitContent,nonatomic,readonly) BOOL explicitContent; 
@property (nonatomic,copy,readonly) NSArray * genreNames; 
@property (nonatomic,readonly) BOOL isPreorder; 
@property (nonatomic,copy,readonly) NSString * itemKind; 
@property (nonatomic,readonly) MPStoreArtworkRequestToken * latestAlbumArtworkRequestToken; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSArray * offers; 
@property (nonatomic,copy,readonly) NSDate * releaseDate; 
@property (nonatomic,copy,readonly) id storeID; 
@property (nonatomic,readonly) unsigned long long trackCount; 
@property (nonatomic,readonly) unsigned long long trackNumber; 
+(BOOL)supportsSecureCoding;
-(MPUContentItemIdentifierCollection *)contentItemIdentifierCollection;
-(id)artistStoreID;
-(unsigned long long)discNumber;
-(unsigned long long)discCount;
-(NSString *)copyrightText;
-(id)initWithStorePlatformDictionary:(id)arg1 ;
-(id)artworkRequestTokenForStorePlatformDictionary:(id)arg1 ;
-(MPStoreArtworkRequestToken *)artworkRequestToken;
-(id)collectionStoreID;
-(NSString *)curatorName;
-(NSString *)editorNotes;
-(NSArray *)genreNames;
-(BOOL)isExplicitContent;
-(BOOL)isCompilation;
-(BOOL)isMasteredForITunes;
-(BOOL)isPreorder;
-(NSDate *)releaseDate;
-(id)_storePlatformDateFormatter;
-(unsigned long long)trackCount;
-(unsigned long long)trackNumber;
-(id)_artworkRequestTokenForStorePlatformDictionary:(id)arg1 artworkKey:(id)arg2 ;
-(id)initWithDownloadAssetDictionary:(id)arg1 ;
-(id)initWithStorePlatformDictionary:(id)arg1 parentStoreItemMetadata:(id)arg2 ;
-(NSArray *)artworkTrackIDs;
-(NSArray *)childrenStoreIDs;
-(NSDictionary *)effectiveStorePlatformDictionary;
-(MPStoreArtworkRequestToken *)latestAlbumArtworkRequestToken;
-(id)artworkRequestTokenForEditorialArtworkKind:(id)arg1 ;
-(id)childStorePlatformDictionaryForArtworkTrackID:(id)arg1 ;
-(id)childStorePlatformDictionaryForStoreID:(id)arg1 ;
-(id)metadataWithChildStorePlatformDictionaries:(id)arg1 ;
-(id)metadataWithParentMetadata:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)duration;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)itemKind;
-(NSString *)artistName;
-(NSString *)collectionName;
-(NSArray *)offers;
-(id)storeID;
@end

