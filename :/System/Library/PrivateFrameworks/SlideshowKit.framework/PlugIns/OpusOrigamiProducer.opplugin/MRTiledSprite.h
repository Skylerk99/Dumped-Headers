/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:57 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class NSMutableArray;

@interface MRTiledSprite : NSObject {

	CGPoint mPosition;
	CGSize mHalfSize;
	float mRotation;
	CGRect mInnerRect;
	CGRect mOuterRect;
	BOOL mPreservesImageAspectRatio;
	BOOL mIsSealed;
	NSMutableArray* mTriangles;
	float* mVertices;
	float* mBasicTextureCoordinates;
	float* mInSpriteCoordinates;
	float* mTextureCoordinates[4];
	NSMutableArray* mMiddleTriangles;
	float* mMiddleVertices;
	float* mMiddleBasicTextureCoordinates;
	float* mMiddleInSpriteCoordinates;
	float* mMiddleTextureCoordinates[4];
	NSMutableArray* mOuterTriangles;
	float* mOuterVertices;
	float* mOuterBasicTextureCoordinates;
	float* mOuterInSpriteCoordinates;
	float* mOuterTextureCoordinates[4];
	CGSize mInSpriteCoordinatesFactor;
	CGPoint mInSpriteCoordinatesOffset;
	CGSize mTextureCoordinatesFactor[4];
	CGPoint mTextureCoordinatesOffset[4];
	BOOL mNeedsTextureCoordinates[4];
	BOOL mNeedsInSpriteCoordinates;
	BOOL mNeedsToUpdateInSpriteCoordinates;
	BOOL mHitIsActive;

}

@property (nonatomic,readonly) CGPoint position; 
@property (nonatomic,readonly) CGSize halfSize; 
@property (nonatomic,readonly) float rotation; 
@property (nonatomic,readonly) CGRect innerRect; 
@property (nonatomic,readonly) CGRect outerRect; 
@property (assign,nonatomic) BOOL hitIsActive; 
@property (assign,nonatomic) BOOL needsInSpriteCoordinates; 
@property (assign,nonatomic) BOOL preservesImageAspectRatio; 
-(void)renderImageInner:(id)arg1 inContext:(id)arg2 ;
-(void)renderDumbImage:(id)arg1 inContext:(id)arg2 ;
-(void)setNeedsInSpriteCoordinates:(BOOL)arg1 ;
-(void)renderImageMiddle:(id)arg1 inContext:(id)arg2 ;
-(void)setPreservesImageAspectRatio:(BOOL)arg1 ;
-(BOOL)preservesImageAspectRatio;
-(void)renderImage:(id)arg1 inContext:(id)arg2 ;
-(BOOL)needsInSpriteCoordinates;
-(void)renderImageOuter:(id)arg1 inContext:(id)arg2 ;
-(void)updateInSpriteCoordinates;
-(void)getOpaquePosition:(CGPoint*)arg1 andHalfSize:(CGSize*)arg2 ;
-(void)seal;
-(id)initWithPosition:(CGPoint)arg1 size:(CGSize)arg2 zRotation:(float)arg3 innerRect:(CGRect)arg4 outerRect:(CGRect)arg5 context:(id)arg6 ;
-(void)subtractOpaqueSpriteWithPosition:(CGPoint)arg1 halfSize:(CGSize)arg2 andRotation:(float)arg3 ;
-(void)subtractTriangle:(double)arg1 fromTriangle:(double)arg2 addTrianglesTo:(id)arg3 ;
-(BOOL)hitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(BOOL)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 ;
-(void)setSpriteCoordinatesFactor:(CGSize)arg1 andOffset:(CGPoint)arg2 ;
-(id)initWithPosition:(CGPoint)arg1 size:(CGSize)arg2 zRotation:(float)arg3 innerRect:(CGRect)arg4 context:(id)arg5 ;
-(void)setTextureCoordinatesFactor:(CGSize)arg1 andOffset:(CGPoint)arg2 onTextureUnit:(unsigned long long)arg3 ;
-(void)setHitIsActive:(BOOL)arg1 ;
-(void)subtractSprite:(id)arg1 ;
-(CGRect)outerRect;
-(CGRect)innerRect;
-(void)subtractSpriteAtPosition:(CGPoint)arg1 withSize:(CGSize)arg2 zRotation:(float)arg3 andOpaqueRect:(CGRect)arg4 inContext:(id)arg5 ;
-(void)setNeedsTextureCoordinates:(BOOL)arg1 onTextureUnit:(unsigned long long)arg2 ;
-(BOOL)hitIsActive;
-(CGSize)halfSize;
-(void)dealloc;
-(CGPoint)position;
-(float)rotation;
@end

