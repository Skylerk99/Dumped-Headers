/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSDGLShadow : NSObject
+(id)sharedContext;
+(id)renderQueue;
-(void)setupGLTextureParameters;
-(CGImageRef)newCGImageFromGLBuffer:(char**)arg1 ;
-(void)createOffscreenRenderBuffer:(CGSize)arg1 framebuffer:(id)arg2 requiresDepth:(BOOL)arg3 colorRenderBuffer:(unsigned*)arg4 depthRenderBuffer:(unsigned*)arg5 ;
@end

