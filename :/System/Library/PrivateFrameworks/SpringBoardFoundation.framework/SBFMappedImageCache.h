/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:01 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSMutableDictionary, NSMutableSet;

@interface SBFMappedImageCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _path;
	NSMutableDictionary* _images;
	NSMutableSet* _allKeys;

}
+(id)systemAppPersistenteCache;
+(id)wallpaperCache;
-(id)initWithDescription:(id)arg1 ;
-(void)dealloc;
-(void)removeAllObjects;
-(id)allKeys;
-(id)imageForKey:(id)arg1 cacheOptions:(unsigned long long)arg2 generateImageWithBlockIfNecessary:(/*^block*/id)arg3 ;
-(void)removeImageForKey:(id)arg1 ;
-(id)imageForKey:(id)arg1 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 ;
-(id)imageForKey:(id)arg1 options:(int)arg2 ;
-(id)imageForKey:(id)arg1 options:(int)arg2 generateImageWithBlockIfNecessary:(/*^block*/id)arg3 ;
-(id)imageForKey:(id)arg1 generateImageWithBlockIfNecessary:(/*^block*/id)arg2 ;
-(void)warmupImageForKey:(id)arg1 ;
@end

