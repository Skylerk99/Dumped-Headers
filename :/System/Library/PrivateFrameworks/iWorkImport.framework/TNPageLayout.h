/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:49 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPPageLayout.h>
#import <iWorkImport/TSWPLayoutParent.h>
#import <iWorkImport/TSWPColumnMetrics.h>
#import <iWorkImport/TSWPStorageObserver.h>

@class TNPageController, TNPageContentLayout, TNSheet, TSWPPadding;

@interface TNPageLayout : TSWPPageLayout <TSWPLayoutParent, TSWPColumnMetrics, TSWPStorageObserver> {

	BOOL mIsChildLayoutsValid;
	SCD_Struct_TS315 mPageCoordinate;
	TNPageController* mPageController;
	TNPageContentLayout* mContentLayout;
	BOOL mIsPlaceholder;
	TNSheet* mSheet;

}

@property (assign) SCD_Struct_TS315 pageCoordinate; 
@property (assign) TNPageController * pageController; 
@property (readonly) CGRect pageBounds; 
@property (readonly) CGRect contentFrame; 
@property (retain) TNPageContentLayout * contentLayout; 
@property (getter=isPlaceholder) BOOL placeholder; 
@property (retain) TNSheet * sheet; 
@property (nonatomic,readonly) TSWPPadding * layoutMargins; 
@property (nonatomic,readonly) unsigned long long columnCount; 
@property (nonatomic,readonly) BOOL alwaysStartsNewTarget; 
@property (nonatomic,readonly) BOOL shrinkTextToFit; 
@property (nonatomic,readonly) BOOL columnsAreLeftToRight; 
@property (nonatomic,readonly) double textScaleFactor; 
+(id)pageLayoutWithPageController:(id)arg1 pageCoordinate:(SCD_Struct_TS315)arg2 ;
-(Class)repClassOverride;
-(void)invalidateSize;
-(id)computeLayoutGeometry;
-(void)updateChildrenFromInfo;
-(id)dependentLayouts;
-(void)parentDidChange;
-(void)willBeAddedToLayoutController:(id)arg1 ;
-(void)willBeRemovedFromLayoutController:(id)arg1 ;
-(BOOL)textIsVertical;
-(CGSize)adjustedInsetsForTarget:(id)arg1 ;
-(double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double*)arg4 outGap:(double*)arg5 ;
-(BOOL)alwaysStartsNewTarget;
-(BOOL)shrinkTextToFit;
-(BOOL)columnsAreLeftToRight;
-(double)textScaleFactor;
-(unsigned)autosizeFlagsForTextLayout:(id)arg1 ;
-(int)verticalAlignmentForTextLayout:(id)arg1 ;
-(void)invalidateForAutosizingTextLayout:(id)arg1 ;
-(CGRect)nonAutosizedFrameForTextLayout:(id)arg1 ;
-(CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(CGSize)arg2 ;
-(id)dependentsOfTextLayout:(id)arg1 ;
-(Class)repClassForTextLayout:(id)arg1 ;
-(void)storage:(id)arg1 didChangeRange:(NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4 ;
-(id)headerFooterProvider;
-(CGRect)bodyRect;
-(id)initWithPageController:(id)arg1 pageCoordinate:(SCD_Struct_TS315)arg2 ;
-(void)setPageCoordinate:(SCD_Struct_TS315)arg1 ;
-(SCD_Struct_TS315)pageCoordinate;
-(TNPageContentLayout *)contentLayout;
-(id)p_pageInfo;
-(void)performBlockForEachHeaderFooterLayout:(/*^block*/id)arg1 ;
-(BOOL)containsLayoutForInfo:(id)arg1 ;
-(void)setContentLayout:(TNPageContentLayout *)arg1 ;
-(void)dealloc;
-(id)description;
-(TSWPPadding *)layoutMargins;
-(void)setPlaceholder:(BOOL)arg1 ;
-(unsigned long long)pageCount;
-(unsigned long long)columnCount;
-(TNPageController *)pageController;
-(void)setPageController:(TNPageController *)arg1 ;
-(unsigned long long)pageNumber;
-(CGRect)pageBounds;
-(void)setChildren:(id)arg1 ;
-(void)addChild:(id)arg1 ;
-(void)setSheet:(TNSheet *)arg1 ;
-(TNSheet *)sheet;
-(BOOL)isPlaceholder;
-(CGRect)contentFrame;
@end

