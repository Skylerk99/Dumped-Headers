/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:29 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DSceneObjectDelegator.h>
#import <iWorkImport/TSCH3DSceneDelegate.h>
#import <iWorkImport/TSCH3DChartAllSceneObjectDelegate.h>

@class TSCH3DGetBoundsPipeline, TSCH3DLabelsRendererTransforms, TSUMutablePointerSet, NSString;

@interface TSCH3DChartBoundsLayoutSceneDelegate : NSObject <TSCH3DSceneObjectDelegator, TSCH3DSceneDelegate, TSCH3DChartAllSceneObjectDelegate> {

	TSCH3DGetBoundsPipeline* mPipeline;
	TSCH3DLabelsRendererTransforms* mTransforms;
	map<TSCH3D::SceneObjectSharedPointer, TSCH3D::ActiveLabelsTypeBounds, std::__1::less<TSCH3D::SceneObjectSharedPointer>, std::__1::allocator<std::__1::pair<const TSCH3D::SceneObjectSharedPointer, TSCH3D::ActiveLabelsTypeBounds> > >* mSceneObjectLabelsBounds;
	ActiveLabelsTypeBounds* mActiveBounds;
	BOOL mLabelsHaveCache;
	BOOL mLabelsDidOverride;
	TSUMutablePointerSet* mDebugCachedSceneObjects;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sceneDelegate;
-(BOOL)willSubmitLabelType:(int)arg1 boundsIndex:(long long)arg2 alignment:(unsigned long long)arg3 elementIndex:(unsigned long long)arg4 forSceneObject:(id)arg5 ;
-(void)setOffset:(const tvec3<float>*)arg1 labelType:(int)arg2 boundsIndex:(long long)arg3 forSceneObject:(id)arg4 ;
-(void)didGenerateShaderEffects:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 ;
-(BOOL)willSubmitSceneObject:(id)arg1 pipeline:(id)arg2 ;
-(void)didSubmitSceneObject:(id)arg1 pipeline:(id)arg2 ;
-(void)labelsResourcesSessionWillBeginForSceneObject:(id)arg1 pipeline:(id)arg2 ;
-(void)labelsResourcesSessionWillEndForSceneObject:(id)arg1 pipeline:(id)arg2 ;
-(BOOL)willSubmitLabelForSceneObject:(id)arg1 labelRenderInfo:(const ChartLabelsContainingLabelRenderInfo*)arg2 ;
-(void)updateExternalLabelAttribute:(ExternalLabelAttributeRef)arg1 sceneObject:(id)arg2 labelRenderInfo:(const ChartLabelsContainingLabelRenderInfo*)arg3 ;
-(void)invalidateLabelsBoundsForSceneObjectClass:(Class)arg1 boundsIndex:(long long)arg2 ;
-(id)interestedClasses;
-(void)p_extendProjectedBoundsForCachedLabelBounds:(const CachedLabelBounds*)arg1 offset:(const tvec3<float>*)arg2 ;
-(void)p_addAllActiveLabelsBounds;
-(id)makeDelegateWithScene:(id)arg1 ;
-(id)makeDelegateWithSceneObject:(id)arg1 scene:(id)arg2 ;
-(void)willRunForScene:(id)arg1 pipeline:(id)arg2 ;
-(void)didRunForScene:(id)arg1 pipeline:(id)arg2 ;
-(BOOL)willBeginProcessingSceneObject:(id)arg1 ;
-(void)didEndProcessingSceneObject:(id)arg1 ;
-(BOOL)renderPassDelayDisallowedForSceneObject:(id)arg1 pipeline:(id)arg2 ;
-(ElementRenderPass)renderPassForSceneObject:(id)arg1 ;
-(BOOL)willProcessSeries:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 ;
-(void)didGenerateShaderEffectsForSeriesAtIndex:(const tvec2<int>*)arg1 effects:(id)arg2 sceneObject:(id)arg3 pipeline:(id)arg4 ;
-(BOOL)willProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 ;
-(void)didProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 ;
-(BOOL)willProcessElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(ElementRenderPass)renderPassForElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(BOOL)willUpdateElementEffectsStatesForElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(void)didTransformElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(BOOL)willRenderElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(BOOL)willSubmitElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end

