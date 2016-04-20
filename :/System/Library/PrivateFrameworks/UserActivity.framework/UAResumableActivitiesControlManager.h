/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:36 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface UAResumableActivitiesControlManager : NSObject {

	NSXPCConnection* connection;
	id _delegate;

}

@property (assign) id delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSXPCConnection * connection; 
+(id)resumableActivitiesControlManager;
-(void)terminateServer;
-(void)startAdvertisingPingWithTimeInterval:(double)arg1 ;
-(void)stopAdvertisingPing;
-(void)getCurrentPeersAndClear:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)matchingUUIDForString:(id)arg1 ;
-(id)advertisedItemUUID;
-(id)allUUIDsOfType:(unsigned long long)arg1 ;
-(id)enabledUUIDs;
-(id)currentAdvertisedItemUUID;
-(id)debuggingInfo;
-(id)dynamicUserActivities;
-(void)restartServer;
-(void)setDebugOption:(id)arg1 value:(id)arg2 ;
-(void)injectBTLEItem:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3 title:(id)arg4 activityPayload:(id)arg5 frameworkPayload:(id)arg6 payloadDelay:(double)arg7 ;
-(void)callWillSaveDelegate:(id)arg1 ;
-(void)callWillSaveDelegate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)callDidSaveDelegate:(id)arg1 ;
-(void)broadcastPing:(/*^block*/id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)status;
@end

