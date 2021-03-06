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

@interface GEORegionalResourceRegion : PBCodable <NSCopying> {

	SCD_Struct_GE88* _tileRanges;
	unsigned long long _tileRangesCount;
	unsigned long long _tileRangesSpace;
	NSMutableArray* _attributions;
	NSMutableArray* _iconChecksums;
	NSMutableArray* _icons;

}

@property (nonatomic,readonly) unsigned long long tileRangesCount; 
@property (nonatomic,readonly) SCD_Struct_GE88* tileRanges; 
@property (nonatomic,retain) NSMutableArray * icons;                            //@synthesize icons=_icons - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributions;                     //@synthesize attributions=_attributions - In the implementation block
@property (nonatomic,retain) NSMutableArray * iconChecksums;                    //@synthesize iconChecksums=_iconChecksums - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
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
-(void)clearTileRanges;
-(void)addTileRange:(SCD_Struct_GE88)arg1 ;
-(SCD_Struct_GE88*)tileRanges;
-(SCD_Struct_GE88)tileRangeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)tileRangesCount;
-(void)setTileRanges:(SCD_Struct_GE88*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
@end

