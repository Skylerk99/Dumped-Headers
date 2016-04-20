/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:41 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVConferenceDelegate
@optional
-(void)conference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(long long)arg3 error:(id)arg4;
-(void)conference:(id)arg1 withCallID:(long long)arg2 didPauseAudio:(BOOL)arg3 error:(id)arg4;
-(void)conference:(id)arg1 didStopWithCallID:(long long)arg2 error:(id)arg3 callMetadata:(id)arg4;
-(void)conference:(id)arg1 localIPChange:(id)arg2 withCallID:(long long)arg3;
-(void)conference:(id)arg1 updateInputMeterLevel:(float)arg2;
-(void)conference:(id)arg1 updateOutputMeterLevel:(float)arg2;
-(void)conference:(id)arg1 didReceiveARPLData:(id)arg2 withCallID:(long long)arg3;
-(void)conference:(id)arg1 didReceiveData:(id)arg2 forCallID:(long long)arg3;
-(void)conference:(id)arg1 didChangeLocalVariablesForCallID:(long long)arg2;
-(void)conference:(id)arg1 remoteAudioEnabled:(BOOL)arg2 forCallID:(unsigned)arg3;
-(void)conference:(id)arg1 localAudioEnabled:(BOOL)arg2 forCallID:(unsigned)arg3 error:(id)arg4;
-(void)conference:(id)arg1 remoteCallingModeChanged:(unsigned)arg2 forCallID:(unsigned)arg3;
-(void)conference:(id)arg1 reinitializeCallForCallID:(unsigned)arg2;
-(void)conference:(id)arg1 closeConnectionForCallID:(long long)arg2;

@required
-(void)conference:(id)arg1 didStartSession:(BOOL)arg2 withUserInfo:(id)arg3;
-(void)conference:(id)arg1 didStopWithCallID:(long long)arg2 error:(id)arg3;
-(void)conference:(id)arg1 withCallID:(long long)arg2 remoteMediaStalled:(BOOL)arg3;
-(void)conference:(id)arg1 receivedFirstRemoteFrameForCallID:(long long)arg2;
-(void)conference:(id)arg1 remoteVideoAttributesChanged:(id)arg2 callID:(long long)arg3;
-(void)conference:(id)arg1 remoteAudioPaused:(BOOL)arg2 callID:(long long)arg3;
-(void)conference:(id)arg1 remoteVideoPaused:(BOOL)arg2 callID:(long long)arg3;
-(void)conference:(id)arg1 remoteScreenAttributesChanged:(id)arg2 callID:(long long)arg3;
-(void)conference:(id)arg1 updateInputFrequencyLevel:(id)arg2;
-(void)conference:(id)arg1 updateOutputFrequencyLevel:(id)arg2;
-(void)conference:(id)arg1 inititiateRelayRequest:(long long)arg2 requestDict:(id)arg3;
-(void)conference:(id)arg1 sendRelayUpdate:(long long)arg2 updateDict:(id)arg3;
-(void)conference:(id)arg1 cancelRelayRequest:(long long)arg2 requestDict:(id)arg3;
-(void)conference:(id)arg1 videoQualityNotificationForCallID:(long long)arg2 isDegraded:(BOOL)arg3 isRemote:(BOOL)arg4;
-(void)conference:(id)arg1 withCallID:(long long)arg2 networkHint:(BOOL)arg3;
-(void)serverDiedForConference:(id)arg1;

@end

