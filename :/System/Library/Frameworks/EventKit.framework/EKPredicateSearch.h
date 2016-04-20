/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EKCancellableRemoteOperation.h>

@class NSPredicate, EKEventStore, NSString;

@interface EKPredicateSearch : NSObject <EKCancellableRemoteOperation> {

	/*^block*/id _callback;
	Class _entityClass;
	NSPredicate* _predicate;
	EKEventStore* _store;
	id _cancellationToken;
	BOOL _finished;
	BOOL _isCancelled;
	int _retryCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)searchWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3 ;
-(id)initWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3 ;
-(unsigned long long)_startOSActivity;
-(void)_startActualWithCompletion:(/*^block*/id)arg1 ;
-(void)terminate;
-(void)cancel;
-(void)dealloc;
-(void)disconnect;
-(id)startWithCompletion:(/*^block*/id)arg1 ;
@end

