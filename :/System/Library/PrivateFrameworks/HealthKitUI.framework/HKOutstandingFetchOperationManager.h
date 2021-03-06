/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:29 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKFetchOperationDelegate.h>

@class NSMutableArray, NSString;

@interface HKOutstandingFetchOperationManager : NSObject <HKFetchOperationDelegate> {

	BOOL _needsRebalanceFetchOperations;
	NSMutableArray* _pendingFetchOperations;
	NSMutableArray* _activeFetchOperations;
	long long _maxConcurrentFetchOperations;

}

@property (assign,nonatomic) long long maxConcurrentFetchOperations;              //@synthesize maxConcurrentFetchOperations=_maxConcurrentFetchOperations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeFetchOperation:(id)arg1 ;
-(void)removeFetchOperations:(id)arg1 ;
-(void)addFetchOperation:(id)arg1 ;
-(void)addFetchOperations:(id)arg1 ;
-(void)_setNeedsRebalanceFetchOperations;
-(BOOL)_removeFetchOperationFromPendingOperations:(id)arg1 ;
-(BOOL)_removeFetchOperationFromActiveOperations:(id)arg1 ;
-(void)_rebalanceFetchOperations;
-(void)_sortPendingFetchOperations;
-(void)_fillActiveFetchOperations;
-(void)_executeFetchOperation:(id)arg1 ;
-(void)fetchOperationDidUpdatePriority:(id)arg1 ;
-(id)initWithMaxConcurrentFetchOperations:(long long)arg1 ;
-(void)setMaxConcurrentFetchOperations:(long long)arg1 ;
-(long long)maxConcurrentFetchOperations;
@end

