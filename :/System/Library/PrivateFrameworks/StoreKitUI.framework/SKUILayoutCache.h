/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:09 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUILayoutCacheDelegate, OS_dispatch_queue;
#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSMutableArray, NSObject;

@interface SKUILayoutCache : NSObject {

	NSMutableArray* _batchedRequests;
	id<SKUILayoutCacheDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableArray* _layouts;
	NSMutableArray* _requests;

}

@property (assign,nonatomic,__weak) id<SKUILayoutCacheDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<SKUILayoutCacheDelegate>)arg1 ;
-(id)init;
-(id<SKUILayoutCacheDelegate>)delegate;
-(void)commitLayoutRequests;
-(NSRange)populateCacheWithLayoutRequests:(id)arg1 ;
-(id)layoutForIndex:(long long)arg1 forced:(BOOL)arg2 ;
-(void)_layoutRequestsInRange:(NSRange)arg1 ;
-(void)_populateCache;
-(void)_addLayoutBatch:(id)arg1 ;
-(NSRange)addLayoutRequests:(id)arg1 ;
-(id)layoutForIndex:(long long)arg1 ;
@end

