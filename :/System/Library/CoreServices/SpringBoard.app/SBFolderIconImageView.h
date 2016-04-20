/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBIconImageView.h>
#import <SpringBoard/SBFolderIconObserver.h>
#import <SpringBoard/SBIconBlurryBackgroundViewObserver.h>

@class SBFolderIconBackgroundView, UIView, _SBIconGridWrapperView, NSMutableArray, SBFloatyFolderView, NSString;

@interface SBFolderIconImageView : SBIconImageView <SBFolderIconObserver, SBIconBlurryBackgroundViewObserver> {

	SBFolderIconBackgroundView* _backgroundView;
	UIView* _accessibilityBackgroundView;
	UIView* _pageGridContainer;
	_SBIconGridWrapperView* _leftWrapperView;
	_SBIconGridWrapperView* _rightWrapperView;
	NSMutableArray* _pageElements;
	unsigned long long _currentPageIndex;
	SBFloatyFolderView* _crossfadeFolderView;
	UIView* _crossfadeScalingView;
	BOOL _animating;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)folderIcon:(id)arg1 didUpdateGridImage:(id)arg2 forListIndex:(unsigned long long)arg3 forContainedIconImageUpdate:(id)arg4 ;
-(Class)_iconGridImageClass;
-(CGRect)frameForMiniIconAtIndex:(unsigned long long)arg1 ;
-(void)scrollToFirstGapAnimated:(BOOL)arg1 ;
-(id)_folderIcon;
-(unsigned long long)firstVisibleMiniIconIndex;
-(void)_updateRasterization;
-(void)_updateAccessibilityBackgroundContrast;
-(void)_setPageElements:(id)arg1 ;
-(void)scrollToTopOfFirstPageAnimated:(BOOL)arg1 ;
-(void)setBackgroundAndIconGridImageAlpha:(double)arg1 ;
-(void)setBackgroundScale:(double)arg1 ;
-(CGSize)_interiorGridSizeClipRect;
-(CGSize)_interPageSpacing;
-(void)scrollToTopOfPage:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_performScrollingMovingToLeft:(BOOL)arg1 movingToRight:(BOOL)arg2 targetPageIndex:(unsigned long long)arg3 targetPageScrollRow:(unsigned long long)arg4 newLeftElement:(id)arg5 newRightElement:(id)arg6 animated:(BOOL)arg7 ;
-(id)_currentPageElement;
-(unsigned long long)visibleMiniIconCount;
-(CGRect)frameForMiniIconAtIndexPath:(id)arg1 ;
-(void)setWallpaperRelativeCenter:(CGPoint)arg1 ;
-(void)setFloatyFolderCrossfadeFraction:(double)arg1 ;
-(void)_showLeftMinigrid;
-(void)_showRightMinigrid;
-(void)updateImageAnimated:(BOOL)arg1 ;
-(void)setIcon:(id)arg1 location:(int)arg2 animated:(BOOL)arg3 ;
-(void)_setupGridViewsInDefaultConfiguration;
-(void)blurryBackgroundViewDidChangeWhetherBlurring:(id)arg1 ;
-(id)_generateSquareContentsImage;
-(id)darkeningOverlayImage;
-(void)scrollToGapOrTopIfFullOfPage:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)visibleMiniIconListIndex;
-(unsigned long long)centerVisibleMiniIconIndex;
-(unsigned long long)lastVisibleMiniIconIndex;
-(CGRect)visibleImageRelativeFrameForMiniIconAtIndex:(unsigned long long)arg1 ;
-(void)setIconGridImageAlpha:(double)arg1 ;
-(void)setSuppressesBlurryBackgroundChanges:(BOOL)arg1 ;
-(void)prepareToCrossfadeWithFloatyFolderView:(id)arg1 allowFolderInteraction:(BOOL)arg2 ;
-(void)cleanupAfterFloatyFolderCrossfade;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)snapshot;
-(void)_setAnimating:(BOOL)arg1 ;
-(void)prepareForReuse;
-(id)backgroundView;
-(id)contentsImage;
@end

