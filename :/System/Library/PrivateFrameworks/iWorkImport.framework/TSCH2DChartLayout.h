/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:31 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartLayout.h>

@class TSCHChartRootLayoutItem, NSValue, NSDictionary;

@interface TSCH2DChartLayout : TSCHChartLayout {

	TSCHChartRootLayoutItem* mLayoutTreeRoot;
	CGSize mLastChartBodySize;
	CGSize mStartingSize;
	CGRect mStartingLegendInnerFrame;
	CGRect mStartingChartInnerFrame;
	NSValue* mCachedOriginRelativeToChartAreaFrame;

}

@property (nonatomic,copy) NSDictionary * seriesIndexedPieWedgeExplosions; 
@property (readonly) TSCHChartRootLayoutItem * p_layoutTree; 
+(id)propertiesThatInvalidateLayout;
-(id)subselectionKnobPositionsForSelection:(id)arg1 ;
-(void)layoutForChartAreaSize:(CGSize)arg1 ;
-(CGRect)chartBodyFrame;
-(void)setLegendSize:(CGSize)arg1 ;
-(CGRect)chartAreaFrame;
-(CGRect)legendFrame;
-(CGRect)outerLayoutFrame;
-(void)layoutForCircumscribingSize:(CGSize)arg1 ;
-(void)setLayoutSettings:(SCD_Struct_TS432)arg1 ;
-(CGRect)titleFrame;
-(id)initWithChartInfo:(id)arg1 ;
-(void)layoutForChartBodySize:(CGSize)arg1 ;
-(CGRect)boundsForResize;
-(void)layoutForResizingSize:(CGSize)arg1 ;
-(id)renderersWithRep:(id)arg1 ;
-(CGRect)outerShadowFrame;
-(TSCHChartRootLayoutItem *)p_layoutTree;
-(CGRect)legendModelGeometryFrame;
-(CGPoint)p_cachedOriginRelativeToChartAreaFrame;
-(void)setLegendModelGeometryFrame:(CGRect)arg1 ;
-(void)p_ensureValidForInwardLayout;
-(void)p_layoutNowForCircumscribingSize:(CGSize)arg1 ;
-(void)p_layoutNowForChartAreaSize:(CGSize)arg1 ;
-(void)p_layoutNowForChartBodySize:(CGSize)arg1 ;
-(void)beginDynamicOperation;
-(void)endDynamicOperation;
-(NSDictionary *)seriesIndexedPieWedgeExplosions;
-(void)setSeriesIndexedPieWedgeExplosions:(NSDictionary *)arg1 ;
-(unsigned long long)dataSetIndex;
-(void)setDataSetIndex:(unsigned long long)arg1 ;
-(id)hitChartElements:(CGPoint)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)subselectionHaloPositionsForSelections:(id)arg1 ;
-(CGPathRef)newDragAndDropHighlightPathForSelection:(id)arg1 ;
-(CGRect)legendDrawingFrame;
-(void)invalidateCachedOriginRelativeToChartAreaFrame;
-(CGRect)legendGeometryFrame;
-(void)setLegendGeometryFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(id)model;
@end

