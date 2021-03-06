/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:55 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/Support/assetsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <assetsd/assetsd-Structs.h>
@class NSObject, PLChangeStore;

@interface PLChangeHub : NSObject {

	int _notifyToken;
	BOOL _didInitializeState;
	CFArrayRef _connections;
	NSObject*<OS_dispatch_source> _memoryPressureSource;
	NSObject*<OS_dispatch_queue> eventsSerialization;
	NSObject*<OS_dispatch_queue> connectionsIsolation;
	PLChangeStore* changeStore;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> eventsSerialization; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionsIsolation; 
@property (assign,nonatomic) CFArrayRef connections;                                         //@synthesize connections=_connections - In the implementation block
@property (nonatomic,retain) PLChangeStore * changeStore; 
+(BOOL)isEmptyEvent:(id)arg1 ;
+(id)cplManager;
+(void)clearChangeStore:(/*^block*/id)arg1 ;
+(BOOL)cplManagerIsAvailable;
+(void)processCloudPhotosLibraryStateChange:(BOOL)arg1 ;
+(void)handleCorruptChangeStore:(/*^block*/id)arg1 ;
+(BOOL)fileMarkerDetected;
+(void)_performOnceLibraryIsReadyForCPLManager:(/*^block*/id)arg1 ;
+(BOOL)_isAssetsdReadyForCPLManager;
+(void)_stopWaitingForLibraryToBeReadyForCPLManager;
+(void)pauseCloudPhotos:(BOOL)arg1 ;
+(void)startServer;
+(void)distributeChangeEvent:(id)arg1 transaction:(id)arg2 ;
-(void)processRequest:(id)arg1 fromConnection:(id)arg2 ;
-(void)sendPendingEventsForRequest:(id)arg1 toConnection:(id)arg2 ;
-(void)sendLastEventIndexForRequest:(id)arg1 toConnection:(id)arg2 ;
-(void)setConnectionUUIDFromEvent:(id)arg1 connection:(id)arg2 ;
-(void)enumerateConnectionsWithBlock:(/*^block*/id)arg1 ;
-(void)startServer;
-(void)removeConnection:(id)arg1 ;
-(void)addConnection:(id)arg1 ;
-(void)appendEvent:(id)arg1 fromConnection:(id)arg2 transaction:(id)arg3 ;
-(unsigned long long)currentEventIndex;
-(unsigned long long)nextEventIndex;
-(void)fetchCurrentEventIndexWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)eventsSinceIndex:(unsigned long long)arg1 filteredBy:(/*^block*/id)arg2 onQueue:(id)arg3 withBlock:(/*^block*/id)arg4 ;
-(void)_startListeningToMemoryPressureEvents;
-(PLChangeStore *)changeStore;
-(void)_onEventsQueueAsyncWithTransaction:(id)arg1 perform:(/*^block*/id)arg2 ;
-(void)setConnectionsIsolation:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setEventsSerialization:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setChangeStore:(PLChangeStore *)arg1 ;
-(NSObject*<OS_dispatch_queue>)eventsSerialization;
-(NSObject*<OS_dispatch_queue>)connectionsIsolation;
-(id)init;
-(CFArrayRef)connections;
-(void)setConnections:(CFArrayRef)arg1 ;
@end

