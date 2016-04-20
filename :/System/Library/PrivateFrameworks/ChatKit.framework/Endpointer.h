/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:41 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol Endpointer <NSObject>
@property (assign) int endpointMode; 
@property (assign) double startWaitTime; 
@property (assign) double interspeechWaitTime; 
@property (assign) double endWaitTime; 
@optional
-(BOOL)configureWithSampleRate:(double)arg1 andFrameRate:(unsigned)arg2;
-(BOOL)configureWithASBD:(AudioStreamBasicDescription*)arg1 andFrameRate:(unsigned)arg2;

@required
-(void)reset;
-(int)getStatus:(AudioQueueBuffer*)arg1;
-(int)endpointMode;
-(void)setEndpointMode:(int)arg1;
-(double)startWaitTime;
-(void)setStartWaitTime:(double)arg1;
-(double)interspeechWaitTime;
-(void)setInterspeechWaitTime:(double)arg1;
-(double)endWaitTime;
-(void)setEndWaitTime:(double)arg1;

@end

