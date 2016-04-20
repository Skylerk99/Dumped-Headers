/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:38 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSDGLDataBufferAttribute, TSDGLDataBuffer, TSDGLShader, NSArray;

@interface TSDGLParticleSystem : NSObject {

	BOOL* _visibilities;
	BOOL _isInitialized;
	BOOL _isDataBufferInitialized;
	unsigned long long _textureCount;
	BOOL _hasParticleTexture;
	BOOL _shouldDraw;
	unsigned long long _particleCount;
	unsigned long long _visibleParticleCount;
	unsigned long long _particlesWide;
	unsigned long long _particlesHigh;
	double _duration;
	unsigned long long _direction;
	TSDGLDataBufferAttribute* _positionAttribute;
	TSDGLDataBufferAttribute* _centerAttribute;
	TSDGLDataBufferAttribute* _texCoordAttribute;
	TSDGLDataBufferAttribute* _particleTexCoordAttribute;
	TSDGLDataBufferAttribute* _colorAttribute;
	TSDGLDataBufferAttribute* _lifeSpanAttribute;
	TSDGLDataBufferAttribute* _speedAttribute;
	TSDGLDataBufferAttribute* _rotationAttribute;
	TSDGLDataBufferAttribute* _scaleAttribute;
	TSDGLDataBuffer* _dataBuffer;
	TSDGLShader* _shader;
	CGSize _particleSize;
	CGSize _objectSize;
	CGSize _slideSize;

}

@property (nonatomic,readonly) unsigned long long particleCount;                                  //@synthesize particleCount=_particleCount - In the implementation block
@property (nonatomic,readonly) unsigned long long visibleParticleCount;                           //@synthesize visibleParticleCount=_visibleParticleCount - In the implementation block
@property (nonatomic,readonly) unsigned long long particlesWide;                                  //@synthesize particlesWide=_particlesWide - In the implementation block
@property (nonatomic,readonly) unsigned long long particlesHigh;                                  //@synthesize particlesHigh=_particlesHigh - In the implementation block
@property (nonatomic,readonly) CGSize particleSize;                                               //@synthesize particleSize=_particleSize - In the implementation block
@property (nonatomic,readonly) CGSize objectSize;                                                 //@synthesize objectSize=_objectSize - In the implementation block
@property (nonatomic,readonly) CGSize slideSize;                                                  //@synthesize slideSize=_slideSize - In the implementation block
@property (nonatomic,readonly) double duration;                                                   //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) unsigned long long direction;                                      //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) NSArray * dataBufferAttributes; 
@property (nonatomic,readonly) TSDGLDataBufferAttribute * positionAttribute;                      //@synthesize positionAttribute=_positionAttribute - In the implementation block
@property (nonatomic,readonly) TSDGLDataBufferAttribute * centerAttribute;                        //@synthesize centerAttribute=_centerAttribute - In the implementation block
@property (nonatomic,readonly) TSDGLDataBufferAttribute * texCoordAttribute;                      //@synthesize texCoordAttribute=_texCoordAttribute - In the implementation block
@property (nonatomic,readonly) TSDGLDataBufferAttribute * particleTexCoordAttribute;              //@synthesize particleTexCoordAttribute=_particleTexCoordAttribute - In the implementation block
@property (nonatomic,readonly) TSDGLDataBufferAttribute * colorAttribute;                         //@synthesize colorAttribute=_colorAttribute - In the implementation block
@property (nonatomic,readonly) TSDGLDataBufferAttribute * lifeSpanAttribute;                      //@synthesize lifeSpanAttribute=_lifeSpanAttribute - In the implementation block
@property (nonatomic,readonly) TSDGLDataBufferAttribute * speedAttribute;                         //@synthesize speedAttribute=_speedAttribute - In the implementation block
@property (nonatomic,readonly) TSDGLDataBufferAttribute * rotationAttribute;                      //@synthesize rotationAttribute=_rotationAttribute - In the implementation block
@property (nonatomic,readonly) TSDGLDataBufferAttribute * scaleAttribute;                         //@synthesize scaleAttribute=_scaleAttribute - In the implementation block
@property (nonatomic,readonly) TSDGLDataBuffer * dataBuffer;                                      //@synthesize dataBuffer=_dataBuffer - In the implementation block
@property (nonatomic,readonly) TSDGLShader * shader;                                              //@synthesize shader=_shader - In the implementation block
@property (nonatomic,readonly) BOOL shouldDraw;                                                   //@synthesize shouldDraw=_shouldDraw - In the implementation block
+(unsigned long long)numberOfVerticesPerParticle;
+(BOOL)useGLSL;
+(BOOL)shouldDrawInvisibleParticles;
+(BOOL)willOverrideColors;
+(id)newDataBufferAttributeWithName:(id)arg1 ;
+(BOOL)willOverrideGeometry;
+(BOOL)willOverrideStartingPoints;
+(BOOL)willOverrideVisibilities;
-(void)p_setupDataBufferWithParticleCount:(unsigned long long)arg1 visibleParticleCount:(unsigned long long)arg2 ;
-(CGSize)p_particleSystemSizeWithRequestedNumber:(unsigned long long)arg1 objectSize:(CGSize)arg2 ;
-(void)p_setupParticleDataWithTexture:(id)arg1 ;
-(void)p_reverseParticleDataDrawOrder;
-(void)p_setupVertexData;
-(void)p_setDataBufferAttribute:(id*)arg1 withName:(id)arg2 defaultDataType:(long long)arg3 normalized:(BOOL)arg4 componentCount:(unsigned long long)arg5 ;
-(void)p_logParticleInformation;
-(TSDGLDataBuffer *)dataBuffer;
-(unsigned long long)particleCount;
-(void)setupGLSL;
-(unsigned long long)visibleParticleCount;
-(id)initWithParticleSize:(CGSize)arg1 particleSystemSize:(CGSize)arg2 objectSize:(CGSize)arg3 slideSize:(CGSize)arg4 duration:(double)arg5 direction:(unsigned long long)arg6 shader:(id)arg7 ;
-(NSArray *)dataBufferAttributes;
-(BOOL)shouldDraw;
-(unsigned long long)particlesWide;
-(unsigned long long)particlesHigh;
-(double)speedMax;
-(double)rotationMax;
-(void)setupWithTexture:(id)arg1 particleTextureSize:(CGSize)arg2 reverseDrawOrder:(BOOL)arg3 ;
-(id)initWithNumberOfParticles:(unsigned long long)arg1 objectSize:(CGSize)arg2 slideSize:(CGSize)arg3 duration:(double)arg4 direction:(unsigned long long)arg5 shader:(id)arg6 ;
-(unsigned long long)indexFromPoint:(CGPoint)arg1 ;
-(CGPoint)indexPointFromIndex:(unsigned long long)arg1 ;
-(CGContextRef)newContextFromTexture:(id)arg1 ;
-(SCD_Struct_TS513)vertexPositionAtVertexIndex:(unsigned long long)arg1 particleIndexPoint:(CGPoint)arg2 ;
-(SCD_Struct_TS513)centerAtIndexPoint:(CGPoint)arg1 ;
-(CGPoint)startingPointAtIndexPoint:(CGPoint)arg1 ;
-(SCD_Struct_TS516)speedAtIndexPoint:(CGPoint)arg1 ;
-(SCD_Struct_TS516)rotationAtIndexPoint:(CGPoint)arg1 ;
-(double)scaleAtIndexPoint:(CGPoint)arg1 ;
-(SCD_Struct_TS513)lifeSpanAtIndexPoint:(CGPoint)arg1 ;
-(tquat<float>)colorAtIndexPoint:(CGPoint)arg1 ;
-(BOOL)visibilityAtIndexPoint:(CGPoint)arg1 ;
-(void)drawGLSLWithPercent:(double)arg1 opacity:(double)arg2 ;
-(CGSize)objectSize;
-(TSDGLDataBufferAttribute *)positionAttribute;
-(TSDGLDataBufferAttribute *)centerAttribute;
-(TSDGLDataBufferAttribute *)texCoordAttribute;
-(TSDGLDataBufferAttribute *)particleTexCoordAttribute;
-(TSDGLDataBufferAttribute *)colorAttribute;
-(TSDGLDataBufferAttribute *)lifeSpanAttribute;
-(TSDGLDataBufferAttribute *)speedAttribute;
-(TSDGLDataBufferAttribute *)rotationAttribute;
-(TSDGLDataBufferAttribute *)scaleAttribute;
-(TSDGLShader *)shader;
-(void)dealloc;
-(id)description;
-(double)duration;
-(unsigned long long)direction;
-(CGSize)slideSize;
-(CGSize)particleSize;
@end

