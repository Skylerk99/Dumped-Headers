/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:51 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCCallSessionDelegate
@required
-(BOOL)stopVideoSend:(BOOL)arg1 error:(id*)arg2;
-(void)session:(id)arg1 withCallID:(unsigned)arg2 videoIsDegraded:(BOOL)arg3 isRemote:(BOOL)arg4;
-(void)session:(id)arg1 didChangeRemoteScreenAttributes:(id)arg2;
-(void)session:(id)arg1 changeVideoRulesToCaptureRule:(id)arg2 encodeRule:(id)arg3 featuresListString:(id)arg4;
-(void)session:(id)arg1 remoteMediaStalled:(BOOL)arg2;
-(void)session:(id)arg1 receivedNoPacketsForSeconds:(double)arg2;
-(void)session:(id)arg1 packMeters:(char*)arg2 withLength:(char*)arg3;
-(void)session:(id)arg1 didPauseAudio:(BOOL)arg2 error:(id)arg3;
-(void)didChangeLocalVariablesForSession:(id)arg1;
-(void)session:(id)arg1 sendRelayResponse:(id)arg2;
-(int)currentCameraID;
-(void)session:(id)arg1 inititiateRelayRequest:(id)arg2;
-(void)session:(id)arg1 didReceiveData:(id)arg2 withCallID:(unsigned)arg3;
-(void)closeConnectionForSession:(id)arg1 withCallID:(unsigned)arg2;
-(void)session:(id)arg1 cancelRelayRequest:(id)arg2;
-(void)session:(id)arg1 withCallID:(unsigned)arg2 networkHint:(BOOL)arg3;
-(void)session:(id)arg1 didStart:(BOOL)arg2 connectionType:(unsigned)arg3 localUseCell:(unsigned)arg4 remoteUseCell:(unsigned)arg5 error:(id)arg6;
-(void)session:(id)arg1 didStopWithError:(id)arg2;
-(void)session:(id)arg1 didStopWithDelay:(long long)arg2 error:(id)arg3;
-(void)remoteVideoDidPause:(BOOL)arg1 callID:(unsigned)arg2;
-(void)remoteAudioDidPause:(BOOL)arg1 callID:(unsigned)arg2;
-(void)session:(id)arg1 localAudioEnabled:(BOOL)arg2 withCallID:(unsigned)arg3 error:(id)arg4;
-(BOOL)session:(id)arg1 startVideoSend:(id*)arg2 captureRule:(id)arg3 isUnpausing:(BOOL)arg4;
-(BOOL)session:(id)arg1 startVideoReceive:(id*)arg2;
-(BOOL)session:(id)arg1 didStopVideoIO:(BOOL)arg2 error:(id*)arg3;
-(BOOL)stopVideoReceive:(id*)arg1;
-(BOOL)didDetectBandwidth:(BOOL)arg1 upstreamBandwidth:(int)arg2 downstreamBandwidth:(int)arg3;
-(void)setBWEOptions:(BOOL)arg1 UseNewBWEMode:(BOOL)arg2 FakeLargeFrameMode:(BOOL)arg3 ProbingSenderLog:(BOOL)arg4;
-(void)session:(id)arg1 remoteAudioEnabled:(BOOL)arg2 withCallID:(unsigned)arg3;
-(void)session:(id)arg1 remoteCallingModeChanged:(unsigned)arg2 withCallID:(unsigned)arg3;
-(void)session:(id)arg1 localIPChange:(id)arg2 withCallID:(unsigned)arg3;
-(void)session:(id)arg1 didReceiveARPLData:(id)arg2 fromCallID:(unsigned)arg3;
-(void)session:(id)arg1 didChangeVideoRule:(id)arg2;
-(BOOL)session:(id)arg1 receivedRemoteFrame:(CVBufferRef)arg2 atTime:(SCD_Struct_VC12)arg3 withScreenAttributes:(id)arg4 videoAttributes:(id)arg5 isFirstFrame:(BOOL)arg6 isVideoPaused:(BOOL)arg7;
-(void)session:(id)arg1 didSeeThermalChange:(double)arg2;
-(BOOL)session:(id)arg1 startVideoIO:(id*)arg2 captureRule:(id)arg3 isUnpausing:(BOOL)arg4;

@end

