/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:51 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <IMFoundation/IMFoundation-Structs.h>
@class NSString, NSObject;

@interface IMPingTest : NSObject {

	NSString* _address;
	BOOL _usesWifi;
	id _collector;
	BOOL _isRunning;
	NSObject*<OS_dispatch_source> _sendTimer;
	NSObject*<OS_dispatch_source> _socketReadSource;
	double _secondsToRun;

}

@property (nonatomic,readonly) double secondsToRun;              //@synthesize secondsToRun=_secondsToRun - In the implementation block
-(void)dealloc;
-(void)stop;
-(id)initWithAddress:(id)arg1 wifi:(BOOL)arg2 ;
-(BOOL)writeResultsToFile:(id)arg1 error:(id*)arg2 ;
-(void)startWithTimeout:(double)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)pingStats;
-(int)_setupAndPerformPing:(double)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_doPingWithSocket:(int)arg1 address:(sockaddr_in)arg2 timeToRunTestInSeconds:(double)arg3 pingTimeout:(double)arg4 queue:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_setupReadSource:(int)arg1 address:(sockaddr_in)arg2 icmID:(unsigned short)arg3 queue:(id)arg4 completionHander:(/*^block*/id)arg5 ;
-(id)pingStats:(double)arg1 ;
-(double)longTimeInterval;
-(double)secondsToRun;
@end

