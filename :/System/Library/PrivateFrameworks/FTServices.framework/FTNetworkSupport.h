/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:30 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class APSConnection, NSTimer;

@interface FTNetworkSupport : NSObject {

	Class _APSConnectionClass;
	APSConnection* _apsConnection;
	NSTimer* _reliabilityAttemptTimer;
	BOOL _enableCriticalReliability;
	BOOL _criticalReliabilityEnabledState;

}

@property (nonatomic,readonly) BOOL allowAnyNetwork; 
@property (nonatomic,readonly) BOOL validNetworkEnabled; 
@property (nonatomic,readonly) BOOL validNetworkActive; 
@property (nonatomic,readonly) BOOL validNetworkReachable; 
@property (nonatomic,readonly) BOOL wiFiActiveAndReachable; 
@property (nonatomic,readonly) BOOL willSearchForNetwork; 
@property (nonatomic,readonly) BOOL dataActiveAndReachable; 
@property (nonatomic,readonly) BOOL networkEnabled; 
@property (nonatomic,readonly) BOOL networkActive; 
@property (nonatomic,readonly) BOOL networkReachable; 
@property (assign,nonatomic) BOOL enableCriticalReliability; 
+(id)sharedInstance;
-(BOOL)networkReachable;
-(BOOL)networkActive;
-(BOOL)networkEnabled;
-(BOOL)validNetworkEnabled;
-(BOOL)willSearchForNetwork;
-(void)_clearReliabilityTimeoutInterval;
-(void)_tryToEnableReliability;
-(void)_createAPSConnectionIfNeeded;
-(void)_reallySetCriticalReliability:(BOOL)arg1 ;
-(void)_setReliabilityTimeoutInterval;
-(BOOL)enableCriticalReliability;
-(BOOL)allowAnyNetwork;
-(BOOL)validNetworkActive;
-(BOOL)validNetworkReachable;
-(BOOL)dataActiveAndReachable;
-(void)setEnableCriticalReliability:(BOOL)arg1 ;
-(BOOL)wiFiActiveAndReachable;
@end

