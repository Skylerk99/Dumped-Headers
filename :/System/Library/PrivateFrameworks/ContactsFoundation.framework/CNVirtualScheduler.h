/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:57 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNScheduler.h>

@class CNQueue, NSString;

@interface CNVirtualScheduler : NSObject <CNScheduler> {

	unsigned long long _clock;
	unsigned long long _nextSchedulableTick;
	unsigned long long _stopTime;
	CNQueue* _queue;
	BOOL _isStarted;

}

@property (readonly) unsigned long long clock;                      //@synthesize clock=_clock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)clock;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)stop;
-(void)start;
-(void)performBlock:(/*^block*/id)arg1 ;
-(unsigned long long)_nextSchedulableTick;
-(id)_scheduleBlock:(/*^block*/id)arg1 atTime:(unsigned long long)arg2 ;
-(BOOL)_performJobs;
-(void)advanceTo:(unsigned long long)arg1 ;
-(void)advanceBy:(unsigned long long)arg1 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
@end

