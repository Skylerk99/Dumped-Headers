/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:35 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHUnretainedParent.h>

@class TSCHChartType, NSArray;

@interface TSCHChartFeature : NSObject <TSCHUnretainedParent> {

	TSCHChartType* mChartType;
	NSArray* mValueAxisIDs;
	NSArray* mCategoryAxisIDs;

}

@property (nonatomic,retain,readonly) NSArray * valueAxisIDs; 
@property (nonatomic,retain,readonly) NSArray * categoryAxisIDs; 
-(int)deprecated3DBevelEdgesSpecificProperty;
-(int)deprecated3DShadowSpecificProperty;
-(void)clearParent;
-(id)valueLabelPositioner;
-(id)categoryLabelPositioner;
-(BOOL)supportsSeriesLabels;
-(BOOL)supportsReferenceLines;
-(id)supportedAxisScales;
-(unsigned long long)maxCellsToCheckForGridValueType;
-(Class)stageClass;
-(NSArray *)valueAxisIDs;
-(unsigned long long)styleIndexForAxisID:(id)arg1 ;
-(Class)valueAxisClassForID:(id)arg1 scale:(int)arg2 ;
-(NSArray *)categoryAxisIDs;
-(BOOL)supportsMultipleSeriesTypes;
-(BOOL)requiresYAxisOrdinal;
-(id)defaultDataFileName;
-(double)sageMaxDepthRatio;
-(double)maxDepthRatio;
-(id)genericToSpecificPropertyMap;
-(BOOL)supportsValueLabels;
-(int)stackingSignRule;
-(id)initWithChartType:(id)arg1 ;
-(Class)presetImagerClass;
-(id)supportedSeriesTypes;
-(BOOL)supportsBorderFrame;
-(BOOL)supportsEditingForAxisID:(id)arg1 ;
-(BOOL)reverseSingleColumnLegendOrder;
-(BOOL)drawValueLabelsForZero;
-(BOOL)supportsGroupedShadows;
-(BOOL)supportsEditing;
-(BOOL)supportsBackgroundFill;
-(BOOL)supportsReverseChunking;
-(BOOL)supportsTrendLines;
-(BOOL)supportsErrorBars;
-(BOOL)supportsElementSeriesNames;
-(BOOL)supportsLabelExplosion;
-(BOOL)supportsPercentNumberFormatting;
-(BOOL)supportsSymbolOverhang;
-(BOOL)supportsElementChunking;
-(BOOL)supportsCategoryAxisMinorTickmarks;
-(BOOL)supportsCategoryAxisSeriesNames;
-(BOOL)supportsConnectingLines;
-(BOOL)supportsMoreThanOneLiveCategory;
-(BOOL)supportsCategoryLabelsInChartRangeEditor;
-(BOOL)supportsSharedAndSeparateX;
-(BOOL)supportsBubbleOptions;
-(unsigned long long)gridOffsetToSeriesForScatterFormat:(int)arg1 ;
-(int)representativeGridValueAxisType;
-(void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2 ;
-(BOOL)supportsShowLabelsInFrontOption;
-(id)filteredStyleOwnersFromStyleOwners:(id)arg1 ;
-(BOOL)supportsIndividualShadowRendering;
-(int)labelOrientation;
-(BOOL)supportsColumnShape;
-(id)columnShapeUIName;
-(id)initialSceneWithChartInfo:(id)arg1 layoutSettings:(SCD_Struct_TS432)arg2 ;
-(BOOL)supportsInterSetDepthGap;
-(void)p_initializeAxisIDs;
-(Class)p_selectAxisClassForScale:(int)arg1 linearClass:(Class)arg2 logClass:(Class)arg3 percentClass:(Class)arg4 ;
-(void)dealloc;
-(id)init;
-(BOOL)isHorizontal;
-(BOOL)isPie;
@end

