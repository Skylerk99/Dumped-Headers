/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject, NSMutableDictionary;

@interface SBDaemonContext : NSObject {

	NSObject*<OS_dispatch_source> _dispatchSource;
	NSMutableDictionary* _daemonRequests;
	int _pid;

}
-(id)initWithPid:(int)arg1 queue:(id)arg2 ;
-(void)addRequest:(id)arg1 forKey:(id)arg2 ;
-(void)removeRequestForKey:(id)arg1 ;
-(id)_newDispatchSourceForPid:(int)arg1 queue:(id)arg2 ;
-(void)_handleCancelation;
-(void)dealloc;
-(id)description;
-(int)pid;
@end

