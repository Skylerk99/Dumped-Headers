/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:37 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationServices.framework/UserNotificationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UNSNotificationSchedulerClientProtocol.h>
#import <libobjc.A.dylib/UNSNotificationSchedulerServerProtocol.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSXPCConnection, NSObject, NSString;

@interface UNSNotificationSchedulerConnection : NSObject <UNSNotificationSchedulerClientProtocol, UNSNotificationSchedulerServerProtocol> {

	NSMutableDictionary* _observersByBundleIdentifier;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableDictionary * observersByBundleIdentifier;              //@synthesize observersByBundleIdentifier=_observersByBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                   //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_invalidate;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)_queue_ensureConnection;
-(void)scheduledLocalNotificationsForBundleIdentifier:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)addScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)cancelScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)scheduleForBundleIdentifier:(id)arg1 fetchRequest:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)snoozeScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)didChangeScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)didFireLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)setObservingScheduledLocalNotifications:(BOOL)arg1 forBundleIdentifier:(id)arg2 ;
-(void)setObserversByBundleIdentifier:(NSMutableDictionary *)arg1 ;
-(void)_queue_addObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_removeObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_didFireLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_didChangeScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_interruptedConnection;
-(void)_queue_invalidatedConnection;
-(void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(NSMutableDictionary *)observersByBundleIdentifier;
@end

