/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:10 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface PLDTCostElement : NSObject {

	NSDate* _startDate;
	NSDate* _costReturnedTillDate;
	double _costAggregated;
	NSDate* _lastOverheadStart;

}

@property (retain) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * costReturnedTillDate;              //@synthesize costReturnedTillDate=_costReturnedTillDate - In the implementation block
@property (assign) double costAggregated;                      //@synthesize costAggregated=_costAggregated - In the implementation block
@property (retain) NSDate * lastOverheadStart;                 //@synthesize lastOverheadStart=_lastOverheadStart - In the implementation block
+(id)getCostElementInstance;
-(NSDate *)startDate;
-(id)init;
-(id)initWithTime:(id)arg1 ;
-(void)addNetworkingEvent:(double)arg1 atTime:(id)arg2 withPid:(int)arg3 withAppState:(int)arg4 withQueryCount:(int)arg5 ;
-(id)getNetworkingCostUptoTime:(id)arg1 withPid:(int)arg2 withLastActiveStart:(id)arg3 withLastSuspendStart:(id)arg4 withAppState:(int)arg5 withQueryCount:(int)arg6 ;
-(void)addLocationEvent:(double)arg1 atTime:(id)arg2 withPid:(int)arg3 withAppState:(int)arg4 ;
-(id)getLocationCostUptoTime:(id)arg1 withPid:(int)arg2 withLastActiveStart:(id)arg3 withLastSuspendStart:(id)arg4 withAppState:(int)arg5 ;
-(void)addCpuEvent:(double)arg1 atTime:(id)arg2 withPid:(int)arg3 withAppState:(int)arg4 ;
-(id)getCpuCostUptoTime:(id)arg1 withPid:(int)arg2 withLastActiveStart:(id)arg3 withLastSuspendStart:(id)arg4 withAppState:(int)arg5 ;
-(double)costAggregated;
-(void)setCostAggregated:(double)arg1 ;
-(void)setLastOverheadStart:(NSDate *)arg1 ;
-(NSDate *)costReturnedTillDate;
-(NSDate *)lastOverheadStart;
-(void)setCostReturnedTillDate:(NSDate *)arg1 ;
-(void)addEvent:(double)arg1 atTime:(id)arg2 ;
-(id)getCostUptoTime:(id)arg1 ;
-(id)getApplicationCostUptoTime:(id)arg1 withPid:(int)arg2 withLastActiveStart:(id)arg3 withLastSuspendStart:(id)arg4 withAppState:(int)arg5 ;
-(void)setStartDate:(NSDate *)arg1 ;
@end

