/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:15 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreTime.framework/TimeSources/LinkSource.bundle/LinkSource
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TMLSLinkDelegate <NSObject>
@required
-(void)link:(id)arg1 didReceiveDrift:(double)arg2;
-(void)link:(id)arg1 didReceiveTime:(double)arg2 remoteRTC:(double)arg3 uncertainty:(double)arg4 source:(id)arg5;
-(void)linkDidReceiveReset:(id)arg1;
-(void)link:(id)arg1 didReceiveTimeZone:(id)arg2 forSource:(id)arg3;
-(void)link:(id)arg1 didSyncLocalRTC:(double)arg2 remoteRTC:(double)arg3 uncertainty:(double)arg4;
-(void)link:(id)arg1 didReceiveAutomaticTimeEnabled:(BOOL)arg2;

@end

