/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:46 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPImageConverter : NSObject {

	int _pixelFormat;
	int _width;
	int _height;
	CGColorSpaceRef _rgbColorSpace;
	CGContextRef _cgContext;
	CVBufferRef _rgbFrame;
	CVPixelBufferPoolRef _yuvFrames;
	OpaqueVTPixelTransferSessionRef _rgbToYuv;

}
-(void)dealloc;
-(id)init;
-(id)initWithPixelFormat:(int)arg1 ;
-(int)convertImage:(CGImageRef)arg1 yuvFrame:(_CVBuffer*)arg2 ;
-(int)resize:(int)arg1 height:(int)arg2 ;
@end

