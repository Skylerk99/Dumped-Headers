/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RMSDAAPControlSessionDelegate <NSObject>
@required
-(void)controlSession:(id)arg1 artworkDataDidBecomeAvailable:(id)arg2 identifier:(id)arg3;
-(void)controlSession:(id)arg1 didUpdateAudioRoutes:(id)arg2;
-(void)controlSession:(id)arg1 didUpdateNowPlayingInfo:(id)arg2;
-(void)controlSessionDidEnd:(id)arg1;
-(void)controlSession:(id)arg1 didUpdateVolume:(float)arg2;

@end

