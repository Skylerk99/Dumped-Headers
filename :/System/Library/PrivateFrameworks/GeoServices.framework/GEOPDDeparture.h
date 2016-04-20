/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:16 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitDeparture.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString;

@interface GEOPDDeparture : PBCodable <GEOTransitDeparture, NSCopying> {

	double _absDepartureTime;
	NSString* _vehicleNumber;
	SCD_Struct_GE3 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * departureDate; 
@property (nonatomic,readonly) NSString * vehicleIdentifier; 
@property (assign,nonatomic) BOOL hasAbsDepartureTime; 
@property (assign,nonatomic) double absDepartureTime;                     //@synthesize absDepartureTime=_absDepartureTime - In the implementation block
@property (nonatomic,readonly) BOOL hasVehicleNumber; 
@property (nonatomic,retain) NSString * vehicleNumber;                    //@synthesize vehicleNumber=_vehicleNumber - In the implementation block
-(NSDate *)departureDate;
-(NSString *)vehicleIdentifier;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)vehicleNumber;
-(BOOL)hasVehicleNumber;
-(void)setVehicleNumber:(NSString *)arg1 ;
-(BOOL)hasAbsDepartureTime;
-(void)setHasAbsDepartureTime:(BOOL)arg1 ;
-(void)setAbsDepartureTime:(double)arg1 ;
-(double)absDepartureTime;
-(BOOL)readFrom:(id)arg1 ;
@end

