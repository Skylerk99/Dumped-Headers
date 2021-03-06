/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:17 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPlannedDestination, GEORouteHypothesis, NSString;

@interface GEORouteHypothesizer : NSObject {

	GEOPlannedDestination* _plannedDestination;
	unsigned long long _state;
	GEORouteHypothesis* _currentHypothesis;
	/*^block*/id _updateHandler;
	NSString* _activityIdentifier;

}

@property (nonatomic,readonly) GEOPlannedDestination * plannedDestination;              //@synthesize plannedDestination=_plannedDestination - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) GEORouteHypothesis * currentHypothesis;                  //@synthesize currentHypothesis=_currentHypothesis - In the implementation block
@property (nonatomic,readonly) double willBeginHypothesizingInterval; 
@property (nonatomic,readonly) double willEndHypothesizingInterval; 
+(id)hypothesizerForPlannedDestination:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(GEORouteHypothesis *)currentHypothesis;
-(double)willBeginHypothesizingInterval;
-(void)startHypothesizingWithUpdateHandler:(/*^block*/id)arg1 ;
-(BOOL)_wontHypothesizeAgain;
-(void)stopHypothesizing;
-(id)initWithPlannedDestination:(id)arg1 ;
-(void)didPostUINotification:(unsigned long long)arg1 ;
-(GEOPlannedDestination *)plannedDestination;
-(double)willEndHypothesizingInterval;
-(void)delayStarting;
@end

