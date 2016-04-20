/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary;

@interface _MDIndexExtensionLoader : NSObject {

	id _extensionMatchingContext;
	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _indexExtensionsByBundleID;

}

@property (nonatomic,retain) id extensionMatchingContext;                           //@synthesize extensionMatchingContext=_extensionMatchingContext - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSDictionary * indexExtensionsByBundleID;              //@synthesize indexExtensionsByBundleID=_indexExtensionsByBundleID - In the implementation block
-(NSDictionary *)indexExtensionsByBundleID;
-(void)setIndexExtensionsByBundleID:(NSDictionary *)arg1 ;
-(id)_matchingDictionary;
-(void)startLookingForExtensionsWithMatchUpdateHandler:(/*^block*/id)arg1 ;
-(void)stopLookingForExtensions;
-(id)_loadExtensionsSynchronously;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(id)extensionMatchingContext;
-(void)setExtensionMatchingContext:(id)arg1 ;
@end

