/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLImageCache, PLImageLoadingQueue, NSMutableDictionary;

@interface PLLibraryImageDataProvider : NSObject {

	PLImageCache* _imageCache;
	PLImageLoadingQueue* _imageLoadingQueue;
	NSMutableDictionary* _imageSources;

}
-(void)dealloc;
-(id)init;
-(id)_imageSourceForFormat:(int)arg1 ;
-(id)loadImageSynchronously:(BOOL)arg1 forAsset:(id)arg2 format:(int)arg3 priority:(int)arg4 completion:(/*^block*/id)arg5 ;
-(void)cancelLoadForAsset:(id)arg1 ;
-(void)cancelLoadForAsset:(id)arg1 format:(int)arg2 ;
-(void)invalidateCachedImagesForAsset:(id)arg1 ;
-(void)invalidateCachedImagesForAsset:(id)arg1 format:(int)arg2 ;
-(void)pauseLoading;
-(void)resumeLoading;
@end

