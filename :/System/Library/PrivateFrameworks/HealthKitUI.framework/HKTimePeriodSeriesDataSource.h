/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HKHealthQueryChartCacheDataSource.h>

@class HKSampleType, NSPredicate;

@interface HKTimePeriodSeriesDataSource : HKHealthQueryChartCacheDataSource {

	HKSampleType* _sampleType;
	NSPredicate* _queryPredicate;
	/*^block*/id _userInfoCreationBlock;

}

@property (nonatomic,retain) HKSampleType * sampleType;                 //@synthesize sampleType=_sampleType - In the implementation block
@property (nonatomic,retain) NSPredicate * queryPredicate;              //@synthesize queryPredicate=_queryPredicate - In the implementation block
@property (nonatomic,copy) id userInfoCreationBlock;                    //@synthesize userInfoCreationBlock=_userInfoCreationBlock - In the implementation block
-(void)setQueryPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)queryPredicate;
-(HKSampleType *)sampleType;
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)userInfoCreationBlock;
-(void)setUserInfoCreationBlock:(id)arg1 ;
-(void)setSampleType:(HKSampleType *)arg1 ;
-(void)_handleSamples:(id)arg1 blockStart:(id)arg2 blockEnd:(id)arg3 intervalComponents:(id)arg4 completion:(/*^block*/id)arg5 ;
@end

