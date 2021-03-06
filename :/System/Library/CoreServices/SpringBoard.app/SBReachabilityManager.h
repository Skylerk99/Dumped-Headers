/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:19 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBReachabilityTriggerDelegate.h>

@class NSHashTable, NSMutableSet, SBReachabilityTrigger, NSString;

@interface SBReachabilityManager : NSObject <SBReachabilityTriggerDelegate> {

	NSHashTable* _observers;
	BOOL _reachabilityModeActive;
	unsigned long long _reachabilityExtensionGenerationCount;
	BOOL _reachabilityModeEnabled;
	NSMutableSet* _temporaryDisabledReasons;
	SBReachabilityTrigger* _trigger;

}

@property (nonatomic,readonly) BOOL reachabilityModeActive;              //@synthesize reachabilityModeActive=_reachabilityModeActive - In the implementation block
@property (assign,nonatomic) BOOL reachabilityEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)reachabilitySupported;
+(id)sharedInstance;
-(void)_handleReachabilityActivated;
-(void)_handleReachabilityDeactivated;
-(void)_handleSignificantTimeChanged;
-(void)cancelPendingReachabilityRequests;
-(void)deactivateReachabilityModeForObserver:(id)arg1 ;
-(void)_toggleReachabilityModeWithRequestingObserver:(id)arg1 ;
-(void)triggerDidTriggerReachability:(id)arg1 ;
-(BOOL)reachabilityEnabled;
-(void)setReachabilityEnabled:(BOOL)arg1 ;
-(void)setReachabilityTemporarilyDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(BOOL)reachabilityModeActive;
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_notifyObserversReachabilityModeActive:(BOOL)arg1 excludingObserver:(id)arg2 ;
-(void)_setKeepAliveTimer;
-(void)_updateReachabilityModeActive:(BOOL)arg1 withRequestingObserver:(id)arg2 ;
@end

