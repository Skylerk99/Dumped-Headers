/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:29 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSCH3DMaterialPackage, TSCH3DLightingPackage, TSCH3DEnvironmentPackage;

@interface TSCH3DLightingModel : NSObject <NSCopying> {

	TSCH3DMaterialPackage* _materials;
	TSCH3DLightingPackage* _lightings;
	TSCH3DEnvironmentPackage* _environment;

}

@property (nonatomic,retain) TSCH3DMaterialPackage * materials;                   //@synthesize materials=_materials - In the implementation block
@property (nonatomic,retain) TSCH3DLightingPackage * lightings;                   //@synthesize lightings=_lightings - In the implementation block
@property (nonatomic,retain) TSCH3DEnvironmentPackage * environment;              //@synthesize environment=_environment - In the implementation block
+(id)instanceWithArchive:(const Chart3DLightingModelArchive*)arg1 unarchiver:(id)arg2 ;
+(id)lightingModel;
-(void)saveToArchive:(Chart3DLightingModelArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const Chart3DLightingModelArchive*)arg1 unarchiver:(id)arg2 ;
-(void)didInitFromSOS;
-(BOOL)hasCompleteData;
-(void)setLightings:(TSCH3DLightingPackage *)arg1 ;
-(void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4 ;
-(id)lightingModelWithLightings:(id)arg1 ;
-(id)diffuseTextureTiling;
-(id)representativeMaterialLightenedByPercentage:(id)arg1 ;
-(TSCH3DLightingPackage *)lightings;
-(id)clone;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(TSCH3DEnvironmentPackage *)environment;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEnvironment:(TSCH3DEnvironmentPackage *)arg1 ;
-(TSCH3DMaterialPackage *)materials;
-(void)setMaterials:(TSCH3DMaterialPackage *)arg1 ;
@end

