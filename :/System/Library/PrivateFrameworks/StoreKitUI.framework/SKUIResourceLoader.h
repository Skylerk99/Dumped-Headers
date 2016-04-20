/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:09 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCacheDelegate.h>

@protocol SKUIResourceLoaderDelegate;
@class SKUIClientContext, NSOperationQueue, NSMutableDictionary, NSMapTable, NSCache, NSString;

@interface SKUIResourceLoader : NSObject <NSCacheDelegate> {

	SKUIClientContext* _clientContext;
	id<SKUIResourceLoaderDelegate> _delegate;
	NSOperationQueue* _operationQueue;
	NSMutableDictionary* _operationsByRequestID;
	NSMapTable* _requestsByCacheKey;
	NSCache* _resourcesByRequestID;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext;                         //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                         //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIResourceLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isIdle,nonatomic,readonly) BOOL idle; 
@property (assign,nonatomic) long long resourceCacheLimit; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelAllRequests;
-(void)setDelegate:(id<SKUIResourceLoaderDelegate>)arg1 ;
-(id)init;
-(id<SKUIResourceLoaderDelegate>)delegate;
-(NSOperationQueue *)operationQueue;
-(SKUIClientContext *)clientContext;
-(id)cachedResourceForRequestIdentifier:(unsigned long long)arg1 ;
-(id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2 ;
-(void)setReason:(long long)arg1 forRequestWithIdentifier:(unsigned long long)arg2 ;
-(BOOL)loadResourceWithRequest:(id)arg1 reason:(long long)arg2 ;
-(BOOL)isIdle;
-(id)requestIdentifierForCacheKey:(id)arg1 ;
-(id)initWithOperationQueue:(id)arg1 ;
-(void)_finishLoadForRequest:(id)arg1 withResource:(id)arg2 ;
-(void)_sendDidIdleIfNecessary;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(void)addResource:(id)arg1 forRequestIdentifier:(unsigned long long)arg2 ;
-(void)cancelRequestWithIdentifier:(unsigned long long)arg1 ;
-(void)removeAllCachedResources;
-(long long)resourceCacheLimit;
-(void)setResourceCacheLimit:(long long)arg1 ;
@end

