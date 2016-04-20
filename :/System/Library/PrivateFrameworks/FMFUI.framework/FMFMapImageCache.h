/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:30 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface FMFMapImageCache : NSObject {

	NSCache* __cache;

}

@property (nonatomic,retain) NSCache * _cache;              //@synthesize _cache=__cache - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)cachedMapForHandles:(id)arg1 ;
-(void)cacheMap:(id)arg1 forHandles:(id)arg2 ;
-(id)_keyForHandles:(id)arg1 ;
-(id)_imageForMap:(id)arg1 ;
-(NSCache *)_cache;
-(id)_orientationKey;
-(void)set_cache:(NSCache *)arg1 ;
@end

