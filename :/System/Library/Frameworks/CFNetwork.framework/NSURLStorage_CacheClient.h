/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:57 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSURLStorageCacheClient.h>

@class NSXPCInterface, NSXPCConnection, NSString, NSData;

@interface NSURLStorage_CacheClient : NSObject <NSURLStorageCacheClient> {

	NSXPCInterface* _netStoreInterface;
	NSXPCConnection* _networkStorageConnection;
	NSString* _taskManagerIdentifier;
	NSString* _path;
	weak_ptr<__CFURLCache>* _cfWeakCacheCpp;
	NSData* _sandboxExtensionToken;
	long long _storageSize;
	BOOL _networkStorageConnectionInterrupted;

}

@property (assign) BOOL networkStorageConnectionInterrupted;              //@synthesize networkStorageConnectionInterrupted=_networkStorageConnectionInterrupted - In the implementation block
-(void)deleteResponsesSinceDate:(id)arg1 ;
-(void)setMinSizeForVMCachedResource:(long long)arg1 ;
-(void)_invalidateNSXPCConnection;
-(BOOL)createStorageTaskManagerForPath:(id)arg1 maxSize:(long long)arg2 extension:(id)arg3 withIdentifier:(id)arg4 ;
-(void)copyAllPartitionNamesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)copyHostNamesForOptionalPartition:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)deleteAllHostNames:(id)arg1 forOptionalPartition:(id)arg2 ;
-(void)cachedResponseDictionaryForKey:(id)arg1 handler:(/*^block*/id)arg2 ;
-(long long)currentDiskUsage;
-(void)deleteAllResponses;
-(void)addCachedResponseWithDictionary:(id)arg1 key:(id)arg2 ;
-(void)deleteResponseForRequestWithKey:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)notifyCachedURLResponseBecameFileBacked:(id)arg1 filePath:(id)arg2 forUUID:(id)arg3 ;
-(void)notifyCacheClientOfTimeRelativeResponses:(id)arg1 ;
-(void)setNetworkStorageConnectionInterrupted:(BOOL)arg1 ;
-(BOOL)networkStorageConnectionInterrupted;
-(void)_reconnectWithStorageServer;
-(BOOL)ensureNetworkStorageDaemonConnection;
-(void)addCachedResponse:(id)arg1 key:(id)arg2 ;
-(void)dealloc;
-(void)setMaxSize:(long long)arg1 ;
-(id)getPath;
-(id)initWithCache:(shared_ptr<__CFURLCache>*)arg1 ;
@end

