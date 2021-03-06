/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:13 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOTransitLeg : PBCodable <NSCopying> {

	unsigned _defaultRideIndex;
	NSMutableArray* _rides;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,retain) NSMutableArray * rides;                 //@synthesize rides=_rides - In the implementation block
@property (assign,nonatomic) BOOL hasDefaultRideIndex; 
@property (assign,nonatomic) unsigned defaultRideIndex;              //@synthesize defaultRideIndex=_defaultRideIndex - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)rides;
-(void)clearRides;
-(BOOL)hasDefaultRideIndex;
-(void)addRide:(id)arg1 ;
-(void)setHasDefaultRideIndex:(BOOL)arg1 ;
-(unsigned long long)ridesCount;
-(id)rideAtIndex:(unsigned long long)arg1 ;
-(unsigned)defaultRideIndex;
-(void)setRides:(NSMutableArray *)arg1 ;
-(void)setDefaultRideIndex:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

