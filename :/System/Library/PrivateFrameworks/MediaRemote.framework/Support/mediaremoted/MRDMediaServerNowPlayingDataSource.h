/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mediaremoted/MRDNowPlayingDataSource.h>

@class NSString;

@interface MRDMediaServerNowPlayingDataSource : MRDNowPlayingDataSource {

	NSString* _cachedNowPlayingAppDisplayID;
	int _cachedNowPlayingAppPID;
	BOOL _cachedNowPlayingAppIsPlaying;

}
-(BOOL)shouldSendCommand:(id)arg1 ;
-(id)nowPlayingApplicationDisplayID;
-(int)nowPlayingApplicationPID;
-(BOOL)nowPlayingApplicationIsPlaying;
-(void)_registerAVSystemControllerNotifications;
-(void)_unregisterAVSystemControllerNotifications;
-(id)_mediaServerController;
-(void)_nowPlayingAppDidChangeNotification:(id)arg1 ;
-(void)_nowPlayingAppIsPlayingDidChangeNotification:(id)arg1 ;
-(void)_mediaServerDiedNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

