/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class BRCAccountSession, brc_task_tracker, NSObject;

@interface BRCStagePersistedState : NSObject <NSSecureCoding> {

	long long _latestGCStartTime;
	BRCAccountSession* _session;
	brc_task_tracker* _tracker;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)loadFromClientStateInSession:(id)arg1 tracker:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(long long)timeSinceLatestGCStartTime;
-(void)setLatestGCStartTime:(long long)arg1 ;
@end

