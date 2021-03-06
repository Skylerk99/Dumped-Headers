/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:11 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOMapRegion;

@interface GEOPDViewportInfo : PBCodable <NSCopying> {

	GEOMapRegion* _mapRegion;
	int _mapType;
	unsigned _timeSinceMapViewportChanged;
	SCD_Struct_GE7 _has;

}

@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;                          //@synthesize mapRegion=_mapRegion - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceMapViewportChanged; 
@property (assign,nonatomic) unsigned timeSinceMapViewportChanged;              //@synthesize timeSinceMapViewportChanged=_timeSinceMapViewportChanged - In the implementation block
@property (assign,nonatomic) BOOL hasMapType; 
@property (assign,nonatomic) int mapType;                                       //@synthesize mapType=_mapType - In the implementation block
+(id)viewportInfoForTraits:(id)arg1 ;
-(id)initWithTraits:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasMapRegion;
-(GEOMapRegion *)mapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)setTimeSinceMapViewportChanged:(unsigned)arg1 ;
-(BOOL)hasTimeSinceMapViewportChanged;
-(void)setHasTimeSinceMapViewportChanged:(BOOL)arg1 ;
-(unsigned)timeSinceMapViewportChanged;
-(int)mapType;
-(void)setMapType:(int)arg1 ;
-(BOOL)hasMapType;
-(void)setHasMapType:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

