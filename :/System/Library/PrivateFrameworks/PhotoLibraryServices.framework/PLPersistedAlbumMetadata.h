/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSMutableOrderedSet, PLGenericAlbum, NSURL;

@interface PLPersistedAlbumMetadata : NSObject {

	BOOL _pinned;
	BOOL _inTrash;
	BOOL _customSortAscending;
	BOOL _allowsOverwite;
	BOOL _isFolder;
	int _customSortKey;
	NSString* _title;
	NSString* _uuid;
	NSString* _cloudGUID;
	NSNumber* _kind;
	NSString* _customKeyAssetUUID;
	NSMutableOrderedSet* _assetUUIDs;
	PLGenericAlbum* _genericAlbum;
	NSURL* _metadataURL;

}

@property (nonatomic,retain) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * uuid;                               //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * cloudGUID;                          //@synthesize cloudGUID=_cloudGUID - In the implementation block
@property (nonatomic,retain) NSNumber * kind;                               //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) BOOL isFolder;                               //@synthesize isFolder=_isFolder - In the implementation block
@property (assign,getter=isPinned,nonatomic) BOOL pinned;                   //@synthesize pinned=_pinned - In the implementation block
@property (assign,getter=isInTrash,nonatomic) BOOL inTrash;                 //@synthesize inTrash=_inTrash - In the implementation block
@property (assign,nonatomic) BOOL customSortAscending;                      //@synthesize customSortAscending=_customSortAscending - In the implementation block
@property (assign,nonatomic) int customSortKey;                             //@synthesize customSortKey=_customSortKey - In the implementation block
@property (nonatomic,retain) NSString * customKeyAssetUUID;                 //@synthesize customKeyAssetUUID=_customKeyAssetUUID - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * assetUUIDs;              //@synthesize assetUUIDs=_assetUUIDs - In the implementation block
@property (assign,nonatomic) BOOL allowsOverwite;                           //@synthesize allowsOverwite=_allowsOverwite - In the implementation block
@property (nonatomic,retain) PLGenericAlbum * genericAlbum;                 //@synthesize genericAlbum=_genericAlbum - In the implementation block
@property (nonatomic,retain) NSURL * metadataURL;                           //@synthesize metadataURL=_metadataURL - In the implementation block
+(BOOL)isValidPath:(id)arg1 ;
+(BOOL)isFolderMetadataPath:(id)arg1 ;
+(BOOL)_isAlbumMetadataExtension:(id)arg1 ;
+(BOOL)_isFolderMetadataExtension:(id)arg1 ;
+(BOOL)isAlbumMetadataPath:(id)arg1 ;
-(NSString *)cloudGUID;
-(void)setCloudGUID:(NSString *)arg1 ;
-(BOOL)isFolder;
-(BOOL)isInTrash;
-(NSMutableOrderedSet *)assetUUIDs;
-(void)setKind:(NSNumber *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(BOOL)isPinned;
-(void)setPinned:(BOOL)arg1 ;
-(NSNumber *)kind;
-(NSString *)uuid;
-(id)initWithPersistedDataAtPath:(id)arg1 ;
-(id)insertAlbumFromDataInManagedObjectContext:(id)arg1 ;
-(void)updateChildrenOrderingInAlbum:(id)arg1 includePendingAssetChanges:(BOOL)arg2 ;
-(void)setUuid:(NSString *)arg1 ;
-(BOOL)customSortAscending;
-(void)setCustomSortAscending:(BOOL)arg1 ;
-(int)customSortKey;
-(void)setCustomSortKey:(int)arg1 ;
-(id)initWithPLGenericAlbum:(id)arg1 ;
-(void)persistAlbumData;
-(void)removePersistedAlbumData;
-(void)setInTrash:(BOOL)arg1 ;
-(void)setAssetUUIDs:(NSMutableOrderedSet *)arg1 ;
-(void)setCustomKeyAssetUUID:(NSString *)arg1 ;
-(void)setGenericAlbum:(PLGenericAlbum *)arg1 ;
-(void)setMetadataURL:(NSURL *)arg1 ;
-(void)setAllowsOverwite:(BOOL)arg1 ;
-(id)extensionForKind:(id)arg1 ;
-(void)_readMetadata;
-(void)_saveMetadata;
-(NSURL *)metadataURL;
-(NSString *)customKeyAssetUUID;
-(BOOL)allowsOverwite;
-(id)initWithTitle:(id)arg1 uuid:(id)arg2 cloudGUID:(id)arg3 kind:(id)arg4 assetUUIDs:(id)arg5 ;
-(PLGenericAlbum *)genericAlbum;
@end

