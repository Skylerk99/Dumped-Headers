/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GLKit/GLKit-Structs.h>
#import <GLKit/GLKEffectProperty.h>

@class NSString, NSMutableArray, GLKEffectPropertyTexGen;

@interface GLKEffectPropertyTexture : GLKEffectProperty {

	unsigned char _enabled;
	unsigned _name;
	unsigned _target;
	int _envMode;
	unsigned char _matrixEnabled;
	int _textureIndex;
	int _unit2dLoc;
	int _unitCubeLoc;
	NSString* _filePath;
	char* _unit2dNameString;
	char* _unitCubeNameString;
	NSMutableArray* _texGenArray;
	GLKEffectPropertyTexGen* _texGenS;
	GLKEffectPropertyTexGen* _texGenT;
	GLKEffectPropertyTexGen* _texGenR;
	GLKBigInt_s _allFshMasks;

}

@property (assign,nonatomic) unsigned char enabled;                              //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) unsigned name;                                      //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned target;                                    //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) int envMode;                                        //@synthesize envMode=_envMode - In the implementation block
@property (nonatomic,readonly) GLKEffectPropertyTexGen * texGenS;                //@synthesize texGenS=_texGenS - In the implementation block
@property (nonatomic,readonly) GLKEffectPropertyTexGen * texGenT;                //@synthesize texGenT=_texGenT - In the implementation block
@property (nonatomic,readonly) GLKEffectPropertyTexGen * texGenR;                //@synthesize texGenR=_texGenR - In the implementation block
@property (nonatomic,readonly) NSMutableArray * texGenArray;                     //@synthesize texGenArray=_texGenArray - In the implementation block
@property (assign,nonatomic) int textureIndex;                                   //@synthesize textureIndex=_textureIndex - In the implementation block
@property (nonatomic,readonly) NSString * filePath;                              //@synthesize filePath=_filePath - In the implementation block
@property (assign,nonatomic) unsigned char matrixEnabled;                        //@synthesize matrixEnabled=_matrixEnabled - In the implementation block
@property (assign,nonatomic) int unit2dLoc;                                      //@synthesize unit2dLoc=_unit2dLoc - In the implementation block
@property (assign,nonatomic) int unitCubeLoc;                                    //@synthesize unitCubeLoc=_unitCubeLoc - In the implementation block
@property (assign,nonatomic) char* unit2dNameString;                             //@synthesize unit2dNameString=_unit2dNameString - In the implementation block
@property (assign,nonatomic) char* unitCubeNameString;                           //@synthesize unitCubeNameString=_unitCubeNameString - In the implementation block
@property (nonatomic,readonly) unsigned char normalizedNormalsMask; 
@property (nonatomic,readonly) unsigned char vPositionEyeMask; 
@property (nonatomic,readonly) unsigned char vNormalEyeMask; 
@property (nonatomic,readonly) unsigned char useTexCoordAttribMask; 
@property (nonatomic,readonly) GLKBigInt_s allFshMasks;                          //@synthesize allFshMasks=_allFshMasks - In the implementation block
+(void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2 ;
+(void)clearAllTexturingMasks:(GLKBigInt_s*)arg1 fshMask:(GLKBigInt_s*)arg2 ;
-(void)dirtyAllUniforms;
-(unsigned char)useTexCoordAttribMask;
-(unsigned char)normalizedNormalsMask;
-(unsigned char)vNormalEyeMask;
-(unsigned char)vPositionEyeMask;
-(void)setTextureIndex:(int)arg1 ;
-(BOOL)includeVshShaderTextForRootNode:(id)arg1 ;
-(BOOL)includeFshShaderTextForRootNode:(id)arg1 ;
-(void)initializeMasks;
-(void)setShaderBindings;
-(GLKBigInt_s)allFshMasks;
-(int)textureIndex;
-(void)setUnit2dNameString:(char*)arg1 ;
-(void)setUnitCubeNameString:(char*)arg1 ;
-(GLKEffectPropertyTexGen *)texGenS;
-(GLKEffectPropertyTexGen *)texGenT;
-(GLKEffectPropertyTexGen *)texGenR;
-(void)setEnvMode:(int)arg1 ;
-(void)setMatrixEnabled:(unsigned char)arg1 ;
-(unsigned char)matrixEnabled;
-(int)envMode;
-(char*)unit2dNameString;
-(char*)unitCubeNameString;
-(int)unit2dLoc;
-(void)setUnit2dLoc:(int)arg1 ;
-(int)unitCubeLoc;
-(void)setUnitCubeLoc:(int)arg1 ;
-(NSMutableArray *)texGenArray;
-(void)bind;
-(unsigned char)enabled;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(unsigned)arg1 ;
-(unsigned)name;
-(void)setTarget:(unsigned)arg1 ;
-(void)setEnabled:(unsigned char)arg1 ;
-(unsigned)target;
-(NSString *)filePath;
@end

