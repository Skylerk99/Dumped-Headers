/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartGetProjectedBoundsPipeline.h>

@class TSCH3DGetBoundsProjector;

@interface TSCH3DChartCacheableGetProjectedBoundsPipeline : TSCH3DChartGetProjectedBoundsPipeline {

	BOOL mUseIndividualBounds;
	BOOL mLayoutBoundsValid;
	box<glm::detail::tvec3<float> > mShadowsLayout3DBounds;
	box<glm::detail::tvec3<float> > mLayout3DBounds;
	box<glm::detail::tvec3<float> > mBodyLayout3DBounds;
	box<glm::detail::tvec3<float> > mConstantDepthBodyLayout3DBounds;
	TSCH3DGetBoundsProjector* mProjector;

}

@property (assign,nonatomic) BOOL useIndividualBounds; 
+(BOOL)includesDepthForUnitScaleForScene:(id)arg1 ;
+(void)setIncludesDepthForUnitScale:(BOOL)arg1 forScene:(id)arg2 ;
-(Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1 ;
-(id)updatedConstantDepthSceneFromScene:(id)arg1 ;
-(box<glm::detail::tvec3<float> >)boundsFromObjectBoundsOfType:(int)arg1 ;
-(void)calculateLayoutBounds;
-(void)calculateBounds;
-(void)updateLayoutBounds;
-(void)updateRenderBounds;
-(void)calculateLayoutLabelsBounds;
-(BOOL)useIndividualBounds;
-(void)invalidateCachedBounds;
-(void)setUseIndividualBounds:(BOOL)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(void)dealloc;
-(void)updateBounds;
@end

