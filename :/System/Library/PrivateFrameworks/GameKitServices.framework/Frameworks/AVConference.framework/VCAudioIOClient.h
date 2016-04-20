/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:51 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCAudioIOClient <NSObject>
@required
-(int)deviceRole;
-(BOOL)onCaptureSound:(char*)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned)arg4 timeStampDelta:(int)arg5 bufferedSamples:(int)arg6 hostTime:(double)arg7 averagePower:(float)arg8 voiceActivity:(unsigned)arg9;
-(BOOL)onPlaySound:(char*)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned)arg4 averagePower:(float)arg5;
-(BOOL)canProcessAudio;
-(void)setCanProcessAudio:(BOOL)arg1;

@end

