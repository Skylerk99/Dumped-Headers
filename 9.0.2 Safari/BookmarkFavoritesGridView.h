//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "BookmarkFavoriteViewCalloutDelegate.h"
#import "BookmarkFavoritesGridCollectionViewCellDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UIViewControllerPreviewingDelegate.h"
#import "UIViewControllerPreviewingDelegate_Private.h"

@class FrequentlyVisitedSitesSectionHeaderView, GrabbedFavorite, NSArray, NSMutableArray, NSString, ReorderingAutoscroller, UICollectionView, UICollectionViewFlowLayout, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface BookmarkFavoritesGridView : UIView <BookmarkFavoriteViewCalloutDelegate, BookmarkFavoritesGridCollectionViewCellDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, UIScrollViewDelegate, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private>
{
    NSMutableArray *_bookmarks;
    NSMutableArray *_incomingBookmarks;
    NSMutableArray *_frequentlyVisitedSites;
    double _rowHeight;
    double _previousContentViewWidth;
    struct CGSize _collectionViewCellSize;
    UITapGestureRecognizer *_tapOutsideRecognizer;
    ReorderingAutoscroller *_reorderingAutoscroller;
    UILongPressGestureRecognizer *_reorderLongpressRecognizer;
    struct CGPoint _reorderStartingLocation;
    GrabbedFavorite *_grabbedFavorite;
    _Bool _isReorderingGrabbedFavorite;
    _Bool _isReloadingFavorites;
    FrequentlyVisitedSitesSectionHeaderView *_frequentlyVisitedSitesSectionHeaderView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    long long _layoutType;
    _Bool _allowsReordering;
    _Bool _hasTransparentBackground;
    _Bool _adjustedForSidebar;
    _Bool _presentedWithinPopover;
    id <BookmarkFavoritesGridViewDelegate> _delegate;
    UIView *_contentView;
    UICollectionView *_collectionView;
}

@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic, getter=isPresentedWithinPopover) _Bool presentedWithinPopover; // @synthesize presentedWithinPopover=_presentedWithinPopover;
@property(nonatomic, getter=isAdjustedForSidebar) _Bool adjustedForSidebar; // @synthesize adjustedForSidebar=_adjustedForSidebar;
@property(nonatomic) _Bool hasTransparentBackground; // @synthesize hasTransparentBackground=_hasTransparentBackground;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <BookmarkFavoritesGridViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool allowsReordering; // @synthesize allowsReordering=_allowsReordering;
@property(copy, nonatomic) NSArray *frequentlyVisitedSites; // @synthesize frequentlyVisitedSites=_frequentlyVisitedSites;
@property(readonly, copy, nonatomic) NSArray *bookmarks; // @synthesize bookmarks=_bookmarks;
- (void).cxx_destruct;
- (void)didDismissPreviewViewController:(id)arg1 committing:(_Bool)arg2;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)favoriteCellDidTapOnFavoriteView:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)_configureCollectionViewLayout;
- (double)_collectionViewSideInset;
- (struct CGSize)_collectionViewItemSize;
- (_Bool)bookmarkInFavoriteViewIsEditable:(id)arg1;
- (void)deleteBookmarkInFavoriteView:(id)arg1;
- (void)editBookmarkInFavoriteView:(id)arg1;
- (void)setScrollViewScrollsToTop:(_Bool)arg1;
- (void)_tapOutsideRecognized:(id)arg1;
- (void)_cancelReorderingWithCompletion:(CDUnknownBlockType)arg1;
- (void)_reorderRecognized:(id)arg1;
- (_Bool)_isTapPointOutOfRange:(struct CGPoint)arg1;
- (void)_swapGrabbedCellWithCellAtIndexPath:(id)arg1;
- (id)_destinationIndexPathToReorderFromStartIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)_updateReorder;
- (id)_lastCellAtLastRowOfSection:(long long)arg1 rowRectContainingPoint:(struct CGPoint)arg2 indexPath:(id *)arg3;
- (id)_favoriteCellAtPoint:(struct CGPoint)arg1 indexPath:(id *)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (long long)_iconSize;
- (double)_paddingBelowNavigationBar;
- (unsigned long long)_numberOfFavoritesPerRow;
- (double)_horizontalSpaceBetweenFavorites;
- (_Bool)_isTallLayout;
- (id)frequentlyVisitedSitesSectionHeaderView;
- (void)_updateScrollView;
- (void)_ensureMetricsForFavoriteView:(id)arg1;
- (void)_updateMetricsForFavoriteViewsIfNeeded;
- (void)layoutSubviews;
- (void)setKeyboardDismissMode:(long long)arg1;
- (void)_updateBackgroundColor;
- (void)_reloadCollectionViewWithNewBookmarks:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_calculateChangeManifestWithOldBookmarks:(id)arg1 newBookmarks:(id)arg2;
- (double)_rowHeight;
- (void)resetScrollPosition;
@property(nonatomic) struct UIEdgeInsets contentInset;
- (long long)_indexOfPlaceholderInFrequentlyVisitedSitesSection;
- (_Bool)_shouldShowFrequentlyVisitedSites;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)_setBookmarks:(id)arg1 animated:(_Bool)arg2;
- (void)setBookmarks:(id)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_dimmingColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

