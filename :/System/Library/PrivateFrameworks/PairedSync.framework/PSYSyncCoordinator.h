/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:52 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PairedSync/PairedSync-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/PSYActivity.h>
#import <libobjc.A.dylib/PSYSyncRestrictionProviderDelegate.h>

@protocol OS_dispatch_queue, PSYSyncCoordinatorDelegate;
@class NSXPCListener, NSObject, PSYSyncRestrictionProvider, NSString, NSXPCConnection;

@interface PSYSyncCoordinator : NSObject <NSXPCListenerDelegate, PSYActivity, PSYSyncRestrictionProviderDelegate> {

	NSXPCListener* _listener;
	/*^block*/id _pendingCompletion;
	BOOL _isFullSyncInProgress;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	opaque_pthread_mutex_t _delegateLock;
	id<PSYSyncCoordinatorDelegate> _delegate;
	PSYSyncRestrictionProvider* _syncRestrictionProvider;
	BOOL _hasStartedListening;
	NSString* _serviceName;
	NSXPCConnection* _connection;
	unsigned long long _syncRestriction;

}

@property (nonatomic,copy,readonly) NSString * serviceName;                               //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,nonatomic,__weak) id<PSYSyncCoordinatorDelegate> delegate; 
@property (nonatomic,retain) NSXPCConnection * connection;                                //@synthesize connection=_connection - In the implementation block
@property (assign) unsigned long long syncRestriction;                                    //@synthesize syncRestriction=_syncRestriction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)syncCoordinatorWithServiceName:(id)arg1 ;
-(NSString *)serviceName;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(id)progressHandler;
-(void)setDelegate:(id<PSYSyncCoordinatorDelegate>)arg1 ;
-(id<PSYSyncCoordinatorDelegate>)delegate;
-(void)_cleanup;
-(NSXPCConnection *)connection;
-(id)initWithServiceName:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(unsigned long long)syncRestriction;
-(void)syncDidComplete;
-(void)syncDidCompleteSending;
-(void)syncDidFailWithError:(id)arg1 ;
-(void)reportProgress:(double)arg1 ;
-(id)initWithServiceName:(id)arg1 serviceLookupPath:(id)arg2 ;
-(void)setSyncRestriction:(unsigned long long)arg1 ;
-(id)persistedTransactionID;
-(long long)persistedState;
-(id)persistedCompletionError;
-(void)clearPersistentState;
-(void)setPersistedTransactionID:(id)arg1 ;
-(BOOL)savePersistentState;
-(void)beginDryRunSyncWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPersistedState:(long long)arg1 ;
-(void)setPersistedCompletionError:(id)arg1 ;
-(id)defaultsCompletionErrorKey;
-(id)defaultsPersistentStateKey;
-(id)defaultsTransactionIDKey;
-(void)performDelegateBlock:(/*^block*/id)arg1 ;
-(void)exitForTestInput:(id)arg1 ;
-(oneway void)beginSyncWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)syncRestrictionProviderDidChangeRestriction:(id)arg1 ;
@end

