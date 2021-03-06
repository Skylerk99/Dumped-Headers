/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:34 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DAbstractLimitingSeriesUpgrader.h>

@class TSCH3DChartLayout, NSValue;

@interface TSCH3DChartLayoutSceneSettingsUpgrader : TSCH3DAbstractLimitingSeriesUpgrader {

	TSCH3DChartLayout* mChartLayout;
	BOOL mIsMutatedForSceneSettings;
	NSValue* mInfoGeometryOffset;
	BOOL hasConstantDepth;

}

@property (assign,nonatomic) BOOL hasConstantDepth; 
-(id)sceneResetWithLayoutSettings:(SCD_Struct_TS432)arg1 ;
-(SCD_Struct_TS432)oldLayoutSettings;
-(CGRect)oldResizingFrame;
-(id)containingViewportByResizingScene:(id)arg1 toResizingFrame:(CGRect)arg2 ;
-(void)mutateInfoWithContainingViewport:(id)arg1 scene:(id)arg2 ;
-(BOOL)hasConstantDepth;
-(void)updateInfoGeometryIfNecessary;
-(void)setHasConstantDepth:(BOOL)arg1 ;
-(void)dealloc;
-(void)upgrade;
@end

