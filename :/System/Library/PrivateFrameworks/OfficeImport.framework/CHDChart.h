/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADGraphic.h>
#import <libobjc.A.dylib/OADDrawableContainer.h>

@class EDSheet, CHDPlotArea, CHDView3D, CHDTitle, CHDLegend, EDWorkbook, OADGraphicProperties, CHDDefaultTextProperties, NSMutableArray, NSString;

@interface CHDChart : OADGraphic <OADDrawableContainer> {

	EDSheet* mSheet;
	int mStyleId;
	BOOL mAutoTitleDeleted;
	BOOL mPlotVisibleCellsOnly;
	BOOL mMSGraph;
	BOOL mHasSharedXValues;
	BOOL mDirectionChanged;
	BOOL mHasVisibleSeriesNames;
	int mDisplayBlankCellsAs;
	CHDPlotArea* mPlotArea;
	CHDView3D* mView3D;
	CHDTitle* mTitle;
	CHDLegend* mLegend;
	EDWorkbook* mExternalData;
	OADGraphicProperties* mChartAreaGraphicProperties;
	OADGraphicProperties* mBackWallGraphicProperties;
	OADGraphicProperties* mSideWallGraphicProperties;
	OADGraphicProperties* mFloorGraphicProperties;
	CHDDefaultTextProperties* mDefaultTextProperties;
	int mChartDirection;
	CGRect mLogicalBounds;
	NSMutableArray* mDrawables;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)binaryEffects:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(NSString *)description;
-(id)title;
-(void)setDirection:(int)arg1 ;
-(int)direction;
-(void)removeChild:(id)arg1 ;
-(void)addChild:(id)arg1 ;
-(id)styleMatrix;
-(unsigned long long)childCount;
-(CGRect)logicalBounds;
-(id)childAtIndex:(unsigned long long)arg1 ;
-(id)children;
-(id)workbook;
-(id)mainType;
-(id)plotArea;
-(id)chartAreaGraphicProperties;
-(id)legend;
-(void)setLogicalBounds:(CGRect)arg1 ;
-(void)addChildren:(id)arg1 ;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
-(void)replaceChild:(id)arg1 with:(id)arg2 ;
-(void)setSideWallGraphicProperties:(id)arg1 ;
-(void)setBackWallGraphicProperties:(id)arg1 ;
-(void)setFloorGraphicProperties:(id)arg1 ;
-(void)setMSGraph:(BOOL)arg1 ;
-(void)setLegend:(id)arg1 ;
-(void)setView3D:(id)arg1 ;
-(void)setSheet:(id)arg1 ;
-(void)setStyleId:(int)arg1 ;
-(unsigned long long)defaultFontIndex;
-(BOOL)isBinary;
-(int)defaultLabelPosition;
-(id)defaultThemeFont;
-(id)defaultTextFont;
-(BOOL)isAutoTitleDeleted;
-(BOOL)isPlotVisibleCellsOnly;
-(int)displayBlankAs;
-(id)externalData;
-(id)backWallGraphicProperties;
-(id)sideWallGraphicProperties;
-(id)floorGraphicProperties;
-(id)defaultDataLabelFont;
-(id)defaultSeriesTitleFont;
-(id)defaultFontWithResources:(id)arg1 ;
-(BOOL)isScatterOrBubble;
-(BOOL)hasSharedXValues;
-(void)setHasSharedXValues:(BOOL)arg1 ;
-(unsigned long long)seriesCount;
-(id)processors;
-(id)defaultContentFormat;
-(BOOL)isMSGraph;
-(BOOL)is3D;
-(unsigned long long)categoryCount;
-(void)setVisibleSeriesNames:(BOOL)arg1 ;
-(void)setDirectionChanged:(BOOL)arg1 ;
-(BOOL)hasVisibleSeriesNames;
-(int)styleId;
-(BOOL)isPie;
-(BOOL)isDirectionChanged;
-(void)setChartAreaGraphicProperties:(id)arg1 ;
-(void)setPlotArea:(id)arg1 ;
-(void)setAutoTitleDeleted:(BOOL)arg1 ;
-(void)setPlotVisibleCellsOnly:(BOOL)arg1 ;
-(void)setDisplayBlankAs:(int)arg1 ;
-(id)defaultTextProperties;
-(void)setDefaultTextProperties:(id)arg1 ;
-(id)view3D;
-(void)setExternalData:(id)arg1 ;
-(id)sheet;
@end

