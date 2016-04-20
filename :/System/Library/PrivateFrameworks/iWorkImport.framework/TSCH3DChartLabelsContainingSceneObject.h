/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:29 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DSceneObject.h>

@class TSCH3DLabelsRenderer;

@interface TSCH3DChartLabelsContainingSceneObject : TSCH3DSceneObject {

	TSCH3DLabelsRenderer* mLabelsRenderer;

}
-(void)getBounds:(id)arg1 ;
-(id)labelsRenderer;
-(void)renderLabelRenderInfo:(const ChartLabelsContainingLabelRenderInfo*)arg1 ;
-(void)renderLabelsResourcesSessionWithResources:(id)arg1 expectedSize:(const tvec2<int>*)arg2 pipeline:(id)arg3 renderBlock:(/*^block*/id)arg4 ;
-(void)postRenderBounds:(id)arg1 ;
-(void)renderLabels:(id)arg1 ;
-(void)renderAnnotatedLabels:(id)arg1 ;
-(int)knobsModeForLabelType:(int)arg1 scene:(id)arg2 ;
-(void)dispatchElementLabelHandler:(/*^block*/id)arg1 ;
-(void)p_render:(id)arg1 selector:(SEL)arg2 ;
-(void)postrender:(id)arg1 ;
-(void)primeRenderCaches:(id)arg1 ;
-(void)postGetBounds:(id)arg1 ;
-(void)rayPick:(id)arg1 ;
-(void)getSelectionKnobsPositions:(id)arg1 ;
-(void)getSceneObjectElementsBounds:(id)arg1 ;
-(void)render:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

