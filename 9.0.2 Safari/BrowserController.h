//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "CatalogViewControllerDelegate.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "SFReaderAppearanceViewControllerDelegate.h"
#import "SKStoreProductViewControllerDelegate.h"
#import "SidebarContentDimmingViewDelegate.h"
#import "UIGestureRecognizerDelegatePrivate.h"
#import "UIPopoverPresentationControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "_SFDownloadControllerDelegate.h"
#import "_SFDynamicBarAnimatorDelegate.h"
#import "_SFNavigationBarDelegate.h"
#import "_SFSingleBookmarkNavigationControllerDelegate.h"
#import "_UIBasicAnimationFactory.h"

@class BookmarksBarView, BookmarksNavigationController, BrowserRootViewController, BrowserToolbar, CatalogViewControllerState, ContinuousReadingController, ContinuousReadingViewController, DownloadDispatcher, GradientView, NSDate, NSMutableArray, NSNumber, NSString, NSTimer, NSURL, NavigationBar, QuickLookBannerController, RecentlyClosedTabViewController, RotatablePopoverController, SKStoreProductViewController, SafariWebView, SearchStateCache, SidebarContentDimmingView, SidebarInteractionReporter, TabController, TabDocument, UIPinchGestureRecognizer, UIScrollView, UIStatusBar, UITapGestureRecognizer, UIToolbar, UIView, UIWindow, WKBackForwardListItem, WKPreferences, WKProcessPool, WebUIAuthenticationManager, _SFCrashBanner, _SFDynamicBarAnimator, _WKFrameHandle;

@interface BrowserController : UIResponder <CatalogViewControllerDelegate, UIGestureRecognizerDelegatePrivate, _UIBasicAnimationFactory, _SFNavigationBarDelegate, _SFDynamicBarAnimatorDelegate, UIPopoverPresentationControllerDelegate, SidebarContentDimmingViewDelegate, SFReaderAppearanceViewControllerDelegate, SKStoreProductViewControllerDelegate, MFMailComposeViewControllerDelegate, UIScrollViewDelegate, _SFDownloadControllerDelegate, _SFSingleBookmarkNavigationControllerDelegate>
{
    TabController *_tabController;
    BrowserRootViewController *_rootViewController;
    UIScrollView *_scrollView;
    UIView *_rootView;
    UIView *_pageView;
    UIView *_tabBarClipperView;
    QuickLookBannerController *_quickLookBannerController;
    UITapGestureRecognizer *_quickLookTapRecognizer;
    id <BrowserPanel> _browserPanel;
    id <BrowserPanel> _nextBrowserPanel;
    RotatablePopoverController *_currentPopoverController;
    _Bool _isShowingCurrentPanel;
    NSURL *_mailToURL;
    NSMutableArray *_documentsPendingClose;
    SafariWebView *_findOnPageWebView;
    _Bool _isRotating;
    long long _rootViewControllerVerticalSizeClassBeforeSizeTransition;
    _Bool _usedEmbeddedSidebarAppearanceBeforeSizeTransition;
    _Bool _isProgressEnabled;
    float _progress;
    _Bool _resourcesLoading;
    _Bool _showingProgressIndicator;
    WKBackForwardListItem *_backForwardListItemNeedingSnapshot;
    TabDocument *_speculativeLoadDocument;
    TabDocument *_nextContinuousItemDocument;
    TabDocument *_previousContinuousItemDocument;
    TabDocument *_previewDocument;
    int _currentlyLoadingResourcesCount;
    _Bool _isRunningTabExposeTest;
    unsigned int _tabExposeTestLoadCount;
    unsigned int _tabExposeTestIterationsRemaining;
    _Bool _antiPhishingServiceInitialized;
    _Bool _isPrivateBrowsingEnabled;
    WebUIAuthenticationManager *_authenticationManager;
    _WKFrameHandle *_frameToBePrinted;
    struct CGRect _inputViewScreenBoundsAfterRotation;
    double _lastAdjustmentForKeyboard;
    double _bottomBarKeyboardOffset;
    NSString *_fileDownloadPath;
    NSURL *_fileDownloadSourceURL;
    NSString *_searchCountKey;
    BookmarksNavigationController *_sidebarController;
    SidebarContentDimmingView *_sidebarContentDimmingView;
    UIView *_sidebarSnapshotView;
    _Bool _showingTabView;
    _Bool _showingTabOverview;
    ContinuousReadingViewController *_continuousReadingViewController;
    double _lastUserVisibleWidthForReaderSentToWebProcess;
    NSTimer *_readerDocumentSetupTimer;
    CDUnknownBlockType _finishReaderAnimationBlock;
    NSTimer *_previewDocumentCloseTimer;
    _Bool _applicationIsOpaque;
    _Bool _scrollViewIsDragging;
    _Bool _shouldShowBarsAfterDraggingDownward;
    _Bool _disableBarHiding;
    _SFDynamicBarAnimator *_dynamicBarAnimator;
    long long _dynamicBarAnimatorStateBeforeNavigationGesture;
    UITapGestureRecognizer *_showBarsFromBottomBarRecognizer;
    _Bool _pageScrollsWithBottomBar;
    _Bool _updatingGeometryFromDynamicBarAnimator;
    _Bool _interactivelyChangingObscuredInsets;
    NSDate *_suspendDate;
    _Bool _suspending;
    TabDocument *_progressSuppressingDocument;
    unsigned long long _suppressesColorSettingsCount;
    _Bool _cloudTabsEnabled;
    UIToolbar *_tiltedTabToolbar;
    _Bool _shouldMakeFavoritesStickyWhenReinsertingBorrowedContent;
    UIView *_navigationBarAuxiliaryBarsContainer;
    BookmarksBarView *_bookmarksBar;
    UIStatusBar *_scrollingStatusBar;
    UIView *_scrollToTopView;
    GradientView *_topPrivateBrowsingGradient;
    GradientView *_bottomPrivateBrowsingGradient;
    NSTimer *_speculativeLoadingStartTimer;
    _SFCrashBanner *_crashBanner;
    double _crashBannerDraggingOffset;
    UIPinchGestureRecognizer *_tabViewPinchRecognizer;
    _Bool _tabViewPinchActive;
    CatalogViewControllerState *_catalogViewControllerStateForSizeChange;
    _Bool _shouldDisableToolbarForCatalogViewControllerPopover;
    TabDocument *_documentWhoseProgressIsShown;
    NSTimer *_idleTimerDurationTimer;
    double _idleTimerDuration;
    NSString *_speculativeLoadURL;
    _Bool _isSpeculativeLoadingEnabled;
    struct UIEdgeInsets _contentInsetForContentFrame;
    ContinuousReadingController *_continuousReadingController;
    long long _lastTabSwitchKeyboardModifierFlags;
    SearchStateCache *_searchStateCache;
    unsigned long long _sidebarControllerActiveAnimationCount;
    SidebarInteractionReporter *_sidebarInteractionReporter;
    int _notifyBatterySaverToken;
    _Bool _hasEnabledContentBlockers;
    id _contentBlockersContext;
    _Bool _readerViewStale;
    _Bool _readerShouldBeShownIfPossible;
    _Bool _fullScreenInPortrait;
    _Bool _usesNarrowLayout;
    _Bool _showingCrashBanner;
    _Bool _transitioningFromBookmarksPanelToSidebarForSizeChange;
    _Bool _showingTabBar;
    _Bool _showingSidebar;
    _Bool _shouldFocusFindOnPageTextField;
    _Bool _isInBatterySaverMode;
    _Bool _canFocusNavigationBarURL;
    SafariWebView *_webView;
    UIWindow *_window;
    BrowserToolbar *_bottomToolbar;
    TabDocument *_cachedDocumentOnContinuousTransition;
    NSNumber *_doNotTrackEnabledPreference;
    NavigationBar *_navigationBar;
    long long _favoritesState;
    WKPreferences *_wkPreferences;
    DownloadDispatcher *_downloadDispatcher;
    SKStoreProductViewController *_presentedStoreProductViewController;
}

+ (id)sharedBrowserController;
@property(retain, nonatomic) SKStoreProductViewController *presentedStoreProductViewController; // @synthesize presentedStoreProductViewController=_presentedStoreProductViewController;
@property(nonatomic) _Bool canFocusNavigationBarURL; // @synthesize canFocusNavigationBarURL=_canFocusNavigationBarURL;
@property(readonly, nonatomic) _Bool isInBatterySaverMode; // @synthesize isInBatterySaverMode=_isInBatterySaverMode;
@property(readonly, nonatomic) DownloadDispatcher *downloadDispatcher; // @synthesize downloadDispatcher=_downloadDispatcher;
@property(readonly, nonatomic) WKPreferences *wkPreferences; // @synthesize wkPreferences=_wkPreferences;
@property(nonatomic) _Bool shouldFocusFindOnPageTextField; // @synthesize shouldFocusFindOnPageTextField=_shouldFocusFindOnPageTextField;
@property(readonly, nonatomic, getter=isShowingSidebar) _Bool showingSidebar; // @synthesize showingSidebar=_showingSidebar;
@property(nonatomic) long long favoritesState; // @synthesize favoritesState=_favoritesState;
@property(retain, nonatomic) _WKFrameHandle *frameToBePrinted; // @synthesize frameToBePrinted=_frameToBePrinted;
@property(readonly, nonatomic) NavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(copy, nonatomic) NSNumber *doNotTrackEnabledPreference; // @synthesize doNotTrackEnabledPreference=_doNotTrackEnabledPreference;
@property(readonly, nonatomic) TabController *tabController; // @synthesize tabController=_tabController;
@property(nonatomic, getter=isShowingTabBar) _Bool showingTabBar; // @synthesize showingTabBar=_showingTabBar;
@property(nonatomic) _Bool transitioningFromBookmarksPanelToSidebarForSizeChange; // @synthesize transitioningFromBookmarksPanelToSidebarForSizeChange=_transitioningFromBookmarksPanelToSidebarForSizeChange;
@property(nonatomic, getter=isShowingCrashBanner) _Bool showingCrashBanner; // @synthesize showingCrashBanner=_showingCrashBanner;
@property(nonatomic) _Bool usesNarrowLayout; // @synthesize usesNarrowLayout=_usesNarrowLayout;
@property(readonly, nonatomic) _Bool fullScreenInPortrait; // @synthesize fullScreenInPortrait=_fullScreenInPortrait;
@property(retain, nonatomic) TabDocument *cachedDocumentOnContinuousTransition; // @synthesize cachedDocumentOnContinuousTransition=_cachedDocumentOnContinuousTransition;
@property(retain, nonatomic) TabDocument *nextContinuousItemDocument; // @synthesize nextContinuousItemDocument=_nextContinuousItemDocument;
@property(retain, nonatomic) TabDocument *previousContinuousItemDocument; // @synthesize previousContinuousItemDocument=_previousContinuousItemDocument;
@property(nonatomic) _Bool readerShouldBeShownIfPossible; // @synthesize readerShouldBeShownIfPossible=_readerShouldBeShownIfPossible;
@property(nonatomic, getter=isReaderViewStale) _Bool readerViewStale; // @synthesize readerViewStale=_readerViewStale;
@property(retain, nonatomic) NSURL *mailToURL; // @synthesize mailToURL=_mailToURL;
@property(retain, nonatomic) RotatablePopoverController *currentPopoverController; // @synthesize currentPopoverController=_currentPopoverController;
@property(readonly, nonatomic) BrowserToolbar *bottomToolbar; // @synthesize bottomToolbar=_bottomToolbar;
@property(readonly, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(readonly, nonatomic) SafariWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)arg1;
- (_Bool)addBookmarkNavControllerCanSaveBookmarkChanges:(id)arg1;
- (void)addBookmarkNavController:(id)arg1 didFinishWithResult:(_Bool)arg2;
- (void)fileDownloadDidFinish:(id)arg1 withPath:(id)arg2 withType:(long long)arg3 withSourceURL:(id)arg4;
- (id)downloadBackgroundTaskName;
- (void)didDismissLinkPreviewViewController:(id)arg1 committing:(_Bool)arg2;
- (void)commitLinkPreviewViewController:(id)arg1;
- (id)linkPreviewViewControllerForURL:(id)arg1;
@property(readonly, nonatomic) id <FindOnPageToolbarDelegate> findOnPageToolbarDelegate;
- (void)findOnPageCompletionProvider:(id)arg1 setStringToComplete:(id)arg2;
- (void)prepareFindOnPageWithString:(id)arg1;
- (void)showFindOnPage;
- (void)_updateStorageBlockingPreference;
- (void)_setShowingAppBanner:(id)arg1 isShowing:(_Bool)arg2;
- (double)_verticalOffsetForContinuousReadingBanner;
- (double)_verticalOffsetForAppBanner;
- (id)_formDataController;
- (void)_setContinuousReadingContentViewFromTabDocument:(id)arg1 useReaderView:(_Bool)arg2;
- (void)_commitToSpeculativeLoadForDocument:(id)arg1;
- (_Bool)shouldDeferHistoryUpdatesForWKWebView:(id)arg1;
- (void)document:(id)arg1 willMakeReaderVisible:(_Bool)arg2;
- (void)dynamicBarAnimatorWillLeaveSteadyState:(id)arg1;
- (void)dynamicBarAnimatorWillEnterSteadyState:(id)arg1;
@property(readonly, nonatomic) _Bool documentIsEmpty;
- (void)updateExposedScrollViewRect;
- (double)_adjustedTopObscuredInsetForBanners:(double)arg1;
- (struct CGRect)contentContainerViewFrameForBrowserSize:(struct CGSize)arg1;
- (void)updateInsetsForBackgroundWebView:(id)arg1;
- (void)updateWebViewSizeAttributes;
- (void)setWebViewFromTabDocument:(id)arg1;
- (void)setWebView:(id)arg1;
- (_Bool)_inResponderChain;
@property(readonly, nonatomic) UIView *contentContainerView;
@property(readonly, nonatomic) WKProcessPool *processPool;
- (id)init;
- (void)prepareToNavigateInTabDocument:(id)arg1;
- (void)showAddToSharedLinksConfirmationForTabDocument:(id)arg1 buttonIdentifier:(long long)arg2;
- (void)tabDocumentDidChangeWebFeedURL:(id)arg1;
- (void)sidebarDimmingViewDismiss:(id)arg1;
- (void)_updateFavoritesGridForSidebarVisibility;
- (id)sidebarInteractionReporter;
- (void)_setShowingSidebar:(_Bool)arg1 dueToRotation:(_Bool)arg2;
- (void)_setShowingSidebar:(_Bool)arg1;
- (void)updateShowingSidebarForLoad;
- (void)_showOrHideSidebarInLandscapeIfNecessary;
- (void)_updateSidebarStickinessAfterUserAction;
- (_Bool)shouldShowSidebarInLandscape;
- (void)_installContentDimmingViewIfNeeded;
- (void)_initializeSidebarContentDimmingViewIfNecessary;
- (struct CGRect)_sidebarContentDimmingViewFrame;
- (_Bool)_shouldShowSidebarContentDimmingView;
- (void)readerAppearanceViewControllerDidChangeTheme:(id)arg1;
- (void)readerAppearanceViewControllerDidDecreaseTextSize:(id)arg1;
- (void)readerAppearanceViewControllerDidIncreaseTextSize:(id)arg1;
- (void)readerAppearanceViewControllerDidChangeFont:(id)arg1;
- (void)_presentReaderAppearanceControllerForTabDocument:(id)arg1;
- (void)navigationBar:(id)arg1 didPasteText:(id)arg2;
- (id)navigationBarURLForSharing:(id)arg1;
- (void)navigationBarReaderAppearanceButtonWasTapped:(id)arg1;
- (void)navigationBarStopLoadingButtonWasTapped:(id)arg1;
- (void)navigationBarReloadButtonWasLongPressed:(id)arg1;
- (void)navigationBarReloadButtonWasTapped:(id)arg1;
- (void)navigationBarCancelButtonWasTapped:(id)arg1;
- (void)navigationBarReaderButtonWasTapped:(id)arg1;
- (void)navigationBarBackdropDidApplySettings:(id)arg1;
- (void)navigationBarURLWasTapped:(id)arg1;
- (void)compressedNavigationBarWasTapped:(id)arg1;
- (void)_checkForContentBlockers;
- (void)_previousTabKeyPressed:(id)arg1;
- (void)_nextTabKeyPressed:(id)arg1;
- (void)_switchTabsByIndex:(long long)arg1 withKeyCommand:(id)arg2;
- (void)_cancelKeyPressed;
- (void)_closeActiveTabKeyPressed;
- (void)_newTabKeyPressed;
- (void)_printKeyPressed;
- (void)_addToReadingListKeyPressed;
- (void)_toggleTabViewKeyPressed;
- (void)_toggleReaderKeyPressed;
- (void)_toggleBookmarksKeyPressed;
- (void)_focusAddressFieldKeyPressed;
- (void)_previousFindResultKeyPressed;
- (void)_nextFindResultKeyPressed;
- (void)_findKeyPressed;
- (void)_navigateForwardKeyPressed;
- (void)_navigateBackKeyPressed;
- (void)_stopLoadingKeyPressed;
- (void)_reloadKeyPressed;
@property(readonly, nonatomic, getter=isShowingTabView) _Bool showingTabView;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)keyCommands;
- (id)nextResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)_remoteInspectorHasSessionChanged:(id)arg1;
- (void)_passwordGenerationAssistanceBecameAvailable:(id)arg1;
- (void)updateScrollViewContentInset;
- (void)_setContentInsetAdjustments:(struct UIEdgeInsets)arg1 forScrollView:(id)arg2;
- (struct UIEdgeInsets)scrollViewContentInsetAdjustments;
- (void)didChangeContinuousReadingItemInActiveDocument;
- (id)_topContinuousReadingBanner;
@property(readonly, nonatomic) ContinuousReadingController *continuousReadingController;
- (_Bool)isContinuousReadingDocument:(id)arg1;
- (void)clearContinuousItemDocuments;
- (void)clearDocumentForContinuousReading:(id)arg1;
- (void)_clearPreviousContinuousItemDocument;
- (void)_clearNextContinuousItemDocument;
- (void)updateContinuousPreviewViewFrame;
- (void)_navigationGestureDidEndWithNavigation:(_Bool)arg1;
- (void)_navigationGestureWillEndWithNavigationToBackForwardListItem:(id)arg1;
- (void)_navigationGestureDidBegin;
- (void)reinsertBorrowedContentViewForTab:(id)arg1;
- (id)borrowContentViewForTab:(id)arg1 withTopBackdropView:(id *)arg2 ofHeight:(double)arg3;
- (void)didCancelDismissingTabOverview;
- (void)didBeginDismissingTabOverview;
- (void)didDismissTabOverview;
- (void)willPresentTabOverview;
- (void)didDismissTiltedTabView;
- (void)willDismissTiltedTabView;
- (void)didPresentTiltedTabView;
- (void)willPresentTiltedTabView;
- (void)_cancelContentScrollGestures;
- (id)blankDocumentSnapshotWithTopBackdropHeight:(double)arg1 options:(unsigned long long)arg2;
- (void)snapshotTabDocument:(id)arg1 size:(struct CGSize)arg2 topBackdropHeight:(double)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (struct CGPoint)_snapshotOriginForTabDocument:(id)arg1;
- (void)snapshotTabDocument:(id)arg1 size:(struct CGSize)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_takeSnapshotWithSize:(struct CGSize)arg1 backgroundColor:(id)arg2 topBackdropHeight:(double)arg3 backdropSettings:(id)arg4 options:(unsigned long long)arg5 drawing:(CDUnknownBlockType)arg6;
- (id)tabViewBackdropSettingsForNavigationBar:(id)arg1;
- (void)_animateLinkImage:(struct CGImage *)arg1 flipped:(_Bool)arg2 fromRect:(struct CGRect)arg3 intoButton:(int)arg4 inView:(id)arg5 afterLinkImageDisappears:(CDUnknownBlockType)arg6;
- (_Bool)addReadingListBookmarkForCurrentTabUpdatingController:(id)arg1;
- (void)readerContentIsReadyForDisplay;
- (void)_readerLayoutTimerFired:(id)arg1;
- (void)_animateReaderVisibility:(_Bool)arg1;
- (void)_setReaderVisible:(_Bool)arg1 forTabDocument:(id)arg2 deactivationMode:(unsigned long long)arg3 animated:(_Bool)arg4;
- (double)verticalScrollOffsetForReaderViewInTabDocument:(id)arg1;
- (void)hideReaderForTabDocument:(id)arg1 animated:(_Bool)arg2 deactivationMode:(unsigned long long)arg3;
- (void)showReaderForTabDocument:(id)arg1 animated:(_Bool)arg2;
- (id)_readerBackgroundColor;
- (void)_readerVisibilityDidChange;
- (void)setShowingReader:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)isShowingReader;
- (void)updateQuickLookBannerViewFrame;
- (double)_pdfPageNumberLabelYOffset;
- (void)setScrollViewZoomEnabled:(_Bool)arg1;
- (void)_resizeToContentFrame;
- (void)scrollBrowserViewToTop;
- (void)_scrollToTopInView:(id)arg1;
- (_Bool)_canScrollToTopInView:(id)arg1;
- (id)containerViewForAuthenticationPanel;
- (void)cancelFromAuthenticationManager:(id)arg1 forChallenge:(id)arg2;
- (void)logInFromAuthenticationManager:(id)arg1 withCredential:(id)arg2 forChallenge:(id)arg3;
- (void)toggleAlwaysShowBookmarksBarMessageReceived;
- (void)setCookiePolicyMessageReceived;
- (void)clearHistoryMessageReceived;
- (void)autoFillStateChangedMessageReceived;
- (void)clearAutoFillMessageReceived;
- (void)_replaceActiveDocument:(id)arg1 withSpeculativeDocument:(id)arg2;
- (void)_commitToSpeculativeLoad;
- (void)_startSpeculativeLoadingNow;
- (void)updateSpeculativeLoadURL:(id)arg1 defersLoading:(_Bool)arg2;
- (void)_clearSpeculativeLoadingStartTimer;
- (float)_delayForStartingSpeculativeLoad;
- (void)_closeSpeculativelyLoadedDocument:(id)arg1;
- (void)_cancelSpeculativeLoadForDocument:(id)arg1;
- (void)clearSpeculativeLoadDocument;
- (void)cancelSpeculativeLoad;
- (void)didReceiveMemoryWarning;
- (_Bool)isAtEndOfPage;
- (void)scrollDown;
@property(readonly, nonatomic) BrowserToolbar *activeToolbar;
@property(readonly, nonatomic) BrowserToolbar *topToolbar;
- (void)_updateTabBarAndBookmarksBarStyles;
- (void)updateInterface;
- (void)updateBannersForTabDocument:(id)arg1;
- (void)removeQuickLookBannerView;
- (void)toggleQuickLookBannerView;
- (void)showQuickLookBannerView;
- (struct CGRect)_quickLookBannerFrame;
- (struct CGPoint)_originForOverlayAccessories;
- (void)_updateProgressForTabDocument:(id)arg1;
- (_Bool)_isVerticallyConstrained;
- (void)updateTitleForTabDocument:(id)arg1;
- (void)setInitialZoomScaleForPPT:(double)arg1;
- (void)setProgressEnabled:(_Bool)arg1;
- (void)_loadRequest:(id)arg1;
- (void)goToAddress:(id)arg1;
- (_Bool)_commitSpeculativeLoadForURL:(id)arg1;
- (void)goForward;
- (void)goBack;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_updateSidebarWallpaper;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)modifierFlagsChangedWithEvent:(id)arg1;
- (void)didCompleteScrolling;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)_isScrolledToOrPastBottom;
- (_Bool)_isScrolledToThresholdForContinuousPrefetching;
@property(readonly, nonatomic) RecentlyClosedTabViewController *recentlyClosedTabController;
- (void)updateQuickLookFrameViewIfNecessary;
- (void)updateTopToolbarEnabled;
- (void)updateButtons;
- (void)didReadDefaults;
- (void)updateInternalPreferences;
- (void)updateSpotlightSuggestionsPreferences;
- (void)updateSpeculativeLoadingPreferences;
- (void)updatePrivateBrowsingPreferences;
- (void)updateDoNotTrackPreferences;
- (void)writePrivateBrowsingPreference:(_Bool)arg1;
- (void)togglePrivateBrowsing;
- (_Bool)isPrivateBrowsingAvailable;
- (void)carrierBundledChanged;
- (void)updateTabDocument:(id)arg1 forExternalURL:(id)arg2 withOptions:(id)arg3;
- (id)handleExternalURL:(id)arg1;
- (void)_removeStaleSavedTabSnapshots;
- (void)setupWithURL:(id)arg1 launchOptions:(id)arg2;
- (id)loadURLFromExternalApplicationInActiveTab:(id)arg1;
@property(readonly, nonatomic) BookmarksNavigationController *bookmarksNavigationController;
@property(readonly, nonatomic) _Bool bookmarksButtonIsInNavigationBar;
- (void)updateUsesTabBar;
- (void)_updateApplicationOpaqueness;
- (void)_updateWindowBackgroundColor;
- (void)_setWindowBackgroundIsOpaque:(_Bool)arg1;
- (id)_backgroundColorForTabDocument:(id)arg1;
- (id)_defaultBackgroundColorForWebContent;
- (_Bool)catalogViewControllerShouldSuppressPopover:(id)arg1;
- (void)catalogViewController:(id)arg1 focusNextKeyView:(_Bool)arg2;
- (_Bool)catalogViewControllerShouldRequestSuggestions:(id)arg1;
- (void)catalogViewController:(id)arg1 dismissCompletionDetail:(id)arg2;
- (void)catalogViewController:(id)arg1 presentViewControllerWithinPopover:(id)arg2;
- (double)_popoverPresentationVerticalOffset;
- (void)catalogViewControllerPopoverWillDismiss:(id)arg1 dismissalReason:(long long)arg2;
- (_Bool)_shouldPrefetchMatch:(id)arg1 matchLength:(unsigned long long)arg2;
- (void)catalogViewControllerDidEndEditing:(id)arg1;
- (void)catalogViewControllerDidBeginEditing:(id)arg1;
- (void)catalogViewController:(id)arg1 completionItem:(id)arg2 wasAcceptedForString:(id)arg3;
- (void)catalogViewController:(id)arg1 mightSelectCompletionItem:(id)arg2 forString:(id)arg3;
- (struct CGRect)catalogViewControllerPopoverPresentationRect:(id)arg1;
- (double)catalogViewControllerPopoverWidth:(id)arg1;
- (void)catalogViewController:(id)arg1 loadRequest:(id)arg2;
- (void)catalogViewController:(id)arg1 didSelectAddress:(id)arg2;
- (void)catalogViewControllerDidSelectFindOnPage:(id)arg1;
- (void)catalogViewController:(id)arg1 didSelectSearch:(id)arg2;
- (void)_completionItem:(id)arg1 wasAcceptedForString:(id)arg2;
- (void)_didChangeSystemBatterySaverMode;
- (void)_observeSystemBatterySaverMode;
- (void)dismissStoreProductViewController;
- (void)prepareForTabDocumentWebViewFullscreenMayReturnToInline:(id)arg1;
- (void)printFrame:(id)arg1 inTabDocument:(id)arg2;
- (void)setFavoritesState:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateScrollViewScrollsToTop;
- (void)updateButtonBarContentsForBrowserPanel:(id)arg1 animated:(_Bool)arg2 delay:(double)arg3;
- (void)updateButtonBarContentsForBrowserPanel:(id)arg1 animated:(_Bool)arg2;
- (void)updateButtonBarContentsAnimated:(_Bool)arg1;
- (id)_tiltedTabToolbar;
- (void)_setProgressSuppressingDocument:(id)arg1;
- (void)updateFavoritesForNewDocument;
- (_Bool)hasAnyFavorites;
- (void)cancelFavoritesAnimated:(_Bool)arg1;
- (void)cancelFavorites;
- (void)setFavoritesFieldFocused:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setFavoritesAreSticky:(_Bool)arg1 animated:(_Bool)arg2;
- (long long)_notFocusedStickyState;
- (_Bool)_favoritesAreShowingInPopover;
- (_Bool)_favoritesShouldHideBottomToolbar;
- (_Bool)_favoritesFieldShouldBeExpanded;
- (_Bool)_favoritesFieldFocused;
- (_Bool)_favoritesAreSticky;
@property(readonly, nonatomic, getter=isShowingFavorites) _Bool showingFavorites;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (struct UIEdgeInsets)_obscuredScrollViewInsetsConsideringTargetState:(_Bool)arg1;
- (struct UIEdgeInsets)finalObscuredInsetsForScrollView:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)_updateScrollOffsetForReplacementWebView:(id)arg1;
- (struct CGRect)_rootViewControllerViewFrame;
- (struct CGRect)frameForRootView;
- (struct CGRect)frameForCatalogView;
- (double)_horizontalMarginForCatalogViewInPopover;
- (void)_tabViewPinch:(id)arg1;
- (id)_viewToInsertNavigationBarAbove;
- (void)_initSearchEngineIfNeeded;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_showBarsFromBottomBarTap:(id)arg1;
- (double)bottomBarOffset;
- (void)hideBarsForRotation;
- (void)hideBarsAnimated:(_Bool)arg1;
- (void)hideBars;
- (void)showBars;
- (_Bool)dynamicBarAnimator:(id)arg1 canHideBarsByDraggingWithOffset:(double)arg2;
- (void)_updateDisableBarHiding;
- (void)updateDynamicBarGeometry;
- (void)dynamicBarAnimatorOutputsDidChange:(id)arg1;
- (void)_initSubviews;
- (void)updateTabOverviewFrame;
- (void)updateTabViewPinchRecognizer;
- (void)updatePrivateBrowsingAvailability;
- (void)_updateUsesNarrowLayout;
- (void)_setupBottomToolbar;
@property(readonly, nonatomic) _Bool interfaceFillsScreen;
- (void)updateShowingTabBarAnimated:(_Bool)arg1;
- (void)didTransitionToHorizontalSizeClass:(long long)arg1;
- (void)willTransitionToHorizontalSizeClass:(long long)arg1;
- (_Bool)_shouldHideCatalogViewControllerForSizeChange;
- (_Bool)_shouldUseNarrowLayout;
- (_Bool)isSplitScreen;
- (_Bool)canHideBars;
- (void)updateContentContainerViewFrame;
- (void)_updateReaderUserVisibleWidthIfNeeded;
- (double)_contentContainerXOffsetForReader;
- (double)userVisibleWidthForReader;
- (double)contentContainerXOffsetForSidebar;
- (_Bool)_usesEmbeddedSidebarAppearance;
- (void)updateScrollIndicatorInsets;
- (_Bool)_shouldShowBackgroundViewForTabDocument:(id)arg1;
- (struct CGRect)readerContentFrameInScrollView;
- (struct CGRect)quickLookFrameInScrollView;
- (struct CGRect)contentFrameInScrollView;
- (struct CGSize)_contentSize;
- (struct CGRect)_contentFrameInPageViewWithHiddenBars;
- (struct CGRect)contentFrameInPageView;
- (double)additionalContentHeightForBanners;
- (double)_navigationBarOverlapHeight;
- (double)_appBannerOverlapHeight;
- (void)updateAppBannerFrame;
- (void)updateButtonBarFrame;
@property(readonly, nonatomic) double buttonBarHeight;
- (void)_hideCrashBanner;
- (void)setShowingCrashBanner:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_layoutCrashBanner;
- (double)_crashBannerDraggingOffsetForContentOffset:(struct CGPoint)arg1;
- (void)updateNavigationBarFrame;
- (void)updateSidebarFrame;
- (struct CGRect)_sidebarFrameWhenPresented:(_Bool)arg1;
- (double)_navigationBarSquishedHeight;
- (double)_navigationBarAuxiliaryBarsHeight;
- (double)_navigationBarDesiredHeight;
- (struct CGRect)_navigationBarFrame;
- (void)endSuppressingColorSettingsUpdate;
- (void)beginSuppressingColorSettingsUpdate;
- (_Bool)_canSuppressNavigationBarBlur;
- (void)_setShowingTabBar:(_Bool)arg1 animated:(_Bool)arg2;
- (void)willShowViewAboveWebContent;
- (void)_resignWebViewFirstResponder;
- (void)setCloudTabsEnabled:(_Bool)arg1;
- (_Bool)shouldNotTrackUser;
- (_Bool)privateBrowsingEnabled;
- (void)_setPrivateBrowsingEnabled:(_Bool)arg1;
- (void)updatePrivateBrowsingGradient;
- (_Bool)showDemoModeFeatureDisabledAlert;
- (void)showPrintingDuringLoadAlert;
- (void)loadURL:(id)arg1;
- (void)updateIdleTimerDuration;
- (void)_resetIdleTimer;
- (void)_setIdleTimerDuration:(double)arg1;
- (void)resume;
- (id)_topScrollView;
- (_Bool)isAnyPageLoaded;
- (void)invalidateSourceApplication;
- (void)enterBackground;
- (void)suspend;
- (void)willSuspend;
- (void)updatePreferredStatusBarStyleAnimated:(_Bool)arg1;
- (void)_scrollToTopFromScrollToTopView;
- (void)updateScrollToTopView;
- (void)updateViewsAfterStatusBarChange;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

