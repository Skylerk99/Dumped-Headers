/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:19 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WCXPCManagerDelegate <NSObject>
@required
-(void)xpcManagerHandleMessageSendingAllowed:(id)arg1;
-(void)xpcManager:(id)arg1 handleSentMessageWithIdentifier:(id)arg2 error:(id)arg3;
-(void)xpcManager:(id)arg1 handleRequest:(id)arg2;
-(void)xpcManager:(id)arg1 handleResponse:(id)arg2;
-(void)xpcManager:(id)arg1 handleApplicationContext:(id)arg2;
-(void)xpcManager:(id)arg1 handleSessionFile:(id)arg2;
-(void)xpcManager:(id)arg1 handleUserInfoTransfer:(id)arg2;
-(void)xpcManager:(id)arg1 handleFileTransferFinishedWithIdentifier:(id)arg2 error:(id)arg3;
-(void)xpcManager:(id)arg1 handleUserInfoTransferFinishedWithIdentifier:(id)arg2 error:(id)arg3;
-(void)xpcManager:(id)arg1 handleSessionStateChanged:(id)arg2 forceReachableChanged:(BOOL)arg3;

@end

