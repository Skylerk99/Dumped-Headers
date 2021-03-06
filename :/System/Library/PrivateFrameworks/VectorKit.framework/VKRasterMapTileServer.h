/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, NSObject;

@interface VKRasterMapTileServer : NSObject {

	NSMutableDictionary* _activeTileCreators;
	NSMutableDictionary* _pendingRequests;
	NSMutableSet* _tileCreators;
	unsigned _superTileSize;
	NSObject*<OS_dispatch_queue> _homeQueue;

}

@property (nonatomic,readonly) unsigned superTileSize;              //@synthesize superTileSize=_superTileSize - In the implementation block
-(void)dealloc;
-(id)init;
-(id)detailedDescription;
-(void)renderRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned)superTileSize;
-(void)_renderRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithSuperTileSize:(unsigned)arg1 homeQueue:(id)arg2 ;
@end

