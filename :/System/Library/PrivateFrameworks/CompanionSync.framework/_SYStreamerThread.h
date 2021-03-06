/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:55 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <Foundation/NSThread.h>

@class NSRunLoop, NSConditionLock;

@interface _SYStreamerThread : NSThread {

	NSRunLoop* _threadRunLoop;
	CFRunLoopSourceRef _stopRLS;
	NSConditionLock* _startupLock;

}

@property (nonatomic,readonly) NSRunLoop * runLoop; 
+(id)streamerThread;
-(NSRunLoop *)runLoop;
-(id)init;
-(void)main;
-(void)_waitForStartup;
@end

