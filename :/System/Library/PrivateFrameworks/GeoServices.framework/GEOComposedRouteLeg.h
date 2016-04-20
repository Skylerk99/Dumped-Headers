/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:12 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRoute, NSArray, GEOPBTransitStop;

@interface GEOComposedRouteLeg : NSObject {

	GEOComposedRoute* _composedRoute;
	long long _type;
	NSRange _pointRange;
	NSRange _stepRange;

}

@property (nonatomic,readonly) long long type;                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int transportType; 
@property (assign,nonatomic) GEOComposedRoute * composedRoute;                       //@synthesize composedRoute=_composedRoute - In the implementation block
@property (nonatomic,readonly) NSRange pointRange;                                   //@synthesize pointRange=_pointRange - In the implementation block
@property (nonatomic,readonly) NSRange stepRange;                                    //@synthesize stepRange=_stepRange - In the implementation block
@property (nonatomic,readonly) NSRange transitStepRange; 
@property (nonatomic,readonly) unsigned startPointIndex; 
@property (nonatomic,readonly) unsigned endPointIndex; 
@property (nonatomic,readonly) unsigned pointCount; 
@property (nonatomic,readonly) unsigned long long startStepIndex; 
@property (nonatomic,readonly) unsigned long long endStepIndex; 
@property (nonatomic,readonly) unsigned long long stepCount; 
@property (nonatomic,readonly) NSArray * steps; 
@property (nonatomic,readonly) double expectedTime; 
@property (nonatomic,readonly) unsigned long long numberOfTransitStops; 
@property (nonatomic,readonly) GEOPBTransitStop * startingTransitStop; 
@property (nonatomic,readonly) GEOPBTransitStop * endingTransitStop; 
@property (nonatomic,readonly) NSArray * enterTransitAccessPoints; 
@property (nonatomic,readonly) NSArray * exitTransitAccessPoints; 
-(id)description;
-(long long)type;
-(GEOPBTransitStop *)endingTransitStop;
-(NSArray *)exitTransitAccessPoints;
-(GEOPBTransitStop *)startingTransitStop;
-(NSRange)transitStepRange;
-(NSArray *)enterTransitAccessPoints;
-(int)transportType;
-(NSArray *)steps;
-(double)expectedTime;
-(unsigned long long)numberOfTransitStops;
-(unsigned)startPointIndex;
-(unsigned)endPointIndex;
-(void)setComposedRoute:(GEOComposedRoute *)arg1 ;
-(double)remainingTimeAlongLegFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2 ;
-(GEOComposedRoute *)composedRoute;
-(BOOL)contains:(id)arg1 ;
-(id)initWithComposedRoute:(id)arg1 routeLegType:(long long)arg2 stepRange:(NSRange)arg3 pointRange:(NSRange)arg4 ;
-(unsigned long long)endStepIndex;
-(NSRange)stepRange;
-(double)remainingDistanceAlongLegFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2 ;
-(unsigned long long)startStepIndex;
-(unsigned long long)stepCount;
-(NSRange)pointRange;
-(unsigned)pointCount;
@end

