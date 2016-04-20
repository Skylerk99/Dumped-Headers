/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:11 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRoute, NSArray, NSDate, GEOComposedRouteStep, GEOComposedTransitTripRouteStep, GEOComposedTransitStationRouteStep;

@interface GEORouteMatch : NSObject {

	GEOComposedRoute* _route;
	PolylineCoordinate _routeCoordinate;
	SCD_Struct_GE16 _locationCoordinate;
	unsigned long long _stepIndex;
	NSArray* _candidateSteps;
	double _matchedCourse;
	double _distanceFromRoute;
	double _modifiedHorizontalAccuracy;
	double _modifiedCourseAccuracy;
	unsigned long long _consecutiveProgressionsOffRoute;
	double _distanceTraveledOffRoute;
	BOOL _isGoodMatch;
	SCD_Struct_GE114* _road;
	double _roadWidth;
	GEORouteMatch* _projectedFrom;
	NSDate* _timestamp;
	unsigned long long _transitID;

}

@property (nonatomic,readonly) GEOComposedRoute * route;                                             //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE16 locationCoordinate;                                     //@synthesize locationCoordinate=_locationCoordinate - In the implementation block
@property (nonatomic,readonly) PolylineCoordinate routeCoordinate;                                   //@synthesize routeCoordinate=_routeCoordinate - In the implementation block
@property (assign,nonatomic) unsigned long long stepIndex;                                           //@synthesize stepIndex=_stepIndex - In the implementation block
@property (nonatomic,readonly) GEOComposedRouteStep * step; 
@property (nonatomic,readonly) GEOComposedTransitTripRouteStep * transitTripStep; 
@property (nonatomic,readonly) GEOComposedTransitStationRouteStep * transitStationStep; 
@property (nonatomic,retain) NSArray * candidateSteps;                                               //@synthesize candidateSteps=_candidateSteps - In the implementation block
@property (nonatomic,readonly) double matchedCourse;                                                 //@synthesize matchedCourse=_matchedCourse - In the implementation block
@property (assign,nonatomic) double distanceFromRoute;                                               //@synthesize distanceFromRoute=_distanceFromRoute - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE114* road;                                                 //@synthesize road=_road - In the implementation block
@property (nonatomic,readonly) double roadWidth;                                                     //@synthesize roadWidth=_roadWidth - In the implementation block
@property (nonatomic,readonly) BOOL routeMatchedToEnd; 
@property (nonatomic,readonly) BOOL projectedPastEndOfLeg; 
@property (nonatomic,retain) GEORouteMatch * projectedFrom;                                          //@synthesize projectedFrom=_projectedFrom - In the implementation block
@property (assign,nonatomic) BOOL isGoodMatch;                                                       //@synthesize isGoodMatch=_isGoodMatch - In the implementation block
@property (assign,nonatomic) unsigned long long consecutiveProgressionsOffRoute;                     //@synthesize consecutiveProgressionsOffRoute=_consecutiveProgressionsOffRoute - In the implementation block
@property (assign,nonatomic) double distanceTraveledOffRoute;                                        //@synthesize distanceTraveledOffRoute=_distanceTraveledOffRoute - In the implementation block
@property (assign,nonatomic) double modifiedHorizontalAccuracy;                                      //@synthesize modifiedHorizontalAccuracy=_modifiedHorizontalAccuracy - In the implementation block
@property (assign,nonatomic) double modifiedCourseAccuracy;                                          //@synthesize modifiedCourseAccuracy=_modifiedCourseAccuracy - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) unsigned long long transitID;                                           //@synthesize transitID=_transitID - In the implementation block
-(id)initWithComposedRoute:(id)arg1 routeStatus:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDate *)timestamp;
-(GEOComposedRoute *)route;
-(void)setTransitID:(unsigned long long)arg1 ;
-(unsigned long long)transitID;
-(PolylineCoordinate)routeCoordinate;
-(void)setDistanceFromRoute:(double)arg1 ;
-(void)setLocationCoordinate:(SCD_Struct_GE16)arg1 ;
-(void)setStepIndex:(unsigned long long)arg1 ;
-(unsigned long long)stepIndex;
-(double)distanceFromRoute;
-(SCD_Struct_GE16)locationCoordinate;
-(double)matchedCourse;
-(double)fractionOfCurrentStepTraveled;
-(double)distanceTraveledOffRoute;
-(BOOL)routeMatchBehind:(id)arg1 ;
-(id)initWithRoute:(id)arg1 routeCoordinate:(PolylineCoordinate)arg2 locationCoordinate:(SCD_Struct_GE16)arg3 stepIndex:(unsigned long long)arg4 matchedCourse:(double)arg5 timestamp:(id)arg6 ;
-(void)setDistanceTraveledOffRoute:(double)arg1 ;
-(void)setModifiedCourseAccuracy:(double)arg1 ;
-(void)setConsecutiveProgressionsOffRoute:(unsigned long long)arg1 ;
-(void)setModifiedHorizontalAccuracy:(double)arg1 ;
-(double)modifiedCourseAccuracy;
-(BOOL)routeMatchedToEnd;
-(double)modifiedHorizontalAccuracy;
-(void)setRoad:(SCD_Struct_GE114*)arg1 ;
-(unsigned long long)consecutiveProgressionsOffRoute;
-(BOOL)projectedPastEndOfLeg;
-(void)updateOffRouteProgress:(id)arg1 minDistanceToGetOnRoute:(double)arg2 ;
-(void)setCandidateSteps:(NSArray *)arg1 ;
-(GEORouteMatch *)projectedFrom;
-(GEOComposedTransitTripRouteStep *)transitTripStep;
-(NSArray *)candidateSteps;
-(void)updateWithMinRouteCoordinate:(PolylineCoordinate)arg1 ;
-(BOOL)isEqualIgnoringScore:(id)arg1 ;
-(double)roadWidth;
-(void)setIsGoodMatch:(BOOL)arg1 ;
-(GEOComposedTransitStationRouteStep *)transitStationStep;
-(void)setProjectedFrom:(GEORouteMatch *)arg1 ;
-(SCD_Struct_GE114*)road;
-(BOOL)isGoodMatch;
-(GEOComposedRouteStep *)step;
@end

