/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:31 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSString, HMDHome, NSMutableArray, NSObject, HMMessageDispatcher, NSDate;

@interface HMDTrigger : NSObject <HMMessageReceiver, NSSecureCoding> {

	BOOL _active;
	NSString* _name;
	NSUUID* _uuid;
	HMDHome* _home;
	NSMutableArray* _currentActionSets;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMMessageDispatcher* _msgDispatcher;
	NSDate* _mostRecentFireDate;

}

@property (nonatomic,retain) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                           //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentActionSets;                              //@synthesize currentActionSets=_currentActionSets - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMMessageDispatcher * msgDispatcher;                             //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (assign,nonatomic) BOOL active;                                                     //@synthesize active=_active - In the implementation block
@property (nonatomic,copy) NSDate * mostRecentFireDate;                                       //@synthesize mostRecentFireDate=_mostRecentFireDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)invalidate;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSUUID *)uuid;
-(HMMessageDispatcher *)msgDispatcher;
-(id)actionSets;
-(void)activate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)checkForNoActions;
-(HMDHome *)home;
-(void)setMostRecentFireDate:(NSDate *)arg1 ;
-(NSDate *)mostRecentFireDate;
-(void)sendTriggerFiredNotification:(id)arg1 ;
-(void)setHome:(HMDHome *)arg1 ;
-(void)setMsgDispatcher:(HMMessageDispatcher *)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_registerForMessages;
-(id)_updateActionSets:(id)arg1 add:(BOOL)arg2 ;
-(void)_handleRenameRequest:(id)arg1 ;
-(void)_handleUpdateActionSetRequest:(id)arg1 ;
-(void)_handleActivateTriggerRequest:(id)arg1 ;
-(BOOL)shouldEncodeLastFireDate:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(BOOL)containsAccessoryWithUUID:(id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)removeActionSet:(id)arg1 ;
-(void)removeAccessory:(id)arg1 ;
-(void)reEvaluate;
-(void)triggerFired;
-(void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 ;
-(void)_executeActionSets;
-(NSMutableArray *)currentActionSets;
-(void)setCurrentActionSets:(NSMutableArray *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
@end

