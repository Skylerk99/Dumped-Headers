/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableSet, NSMutableArray;

@interface HDAppAssertionManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _appAssertions;
	NSMutableSet* _activeAssertions;
	NSMutableArray* _pendingAssertions;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * appAssertions;              //@synthesize appAssertions=_appAssertions - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeAssertions;                  //@synthesize activeAssertions=_activeAssertions - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingAssertions;               //@synthesize pendingAssertions=_pendingAssertions - In the implementation block
+(id)sharedManager;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(id)_init;
-(void)extendAssertionWithBundleID:(id)arg1 dataCode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)invalidateAssertionWithBundleID:(id)arg1 dataCode:(long long)arg2 ;
-(void)_queue_extendAssertionWithBundleID:(id)arg1 dataCode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_considerLaunchingApp;
-(void)_queue_invalidateAssertionWithBundleID:(id)arg1 dataCode:(long long)arg2 ;
-(id)_queue_pendingAssertionsReadyForLaunch;
-(void)_queue_retryAppLaunchForAssertion:(id)arg1 ;
-(void)_queue_assertionDidFinish:(id)arg1 ;
-(NSMutableDictionary *)appAssertions;
-(void)setAppAssertions:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)activeAssertions;
-(void)setActiveAssertions:(NSMutableSet *)arg1 ;
-(NSMutableArray *)pendingAssertions;
-(void)setPendingAssertions:(NSMutableArray *)arg1 ;
@end

