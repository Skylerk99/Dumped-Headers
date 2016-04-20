/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:32 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FIUIAchievementsModelDelegate.h>

@protocol OS_dispatch_queue;
@class HKHealthStore, FIUIWeeklyGoalModel, FIUIAchievementsModel, NSHashTable, NSMutableDictionary, HKCurrentActivityCacheQuery, HKActivityCache, NSObject, NSPredicate, NSString;

@interface FIUIModel : NSObject <FIUIAchievementsModelDelegate> {

	HKHealthStore* _healthStore;
	FIUIWeeklyGoalModel* _weeklyGoalModel;
	FIUIAchievementsModel* _achievementsModel;
	NSHashTable* _observers;
	NSMutableDictionary* _currentActivityQueryClients;
	HKCurrentActivityCacheQuery* _queue_currentActivityCacheQuery;
	long long _queue_activityCacheQueryRetries;
	HKActivityCache* _queue_currentActivityCacheForClients;
	NSObject*<OS_dispatch_queue> _activityCacheQueryClientQueue;
	NSPredicate* _sourcesPredicate;
	NSObject*<OS_dispatch_queue> _sourcesQueue;

}

@property (nonatomic,readonly) FIUIWeeklyGoalModel * weeklyGoalModel; 
@property (nonatomic,readonly) FIUIAchievementsModel * achievementsModel; 
@property (nonatomic,readonly) double arcPercentPerHour; 
@property (nonatomic,readonly) NSPredicate * sourcesPredicate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)calorieUnit;
+(id)activeEnergyQuantityType;
+(id)briskActivityQuantityType;
+(id)briskActivityUnit;
+(id)_dailyTotalsQueryFromDate:(id)arg1 toDate:(id)arg2 dataType:(id)arg3 predicate:(id)arg4 sendUpdates:(BOOL)arg5 handler:(/*^block*/id)arg6 ;
+(id)_statisticsCollectionQueryFromDate:(id)arg1 toDate:(id)arg2 intervalSize:(id)arg3 dataType:(id)arg4 predicate:(id)arg5 sendUpdates:(BOOL)arg6 seperateBySource:(BOOL)arg7 handler:(/*^block*/id)arg8 ;
+(id)_unitForDataType:(id)arg1 ;
+(id)_fakeCollectionForDataTypeIdentifier:(id)arg1 unit:(id)arg2 ;
+(id)activeAndIdleHoursObserverQueryFromDate:(id)arg1 toDate:(id)arg2 predicate:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
+(id)activeHourCategoryType;
+(id)activeAndIdleAndGoalHoursSampleQueryFromDate:(id)arg1 toDate:(id)arg2 predicate:(id)arg3 needsHourlyChartInfo:(BOOL)arg4 withCompletion:(/*^block*/id)arg5 ;
+(void)_fakeActiveAndGoalHoursDataWithCompletion:(/*^block*/id)arg1 ;
+(id)distanceUnit;
+(id)distanceQuantityType;
+(id)stepUnit;
+(id)stepQuantityType;
+(id)dailyTotalQueryForDate:(id)arg1 dataType:(id)arg2 predicate:(id)arg3 sendUpdates:(BOOL)arg4 handler:(/*^block*/id)arg5 ;
+(id)dailyTotalsQueryFromDate:(id)arg1 toDate:(id)arg2 dataType:(id)arg3 predicate:(id)arg4 sendUpdates:(BOOL)arg5 handler:(/*^block*/id)arg6 ;
+(id)statisticsCollectionQueryForDate:(id)arg1 intervalSize:(id)arg2 dataType:(id)arg3 predicate:(id)arg4 sendUpdates:(BOOL)arg5 seperateBySource:(BOOL)arg6 handler:(/*^block*/id)arg7 ;
+(id)statisticsCollectionQueryFromDate:(id)arg1 toDate:(id)arg2 intervalSize:(id)arg3 dataType:(id)arg4 predicate:(id)arg5 sendUpdates:(BOOL)arg6 seperateBySource:(BOOL)arg7 handler:(/*^block*/id)arg8 ;
+(id)activeAndIdleHoursObserverQueryForDate:(id)arg1 predicate:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
+(id)activeAndIdleAndGoalHoursSampleQueryForDate:(id)arg1 predicate:(id)arg2 needsHourlyChartInfo:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)executeQuery:(id)arg1 ;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_setKnownSources:(id)arg1 ;
-(void)_sendMessageToObservers:(SEL)arg1 withObject:(id)arg2 ;
-(id)_createCurrentActivityCacheQuery;
-(void)_queue_restartCurrentActivityCacheQueryAfterError;
-(void)achievementsDidChangeInModel:(id)arg1 ;
-(NSPredicate *)sourcesPredicate;
-(double)arcPercentPerHour;
-(FIUIWeeklyGoalModel *)weeklyGoalModel;
-(void)_printStatisticsCollection:(id)arg1 ;
-(void)_printUpdatedStatistics:(id)arg1 ;
-(FIUIAchievementsModel *)achievementsModel;
-(void)_sendMessageToObservers:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
-(id)startCurrentActivityCacheQueryWithHandler:(/*^block*/id)arg1 ;
-(void)stopCurrentActivityCacheQueryForClientToken:(id)arg1 ;
-(void)weeklySummaryInfoForDate:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)stopQuery:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 ;
@end

