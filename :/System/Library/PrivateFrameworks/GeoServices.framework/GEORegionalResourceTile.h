/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:16 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEORegionalResourceTile : PBCodable <NSCopying> {

	NSMutableArray* _attributions;
	NSMutableArray* _childrens;
	NSMutableArray* _iconChecksums;
	NSMutableArray* _icons;
	unsigned _x;
	unsigned _y;
	unsigned _z;

}

@property (assign,x,nonatomic) unsigned x;                                //@synthesize x=_x - In the implementation block
@property (assign,y,nonatomic) unsigned y;                                //@synthesize y=_y - In the implementation block
@property (assign,z,nonatomic) unsigned z;                                //@synthesize z=_z - In the implementation block
@property (nonatomic,retain) NSMutableArray * childrens;                  //@synthesize childrens=_childrens - In the implementation block
@property (nonatomic,retain) NSMutableArray * icons;                      //@synthesize icons=_icons - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributions;               //@synthesize attributions=_attributions - In the implementation block
@property (nonatomic,retain) NSMutableArray * iconChecksums;              //@synthesize iconChecksums=_iconChecksums - In the implementation block
-(BOOL)containsTileKey:(const GEOTileKey*)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)x;
-(void)setX:(unsigned)arg1 ;
-(unsigned)y;
-(void)setY:(unsigned)arg1 ;
-(unsigned)z;
-(void)setZ:(unsigned)arg1 ;
-(void)setIcons:(NSMutableArray *)arg1 ;
-(NSMutableArray *)icons;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearAttributions;
-(void)setAttributions:(NSMutableArray *)arg1 ;
-(unsigned long long)attributionsCount;
-(id)attributionAtIndex:(unsigned long long)arg1 ;
-(void)addAttribution:(id)arg1 ;
-(NSMutableArray *)attributions;
-(id)iconChecksumAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)iconsCount;
-(void)addIconChecksum:(id)arg1 ;
-(void)clearIconChecksums;
-(void)clearIcons;
-(unsigned long long)iconChecksumsCount;
-(NSMutableArray *)iconChecksums;
-(id)iconAtIndex:(unsigned long long)arg1 ;
-(void)addIcon:(id)arg1 ;
-(void)setIconChecksums:(NSMutableArray *)arg1 ;
-(id)childrenAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)childrensCount;
-(NSMutableArray *)childrens;
-(void)clearChildrens;
-(void)setChildrens:(NSMutableArray *)arg1 ;
-(void)addChildren:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

