/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTimeToLeaveHypothesisFeedbackCollection : PBCodable <NSCopying> {

	double _earliestArrivalOffset;
	double _earliestDepartureOffset;
	double _latestArrivalOffset;
	double _latestDepartureOffset;
	int _arrival;
	int _departure;
	unsigned _numberOfReroutes;
	int _uiNotification;
	SCD_Struct_GE65 _has;

}

@property (assign,nonatomic) BOOL hasDeparture; 
@property (assign,nonatomic) int departure;                                //@synthesize departure=_departure - In the implementation block
@property (assign,nonatomic) BOOL hasArrival; 
@property (assign,nonatomic) int arrival;                                  //@synthesize arrival=_arrival - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfReroutes; 
@property (assign,nonatomic) unsigned numberOfReroutes;                    //@synthesize numberOfReroutes=_numberOfReroutes - In the implementation block
@property (assign,nonatomic) BOOL hasUiNotification; 
@property (assign,nonatomic) int uiNotification;                           //@synthesize uiNotification=_uiNotification - In the implementation block
@property (assign,nonatomic) BOOL hasEarliestDepartureOffset; 
@property (assign,nonatomic) double earliestDepartureOffset;               //@synthesize earliestDepartureOffset=_earliestDepartureOffset - In the implementation block
@property (assign,nonatomic) BOOL hasLatestDepartureOffset; 
@property (assign,nonatomic) double latestDepartureOffset;                 //@synthesize latestDepartureOffset=_latestDepartureOffset - In the implementation block
@property (assign,nonatomic) BOOL hasEarliestArrivalOffset; 
@property (assign,nonatomic) double earliestArrivalOffset;                 //@synthesize earliestArrivalOffset=_earliestArrivalOffset - In the implementation block
@property (assign,nonatomic) BOOL hasLatestArrivalOffset; 
@property (assign,nonatomic) double latestArrivalOffset;                   //@synthesize latestArrivalOffset=_latestArrivalOffset - In the implementation block
-(id)initWithEarlyDepartureDelta:(double)arg1 lateDepartureDelta:(double)arg2 earlyArrivalDelta:(double)arg3 lateArrivalDelta:(double)arg4 rerouteCount:(unsigned long long)arg5 uiNotification:(unsigned long long)arg6 ;
-(int)bucketValueForTimeDelta:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasLatestDepartureOffset:(BOOL)arg1 ;
-(BOOL)hasLatestArrivalOffset;
-(double)earliestDepartureOffset;
-(BOOL)hasUiNotification;
-(int)departure;
-(void)setHasUiNotification:(BOOL)arg1 ;
-(void)setLatestDepartureOffset:(double)arg1 ;
-(void)setNumberOfReroutes:(unsigned)arg1 ;
-(BOOL)hasDeparture;
-(void)setHasLatestArrivalOffset:(BOOL)arg1 ;
-(void)setHasDeparture:(BOOL)arg1 ;
-(double)latestDepartureOffset;
-(BOOL)hasArrival;
-(BOOL)hasEarliestDepartureOffset;
-(void)setLatestArrivalOffset:(double)arg1 ;
-(double)earliestArrivalOffset;
-(void)setUiNotification:(int)arg1 ;
-(double)latestArrivalOffset;
-(void)setDeparture:(int)arg1 ;
-(BOOL)hasEarliestArrivalOffset;
-(int)uiNotification;
-(void)setHasEarliestDepartureOffset:(BOOL)arg1 ;
-(void)setHasArrival:(BOOL)arg1 ;
-(BOOL)hasNumberOfReroutes;
-(void)setArrival:(int)arg1 ;
-(void)setHasEarliestArrivalOffset:(BOOL)arg1 ;
-(int)arrival;
-(void)setHasNumberOfReroutes:(BOOL)arg1 ;
-(unsigned)numberOfReroutes;
-(void)setEarliestArrivalOffset:(double)arg1 ;
-(BOOL)hasLatestDepartureOffset;
-(void)setEarliestDepartureOffset:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

