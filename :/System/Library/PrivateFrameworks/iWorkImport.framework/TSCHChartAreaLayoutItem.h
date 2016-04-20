/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:32 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH2DChartAbstractAreaLayoutItem.h>

@class TSCHChartAxisLayoutItem, TSCHChartReferenceLineLabelsLayoutItem;

@interface TSCHChartAreaLayoutItem : TSCH2DChartAbstractAreaLayoutItem {

	TSCHChartAxisLayoutItem* mTopHorizontalAxis;
	TSCHChartAxisLayoutItem* mBottomHorizontalAxis;
	TSCHChartAxisLayoutItem* mLeftVerticalAxis;
	TSCHChartAxisLayoutItem* mRightVerticalAxis;
	unsigned long long mRelayoutDepth;
	BOOL mInOutwardLayout;

}

@property (nonatomic,readonly) TSCHChartReferenceLineLabelsLayoutItem * rightRefLineLabels; 
@property (nonatomic,readonly) TSCHChartReferenceLineLabelsLayoutItem * topRefLineLabels; 
-(void)protected_iterateHitChartElements:(CGPoint)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)p_layoutInward;
-(void)p_layoutOutward;
-(CGRect)titleFrame;
-(TSCHChartReferenceLineLabelsLayoutItem *)rightRefLineLabels;
-(TSCHChartReferenceLineLabelsLayoutItem *)topRefLineLabels;
-(id)renderersWithRep:(id)arg1 ;
-(void)buildSubTree;
-(CGRect)i_currentBufferAreaUnitRect;
-(double)p_dataSetNameLabelPadding;
-(Class)p_axisLayoutItemClassForAxisID:(id)arg1 ;
-(void)p_arrangeSizedChildren;
-(void)p_updateMinHitSizes;
-(void)dealloc;
@end

