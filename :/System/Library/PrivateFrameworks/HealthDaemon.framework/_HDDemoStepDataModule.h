/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/_HDDemoDataModule.h>

@interface _HDDemoStepDataModule : _HDDemoDataModule {

	double _nextFireInterval;
	unsigned long long _nextStepCount;
	double _nextDistance;

}
-(void)scheduleNextFire;
-(double)nextFireInterval;
-(void)timerDidFireWithInterval:(double)arg1 ;
-(void)_getDelayBeforeNextStepData:(double*)arg1 stepCount:(unsigned long long*)arg2 distance:(double*)arg3 ;
-(id)_nextStepQuantitySampleWithInterval:(double)arg1 ;
-(id)_nextDistanceQuantitySampleWithInterval:(double)arg1 ;
@end

