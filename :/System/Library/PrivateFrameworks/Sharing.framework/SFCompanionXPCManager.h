/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:46 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, NSMutableArray;

@interface SFCompanionXPCManager : NSObject {

	BOOL _invalid;
	BOOL _interrupted;
	NSXPCConnection* _connection;
	NSMutableArray* _observers;

}

@property (getter=isInvalid) BOOL invalid;                    //@synthesize invalid=_invalid - In the implementation block
@property (assign) BOOL interrupted;                          //@synthesize interrupted=_interrupted - In the implementation block
@property (retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (retain) NSMutableArray * observers;                //@synthesize observers=_observers - In the implementation block
+(id)sharedManager;
+(void)initialize;
+(id)xpcManagerInterface;
+(id)serviceManagerClientInterface;
+(id)serviceManagerInterface;
+(id)advertiserClientInterface;
+(id)advertiserInterface;
+(id)scannerClientInterface;
+(id)scannerInterface;
+(id)unlockInterface;
+(id)hotspotClientInterface;
+(id)hotspotInterface;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setObservers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)observers;
-(void)setInvalid:(BOOL)arg1 ;
-(BOOL)interrupted;
-(void)setInterrupted:(BOOL)arg1 ;
-(void)airdropTransferDataProviderWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)unlockManagerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)remoteHotspotSessionForClient:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)activityAdvertiserProxyForClient:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)continuityScannerProxyForClient:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setupConnection;
-(void)notifyOfInterruption;
-(void)notifyOfInvalidation;
-(void)notifyOfResume;
-(void)serviceManagerProxyForIdentifier:(id)arg1 client:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)streamsForMessage:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)isInvalid;
@end

