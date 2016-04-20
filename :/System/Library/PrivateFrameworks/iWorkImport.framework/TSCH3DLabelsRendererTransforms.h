/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:32 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DScene, TSCH3DCamera;

@interface TSCH3DLabelsRendererTransforms : NSObject {

	TSCH3DScene* mScene;
	TSCH3DCamera* mCamera;
	ChartScenePropertyAccessor* mAccessor;
	tmat4x4<float> mProjector;
	tmat4x4<float> mUnitToWorld;
	tmat4x4<float> mStageToWorld;
	tmat4x4<float> mWorldToStage;
	bitset<5> mValidBits;

}

@property (nonatomic,retain) TSCH3DScene * scene; 
@property (nonatomic,retain) TSCH3DCamera * camera; 
+(id)transforms;
-(void)resetWithScene:(id)arg1 camera:(id)arg2 ;
-(ChartScenePropertyAccessor*)accessor;
-(const tmat4x4<float>*)p_stageToWorld;
-(const tmat4x4<float>*)unitToWorld;
-(const tmat4x4<float>*)p_projector;
-(const tmat4x4<float>*)worldToStage;
-(tvec3<float>)projectPoint:(const tvec3<float>*)arg1 ;
-(void)dealloc;
-(tvec3<float>)samples;
-(void)setCamera:(TSCH3DCamera *)arg1 ;
-(TSCH3DCamera *)camera;
-(TSCH3DScene *)scene;
-(void)setScene:(TSCH3DScene *)arg1 ;
@end

