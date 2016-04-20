/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:27 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface EKTravelEngineHypothesis : NSObject {

	BOOL _supportsLiveTraffic;
	int _transportType;
	NSDate* _originalConservativeDepartureDate;
	NSDate* _roundedConservativeDepartureDate;
	NSDate* _aggressiveDepartureDate;
	double _aggressiveTravelTime;
	unsigned long long _currentTrafficDensity;
	long long _travelState;

}

@property (assign,nonatomic) int transportType;                                       //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,retain) NSDate * originalConservativeDepartureDate;              //@synthesize originalConservativeDepartureDate=_originalConservativeDepartureDate - In the implementation block
@property (nonatomic,retain) NSDate * roundedConservativeDepartureDate;               //@synthesize roundedConservativeDepartureDate=_roundedConservativeDepartureDate - In the implementation block
@property (nonatomic,retain) NSDate * aggressiveDepartureDate;                        //@synthesize aggressiveDepartureDate=_aggressiveDepartureDate - In the implementation block
@property (assign,nonatomic) double aggressiveTravelTime;                             //@synthesize aggressiveTravelTime=_aggressiveTravelTime - In the implementation block
@property (assign,nonatomic) BOOL supportsLiveTraffic;                                //@synthesize supportsLiveTraffic=_supportsLiveTraffic - In the implementation block
@property (assign,nonatomic) unsigned long long currentTrafficDensity;                //@synthesize currentTrafficDensity=_currentTrafficDensity - In the implementation block
@property (assign,nonatomic) long long travelState;                                   //@synthesize travelState=_travelState - In the implementation block
-(id)initWithGEORouteHypothesis:(id)arg1 ;
-(void)setOriginalConservativeDepartureDate:(NSDate *)arg1 ;
-(void)setRoundedConservativeDepartureDate:(NSDate *)arg1 ;
-(void)setAggressiveDepartureDate:(NSDate *)arg1 ;
-(void)setAggressiveTravelTime:(double)arg1 ;
-(void)setCurrentTrafficDensity:(unsigned long long)arg1 ;
-(NSDate *)originalConservativeDepartureDate;
-(NSDate *)roundedConservativeDepartureDate;
-(id)init;
-(id)description;
-(void)setTransportType:(int)arg1 ;
-(int)transportType;
-(unsigned long long)currentTrafficDensity;
-(BOOL)supportsLiveTraffic;
-(long long)travelState;
-(NSDate *)aggressiveDepartureDate;
-(void)setSupportsLiveTraffic:(BOOL)arg1 ;
-(double)aggressiveTravelTime;
-(void)setTravelState:(long long)arg1 ;
@end

