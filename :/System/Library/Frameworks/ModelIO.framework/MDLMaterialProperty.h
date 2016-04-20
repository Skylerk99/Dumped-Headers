/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:10 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLNamed.h>

@class NSString, NSURL, MDLTextureSampler;

@interface MDLMaterialProperty : NSObject <MDLNamed> {

	float* _shadowFloat;
	* _shadowFloat3;
	NSString* _string;
	NSString* _name;
	NSURL* _url;
	MDLTextureSampler* _textureSampler;
	 _float;
	SCD_Struct_MD0 _matrix;
	CGColorRef _color;
	unsigned long long _semantic;
	unsigned long long _type;
	NSURL* _URLValue;
	SCD_Struct_MD0 _matrix4x4;

}

@property (assign,nonatomic) unsigned long long semantic; 
@property (nonatomic,readonly) unsigned long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,copy) NSURL * URLValue;                                       //@synthesize URLValue=_URLValue - In the implementation block
@property (nonatomic,retain) MDLTextureSampler * textureSamplerValue; 
@property (assign,nonatomic) CGColorRef color; 
@property (assign,nonatomic) float floatValue; 
@property (assign,nonatomic)  float2Value; 
@property (assign,nonatomic)  float3Value; 
@property (assign,nonatomic)  float4Value; 
@property (assign,nonatomic) SCD_Struct_MD0 matrix4x4;                             //@synthesize matrix4x4=_matrix4x4 - In the implementation block
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 float:(float)arg3 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 matrix4x4:(SCD_Struct_MD0)arg3 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 textureSampler:(id)arg3 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 color:(CGColorRef)arg3 ;
-(void)setTextureSamplerValue:(MDLTextureSampler *)arg1 ;
-()float2Value;
-(void)setFloat2Value:;
-(void)setFloat3Value:;
-(void)setFloat4Value:;
-(SCD_Struct_MD0)matrix4x4;
-(void)setMatrix4x4Value:(SCD_Struct_MD0)arg1 ;
-(void)setURLValue:(NSURL *)arg1 ;
-(void)setMatrix4x4:(SCD_Struct_MD0)arg1 ;
-(MDLTextureSampler *)textureSamplerValue;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 URL:(id)arg3 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 string:(id)arg3 ;
-(NSURL *)URLValue;
-()float4Value;
-()float3Value;
-(unsigned long long)semantic;
-(void)setSemantic:(unsigned long long)arg1 ;
-(void)setFloatValue:(float)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(unsigned long long)type;
-(float)floatValue;
-(void)setUrl:(id)arg1 ;
-(CGColorRef)color;
-(void)setColor:(CGColorRef)arg1 ;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setProperties:(id)arg1 ;
@end

