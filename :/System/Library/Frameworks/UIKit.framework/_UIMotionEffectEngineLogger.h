/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:12 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _UIMotionEffectEngineLogger : NSObject {

	long long _motionLevelSamples[8];
	long long _sampleCount;
	long long _updateFreqency;
	double _lastUpdateTimeStamp;

}
-(void)recordMotionMagnitude:(double)arg1 atTimestamp:(double)arg2 ;
-(id)initWithFastUpdateInterval:(double)arg1 slowUpdateInterval:(double)arg2 ;
-(void)_dumpToAggregated;
@end

