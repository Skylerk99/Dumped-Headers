/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:38 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDContainerLayout.h>
#import <iWorkImport/TSDWrappableParent.h>

@class TSDLayoutGeometry, TSUBezierPath;

@interface TSDGroupLayout : TSDContainerLayout <TSDWrappableParent> {

	TSDLayoutGeometry* mDynamicLayoutGeometry;
	CGRect mBoundsForStandardKnobs;
	TSUBezierPath* mCachedWrapPath;
	TSUBezierPath* mCachedExternalWrapPath;

}
-(void)beginDynamicOperation;
-(void)endDynamicOperation;
-(void)invalidateExteriorWrap;
-(id)layoutGeometryFromInfo;
-(id)computeLayoutGeometry;
-(void)processChangedProperty:(int)arg1 ;
-(CGRect)frameForCulling;
-(id)visibleGeometries;
-(id)i_computeWrapPath;
-(CGRect)boundsForStandardKnobs;
-(id)computeInfoGeometryDuringResize;
-(BOOL)supportsParentRotation;
-(CGRect)alignmentFrame;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(id)i_wrapPath;
-(void)dragBy:(CGPoint)arg1 ;
-(void)setDynamicGeometry:(id)arg1 ;
-(id)additionalDependenciesForChildLayout:(id)arg1 ;
-(BOOL)resizeMayChangeAspectRatio;
-(id)reliedOnLayouts;
-(id)i_externalWrapPath;
-(CGRect)rectInRootForPresentingAnnotationPopoverForSelectionPath:(id)arg1 ;
-(BOOL)allowsConnections;
-(BOOL)providesGuidesForChildLayouts;
-(BOOL)supportsRotation;
-(id)layoutsForProvidingGuidesForChildLayouts;
-(BOOL)supportsInspectorPositioning;
-(BOOL)supportsFlipping;
-(void)p_createDynamicCopies;
-(void)p_destroyDynamicCopies;
-(void)p_invalidateParentForWrap;
-(void)p_invalidateDescendentWrapPaths;
-(id)descendentWrappables;
-(id)p_childWrapPathsFrom:(id)arg1 ;
-(void)wrappableChildInvalidated;
-(BOOL)isDraggable;
-(CGRect)clipRect;
-(void)dealloc;
-(void)invalidate;
-(CGSize)minimumSize;
-(void)setGeometry:(id)arg1 ;
-(BOOL)canFlip;
@end

