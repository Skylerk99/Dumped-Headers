/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:35 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DLightingModel.h>

@interface TSCH3DPhongLikeLightingModel : TSCH3DLightingModel
-(id)initWithPhongMaterialPackageArchive:(const Chart3DPhongMaterialPackageArchive*)arg1 lightingModelArchive:(const Chart3DLightingModelArchive*)arg2 unarchiver:(id)arg3 ;
-(void)saveToPhongMaterialPackageArchive:(Chart3DPhongMaterialPackageArchive*)arg1 environmentPackageArchive:(Chart3DEnvironmentPackageArchive*)arg2 archiver:(id)arg3 ;
-(id)phongMaterials;
-(void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4 percentage:(id)arg5 ;
-(id)diffuseTextureTiling;
-(id)representativeMaterialLightenedByPercentage:(id)arg1 ;
-(tvec4<float>)p_lightenedColorForColor:(const tvec4<float>*)arg1 percentage:(id)arg2 ;
-(id)p_lightenDiffuseMaterial:(id)arg1 percentage:(id)arg2 ;
-(id)init;
@end

