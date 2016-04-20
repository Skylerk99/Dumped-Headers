/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:46 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKClientInterface <NSObject>
@required
-(void)deliverWorkoutSessionChangedToState:(long long)arg1 fromState:(long long)arg2 date:(id)arg3 forSessionUUID:(id)arg4;
-(void)deliverWorkoutSessionError:(id)arg1 forSessionUUID:(id)arg2;
-(void)presentAuthorizationWithRequestRecord:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deliverBluetoothStatus:(long long)arg1 withError:(id)arg2;
-(void)deliverDiscoveryHealthService:(id)arg1 toClient:(unsigned long long)arg2 finished:(BOOL)arg3 withError:(id)arg4;
-(void)deliverSessionHealthServiceStatus:(long long)arg1 toClient:(unsigned long long)arg2 finished:(BOOL)arg3 withError:(id)arg4;
-(void)deliverSessionTransitoryData:(id)arg1 toClient:(unsigned long long)arg2 withError:(id)arg3;
-(void)deliverSessionCharacteristics:(id)arg1 forService:(id)arg2 toClient:(unsigned long long)arg3 withError:(id)arg4;
-(void)unitPreferencesDidUpdate;

@end

