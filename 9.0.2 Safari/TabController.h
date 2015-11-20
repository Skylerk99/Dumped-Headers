//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CloudTabStoreDelegate.h"
#import "RecentlyClosedTabViewControllerDelegate.h"
#import "TabBarDelegate.h"
#import "TabOverviewDelegate.h"
#import "TabSnapshotCacheDelegate.h"
#import "TiltedTabViewDelegate.h"

@class BrowserController, CloudTabStore, GestureRecognizingBarButtonItem, NSArray, NSMutableArray, NSMutableSet, NSString, NSTimer, RecentlyClosedTabViewController, TabBar, TabDocument, TabOverview, TabSnapshotCache, TiltedTabView, UIButton;

@interface TabController : NSObject <CloudTabStoreDelegate, RecentlyClosedTabViewControllerDelegate, TabBarDelegate, TabOverviewDelegate, TabSnapshotCacheDelegate, TiltedTabViewDelegate>
{
    BrowserController *_browserController;
    NSMutableArray *_normalTabDocuments;
    NSMutableArray *_privateTabDocuments;
    TabDocument *_normalActiveTabDocument;
    TabDocument *_privateActiveTabDocument;
    NSTimer *_saveStateTimer;
    NSTimer *_stateValidateTimer;
    CloudTabStore *_cloudTabStore;
    _Bool _cloudTabUpdatesEnabled;
    TabDocument *_tabDocumentBeingHiddenFromTabView;
    NSMutableSet *_tabDocumentsAboutToBeClosedInTiltedTabView;
    GestureRecognizingBarButtonItem *_tiltedTabViewAddTabButton;
    _Bool _tiltedTabViewIsShowing;
    _Bool _tabOverviewIsShowing;
    NSTimer *_updateContinuityTimer;
    _Bool _canCloseLastTabViewTab;
    _Bool _tabBarItemsFixed;
    _Bool _tabViewItemsFixed;
    RecentlyClosedTabViewController *_recentlyClosedTabController;
    TabSnapshotCache *_snapshotCache;
    _Bool _flushPendingSnapshots;
    CDUnknownBlockType _flushPendingSnapshotsCompletion;
    _Bool _tabExposeButtonIndicatorExcludesBlankDocuments;
    _Bool _privateBrowsingEnabled;
    _Bool _snapshotsAreEnabled;
    TabBar *_tabBar;
    TiltedTabView *_tiltedTabView;
    UIButton *_tiltedTabViewPrivateBrowsingButton;
    TabOverview *_tabOverview;
}

@property(nonatomic) _Bool snapshotsAreEnabled; // @synthesize snapshotsAreEnabled=_snapshotsAreEnabled;
@property(readonly, retain, nonatomic) TabOverview *tabOverview; // @synthesize tabOverview=_tabOverview;
@property(readonly, nonatomic) UIButton *tiltedTabViewPrivateBrowsingButton; // @synthesize tiltedTabViewPrivateBrowsingButton=_tiltedTabViewPrivateBrowsingButton;
@property(readonly, retain, nonatomic) TiltedTabView *tiltedTabView; // @synthesize tiltedTabView=_tiltedTabView;
@property(readonly, nonatomic) CloudTabStore *cloudTabStore; // @synthesize cloudTabStore=_cloudTabStore;
@property(nonatomic, getter=isPrivateBrowsingEnabled) _Bool privateBrowsingEnabled; // @synthesize privateBrowsingEnabled=_privateBrowsingEnabled;
@property(nonatomic) _Bool tabExposeButtonIndicatorExcludesBlankDocuments; // @synthesize tabExposeButtonIndicatorExcludesBlankDocuments=_tabExposeButtonIndicatorExcludesBlankDocuments;
@property(readonly, copy, nonatomic) NSArray *privateTabDocuments; // @synthesize privateTabDocuments=_privateTabDocuments;
@property(readonly, copy, nonatomic) NSArray *tabDocuments; // @synthesize tabDocuments=_normalTabDocuments;
@property(readonly, retain, nonatomic) TabBar *tabBar; // @synthesize tabBar=_tabBar;
- (void).cxx_destruct;
- (void)_updateContinuityTimerFired;
- (void)saveTabDocumentContinuityActivitySoon:(id)arg1;
- (void)_cancelPendingUpdateContinuityActivityTimer;
- (void)cloudTabStore:(id)arg1 cloudTabsEnabledDidChange:(_Bool)arg2;
- (void)cloudTabStore:(id)arg1 didReceiveTabCloseRequest:(id)arg2;
- (void)updateCloudTabsForEnteringBackground;
- (void)updateCloudTabs;
- (_Bool)tabSnapshotCache:(id)arg1 shouldRequestSavedSnapshotWithIdentifier:(id)arg2;
- (void)tabSnapshotCacheDidFinishUpdating:(id)arg1;
- (void)_updateTabSnapshotsAnimated:(_Bool)arg1;
- (void)tabSnapshotCache:(id)arg1 didEvictSnapshotWithIdentifier:(id)arg2;
- (void)tabSnapshotCache:(id)arg1 didCacheSnapshotWithIdentifier:(id)arg2;
- (void)tabSnapshotCache:(id)arg1 requestSnapshotWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)cachedContentImageForTabDocument:(id)arg1;
- (void)flushPendingSnapshotsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateSnapshotCacheState;
- (void)_updateSnapshotCacheStateForPresented:(_Bool)arg1;
- (void)invalidateSnapshotForTabDocument:(id)arg1;
- (void)tabDocumentDidUpdateUUID:(id)arg1;
- (void)_updateSnapshotIdentifiers;
- (void)_updateTabOverviewItems;
@property(nonatomic) _Bool usesTabOverview;
- (void)tabOverviewDidPressDoneButton:(id)arg1;
- (void)tabOverview:(id)arg1 closeCloudTab:(id)arg2 onDevice:(id)arg3;
- (_Bool)tabOverview:(id)arg1 item:(id)arg2 matchesSearchText:(id)arg3;
- (void)tabOverview:(id)arg1 didSelectNavigationDestination:(id)arg2;
- (id)blankSnapshotForTabOverview:(id)arg1 topBackdropHeight:(double)arg2;
- (void)tabOverview:(id)arg1 relinquishContentView:(id)arg2 forItem:(id)arg3;
- (id)tabOverview:(id)arg1 borrowContentViewForItem:(id)arg2 topBackdropHeight:(double)arg3;
- (double)tabOverview:(id)arg1 headerHeightForItem:(id)arg2;
- (void)tabOverviewDidUpdateItemVisibilityOrder:(id)arg1;
- (void)tabOverview:(id)arg1 didMoveItem:(id)arg2 overItem:(id)arg3;
- (void)tabOverview:(id)arg1 closeItem:(id)arg2;
- (_Bool)tabOverview:(id)arg1 canCloseItem:(id)arg2;
- (void)tabOverview:(id)arg1 didSelectItem:(id)arg2;
- (void)tabOverviewAddTab:(id)arg1;
- (id)currentItemForTabOverview:(id)arg1;
- (void)tabOverviewDidCancelDismissal:(id)arg1;
- (void)tabOverviewDidBeginDismissal:(id)arg1;
- (void)tabOverviewDidDismiss:(id)arg1;
- (void)tabOverviewWillPresent:(id)arg1;
- (id)_tabDocumentRepresentedByTabOverviewItem:(id)arg1;
- (void)_addNewActiveTiltedTabViewTabWithNavigationDestination:(id)arg1;
- (void)_addNewActiveTiltedTabViewTab;
- (void)tiltedTabView:(id)arg1 closeCloudTab:(id)arg2 onDevice:(id)arg3;
- (void)tiltedTabView:(id)arg1 didSelectNavigationDestination:(id)arg2;
- (id)blankSnapshotForTiltedTabView:(id)arg1 topBackdropHeight:(double)arg2;
- (_Bool)tiltedTabView:(id)arg1 itemHasValidSnapshot:(id)arg2;
- (void)tiltedTabView:(id)arg1 animateTopBackdropView:(id)arg2 hidden:(_Bool)arg3;
- (double)tiltedTabView:(id)arg1 headerHeightForItem:(id)arg2;
- (void)tiltedTabView:(id)arg1 relinquishContentView:(id)arg2 forItem:(id)arg3;
- (id)tiltedTabView:(id)arg1 borrowContentViewForItem:(id)arg2 withTopBackdropView:(id *)arg3 ofHeight:(double)arg4;
- (id)currentItemForTiltedTabView:(id)arg1;
- (void)tiltedTabViewDidUpdateItemVisibilityOrder:(id)arg1;
- (void)tiltedTabView:(id)arg1 didMoveItem:(id)arg2 overItem:(id)arg3;
- (void)tiltedTabView:(id)arg1 closeItem:(id)arg2;
- (_Bool)tiltedTabView:(id)arg1 canCloseItem:(id)arg2;
- (void)tiltedTabView:(id)arg1 didSelectItem:(id)arg2;
- (void)tiltedTabViewDidDismiss:(id)arg1;
- (void)tiltedTabViewWillDismiss:(id)arg1;
- (void)tiltedTabViewDidPresent:(id)arg1;
- (void)tiltedTabViewWillPresent:(id)arg1;
- (id)_tabDocumentRepresentedByTiltedTabItem:(id)arg1;
- (void)dismissTabViewAnimated:(_Bool)arg1;
- (void)_addTabLongPressRecognized:(id)arg1;
- (void)_dismissTiltedTabView;
- (void)updateTiltedTabViewToolbarItems;
- (void)_updateTiltedTabViewPrivateBrowsingButtonVisibility;
@property(readonly, nonatomic) NSArray *tiltedTabViewToolbarItems;
- (void)_handlePendingCloseTabRequests;
- (void)_updateTabOverviewCloudTabs;
- (void)_updateTiltedTabViewCloudTabs;
- (void)_cloudTabsDidUpdate:(id)arg1;
- (void)_updateTiltedTabViewItemsWithTransition:(long long)arg1;
- (void)_updateTiltedTabViewItemsAnimated:(_Bool)arg1;
- (void)_updateTiltedTabViewItems;
@property(nonatomic) _Bool usesTiltedTabView;
- (void)_updateCloudTabUpdatesEnabled;
- (void)_setCloudTabUpdatesEnabled:(_Bool)arg1;
- (void)updateTabExposeButtonIndicator;
- (void)_updateExplanationViewVisibilityAnimated:(_Bool)arg1;
- (_Bool)_shouldShowExplanationView;
- (void)_suppressSingleEmptyTabIfAppropriate;
- (void)openBlankTabDocumentInTabBar;
- (void)updateTabBarAnimated:(_Bool)arg1;
- (void)_updateTabBarAnimated:(_Bool)arg1 keepingDocumentVisible:(id)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)recentlyClosedTabViewController:(id)arg1 didSelectTabDocument:(id)arg2;
- (void)tabBar:(id)arg1 activateItem:(id)arg2;
- (void)tabBar:(id)arg1 closeItem:(id)arg2;
- (void)tabBar:(id)arg1 moveItem:(id)arg2 overItem:(id)arg3;
- (void)tabBarAddTab:(id)arg1;
- (_Bool)tabBar:(id)arg1 canCloseItem:(id)arg2;
- (_Bool)tabBar:(id)arg1 canMoveItem:(id)arg2;
- (id)_tabDocumentRepresentedByTabBarItem:(id)arg1;
- (void)_setTabBarItemsFixed:(_Bool)arg1;
@property(nonatomic) _Bool usesTabBar;
- (void)_updateAddTabButtonEnabled;
@property(readonly, nonatomic) unsigned long long maximumTabDocumentCount;
- (void)clearBrowserController;
- (void)dealloc;
- (id)initWithBrowserController:(id)arg1;
- (void)openInitialBlankTabDocumentIfNeeded;
- (void)replaceTabDocument:(id)arg1 withTabDocument:(id)arg2;
- (id)_tabDocumentForURL:(id)arg1 withUUID:(id)arg2;
- (id)tabDocumentForURL:(id)arg1;
- (void)moveTabDocument:(id)arg1 overTabDocument:(id)arg2;
- (void)closeAllOpenTabsAnimated:(_Bool)arg1 exitTabView:(_Bool)arg2;
- (void)closeTab;
- (void)_closeTabDocument:(id)arg1 animated:(_Bool)arg2 allowAddingToRecentlyClosedTabs:(_Bool)arg3;
- (void)closeTabDocument:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_shouldFocusPreviousDocumentWhenClosingDocument:(id)arg1;
- (_Bool)_createAndSwitchToNewBlankTabDocumentOpeningCaptiveLandingPageIfNecessary;
- (void)newTab;
- (id)_openBlankTabDocument;
- (void)insertNewBlankTabDocumentAnimated:(_Bool)arg1;
- (id)_insertNewBlankTabDocumentInBackground:(_Bool)arg1 animated:(_Bool)arg2;
- (void)insertNewTabDocument:(id)arg1 openedFromTabDocument:(id)arg2 inBackground:(_Bool)arg3 animated:(_Bool)arg4;
- (void)_insertTabDocument:(id)arg1 afterTabDocument:(id)arg2 inBackground:(_Bool)arg3 animated:(_Bool)arg4;
- (void)_makeRoomForNewTabDocument:(id)arg1;
- (id)_oldestInactiveTabDocument;
- (_Bool)canAddNewTab;
- (void)_switchActiveTabDocumentFromTabDocument:(id)arg1 toTabDocument:(id)arg2;
- (void)setActiveTabDocument:(id)arg1 animated:(_Bool)arg2 deferActivation:(_Bool)arg3;
- (void)setActiveTabDocument:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) TabDocument *activeTabDocument;
@property(readonly, nonatomic) _Bool canCloseTab;
@property(nonatomic) _Bool tabViewDefersActivation;
@property(readonly, nonatomic) TabDocument *tabDocumentBeingActivated;
- (void)_logActivationForTab:(id)arg1;
- (void)logTabActivationInterval:(double)arg1 forActivationType:(long long)arg2;
- (void)_tabCountDidChange;
- (void)_auditTabCount;
@property(readonly, copy, nonatomic) NSArray *allTabDocuments;
@property(readonly, copy, nonatomic) NSArray *currentTabDocuments;
- (id)_currentTabs;
@property(readonly, nonatomic) RecentlyClosedTabViewController *recentlyClosedTabController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

