/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:38 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADFill.h>

@class OADBlipRef, OADRelativeRect, OADImageFillTechnique;

@interface OADImageFill : OADFill {

	OADBlipRef* mBlipRef;
	BOOL mIsBlipRefOverridden;
	OADRelativeRect* mSourceRect;
	int mDpi;
	BOOL mIsDpiOverridden;
	BOOL mRotateWithShape;
	BOOL mIsRotateWithShapeOverridden;
	OADImageFillTechnique* mTechnique;

}
+(id)defaultProperties;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)sourceRect;
-(void)setSourceRect:(id)arg1 ;
-(id)color;
-(void)setParent:(id)arg1 ;
-(BOOL)isBlipRefOverridden;
-(id)blipRef;
-(BOOL)isSourceRectOverridden;
-(id)technique;
-(void)setTechnique:(id)arg1 ;
-(void)setRotateWithShape:(BOOL)arg1 ;
-(void)setBlipRef:(id)arg1 ;
-(void)setStyleColor:(id)arg1 ;
-(id)initWithDefaults;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(void)removeUnnecessaryOverrides;
-(BOOL)isRotateWithShapeOverridden;
-(BOOL)rotateWithShape;
-(void)setDpi:(int)arg1 ;
-(BOOL)isDpiOverridden;
-(BOOL)isTechniqueOverridden;
-(int)dpi;
@end

