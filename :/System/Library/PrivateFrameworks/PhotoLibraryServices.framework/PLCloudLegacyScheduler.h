/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:02 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLCloudScenarioConsumer.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableOrderedSet, NSMutableDictionary, NSString;

@interface PLCloudLegacyScheduler : NSObject <PLCloudScenarioConsumer> {

	NSObject*<OS_dispatch_queue> _backlogSync;
	NSObject*<OS_dispatch_queue> _operationsQueue;
	int _concurrencyLevel;
	NSMutableOrderedSet* _pendingOperations;
	NSMutableDictionary* _pendingScenarios;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)activate;
-(id)initWithConfiguration:(id)arg1 ;
-(void)reporioritizeBacklogOperations;
-(void)completeOperation:(id)arg1 withError:(id)arg2 ;
-(void)runNextOperation;
-(void)consumeScenario:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)operationsBacklogLimit;
@end

