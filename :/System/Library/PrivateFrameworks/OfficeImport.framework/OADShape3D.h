/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OADBevel, OADColor;

@interface OADShape3D : NSObject <NSCopying> {

	OADBevel* mTopBevel;
	OADBevel* mBottomBevel;
	OADColor* mExtrusionColor;
	float mExtrusionHeight;
	OADColor* mContourColor;
	float mContourWidth;
	float mShapeDepth;
	int mMaterial;

}
+(id)nullShape3D;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTopBevel:(id)arg1 ;
-(void)setBottomBevel:(id)arg1 ;
-(void)setExtrusionColor:(id)arg1 ;
-(void)setContourColor:(id)arg1 ;
-(void)setShapeDepth:(float)arg1 ;
-(void)setExtrusionHeight:(float)arg1 ;
-(void)setContourWidth:(float)arg1 ;
-(void)setMaterial:(int)arg1 ;
-(float)shapeDepth;
-(float)extrusionHeight;
-(float)contourWidth;
-(int)material;
-(id)topBevel;
-(id)bottomBevel;
-(id)extrusionColor;
-(id)contourColor;
@end

