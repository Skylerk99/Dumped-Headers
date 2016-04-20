/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, MIPMultiverseIdentifier, MIPSmartPlaylistInfo;

@interface MIPPlaylist : PBCodable <NSCopying> {

	long long _storeId;
	NSMutableArray* _childIdentifiers;
	NSString* _cloudGlobalId;
	int _distinguishedKind;
	MIPMultiverseIdentifier* _geniusSeedTrackIdentifier;
	NSMutableArray* _items;
	NSString* _name;
	MIPMultiverseIdentifier* _parentIdentifier;
	MIPSmartPlaylistInfo* _smartPlaylistInfo;
	int _sortType;
	int _type;
	BOOL _cloudIsCuratorPlaylist;
	BOOL _cloudIsSubscribed;
	BOOL _hidden;
	BOOL _reversedSorting;
	SCD_Struct_MI2 _has;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                                  //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasStoreId; 
@property (assign,nonatomic) long long storeId;                                                //@synthesize storeId=_storeId - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasHidden; 
@property (assign,nonatomic) BOOL hidden;                                                      //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) BOOL hasSmartPlaylistInfo; 
@property (nonatomic,retain) MIPSmartPlaylistInfo * smartPlaylistInfo;                         //@synthesize smartPlaylistInfo=_smartPlaylistInfo - In the implementation block
@property (assign,nonatomic) BOOL hasSortType; 
@property (assign,nonatomic) int sortType;                                                     //@synthesize sortType=_sortType - In the implementation block
@property (assign,nonatomic) BOOL hasReversedSorting; 
@property (assign,nonatomic) BOOL reversedSorting;                                             //@synthesize reversedSorting=_reversedSorting - In the implementation block
@property (nonatomic,readonly) BOOL hasParentIdentifier; 
@property (nonatomic,retain) MIPMultiverseIdentifier * parentIdentifier;                       //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasGeniusSeedTrackIdentifier; 
@property (nonatomic,retain) MIPMultiverseIdentifier * geniusSeedTrackIdentifier;              //@synthesize geniusSeedTrackIdentifier=_geniusSeedTrackIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasDistinguishedKind; 
@property (assign,nonatomic) int distinguishedKind;                                            //@synthesize distinguishedKind=_distinguishedKind - In the implementation block
@property (nonatomic,readonly) BOOL hasCloudGlobalId; 
@property (nonatomic,retain) NSString * cloudGlobalId;                                         //@synthesize cloudGlobalId=_cloudGlobalId - In the implementation block
@property (assign,nonatomic) BOOL hasCloudIsSubscribed; 
@property (assign,nonatomic) BOOL cloudIsSubscribed;                                           //@synthesize cloudIsSubscribed=_cloudIsSubscribed - In the implementation block
@property (assign,nonatomic) BOOL hasCloudIsCuratorPlaylist; 
@property (assign,nonatomic) BOOL cloudIsCuratorPlaylist;                                      //@synthesize cloudIsCuratorPlaylist=_cloudIsCuratorPlaylist - In the implementation block
@property (nonatomic,retain) NSMutableArray * childIdentifiers;                                //@synthesize childIdentifiers=_childIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                                           //@synthesize items=_items - In the implementation block
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(id)dictionaryRepresentation;
-(void)addItems:(id)arg1 ;
-(unsigned long long)itemsCount;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasName;
-(void)clearItems;
-(BOOL)hasHidden;
-(void)setHasHidden:(BOOL)arg1 ;
-(void)setStoreId:(long long)arg1 ;
-(void)setHasStoreId:(BOOL)arg1 ;
-(BOOL)hasStoreId;
-(long long)storeId;
-(void)addChildIdentifiers:(id)arg1 ;
-(void)setSmartPlaylistInfo:(MIPSmartPlaylistInfo *)arg1 ;
-(void)setGeniusSeedTrackIdentifier:(MIPMultiverseIdentifier *)arg1 ;
-(void)setCloudGlobalId:(NSString *)arg1 ;
-(unsigned long long)childIdentifiersCount;
-(void)clearChildIdentifiers;
-(id)childIdentifiersAtIndex:(unsigned long long)arg1 ;
-(id)itemsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSmartPlaylistInfo;
-(int)sortType;
-(void)setSortType:(int)arg1 ;
-(void)setHasSortType:(BOOL)arg1 ;
-(BOOL)hasSortType;
-(void)setReversedSorting:(BOOL)arg1 ;
-(void)setHasReversedSorting:(BOOL)arg1 ;
-(BOOL)hasReversedSorting;
-(BOOL)hasParentIdentifier;
-(BOOL)hasGeniusSeedTrackIdentifier;
-(void)setDistinguishedKind:(int)arg1 ;
-(void)setHasDistinguishedKind:(BOOL)arg1 ;
-(BOOL)hasDistinguishedKind;
-(BOOL)hasCloudGlobalId;
-(void)setCloudIsSubscribed:(BOOL)arg1 ;
-(void)setHasCloudIsSubscribed:(BOOL)arg1 ;
-(BOOL)hasCloudIsSubscribed;
-(void)setCloudIsCuratorPlaylist:(BOOL)arg1 ;
-(void)setHasCloudIsCuratorPlaylist:(BOOL)arg1 ;
-(BOOL)hasCloudIsCuratorPlaylist;
-(MIPSmartPlaylistInfo *)smartPlaylistInfo;
-(BOOL)reversedSorting;
-(MIPMultiverseIdentifier *)geniusSeedTrackIdentifier;
-(int)distinguishedKind;
-(NSString *)cloudGlobalId;
-(BOOL)cloudIsSubscribed;
-(BOOL)cloudIsCuratorPlaylist;
-(NSMutableArray *)childIdentifiers;
-(void)setChildIdentifiers:(NSMutableArray *)arg1 ;
-(BOOL)hidden;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasType;
-(MIPMultiverseIdentifier *)parentIdentifier;
-(void)setParentIdentifier:(MIPMultiverseIdentifier *)arg1 ;
@end

