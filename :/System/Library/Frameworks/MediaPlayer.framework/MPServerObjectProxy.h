/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:00 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPServerObjectProxy : NSObject {

	unsigned _didPrepareForRemoteSelectorInvocation : 1;
	unsigned _lastPrepareForRemoteSelectorInvocationTimedOut : 1;
	double _lastPrepareAttemptTime;

}
+(id)_center;
-(BOOL)prepareForRemoteSelectorInvocation;
-(void)didPrepareForRemoteSelectorInvocation;
-(void)serverConnectionDied;
-(void)_messagingCenterDied:(id)arg1 ;
-(BOOL)_performRemoteSelector:(SEL)arg1 userInfo:(id)arg2 timeout:(double)arg3 ;
-(id)_performRemoteSelectorAndReceiveReply:(SEL)arg1 userInfo:(id)arg2 timeout:(double)arg3 ;
-(void)_serverConnectionDied;
-(BOOL)prepareForRemoteSelectorInvocationWithTimeout:(double*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)forwardInvocation:(id)arg1 ;
@end

