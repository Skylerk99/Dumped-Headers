/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:12 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEVPNConnection.h>

@interface NETunnelProviderSession : NEVPNConnection
-(BOOL)startTunnelWithOptions:(id)arg1 andReturnError:(id*)arg2 ;
-(void)stopTunnel;
-(BOOL)sendProviderMessage:(id)arg1 returnError:(id*)arg2 responseHandler:(/*^block*/id)arg3 ;
@end

