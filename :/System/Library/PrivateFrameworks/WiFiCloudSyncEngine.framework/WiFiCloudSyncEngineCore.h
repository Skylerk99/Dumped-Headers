/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WiFiCloudSyncEngine.framework/WiFiCloudSyncEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUbiquitousKeyValueStore, NSThread;

@interface WiFiCloudSyncEngineCore : NSObject {

	NSUbiquitousKeyValueStore* keyValueStore;
	void* context;
	/*function pointer*/void* callback;
	NSThread* clientThread;
	BOOL iCloudSyncingEnabled;

}

@property (retain) NSUbiquitousKeyValueStore * keyValueStore; 
@property (assign) void* context; 
@property (assign) /*function pointer*/void* callback; 
@property (retain) NSThread * clientThread; 
@property (assign) BOOL iCloudSyncingEnabled; 
-(void)dealloc;
-(void*)context;
-(void)setContext:(void*)arg1 ;
-(void)relayCircleStatusCheck:(id)arg1 ;
-(void)setCallback:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)callback;
-(void)setClientThread:(NSThread *)arg1 ;
-(void)setICloudSyncingEnabled:(BOOL)arg1 ;
-(void)unSubscribeKVStoreNotfications:(id)arg1 ;
-(NSUbiquitousKeyValueStore *)keyValueStore;
-(BOOL)iCloudSyncingEnabled;
-(void)synchronizeKVS;
-(NSThread *)clientThread;
-(void)relayReadStoreValueAction:(id)arg1 ;
-(id)readCompleteKVStore;
-(void)ubiquitousKeyValueStoreDidChange:(id)arg1 ;
-(void)relayCloudCleanUpEvent;
-(void)relayCloudEvent:(id)arg1 ;
-(void)subscribeKVStoreNotficationsForBundleId:(id)arg1 ;
-(void)isLastDeviceInCircleAsync;
-(void)setKeyValueStore:(NSUbiquitousKeyValueStore *)arg1 ;
-(void)dispatchUbiquitousKeyValueStoreDidChangeOnBackground:(id)arg1 ;
-(void)removeFromKVStore:(id)arg1 ;
-(void)relayMergeNetworks:(id)arg1 ;
-(void)initWithCallback:(/*function pointer*/void*)arg1 callbackContext:(void*)arg2 ;
-(void)addToKVStore:(id)arg1 ;
-(void)readStoreValueForKey:(id)arg1 ;
-(void)printCompleteKVStore;
-(void)clearKVS;
-(void)enableIcloudSyncing:(BOOL)arg1 ForBundleId:(id)arg2 ;
-(void)synchronizeAndCallMergeNetworks;
-(void)asyncCircleStatusCheck;
@end

