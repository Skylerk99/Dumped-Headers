/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:53 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKXPCServiceDelegate <NSObject>
@optional
-(void)remoteServiceDidResume:(id)arg1;
-(void)remoteServiceDidSuspend:(id)arg1;

@required
-(void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
-(void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;

@end

