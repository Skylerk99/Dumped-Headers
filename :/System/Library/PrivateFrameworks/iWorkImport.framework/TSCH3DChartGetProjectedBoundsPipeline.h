/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DGetBoundsPipeline.h>

@class TSCH3DCamera;

@interface TSCH3DChartGetProjectedBoundsPipeline : TSCH3DGetBoundsPipeline {

	box<glm::detail::tvec2<float> > mLayoutInPage;
	box<glm::detail::tvec2<float> > mBodyLayoutInPage;
	box<glm::detail::tvec2<float> > mContainingViewport;
	ChartProjectedBoundsSpaces mSpaces;
	TSCH3DCamera* mOriginalCamera;
	ChartScenePropertyAccessor* mOriginalSceneAccessor;
	box<glm::detail::tvec3<float> > mShadowsLayoutBounds;
	box<glm::detail::tvec3<float> > mLayoutBounds;
	box<glm::detail::tvec3<float> > mConstantDepthBodyLayoutBounds;
	box<glm::detail::tvec3<float> > mBodyLayoutBounds;
	box<glm::detail::tvec3<float> > mLabelsLayoutBounds;
	box<glm::detail::tvec3<float> > mChartBounds;
	box<glm::detail::tvec3<float> > mOrientBounds;
	box<glm::detail::tvec3<float> > mDrawingBounds;
	box<glm::detail::tvec3<float> > mLabelsBounds;
	BOOL mEnableScaledDepth;
	int mLabelsMode;

}

@property (nonatomic,readonly) const ChartProjectedBoundsSpaces* spaces; 
@property (assign,nonatomic) box<glm::detail::tvec2<float> > layoutInPage; 
@property (assign,nonatomic) box<glm::detail::tvec2<float> > bodyLayoutInPage; 
@property (assign,nonatomic) box<glm::detail::tvec2<float> > containingViewport; 
@property (assign,nonatomic) BOOL enableScaledDepth; 
@property (assign,nonatomic) int labelsMode; 
-(Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1 ;
-(id)updatedConstantDepthSceneFromScene:(id)arg1 ;
-(box<glm::detail::tvec3<float> >)boundsFromObjectBoundsOfType:(int)arg1 ;
-(id)drawingBoundsSceneObjectClasses;
-(id)labelsSceneObjectClasses;
-(id)chartSceneObjectClasses;
-(int)p_depthBoundsTypes;
-(box<glm::detail::tvec3<float> >)getBoundsFromObjectBoundsForScene:(id)arg1 boundsType:(int)arg2 ;
-(void)calculateLayoutBoundsSkippingLayoutSceneBounds:(BOOL)arg1 ;
-(void)calculateLayoutBounds;
-(BOOL)p_excludesLabels;
-(void)calculateLabelsBounds;
-(BOOL)p_updatesLabelsOnly;
-(void)calculateBounds;
-(void)calculateLabelsBoundsIfNecssary;
-(void)calculateBoundsIfNecessary;
-(void)updateLayoutBounds;
-(void)updateLayoutBoundsIfNecessary;
-(void)updateRenderBounds;
-(box<glm::detail::tvec3<float> >)p_extendLabelsBoundsToBounds:(const box<glm::detail::tvec3<float> >*)arg1 ;
-(void)calculateLayoutLabelsBounds;
-(const ChartProjectedBoundsSpaces*)spaces;
-(box<glm::detail::tvec2<float> >)layoutInPage;
-(void)setLayoutInPage:(box<glm::detail::tvec2<float> >)arg1 ;
-(box<glm::detail::tvec2<float> >)bodyLayoutInPage;
-(void)setBodyLayoutInPage:(box<glm::detail::tvec2<float> >)arg1 ;
-(box<glm::detail::tvec2<float> >)containingViewport;
-(void)setContainingViewport:(box<glm::detail::tvec2<float> >)arg1 ;
-(BOOL)enableScaledDepth;
-(void)setEnableScaledDepth:(BOOL)arg1 ;
-(int)labelsMode;
-(void)setLabelsMode:(int)arg1 ;
-(void)dealloc;
-(BOOL)run;
-(void)updateBounds;
@end

