/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:14 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedTransitRouteStep.h>

@protocol GEOTransitLine, GEOTransitSystem;
@class NSArray, GEOPBTransitStop, NSTimeZone, NSDate, GEOTransitVehicleInfo;

@interface GEOComposedTransitTripRouteStep : GEOComposedTransitRouteStep {

	NSArray* _departureTimes;
	NSArray* _arrivalTimes;
	double _departureTimeIntervalMin;
	double _departureTimeIntervalMax;
	GEOPBTransitStop* _originStop;
	GEOPBTransitStop* _destinationStop;
	unsigned long long _defaultVehicleIndex;
	unsigned long long _vehicleIndex;
	NSArray* _transitVehicles;
	NSArray* _transitLines;
	NSArray* _transitSystems;
	NSArray* _instructions;
	NSArray* _routeLineArtworks;
	NSArray* _routeDetailsPrimaryArtworkArrays;
	NSArray* _routeDetailsSecondaryArtworks;
	NSArray* _steppingArtworkArrays;
	id<GEOTransitLine> _transitLine;
	id<GEOTransitSystem> _transitSystem;
	BOOL _isRail;
	BOOL _isBus;
	BOOL _canPreloadTiles;

}

@property (nonatomic,readonly) NSTimeZone * departureTimeZone; 
@property (nonatomic,readonly) NSTimeZone * arrivalTimeZone; 
@property (nonatomic,readonly) NSDate * departureTime; 
@property (nonatomic,readonly) NSDate * arrivalTime; 
@property (nonatomic,readonly) NSArray * departureTimes;                                      //@synthesize departureTimes=_departureTimes - In the implementation block
@property (nonatomic,readonly) NSArray * arrivalTimes;                                        //@synthesize arrivalTimes=_arrivalTimes - In the implementation block
@property (nonatomic,readonly) double departureTimeIntervalMin;                               //@synthesize departureTimeIntervalMin=_departureTimeIntervalMin - In the implementation block
@property (nonatomic,readonly) double departureTimeIntervalMax;                               //@synthesize departureTimeIntervalMax=_departureTimeIntervalMax - In the implementation block
@property (nonatomic,readonly) GEOTransitVehicleInfo * transitVehicle; 
@property (nonatomic,readonly) id<GEOTransitLine> transitLine;                                //@synthesize transitLine=_transitLine - In the implementation block
@property (nonatomic,readonly) id<GEOTransitSystem> transitSystem;                            //@synthesize transitSystem=_transitSystem - In the implementation block
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> routeLineArtwork; 
@property (nonatomic,readonly) BOOL isRail;                                                   //@synthesize isRail=_isRail - In the implementation block
@property (nonatomic,readonly) BOOL isBus;                                                    //@synthesize isBus=_isBus - In the implementation block
@property (nonatomic,readonly) BOOL canPreloadTilesForThisStep; 
@property (nonatomic,readonly) unsigned long long defaultVehicleIndex;                        //@synthesize defaultVehicleIndex=_defaultVehicleIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long vehicleCount; 
@property (assign,nonatomic) unsigned long long vehicleIndex;                                 //@synthesize vehicleIndex=_vehicleIndex - In the implementation block
-(void)dealloc;
-(id)description;
-(unsigned)duration;
-(id)instructions;
-(NSDate *)departureTime;
-(id)routeDetailsPrimaryArtwork;
-(id)routeDetailsSecondaryArtwork;
-(id)destinationStop;
-(id)originStop;
-(id)steppingArtwork;
-(GEOTransitVehicleInfo *)transitVehicle;
-(id<GEOTransitArtworkDataSource>)routeLineArtwork;
-(BOOL)canPreloadTilesForThisStep;
-(BOOL)isRail;
-(id<GEOTransitSystem>)transitSystem;
-(BOOL)isBus;
-(id<GEOTransitLine>)transitLine;
-(NSTimeZone *)departureTimeZone;
-(unsigned long long)vehicleIndex;
-(unsigned long long)defaultVehicleIndex;
-(NSTimeZone *)arrivalTimeZone;
-(unsigned long long)vehicleCount;
-(id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 step:(id)arg3 stepIndex:(unsigned long long)arg4 duration:(unsigned)arg5 pointRange:(NSRange)arg6 ;
-(id)transitLineForVehicle:(unsigned long long)arg1 ;
-(void)setVehicleIndex:(unsigned long long)arg1 ;
-(id)routeDetailsSecondaryArtworkForVehicle:(unsigned long long)arg1 ;
-(double)departureTimeIntervalMax;
-(id)steppingArtworkForVehicle:(unsigned long long)arg1 ;
-(NSArray *)arrivalTimes;
-(double)departureTimeIntervalMin;
-(NSDate *)arrivalTime;
-(NSArray *)departureTimes;
-(id)routeDetailsPrimaryArtworkForVehicle:(unsigned long long)arg1 ;
-(BOOL)hasDuration;
@end

