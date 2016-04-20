/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:46 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKWorkout.h>
#import <libobjc.A.dylib/_HKActiveWorkoutClient.h>

@protocol _HKActiveWorkoutDelegate, _HKActiveWorkoutLifecycleDelegate, OS_dispatch_queue, NSXPCProxyCreating;
@class NSObject, NSDate, NSMutableDictionary, NSMutableData, NSDictionary, NSData, NSString;

@interface _HKActiveWorkout : HKWorkout <_HKActiveWorkoutClient> {

	id<_HKActiveWorkoutDelegate> _delegate;
	id<_HKActiveWorkoutLifecycleDelegate> _lifecycleDelegate;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	long long _workoutState;
	long long _serverState;
	NSDate* _lastObservedDate;
	NSMutableDictionary* _resumeDataByType;
	id<NSXPCProxyCreating> _serverProxy;
	NSMutableData* _associatedObjectUUIDData;
	BOOL _shouldUseDeviceData;

}

@property (__weak) id<_HKActiveWorkoutDelegate> delegate; 
@property (readonly) long long workoutState; 
@property (readonly) long long serverState; 
@property (readonly) NSDictionary * resumeDataByType;                                                                                            //@synthesize resumeDataByType=_resumeDataByType - In the implementation block
@property (getter=_associatedObjectUUIDData,readonly) NSData * associatedObjectUUIDData; 
@property (getter=_shouldUseDeviceData,readonly) BOOL shouldUseDeviceData;                                                                       //@synthesize shouldUseDeviceData=_shouldUseDeviceData - In the implementation block
@property (setter=_setLifecycleDelegate:,getter=_lifecycleDelegate,__weak) id<_HKActiveWorkoutLifecycleDelegate> lifecycleDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 duration:(double)arg5 totalActiveEnergyBurned:(id)arg6 totalBasalEnergyBurned:(id)arg7 totalDistance:(id)arg8 goalType:(unsigned long long)arg9 goal:(id)arg10 shouldUseDeviceData:(BOOL)arg11 metadata:(id)arg12 ;
+(id)_clientInterface;
+(id)_serverInterface;
+(BOOL)supportsSecureCoding;
-(void)endWorkoutWithDate:(id)arg1 metadata:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_workoutServerWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_queue_transitionToServerState:(long long)arg1 ;
-(void)_handleWorkoutPausedWithDate:(id)arg1 ;
-(void)_queue_alertDelegateDidUpdateState:(long long)arg1 date:(id)arg2 ;
-(void)_queue_setEndDate:(id)arg1 ;
-(id)_queue_endDate;
-(void)_queue_deactivate;
-(id)_lifecycleDelegate;
-(id)_propertyQueue_serverConfiguration;
-(void)_queue_alertDelegateDidEncounterError:(id)arg1 ;
-(void)_queue_updateTotalsWithQuantity:(id)arg1 quantityType:(id)arg2 ;
-(void)_queue_addAssociatedObjectUUIDs:(id)arg1 ;
-(void)_queue_addActiveEnergyBurned:(id)arg1 ;
-(void)_queue_alertDelegateWorkoutDidUpdateTotalActiveEnergyBurned;
-(void)_queue_addBasalEnergyBurned:(id)arg1 ;
-(void)_queue_alertDelegateWorkoutDidUpdateTotalBasalEnergyBurned;
-(void)_queue_addDistance:(id)arg1 ;
-(void)_queue_alertDelegateWorkoutDidUpdateTotalDistance;
-(BOOL)_queue_serverAttached;
-(BOOL)_serverAttached;
-(id)_serverProxy;
-(void)resumeWorkoutFromDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)endWorkoutWithDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_attachServerWithClientQueue:(id)arg1 lifecycleDelegate:(id)arg2 connection:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_connectionDidEncounterError:(id)arg1 ;
-(void)_addSamples:(id)arg1 ;
-(id)_inactiveCopy;
-(void)_setServerProxy:(id)arg1 ;
-(void)_setLifecycleDelegate:(id)arg1 ;
-(id)_associatedObjectUUIDData;
-(id)endDate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<_HKActiveWorkoutDelegate>)arg1 ;
-(id<_HKActiveWorkoutDelegate>)delegate;
-(double)duration;
-(id)totalDistance;
-(id)_init;
-(void)_setEndDate:(id)arg1 ;
-(void)_setTotalEnergyBurned:(id)arg1 ;
-(void)_setTotalDistance:(id)arg1 ;
-(id)totalEnergyBurned;
-(NSDictionary *)resumeDataByType;
-(long long)workoutState;
-(BOOL)_shouldUseDeviceData;
-(long long)serverState;
-(void)serverPausedWithDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateTotalsWithQuantities:(id)arg1 resumeData:(id)arg2 UUIDs:(id)arg3 ;
-(void)serverStoppedWithDate:(id)arg1 ;
-(void)serverFailedWithError:(id)arg1 ;
-(void)activateWorkoutWithCompletion:(/*^block*/id)arg1 ;
-(void)pauseWorkoutWithDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_objectCanBeSaved:(id*)arg1 ;
-(id)metadata;
@end

