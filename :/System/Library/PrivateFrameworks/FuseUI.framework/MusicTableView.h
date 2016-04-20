/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicBasicTableView.h>

@class NSArray;

@interface MusicTableView : MusicBasicTableView {

	long long _highlightedSectionHeaderViewIndex;
	long long _selectedSectionHeaderViewIndex;
	BOOL _enforcesMinimumLayoutMargin;
	BOOL _trailingSeparatorInsetFollowsLayoutMargin;
	BOOL _shouldTreatContentOffsetChangesAsDeltas;

}

@property (assign,nonatomic) id<MusicTableViewDelegate> delegate; 
@property (assign,nonatomic) BOOL enforcesMinimumLayoutMargin;                            //@synthesize enforcesMinimumLayoutMargin=_enforcesMinimumLayoutMargin - In the implementation block
@property (assign,nonatomic) BOOL trailingSeparatorInsetFollowsLayoutMargin;              //@synthesize trailingSeparatorInsetFollowsLayoutMargin=_trailingSeparatorInsetFollowsLayoutMargin - In the implementation block
@property (nonatomic,readonly) long long indexForSelectedSectionHeader; 
@property (nonatomic,copy,readonly) NSArray * visibleSectionHeaderViews; 
@property (assign,nonatomic) BOOL shouldTreatContentOffsetChangesAsDeltas;                //@synthesize shouldTreatContentOffsetChangesAsDeltas=_shouldTreatContentOffsetChangesAsDeltas - In the implementation block
-(void)layoutSubviews;
-(UIEdgeInsets)layoutMargins;
-(void)layoutMarginsDidChange;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)tintColorDidChange;
-(BOOL)_shouldDrawSeparatorAtBottomOfSection:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)_touchesBegan:(id)arg1 withEvent:(id)arg2 onSelectableHeaderFooterView:(id)arg3 ;
-(void)_touchesCancelled:(id)arg1 withEvent:(id)arg2 onSelectableHeaderFooterView:(id)arg3 ;
-(void)_touchesEnded:(id)arg1 withEvent:(id)arg2 onSelectableHeaderFooterView:(id)arg3 ;
-(void)_touchesMoved:(id)arg1 withEvent:(id)arg2 onSelectableHeaderFooterView:(id)arg3 ;
-(BOOL)shouldTreatContentOffsetChangesAsDeltas;
-(void)setShouldTreatContentOffsetChangesAsDeltas:(BOOL)arg1 ;
-(void)setTrailingSeparatorInsetFollowsLayoutMargin:(BOOL)arg1 ;
-(BOOL)trailingSeparatorInsetFollowsLayoutMargin;
-(void)setEnforcesMinimumLayoutMargin:(BOOL)arg1 ;
-(long long)indexForSelectedSectionHeader;
-(void)deselectHeaderForSection:(long long)arg1 animated:(BOOL)arg2 ;
-(void)selectHeaderForSection:(long long)arg1 animated:(BOOL)arg2 ;
-(NSArray *)visibleSectionHeaderViews;
-(void)_updateRightSeparatorInset;
-(void)_clearHeaderViewSelectionAnimated:(BOOL)arg1 ;
-(long long)_sectionForSelectableHeaderView:(id)arg1 ;
-(void)_clearHeaderViewHighlightAnimated:(BOOL)arg1 ;
-(BOOL)enforcesMinimumLayoutMargin;
@end

