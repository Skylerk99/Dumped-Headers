/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:46 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVVideoCompositionRenderContextInternal, AVVideoComposition;

@interface AVVideoCompositionRenderContext : NSObject {

	AVVideoCompositionRenderContextInternal* _internal;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CGAffineTransform renderTransform; 
@property (nonatomic,readonly) float renderScale; 
@property (nonatomic,readonly) SCD_Struct_AV59 pixelAspectRatio; 
@property (nonatomic,readonly) SCD_Struct_AV60 edgeWidths; 
@property (nonatomic,readonly) BOOL highQualityRendering; 
@property (nonatomic,readonly) AVVideoComposition * videoComposition; 
+(id)renderContextPropertiesFromFigCompositor:(OpaqueFigVideoCompositorRef)arg1 ;
-(id)initWithFigVideoCompositor:(OpaqueFigVideoCompositorRef)arg1 clientRequiredPixelBufferAttributes:(id)arg2 videoComposition:(id)arg3 pixelBufferPool:(CVPixelBufferPoolRef)arg4 ;
-(BOOL)hasEqualPropertiesToFigVideoCompositor:(OpaqueFigVideoCompositorRef)arg1 ;
-(BOOL)isBufferYCbCr:(CVBufferRef)arg1 ;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(AVVideoComposition *)videoComposition;
-(float)renderScale;
-(void)_willDeallocOrFinalize;
-(CGAffineTransform)renderTransform;
-(CVBufferRef)newPixelBuffer;
-(SCD_Struct_AV60)edgeWidths;
-(BOOL)highQualityRendering;
-(CGSize)size;
-(void)dealloc;
-(SCD_Struct_AV59)pixelAspectRatio;
-(void)finalize;
@end

