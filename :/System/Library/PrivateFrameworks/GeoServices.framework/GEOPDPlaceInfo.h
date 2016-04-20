/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:58 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLatLng, GEOTimezone;

@interface GEOPDPlaceInfo : PBCodable <NSCopying> {

	double _area;
	GEOLatLng* _center;
	GEOTimezone* _timezone;
	BOOL _isApproximateCenter;
	SCD_Struct_GE7 _has;

}

@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center;                       //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) BOOL hasArea; 
@property (assign,nonatomic) double area;                              //@synthesize area=_area - In the implementation block
@property (nonatomic,readonly) BOOL hasTimezone; 
@property (nonatomic,retain) GEOTimezone * timezone;                   //@synthesize timezone=_timezone - In the implementation block
@property (assign,nonatomic) BOOL hasIsApproximateCenter; 
@property (assign,nonatomic) BOOL isApproximateCenter;                 //@synthesize isApproximateCenter=_isApproximateCenter - In the implementation block
+(id)placeInfoForPlaceData:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEOLatLng *)center;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasCenter;
-(double)area;
-(BOOL)hasTimezone;
-(BOOL)hasArea;
-(BOOL)isApproximateCenter;
-(GEOTimezone *)timezone;
-(void)setHasArea:(BOOL)arg1 ;
-(BOOL)hasIsApproximateCenter;
-(void)setHasIsApproximateCenter:(BOOL)arg1 ;
-(void)setIsApproximateCenter:(BOOL)arg1 ;
-(void)setTimezone:(GEOTimezone *)arg1 ;
-(void)setArea:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

