/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:18 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORPVisibleTileSet : PBCodable <NSCopying> {

	SCD_Struct_GE228* _tileKeys;
	unsigned long long _tileKeysCount;
	unsigned long long _tileKeysSpace;
	unsigned _identifier;
	int _style;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) BOOL hasStyle; 
@property (assign,nonatomic) int style;                                       //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL hasIdentifier; 
@property (assign,nonatomic) unsigned identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long tileKeysCount; 
@property (nonatomic,readonly) SCD_Struct_GE228* tileKeys; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)style;
-(void)setIdentifier:(unsigned)arg1 ;
-(void)setStyle:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearTileKeys;
-(BOOL)hasIdentifier;
-(unsigned long long)tileKeysCount;
-(void)setTileKeys:(SCD_Struct_GE228*)arg1 count:(unsigned long long)arg2 ;
-(void)addTileKey:(SCD_Struct_GE228)arg1 ;
-(SCD_Struct_GE228*)tileKeys;
-(BOOL)hasStyle;
-(SCD_Struct_GE228)tileKeyAtIndex:(unsigned long long)arg1 ;
-(void)setHasStyle:(BOOL)arg1 ;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

