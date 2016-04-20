/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:00 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSBaseXPCClient.h>

@interface XBLaunchImageProviderClient : BSBaseXPCClient
-(id)init;
-(id)initWithServiceName:(id)arg1 endpoint:(id)arg2 ;
-(void)_sendMessageType:(long long)arg1 withMessage:(/*^block*/id)arg2 withReplyHandler:(/*^block*/id)arg3 waitForReply:(BOOL)arg4 ;
-(void)killService;
-(id)initWithDefaultService;
-(void)launchImageForApplicationWithCompatibilityInfo:(id)arg1 launchRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)flushContextForApplicationWithCompatibilityInfo:(id)arg1 ;
@end

