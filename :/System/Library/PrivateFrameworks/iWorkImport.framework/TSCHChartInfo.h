/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:30 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHStyleOwnerCollaborationSupport.h>
#import <iWorkImport/TSCHPropertyMapsGeneratedProtocol.h>
#import <iWorkImport/TSCHStyleOwning.h>
#import <iWorkImport/TSCHUnretainedParent.h>
#import <iWorkImport/TSDMixing.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol TSCHStyleActAlike;
@class TSCHChartModel, TSCHChartType, TSCHLegendModel, TSCHChartMediator, TSPLazyReference, NSMutableArray, NSMutableDictionary, NSString, TSDInfoGeometry, TSCHChartDrawableInfo, NSArray, TSKCustomFormatList, TSCHChartLayoutCache, TSSStylesheet, TSCHChartStylePreset;

@interface TSCHChartInfo : NSObject <TSCHStyleOwnerCollaborationSupport, TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwning, TSCHUnretainedParent, TSDMixing, NSCopying> {

	TSCHChartModel* mModel;
	id<TSCHStyleActAlike> mStyle;
	id<TSCHStyleActAlike> mNonStyle;
	TSCHChartType* mChartType;
	TSCHLegendModel* mLegendModel;
	TSCHChartMediator* mChartMediator;
	TSPLazyReference* mLazyPreset;
	CGRect mInnerChartFrame;
	id<TSCHStyleActAlike> mLegendStyle;
	id<TSCHStyleActAlike> mLegendNonStyle;
	NSMutableArray* mValueAxisStyles;
	NSMutableArray* mCategoryAxisStyles;
	NSMutableArray* mValueAxisNonStyles;
	NSMutableArray* mCategoryAxisNonStyles;
	NSMutableArray* mThemeSeriesStyles;
	NSMutableArray* mPrivateSeriesStyles;
	NSMutableArray* mSeriesNonStyles;
	NSMutableArray* mParagraphStyles;
	NSMutableDictionary* mRefLineNonStylesMap;
	NSMutableDictionary* mRefLineStylesMap;
	id<TSCHStyleActAlike> mThemePresetRefLineStyle;
	CGPoint mPreviewOrigin;
	BOOL mDisplayMessageOnRepCreation;
	NSString* mMessageString;
	double mMessageDuration;
	TSDInfoGeometry* mNonInfoGeometry;
	TSCHChartDrawableInfo* mDrawableInfo;
	BOOL mNeedsCalcEngineDependentUpgrade;
	BOOL mNeedsCalcEngineDependentImport;
	NSMutableDictionary* mStyleViewProxyMap;
	NSArray* mStyleViewProxyParagraphStyleArray;
	unsigned long long mLastSeriesIndex;
	NSString* mLastAppliedFillSetLookupString;
	TSKCustomFormatList* mPasteboardCustomFormatList;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) TSCHChartLayoutCache * sceneAreaLayoutItemCache; 
@property (nonatomic,readonly) BOOL hasSetDefaultLayoutSettings; 
@property (assign,nonatomic) SCD_Struct_TS432 defaultLayoutSettings; 
@property (nonatomic,readonly) TSCHChartDrawableInfo * drawableInfo; 
@property (nonatomic,retain,readonly) TSCHChartType * chartType; 
@property (nonatomic,retain) TSCHChartModel * model; 
@property (nonatomic,retain) TSCHLegendModel * legend; 
@property (nonatomic,retain) TSCHChartMediator * mediator; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) CGPoint previewOrigin; 
@property (nonatomic,readonly) TSSStylesheet * documentStylesheet; 
@property (nonatomic,readonly) TSCHChartStylePreset * preset; 
@property (nonatomic,readonly) BOOL isPhantom; 
@property (nonatomic,readonly) CGSize minimumChartBodySize; 
@property (nonatomic,readonly) int gridDirection; 
@property (nonatomic,readonly) unsigned long long multiDataSetIndex; 
@property (assign,nonatomic) BOOL displayMessageOnRepCreation; 
@property (nonatomic,retain) NSString * informationalMessageString; 
@property (assign,nonatomic) double informationalMessageDuration; 
@property (nonatomic,readonly) BOOL wantsDeferredUpgradeOrImport; 
@property (nonatomic,copy) NSString * lastAppliedFillSetLookupString; 
+(id)p_stylesheetFromOrderedArrayOfSources:(id)arg1 ;
+(unsigned char)styleOwnerPathType;
+(id)paragraphStyleIndexProperties;
+(id)genericParagraphStyleIndexProperties;
+(double)beginValueForStackedBarSeries:(id)arg1 index:(unsigned long long)arg2 unitSpaceIntercept:(double)arg3 relativelyPositive:(BOOL)arg4 valueAxis:(id)arg5 ;
+(id)p_currentThreadSceneAreaLayoutCache;
+(void)setCurrentThreadSceneAreaLayoutCache:(id)arg1 ;
+(id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2 forStyleOwner:(id)arg3 ;
+(int)adjustNumberFormatType:(int)arg1 forChartModel:(id)arg2 gridValueType:(int)arg3 hasCustomFormat:(BOOL)arg4 ;
+(BOOL)groupedShadowsForChartModel:(id)arg1 ;
+(id)paragraphStylePropertiesChartsUse;
+(id)specificPropertiesThatCanContainCustomDateFormats;
+(id)specificPropertiesThatCanContainCustomNumberFormats;
+(id)chartStyleIdentifierForRoleIndex:(unsigned long long)arg1 ;
+(id)legendStyleIdentifierForRoleIndex:(unsigned long long)arg1 ;
+(id)seriesStyleIdentifierForRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2 ;
+(id)paragraphStyleIdentifierForRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2 ;
+(id)referenceLineStyleIdentifierForRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2 ;
+(id)p_chartTypeTo3DScalePropertyPairs;
+(id)propertiesThatInvalidateModel;
+(id)adjustNumberFormatTypeValue:(id)arg1 forChartModel:(id)arg2 gridValueType:(int)arg3 hasCustomFormat:(BOOL)arg4 ;
+(id)specificPropertiesThatCanContainCustomFormats;
+(id)specificNumberFormatTypeProperties;
+(Class)classForChartStyle;
+(Class)classForChartNonstyle;
+(Class)classForSeriesStyle;
+(Class)classForSeriesNonstyle;
+(Class)classForAxisStyle;
+(Class)classForAxisNonstyle;
+(Class)classForLegendStyle;
+(Class)classForLegendNonstyle;
+(id)valueAxisStyleIdentifierForRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2 ;
+(id)categoryAxisStyleIdentifierForRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2 ;
+(id)scale3DPropertyToConstantDepthInfoChartScaleMappingsWithBarShape:(int)arg1 conversionBlock:(/*^block*/id)arg2 ;
-(id)viewOverrideMapForStyleOwner:(id)arg1 ;
-(void)p_invalidateCachesInLayouts:(id)arg1 ;
-(void)addViewStyleProxyForMutationTuples:(id)arg1 layouts:(id)arg2 ;
-(void)setViewStyleProxyParagraphStyleArray:(id)arg1 layouts:(id)arg2 ;
-(void)clearViewStyleProxyForLayouts:(id)arg1 ;
-(void)loadFromUnityArchive:(const ChartArchive*)arg1 unarchiver:(id)arg2 persistentChartInfo:(id)arg3 ;
-(void)saveToUnityArchive:(ChartArchive*)arg1 persistentChartInfo:(id)arg2 archiver:(id)arg3 ;
-(unsigned long long)p_paragraphStyleIndexOfFirstCategoryAxisParagraphStyle;
-(id)p_copyStyleArray:(id)arg1 inContext:(id)arg2 withMapper:(id)arg3 ;
-(id)p_copyNonStyleArray:(id)arg1 inContext:(id)arg2 ;
-(void)p_setDrawableInfo:(id)arg1 ;
-(void)p_duplicatePersistableMembersOfCopiedChartUsingContext:(id)arg1 ;
-(id)styleOwnerRefForSemanticTag:(id)arg1 ;
-(id)styleOwnerPathForStyleOwner:(id)arg1 ;
-(id)styleOwnerForPath:(id)arg1 ;
-(id)styleOwnerPathForRef:(id)arg1 ;
-(id)styleOwnerPathForSemanticTag:(id)arg1 ;
-(id)styleOwnerRefForStyleOwnerPath:(id)arg1 ;
-(id)styleOwnerRefForStyleOwner:(id)arg1 ;
-(id)allStyleOwners;
-(id)styleOwnerForRef:(id)arg1 ;
-(unsigned long long)nonStyleIndexForStyleOwnerRef:(id)arg1 ;
-(id)g_genericToDefaultPropertyMap;
-(id)g_operationPropertyNameForGenericProperty:(int)arg1 ;
-(id)clamped3DRotationPropertyObject;
-(void)loadFromPreUFFArchive:(const ChartInfoArchive*)arg1 unarchiver:(id)arg2 persistentChartInfo:(id)arg3 ;
-(id)chartStyleState;
-(id)tuplesToApplyState:(id)arg1 ;
-(BOOL)isSingleCircleSpecialCaseOutSeries:(id*)arg1 ;
-(BOOL)isSingleCircleSpecialCase;
-(float)maximumExplosionOfAllSeriesExcept:(id)arg1 ;
-(float)minFrameDimensionForRadius:(float)arg1 withMaxExplosion:(float)arg2 ;
-(float)radiusForFrame:(CGRect)arg1 withMaxExplosion:(float)arg2 ;
-(float)maximumExplosion;
-(TSCHChartLayoutCache *)sceneAreaLayoutItemCache;
-(void)debugLayoutCache;
-(BOOL)hasSetDefaultLayoutSettings;
-(void)setDefaultLayoutSettings:(SCD_Struct_TS432)arg1 ;
-(SCD_Struct_TS432)defaultLayoutSettings;
-(id)create3DSceneWithLayoutSettings:(const SCD_Struct_TS432*)arg1 ;
-(void)willModify;
-(id)copyWithContext:(id)arg1 ;
-(id)objectValueForProperty:(int)arg1 ;
-(int)intValueForProperty:(int)arg1 defaultValue:(int)arg2 ;
-(id)chartInfo;
-(id)paragraphStyleAtIndex:(unsigned long long)arg1 ;
-(void)clearParent;
-(int)defaultPropertyForGeneric:(int)arg1 ;
-(id)p_genericToDefaultPropertyMap;
-(TSCHChartDrawableInfo *)drawableInfo;
-(BOOL)referenceLineStyleIsPrivate:(id)arg1 ;
-(int)specificPropertyForGeneric:(int)arg1 ;
-(BOOL)hasIntValueForProperty:(int)arg1 value:(int*)arg2 ;
-(BOOL)hasFloatValueForProperty:(int)arg1 value:(float*)arg2 ;
-(BOOL)hasObjectValueForProperty:(int)arg1 value:(id*)arg2 ;
-(id)operationPropertyNameFromGenericProperty:(int)arg1 ;
-(id)nonstyle;
-(id)swapTuplesForMutations:(id)arg1 forImport:(BOOL)arg2 ;
-(id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2 ;
-(float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2 ;
-(TSSStylesheet *)documentStylesheet;
-(id)applyStyleSwapTuples:(id)arg1 ;
-(BOOL)gridEqualToDefaultGrid;
-(void)setChartType:(id)arg1 andSetLegendDefaults:(BOOL)arg2 gridRowIds:(id)arg3 gridColumnIds:(id)arg4 gridEqualToDefaultGrid:(BOOL)arg5 ;
-(void)setGeometry:(id)arg1 omitLegendResize:(BOOL)arg2 ;
-(Class)repClass;
-(id)applyStyleSwapTuple:(id)arg1 ;
-(id)styleOwnerFromSwapType:(int)arg1 andIndex:(unsigned long long)arg2 ;
-(unsigned long long)multiDataSetIndex;
-(TSCHChartMediator *)mediator;
-(id)categoryAxisStyleAtIndex:(unsigned long long)arg1 ;
-(id)valueAxisStyleAtIndex:(unsigned long long)arg1 ;
-(id)categoryAxisNonstyleAtIndex:(unsigned long long)arg1 ;
-(id)valueAxisNonstyleAtIndex:(unsigned long long)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1 ;
-(id)seriesStyleForSeriesIndex:(unsigned long long)arg1 ;
-(id)seriesNonstyleForSeriesIndex:(unsigned long long)arg1 ;
-(id)referenceLineNonStyleItemsForAxisID:(id)arg1 ;
-(id)referenceLineStyleForAxisID:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)modelDidInvalidateWithDetails:(id)arg1 ;
-(BOOL)seriesStyleIsPrivate:(id)arg1 ;
-(unsigned long long)numberOfThemeSeriesStyles;
-(CGSize)minimumChartBodySize;
-(id)allStylesAndNonStylesThatCanHaveCustomNumberFormats;
-(id)legendStyle;
-(id)paragraphStyles;
-(id)p_swapTuplesForMutations:(id)arg1 ;
-(void)setDefaultLegendPositionIfNeededWithOptionalLayout:(id)arg1 ;
-(double)p_titleAccommodationWithLegendSize:(CGSize)arg1 optionalLayout:(id)arg2 ;
-(double)p_dataSetNameAccomodationWithOptionalLayout:(id)arg1 ;
-(id)p_copyStyleAndNonStyleArray:(id)arg1 withZone:(NSZone*)arg2 context:(id)arg3 ;
-(id)p_init;
-(id)p_copyStyleAndNonStyleMap:(id)arg1 withZone:(NSZone*)arg2 context:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 context:(id)arg2 ;
-(void)setGeometry:(id)arg1 omitLegendResize:(BOOL)arg2 clearObjectPlaceholderFlag:(BOOL)arg3 ;
-(CGRect)resizedLegendFrame:(CGRect)arg1 oldChartSize:(CGSize)arg2 newChartSize:(CGSize)arg3 ;
-(NSString *)lastAppliedFillSetLookupString;
-(id)p_infoGeometryForGeometry:(id)arg1 isCircumscribing:(BOOL)arg2 ;
-(void)setGeometry:(id)arg1 clearObjectPlaceholderFlag:(BOOL)arg2 ;
-(void)chartTypeDidChangeWithDetails:(id)arg1 ;
-(CGRect)calculateDefaultLegendPositionIfNeededWithOptionalLayout:(id)arg1 ;
-(BOOL)isPhantom;
-(id)newChartStylePresetByExampleWithPresetIndex:(unsigned long long)arg1 withSeriesCount:(unsigned long long)arg2 forTheme:(id)arg3 ;
-(id)referenceLineStyleForAxisID:(id)arg1 atIndex:(unsigned long long)arg2 privateStyleOnly:(BOOL)arg3 ;
-(unsigned long long)p_refLineIndexWithUUID:(id)arg1 nonStyleItems:(id)arg2 ;
-(void)setReferenceLineNonStyleItem:(id)arg1 forAxisID:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setReferenceLineStyle:(id)arg1 forAxisID:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)chartDidInvalidateWithProperties:(id)arg1 ;
-(id)styleForAxis:(id)arg1 ;
-(id)nonStyleForAxis:(id)arg1 ;
-(id)styleOwnerForSelectionPath:(id)arg1 ;
-(int)paragraphStylePropertyForSelectionPath:(id)arg1 ;
-(CGRect)chartBodyBoundsForSageImportWithSageChartType:(BOOL)arg1 ;
-(void)updateAfterPaste;
-(id)initWithChartType:(id)arg1 legendShowing:(id)arg2 chartBodyFrame:(id)arg3 chartAreaFrame:(id)arg4 circumscribingFrame:(id)arg5 legendFrame:(id)arg6 stylePreset:(id)arg7 privateSeriesStyles:(id)arg8 chartNonStyle:(id)arg9 legendNonStyle:(id)arg10 valueAxisNonStyles:(id)arg11 categoryAxisNonStyles:(id)arg12 seriesNonStyles:(id)arg13 refLineNonStylesMap:(id)arg14 refLineStylesMap:(id)arg15 ;
-(id)modelForDataSetIndex:(unsigned long long)arg1 ;
-(void)setMediator:(TSCHChartMediator *)arg1 ;
-(void)setPreviewOrigin:(CGPoint)arg1 ;
-(void)setLastAppliedFillSetIdentifier:(id)arg1 ;
-(int)gridDirection;
-(void)chartMoveToPosition:(CGPoint)arg1 size:(CGSize)arg2 ;
-(id)infoGeometryForVisuallyCenteringOnUnscaledCanvasPoint:(CGPoint)arg1 ;
-(id)infoGeometryForVisiblePositioningInfoGeometry:(id)arg1 ;
-(id)infoGeometryForDesiredPureLayoutGeometry:(id)arg1 ;
-(id)infoGeometryForDesiredCircumscribingGeometry:(id)arg1 ;
-(void)setInfoGeometryByUpdatingLegendGeometryAccommodatedForInitialLayoutGeometry:(id)arg1 ;
-(unsigned long long)addParagraphStyle:(id)arg1 ;
-(id)masterFontNameForInspectors;
-(id)newChartStylePresetByExampleWithPresetIndex:(unsigned long long)arg1 forTheme:(id)arg2 ;
-(id)legendNonStyle;
-(id)seriesStyleForSeries:(id)arg1 ;
-(id)nonStyleForSeries:(id)arg1 ;
-(unsigned long long)valueAxisStyleCount;
-(unsigned long long)categoryAxisStyleCount;
-(void)setValueAxisNonstyle:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setCategoryAxisNonstyle:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setSeriesNonstyle:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setChartNonstyle:(id)arg1 ;
-(id)referenceLineNonStyleForAxisID:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)referenceLineNonStyleForAxisID:(id)arg1 uuid:(id)arg2 outIndex:(unsigned long long*)arg3 ;
-(void)addReferenceLineForAxisID:(id)arg1 nonStyle:(id)arg2 style:(id)arg3 uuid:(id)arg4 ;
-(void)deleteReferenceLineForAxisID:(id)arg1 uuid:(id)arg2 ;
-(void)updateTitlesForExportingModel:(id)arg1 ;
-(double)sageDepthFactorForExport;
-(id)childInfos;
-(BOOL)p_refLineNonStyleMapIsValid;
-(id)p_uuidForRefLineOnAxis:(id)arg1 havingNonStyle:(id)arg2 ;
-(id)stringForSelectionPath:(id)arg1 ;
-(int)stringPropertyForSelectionPath:(id)arg1 ;
-(id)paragraphStyleForSelectionPath:(id)arg1 ;
-(id)scaleAllStrokesInStyle:(id)arg1 byRatio:(double)arg2 ;
-(id)fillsForSeriesAndTheme;
-(BOOL)wantsDeferredUpgradeOrImport;
-(void)performDeferredUpgradeAndImportOperations;
-(CGPoint)previewOrigin;
-(void)setLastAppliedFillSetLookupString:(NSString *)arg1 ;
-(BOOL)displayMessageOnRepCreation;
-(void)setDisplayMessageOnRepCreation:(BOOL)arg1 ;
-(NSString *)informationalMessageString;
-(void)setInformationalMessageString:(NSString *)arg1 ;
-(double)informationalMessageDuration;
-(void)setInformationalMessageDuration:(double)arg1 ;
-(TSCHChartStylePreset *)preset;
-(void)setPreset:(TSCHChartStylePreset *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)style;
-(id)context;
-(TSCHChartModel *)model;
-(TSDInfoGeometry *)geometry;
-(void)setGeometry:(TSDInfoGeometry *)arg1 ;
-(id)valueForProperty:(int)arg1 ;
-(void)setModel:(TSCHChartModel *)arg1 ;
-(TSCHLegendModel *)legend;
-(TSCHChartType *)chartType;
-(id)defaultProperties;
-(void)setLegend:(TSCHLegendModel *)arg1 ;
-(int)elementKind;
-(Class)layoutClass;
@end

