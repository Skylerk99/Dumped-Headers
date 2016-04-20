/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@class NSMutableArray, NSMutableDictionary, CIBurstYUVImage;

@interface CIBurstThumbnailCluster : NSObject {

	NSMutableArray* burstImages;
	/*^block*/id completionBlock;
	NSMutableDictionary* imageProps;
	CIBurstYUVImage* image;
	IOSurfaceRef _fullsizeJpegData;

}

@property (assign) NSMutableArray * burstImages; 
@property (assign) NSMutableDictionary * imageProps; 
@property (assign) CIBurstYUVImage * image; 
@property (assign) IOSurfaceRef fullsizeJpegData;                 //@synthesize fullsizeJpegData=_fullsizeJpegData - In the implementation block
@property (assign) id completionBlock; 
-(void)releaseImage;
-(NSMutableArray *)burstImages;
-(NSMutableDictionary *)imageProps;
-(id)initWithImageData:(id)arg1 dict:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)addItemsFromCluster:(id)arg1 ;
-(IOSurfaceRef)fullsizeJpegData;
-(void)setFullsizeJpegData:(IOSurfaceRef)arg1 ;
-(void)setImageProps:(NSMutableDictionary *)arg1 ;
-(float)computeMergeCost:(id)arg1 :(int*)arg2 :(int)arg3 ;
-(void)setBurstImages:(NSMutableArray *)arg1 ;
-(void)setImage:(CIBurstYUVImage *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(CIBurstYUVImage *)image;
@end

