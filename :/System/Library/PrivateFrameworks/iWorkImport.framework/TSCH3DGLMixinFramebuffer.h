/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:30 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DGLFramebuffer.h>

@class TSCH3DGLFramebuffer;

@interface TSCH3DGLMixinFramebuffer : TSCH3DGLFramebuffer {

	TSCH3DGLFramebuffer* mOriginal;

}

@property (nonatomic,retain) TSCH3DGLFramebuffer * original; 
-(void)disableSamplingInSession:(id)arg1 ;
-(BOOL)bindInSession:(id)arg1 ;
-(BOOL)activateInsideSession:(id)arg1 ;
-(BOOL)validForSession:(id)arg1 ;
-(void)bindColorbufferInSession:(id)arg1 ;
-(id)GLHandleForSession:(id)arg1 ;
-(const FramebufferAttributes*)framebufferAttributes;
-(void)destroyResourcesInSession:(id)arg1 ;
-(void)protectInSession:(id)arg1 unprotectOnFail:(BOOL)arg2 ;
-(void)discardBuffers;
-(void)unprotectInSession:(id)arg1 clearOnFailProtection:(BOOL)arg2 ;
-(BOOL)isProtectedInSession:(id)arg1 ;
-(BOOL)isTexturable;
-(void)setColorMask:(const tvec4<bool>*)arg1 ;
-(void)setDepthMask:(unsigned char)arg1 ;
-(void)setDepthFunction:(int)arg1 ;
-(void)clean;
-(void)wipe:(const tvec4<float>*)arg1 ;
-(unsigned long long)estimatedMemroyInBytes;
-(void)discardColorBuffer;
-(void)discardDepthBuffer;
-(id)initWithContext:(id)arg1 size:(const tvec2<int>*)arg2 attributes:(const FramebufferAttributes*)arg3 ;
-(void)setOriginal:(TSCH3DGLFramebuffer *)arg1 ;
-(void)setClearDepth:(float)arg1 ;
-(tvec2<int>)size;
-(void)dealloc;
-(id)description;
-(unsigned)type;
-(id)context;
-(void)clear:(unsigned)arg1 ;
-(id)output;
-(void)setClearColor:(const tvec4<float>*)arg1 ;
-(TSCH3DGLFramebuffer *)original;
@end

