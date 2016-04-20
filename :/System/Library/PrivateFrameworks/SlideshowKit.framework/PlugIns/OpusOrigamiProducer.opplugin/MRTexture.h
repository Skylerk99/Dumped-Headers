/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:55 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class EAGLContext, MRContextState;

@interface MRTexture : NSObject {

	EAGLContext* _parenGLContext;
	EAGLContext* _glContext;
	float _borderColor[4];
	BOOL _textureNameIsNotOurs;
	BOOL _hasMipmap;
	BOOL _isPowerOfTwo;
	BOOL _isShared;
	BOOL _isFloat;
	BOOL _isPremultiplied;
	BOOL _isOpaque;
	unsigned _textureName;
	unsigned _textureTarget;
	unsigned _pixelFormat;
	unsigned _framebufferName;
	int _minFilter;
	int _magFilter;
	int _wrapS;
	int _wrapT;
	MRContextState* _innerState;
	SCD_Struct_MR7 _size;
	double _timestamp;
	unsigned long long _orientation;

}

@property (readonly) MRContextState * innerState;                         //@synthesize innerState=_innerState - In the implementation block
@property (readonly) SCD_Struct_MR7 size;                                 //@synthesize size=_size - In the implementation block
@property (readonly) unsigned pixelFormat;                                //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (readonly) unsigned textureName;                                //@synthesize textureName=_textureName - In the implementation block
@property (readonly) unsigned textureTarget;                              //@synthesize textureTarget=_textureTarget - In the implementation block
@property (assign,nonatomic) double timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) unsigned long long orientation;              //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned framebufferName;                            //@synthesize framebufferName=_framebufferName - In the implementation block
@property (readonly) EAGLContext * glContext;                             //@synthesize glContext=_glContext - In the implementation block
@property (readonly) BOOL isFBO; 
@property (readonly) BOOL hasMipmap;                                      //@synthesize hasMipmap=_hasMipmap - In the implementation block
@property (readonly) BOOL isPowerOfTwo;                                   //@synthesize isPowerOfTwo=_isPowerOfTwo - In the implementation block
@property (readonly) BOOL isFloat;                                        //@synthesize isFloat=_isFloat - In the implementation block
@property (readonly) BOOL isMonochromatic; 
@property (assign,nonatomic) BOOL isPremultiplied;                        //@synthesize isPremultiplied=_isPremultiplied - In the implementation block
@property (assign,nonatomic) BOOL isOpaque;                               //@synthesize isOpaque=_isOpaque - In the implementation block
@property (assign,nonatomic) BOOL isShared;                               //@synthesize isShared=_isShared - In the implementation block
@property (assign,nonatomic) int minFilter;                               //@synthesize minFilter=_minFilter - In the implementation block
@property (assign,nonatomic) int magFilter;                               //@synthesize magFilter=_magFilter - In the implementation block
@property (assign,nonatomic) int wrapS;                                   //@synthesize wrapS=_wrapS - In the implementation block
@property (assign,nonatomic) int wrapT;                                   //@synthesize wrapT=_wrapT - In the implementation block
@property (assign,nonatomic) const float* borderColor; 
-(void)uploadData:(void*)arg1 rowBytes:(unsigned long long)arg2 toRect:(CGRect)arg3 ;
-(void)setBorderColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(BOOL)isFloat;
-(BOOL)hasMipmap;
-(MRContextState *)innerState;
-(void)setIsOpaque:(BOOL)arg1 ;
-(id)initWithTextureName:(unsigned)arg1 textureTarget:(unsigned)arg2 size:(SCD_Struct_MR7)arg3 inGLContext:(id)arg4 options:(const SCD_Struct_MR8*)arg5 ;
-(id)initWithData:(void*)arg1 width:(unsigned)arg2 height:(unsigned)arg3 rowBytes:(unsigned)arg4 inGLContext:(id)arg5 options:(const SCD_Struct_MR8*)arg6 ;
-(id)initWithDatas:(void*)arg1 dataCount:(unsigned long long)arg2 width:(unsigned)arg3 height:(unsigned)arg4 rowBytes:(unsigned)arg5 inGLContext:(id)arg6 options:(const SCD_Struct_MR8*)arg7 ;
-(unsigned)framebufferName;
-(void)setIsPremultiplied:(BOOL)arg1 ;
-(BOOL)isFBO;
-(unsigned)textureName;
-(BOOL)isMonochromatic;
-(id)initFBOWithSize:(SCD_Struct_MR7)arg1 inGLContext:(id)arg2 options:(const SCD_Struct_MR8*)arg3 ;
-(id)_initWithSize:(SCD_Struct_MR7)arg1 inGLContext:(id)arg2 isFBO:(BOOL)arg3 options:(const SCD_Struct_MR8*)arg4 ;
-(id)initWithSize:(SCD_Struct_MR7)arg1 inGLContext:(id)arg2 options:(const SCD_Struct_MR8*)arg3 ;
-(BOOL)isShared;
-(BOOL)isPowerOfTwo;
-(EAGLContext *)glContext;
-(int)minFilter;
-(int)magFilter;
-(void)setMinFilter:(int)arg1 ;
-(void)setMagFilter:(int)arg1 ;
-(unsigned)textureTarget;
-(BOOL)isPremultiplied;
-(SCD_Struct_MR7)size;
-(void)dealloc;
-(double)timestamp;
-(void)setOrientation:(unsigned long long)arg1 ;
-(unsigned long long)orientation;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)isOpaque;
-(void)setBorderColor:(const float*)arg1 ;
-(void)setLabel:(id)arg1 ;
-(const float*)borderColor;
-(void)cleanup;
-(unsigned)pixelFormat;
-(int)wrapS;
-(void)setWrapS:(int)arg1 ;
-(int)wrapT;
-(void)setWrapT:(int)arg1 ;
-(void)setIsShared:(BOOL)arg1 ;
@end

