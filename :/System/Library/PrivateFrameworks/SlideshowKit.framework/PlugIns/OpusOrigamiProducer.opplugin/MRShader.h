/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:56 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, MRContext, NSMutableDictionary;

@interface MRShader : NSObject {

	NSString* mShaderID;
	NSString* mShaderKey;
	NSDictionary* mDescription;
	MRContext* mContext;
	unsigned mProgram;
	unsigned mVertexShader;
	unsigned mFragmentShader;
	MRContext* mUseContext;
	float mModelViewProjectionMatrix[16];
	float mNormal[3];
	float mTextureMatrix[4][16];
	float mForeColor[4];
	int mModelViewProjectionMatrixLocation;
	int mNormalLocation;
	int mTextureMatrixLocation[4];
	int mForeColorLocation;
	NSMutableDictionary* mUniformLocations;
	NSMutableDictionary* mUniforms;
	NSMutableDictionary* mAttributeLocations;
	BOOL mTextureUnitsAreBound;

}

@property (readonly) NSString * shaderID; 
@property (readonly) NSString * shaderKey; 
@property (nonatomic,readonly) unsigned program; 
@property (retain) MRContext * useContext; 
@property (assign) BOOL textureUnitsAreBound; 
-(BOOL)caresAboutNormal;
-(void)setUniformMat4:(float)arg1 forKey:(id)arg2 ;
-(void)setUniformMat3:(float)arg1 forKey:(id)arg2 ;
-(void)setUniformInt:(int)arg1 forKey:(id)arg2 ;
-(void)setUniformFloat:(float)arg1 forKey:(id)arg2 ;
-(void)setTextureMatrix:(float)arg1 onTextureUnit:(unsigned long long)arg2 ;
-(int)locationForAttribute:(id)arg1 ;
-(void)setTextureUnitsAreBound:(BOOL)arg1 ;
-(void)setUniform:(id)arg1 forKey:(id)arg2 ;
-(BOOL)textureUnitsAreBound;
-(BOOL)caresAboutForeColor;
-(void)setUniformVec4:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4 forKey:(id)arg5 ;
-(void)setModelViewProjectionMatrix:(float)arg1 ;
-(void)setUniformVec2:(float)arg1 :(float)arg2 forKey:(id)arg3 ;
-(void)setNormal:(float)arg1 :(float)arg2 :(float)arg3 ;
-(MRContext *)useContext;
-(NSString *)shaderID;
-(int)_locationForUniform:(id)arg1 ;
-(void)setUseContext:(MRContext *)arg1 ;
-(id)initWithShaderID:(id)arg1 shaderKey:(id)arg2 description:(id)arg3 vertexShader:(unsigned)arg4 andFragmentShader:(unsigned)arg5 inContext:(id)arg6 ;
-(void)setUniformVec3:(float)arg1 :(float)arg2 :(float)arg3 forKey:(id)arg4 ;
-(NSString *)shaderKey;
-(unsigned)program;
-(void)dealloc;
-(void)setForeColor:(const float*)arg1 ;
@end

