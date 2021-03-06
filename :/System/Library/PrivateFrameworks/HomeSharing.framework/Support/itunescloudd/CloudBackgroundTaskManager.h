/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:35 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface CloudBackgroundTaskManager : NSObject {

	NSMapTable* _jobNameToSelectorMap;

}
+(id)sharedTaskManager;
-(void)_initializeBTAHandlers;
-(id)_nextEvaluateSyncRulesOperationTimeKey;
-(id)_homeSharingPrefsNumberForKey:(id)arg1 ;
-(id)_baseBtaJobForPeriodicKeepLocal;
-(void)_scheduleJobNamed:(const char*)arg1 withStartTime:(id)arg2 baseBtaJob:(id)arg3 ;
-(void)_unscheduleJobNamed:(const char*)arg1 ;
-(double)_throttledDeferredEvaluateKeepLocalTime;
-(id)_baseBtaJobForDeferredKeepLocal;
-(id)_baseBtaJobForDeferredPush;
-(id)_nextJaliscoMediaPollTimeKey;
-(id)_baseBtaJobForPeriodicPoll;
-(id)_nextJaliscoAppsPollTimeKey;
-(void)_setHomeSharingPrefsNumber:(id)arg1 forKey:(id)arg2 ;
-(id)_nextEvaluateSyncRulesThrottleOperationTimeKey;
-(void)unscheduleSagaDeferredPushUpate;
-(void)unscheduleJaliscoMediaDeferredPushUpate;
-(void)unscheduleJaliscoAppsDeferredPushUpate;
-(void)_handleUpdateKeepLocalRulesPeriodicJobSatisfied:(BOOL)arg1 invalidRequest:(BOOL)arg2 ;
-(void)_handleUpdateKeepLocalRulesDeferredJobSatisfied:(BOOL)arg1 invalidRequest:(BOOL)arg2 ;
-(void)_handleSagaDeferredPushUpdateJobSatisfied:(BOOL)arg1 invalidRequest:(BOOL)arg2 ;
-(void)_handleJaliscoMediaPeriodicPollJobSatisfied:(BOOL)arg1 invalidRequest:(BOOL)arg2 ;
-(void)_handleJaliscoMediaDeferredPushUpdateJobSatisfied:(BOOL)arg1 invalidRequest:(BOOL)arg2 ;
-(void)_handleJaliscoAppsPeriodicPollJobSatisfied:(BOOL)arg1 invalidRequest:(BOOL)arg2 ;
-(void)_handleJaliscoAppsDeferredPushUpdateJobSatisfied:(BOOL)arg1 invalidRequest:(BOOL)arg2 ;
-(void)_handleJobNamed:(const char*)arg1 satisfied:(BOOL)arg2 invalid:(BOOL)arg3 ;
-(void)schedulePeriodicUpdateKeepLocalRules;
-(void)unschedulePeriodicUpdateKeepLocalRules;
-(void)scheduleDeferredUpdateKeepLocalRules;
-(void)unscheduleDeferredUpdateKeepLocalRules;
-(void)scheduleSagaDeferredPushUpate;
-(void)scheduleJaliscoMediaPeriodicPoll;
-(void)unscheduleJaliscoMediaPeriodicPoll;
-(void)scheduleJaliscoMediaDeferredPushUpate;
-(void)scheduleJaliscoAppsPeriodicPoll;
-(void)unscheduleJaliscoAppsPeriodicPoll;
-(void)scheduleJaliscoAppsDeferredPushUpate;
-(id)init;
@end

