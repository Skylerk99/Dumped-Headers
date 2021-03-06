/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:46 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATMovingAverage;

@interface ATThroughputCalculator : NSObject {

	BOOL _suspended;
	double _lastUpdate;
	double _startTime;
	double _currentValue;
	ATMovingAverage* _average;

}

@property (nonatomic,readonly) double throughput; 
-(id)init;
-(void)suspend;
-(void)resume;
-(BOOL)update:(double)arg1 ;
-(double)throughput;
@end

