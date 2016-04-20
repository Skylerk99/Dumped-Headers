/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:57 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/PLAirPlaySessionDataSource.h>
#import <libobjc.A.dylib/PLPhotoScrubberSpeedDelegate.h>
#import <libobjc.A.dylib/PLDeletePhotosActionControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKit/UIPageControllerDelegate.h>
#import <libobjc.A.dylib/PLPhotoTileViewControllerDelegate.h>
#import <libobjc.A.dylib/PLVideoViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <libobjc.A.dylib/PLPhotoScrubberDataSource.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <libobjc.A.dylib/PLSlideshowPluginDelegate.h>
#import <libobjc.A.dylib/PLDismissableViewController.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@protocol PLPhotoBrowserControllerDelegate;
@class NSMutableDictionary, UIPageController, UIScrollView, UIView, UITransitionView, NSIndexPath, NSNumberFormatter, UIAlertController, UIAlertView, PLProgressHUD, NSTimer, PHAsset, UIWindow, PLProgressView, PLVideoRemaker, UILongPressGestureRecognizer, NSArray, PHCachingImageManager, UIImage, PLPhotoScrubber, PLPhotoTileViewController, PLPictureFramePlugin, NSString, PLAirPlaySession, PLAirPlayBackgroundView, PLDeletePhotosActionController, UINavigationBar, NSMutableArray, NSManagedObjectID, PLAssetContainerDataSource, UIViewController, PHAssetCollection, PHFetchResult, PLVideoView, NSDictionary;

@interface PLPhotoBrowserController : UIViewController <PLAirPlaySessionDataSource, PLPhotoScrubberSpeedDelegate, PLDeletePhotosActionControllerDelegate, UIPopoverPresentationControllerDelegate, UIPageControllerDelegate, PLPhotoTileViewControllerDelegate, PLVideoViewDelegate, UIScrollViewDelegate, UINavigationControllerDelegate, UIAlertViewDelegate, PLPhotoScrubberDataSource, UIPopoverControllerDelegate, PLSlideshowPluginDelegate, PLDismissableViewController, PHPhotoLibraryChangeObserver> {

	id<PLPhotoBrowserControllerDelegate> __delegate;
	NSMutableDictionary* _tileCache;
	UIPageController* _pageController;
	UIScrollView* _scroller;
	UIView* _fadeToBlackView;
	UITransitionView* _slideshowTransitionView;
	UITransitionView* _cameraTransitionView;
	NSIndexPath* _currentIndexPath;
	NSIndexPath* _deletedIndexPath;
	NSIndexPath* _priorIndexPath;
	NSNumberFormatter* _scrubOverlayTitleFormatter;
	int _slideshowStatus;
	BOOL _showingNextImage;
	BOOL _tvOutOn;
	BOOL _playingVideo;
	BOOL _animating;
	CGSize _contentStartSize;
	float _startScale;
	float _endScale;
	UIView* _remakerContainerView;
	UIAlertController* _actionSheetController;
	UIAlertView* _alertView;
	UIAlertController* _alertViewController;
	PLProgressHUD* _savingPhotoHud;
	double _slideshowDelay;
	NSTimer* _slideshowTimer;
	SEL _photoAction;
	id _photoActionInvoker;
	PHAsset* _pendingPhoto;
	UIWindow* _tvOutWindow;
	UIPageController* _tvOutPageController;
	UIScrollView* _tvOutScroller;
	NSMutableDictionary* _tvOutTileCache;
	UITransitionView* _tvOutTransitionView;
	PLProgressView* _progressView;
	int _remakerMode;
	PLVideoRemaker* _remaker;
	PHAsset* _currentVideo;
	double _maximumTrimLength;
	UILongPressGestureRecognizer* _recognizer;
	SEL _actionAfterForcedRotation;
	BOOL _canDelayImageLoading;
	BOOL _delayImageLoading;
	int _autohideControlCount;
	NSArray* _currentAirplayRoutes;
	unsigned _statusBarIsLocked;
	unsigned _rotationDisabled;
	unsigned _videoEditingMode : 1;
	unsigned _remaking : 1;
	unsigned _clearingFullScreenView : 1;
	unsigned _scrolling : 1;
	unsigned _canShowCopyCallout : 1;
	unsigned _viewIsDisappearing : 1;
	unsigned _viewDidAppear : 1;
	unsigned _didRotate : 1;
	unsigned _navigationBarDisabled;
	unsigned _bottomBarDisabled;
	unsigned _appInteractionDisabled;
	unsigned _isAnimatingTrash : 1;
	unsigned _isPlayingMusic : 1;
	unsigned _didStartMusicPlayback : 1;
	unsigned _rotationDisabledUnderCropOverlay : 1;
	unsigned _didSetSimpleRemotePriority : 1;
	unsigned _paging : 1;
	unsigned _collapsing : 1;
	unsigned _rotating : 1;
	unsigned _reloadPhotoScrubber : 1;
	unsigned _videoViewWillBeginEditing : 1;
	unsigned _playVideoOnActivation : 1;
	unsigned _remakingWasCancelled : 1;
	unsigned _canUploadHDVideoOver3G : 1;
	unsigned _didSetHDVideoUploadCapability : 1;
	unsigned _didShowHDRPrompt : 1;
	unsigned _imagesAreShuffled : 1;
	unsigned _isEditingComment : 1;
	int _showErrorAlert;
	BOOL _ignoringInteractionEventsForVideoViewRemaking;
	NSIndexPath* _scrubbedImageIndexPath;
	long long _scrubberAssetContainerIndex;
	PHCachingImageManager* _cachingImageManager;
	NSMutableDictionary* _imageRequestsByIdentifier;
	UIImage* _loadedImage;
	PLPhotoScrubber* _photoScrubber;
	PLPhotoTileViewController* _deletedTile;
	int _currentAirTunesMode;
	unsigned long long _slideshowItemsToShow;
	unsigned long long _slideshowItemsShown;
	NSIndexPath* _slideshowEndIndexPath;
	BOOL _fadingToBlack;
	BOOL _slideshowStartedInFullScreen;
	BOOL _slideshowIsLoading;
	BOOL _slideshowIsEnding;
	PLPictureFramePlugin* _slideshowPlugin;
	UIView* _slideshowView;
	NSIndexPath* _lastStreamedPhotoIndexPath;
	NSIndexPath* _lastDisplayedRemoteSlideshowPhotoIndexPath;
	NSString* _currentAirTunesTransition;
	NSArray* _availableAirTunesServices;
	PLAirPlaySession* _airplaySession;
	unsigned _slideShowIsStreamed : 1;
	unsigned _airTunesSlideShowIsEnding : 1;
	PLAirPlayBackgroundView* _airTunesBackgroundView;
	PLDeletePhotosActionController* _deleteController;
	int _commentsInteractionMode;
	UINavigationBar* _commentsEditBar;
	BOOL _commentsTableWasVisible;
	NSMutableArray* _pendingCollectionListChangeNotifications;
	NSMutableArray* _pendingSingleCollectionChangeNotifications;
	NSMutableArray* _pendingAssetChangeNotifications;
	NSManagedObjectID* _currentAssetObjectID;
	NSString* _currentAssetPublicGlobalUUID;
	long long _publicGlobalUUIDRequestCount;
	NSString* _currentAssetContainerUUID;
	id _activityTarget;
	SEL _activityAction;
	BOOL shouldShowOverlaysWhenViewAppears;
	BOOL shouldShowOverlaysWhenViewDisappears;
	BOOL _isCameraApp;
	BOOL _shouldPlayVideoWhenViewAppears;
	BOOL _showsAirTunesOption;
	BOOL __enableInteractionEventsAfterUpdatingTileIndex;
	BOOL __statusBarHidden;
	int _photoThumbnailFormat;
	PLAssetContainerDataSource* _assetContainerDataSource;
	PLPhotoTileViewController* _mostRecentlyActiveTile;
	PLAssetContainerDataSource* __originalAssetContainerDataSource;
	PHAsset* __pendingAssetForTileUpdate;
	UIViewController* __deleteConfirmationViewController;
	long long __statusBarStyle;
	CGRect _menuControllerSourceRect;

}

@property (assign,nonatomic) id<PLPhotoBrowserControllerDelegate> delegate; 
@property (nonatomic,readonly) PHCachingImageManager * cachingImageManager; 
@property (assign,nonatomic) BOOL isCameraApp;                                                                                                              //@synthesize isCameraApp=_isCameraApp - In the implementation block
@property (assign,nonatomic) unsigned long long currentTileIndex; 
@property (nonatomic,retain) NSIndexPath * currentIndexPath; 
@property (assign,nonatomic) PHAsset * currentAsset; 
@property (nonatomic,readonly) PHAssetCollection * currentAssetContainer; 
@property (nonatomic,readonly) PHFetchResult * assetCollectionsFetchResult; 
@property (nonatomic,readonly) unsigned long long allAssetsCount; 
@property (nonatomic,readonly) PLVideoView * currentVideoView; 
@property (nonatomic,readonly) PLPhotoTileViewController * currentTile; 
@property (nonatomic,readonly) BOOL isPlayingSlideshow; 
@property (nonatomic,readonly) UIView * remakerContainerView; 
@property (nonatomic,readonly) UIScrollView * mainScroller; 
@property (nonatomic,retain) PLPhotoScrubber * photoScrubber; 
@property (nonatomic,readonly) UIView * commentsView; 
@property (nonatomic,readonly) UIPageController * pageController; 
@property (nonatomic,readonly) UIView * pageControllerView; 
@property (assign,nonatomic) BOOL shouldShowOverlaysWhenViewAppears; 
@property (assign,nonatomic) BOOL shouldShowOverlaysWhenViewDisappears; 
@property (assign,nonatomic) BOOL shouldPlayVideoWhenViewAppears;                                                                                           //@synthesize shouldPlayVideoWhenViewAppears=_shouldPlayVideoWhenViewAppears - In the implementation block
@property (assign,nonatomic) BOOL canDelayImageLoading; 
@property (assign,nonatomic) BOOL delayImageLoading; 
@property (nonatomic,readonly) BOOL showsAirTunesOption;                                                                                                    //@synthesize showsAirTunesOption=_showsAirTunesOption - In the implementation block
@property (assign,nonatomic) BOOL canShowCopyCallout; 
@property (nonatomic,readonly) BOOL canEditVideo; 
@property (nonatomic,retain) UIScrollView * pageControllerScrollView; 
@property (assign,nonatomic) CGRect menuControllerSourceRect;                                                                                               //@synthesize menuControllerSourceRect=_menuControllerSourceRect - In the implementation block
@property (nonatomic,copy) NSDictionary * slideshowSettingsForCurrentAssetContainer; 
@property (nonatomic,retain,readonly) PLAssetContainerDataSource * assetContainerDataSource;                                                                //@synthesize assetContainerDataSource=_assetContainerDataSource - In the implementation block
@property (nonatomic,readonly) id<PLRootLibraryNavigationController> rootNavigationController; 
@property (nonatomic,retain) PLPhotoTileViewController * mostRecentlyActiveTile;                                                                            //@synthesize mostRecentlyActiveTile=_mostRecentlyActiveTile - In the implementation block
@property (nonatomic,readonly) PHAsset * currentAssetForZoomTransition; 
@property (nonatomic,readonly) PHAssetCollection * currentAssetContainerForZoomTransition; 
@property (nonatomic,readonly) PLPhotoTileViewController * currentTileForZoomTransition; 
@property (assign,nonatomic) int photoThumbnailFormat;                                                                                                      //@synthesize photoThumbnailFormat=_photoThumbnailFormat - In the implementation block
@property (setter=_setPriorIndexPath:,nonatomic,retain) NSIndexPath * _priorIndexPath;                                                                      //@synthesize priorIndexPath=_priorIndexPath - In the implementation block
@property (setter=_setDeletedIndexPath:,nonatomic,retain) NSIndexPath * _deletedIndexPath;                                                                  //@synthesize deletedIndexPath=_deletedIndexPath - In the implementation block
@property (setter=_setSlideshowEndIndexPath:,nonatomic,retain) NSIndexPath * _slideshowEndIndexPath;                                                        //@synthesize slideshowEndIndexPath=_slideshowEndIndexPath - In the implementation block
@property (setter=_setScrubbedImageIndexPath:,nonatomic,retain) NSIndexPath * _scrubbedImageIndexPath;                                                      //@synthesize scrubbedImageIndexPath=_scrubbedImageIndexPath - In the implementation block
@property (setter=_setLastDisplayedRemoteSlideshowPhotoIndexPath:,nonatomic,retain) NSIndexPath * _lastDisplayedRemoteSlideshowPhotoIndexPath;              //@synthesize lastDisplayedRemoteSlideshowPhotoIndexPath=_lastDisplayedRemoteSlideshowPhotoIndexPath - In the implementation block
@property (setter=_setOriginalAssetContainerDataSource:,nonatomic,retain) PLAssetContainerDataSource * _originalAssetContainerDataSource;                   //@synthesize _originalAssetContainerDataSource=__originalAssetContainerDataSource - In the implementation block
@property (setter=_setPendingAssetForTileUpdate:,nonatomic,retain) PHAsset * _pendingAssetForTileUpdate;                                                    //@synthesize _pendingAssetForTileUpdate=__pendingAssetForTileUpdate - In the implementation block
@property (assign,setter=_setEnableInteractionEventsAfterUpdatingTileIndex:,nonatomic) BOOL _enableInteractionEventsAfterUpdatingTileIndex;                 //@synthesize _enableInteractionEventsAfterUpdatingTileIndex=__enableInteractionEventsAfterUpdatingTileIndex - In the implementation block
@property (setter=_setDeleteConfirmationViewController:,nonatomic,retain) UIViewController * _deleteConfirmationViewController;                             //@synthesize _deleteConfirmationViewController=__deleteConfirmationViewController - In the implementation block
@property (assign,setter=_setStatusBarStyle:,nonatomic) long long _statusBarStyle;                                                                          //@synthesize _statusBarStyle=__statusBarStyle - In the implementation block
@property (assign,setter=_setStatusBarHidden:,nonatomic) BOOL _statusBarHidden;                                                                             //@synthesize _statusBarHidden=__statusBarHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(id)_imageRequestCacheQueue;
+(void)setPageControllerScrollViewClass:(Class)arg1 ;
-(BOOL)isRotationEnabled;
-(void)_fadeOut;
-(BOOL)prepareForDismissingForced:(BOOL)arg1 ;
-(PHFetchResult *)assetCollectionsFetchResult;
-(void)deletePhotosActionController:(id)arg1 presentConfirmationViewController:(id)arg2 ;
-(PHCachingImageManager *)cachingImageManager;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(void)setAssetCollections:(id)arg1 dataSource:(id)arg2 currentImageIndexPath:(id)arg3 ;
-(PHAsset *)currentAsset;
-(NSIndexPath *)currentIndexPath;
-(void)photoLibraryDidChange:(id)arg1 ;
-(BOOL)_appAllowsSupressionOfAlerts;
-(void)videoRemakerDidBeginRemaking:(id)arg1 ;
-(void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2 ;
-(void)updateOverlaysAnimated:(BOOL)arg1 ;
-(void)setCurrentAsset:(PHAsset *)arg1 ;
-(PLPhotoTileViewController *)currentTile;
-(int)photoThumbnailFormat;
-(void)setPhotoThumbnailFormat:(int)arg1 ;
-(void)cleanupAfterDismissal;
-(UIView *)pageControllerView;
-(void)endSlideshow;
-(PLVideoView *)currentVideoView;
-(BOOL)canShowPreviousImage;
-(BOOL)canShowNextImage;
-(UIScrollView *)pageControllerScrollView;
-(PLAssetContainerDataSource *)assetContainerDataSource;
-(PLPhotoScrubber *)photoScrubber;
-(void)revealComment:(id)arg1 ;
-(void)hideCommentsTable;
-(void)removeAdjacentCommentsTables;
-(BOOL)setNextSlideshowState:(int)arg1 ;
-(void)playSlideshowFromAlbum;
-(PHAsset *)currentAssetForZoomTransition;
-(PLPhotoTileViewController *)currentTileForZoomTransition;
-(PHAssetCollection *)currentAssetContainer;
-(PHAssetCollection *)currentAssetContainerForZoomTransition;
-(BOOL)shouldPlayVideoWhenViewAppears;
-(void)setShouldPlayVideoWhenViewAppears:(BOOL)arg1 ;
-(void)transitionWillBegin;
-(void)transitionDidEndWithOperation:(long long)arg1 ;
-(UIView *)commentsView;
-(BOOL)prepareToDisplayActivitySheet;
-(CGRect)menuControllerSourceRect;
-(BOOL)dismissPopovers;
-(void)deleteImageClicked:(id)arg1 ;
-(void)playCurrentMedia:(id)arg1 ;
-(void)pauseCurrentMedia:(id)arg1 ;
-(void)trimVideo:(id)arg1 ;
-(void)cancelVideoEditingMode:(id)arg1 ;
-(void)commitPendingUpdatesWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_isTrashBin;
-(int)videoRemakerMode;
-(BOOL)isPlayingSlideshow;
-(unsigned long long)allAssetsCount;
-(void)_setStatusBarStyle:(long long)arg1 ;
-(BOOL)isEditingVideo;
-(BOOL)_currentItemHasAudio;
-(void)setCurrentIndexPath:(NSIndexPath *)arg1 ;
-(BOOL)shouldShowOverlaysWhenViewAppears;
-(void)setShouldShowOverlaysWhenViewAppears:(BOOL)arg1 ;
-(void)setIsCameraApp:(BOOL)arg1 ;
-(void)setDelegate:(id<PLPhotoBrowserControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<PLPhotoBrowserControllerDelegate>)delegate;
-(id)navigationBar;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)viewWillLayoutSubviews;
-(long long)_statusBarStyle;
-(BOOL)isEditing;
-(double)durationForTransition:(int)arg1 ;
-(void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)contentScrollView;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)rotatingFooterView;
-(void)_getRotationContentSettings:(SCD_Struct_PL3*)arg1 ;
-(void)_longPressRecognized:(id)arg1 ;
-(void)setRotationDisabled:(BOOL)arg1 ;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(id)pageController:(id)arg1 viewControllerAtIndex:(long long)arg2 ;
-(UIPageController *)pageController;
-(Class)_pageControllerScrollViewClass;
-(void)pageControllerWillBeginPaging:(id)arg1 ;
-(void)pageControllerDidEndPaging:(id)arg1 ;
-(void)_setStatusBarHidden:(BOOL)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)applicationResumed:(id)arg1 ;
-(void)setPageControllerScrollView:(UIScrollView *)arg1 ;
-(void)_simpleRemoteActionDidOccur:(id)arg1 ;
-(void)_externalScreenConnected:(id)arg1 ;
-(void)_externalScreenDisconnected:(id)arg1 ;
-(void)setShouldShowOverlaysWhenViewDisappears:(BOOL)arg1 ;
-(void)_setIgnoreInteractionEventsForVideoViewRemaking:(BOOL)arg1 ;
-(void)_removeTVOutWindow;
-(void)_clearFullScreenView;
-(void)_forceDismissActionSheet:(BOOL)arg1 enableToolbarTimer:(BOOL)arg2 ;
-(void)_forceDismissAlertView:(BOOL)arg1 enableToolbarTimer:(BOOL)arg2 ;
-(void)_forceDismissDeleteController:(BOOL)arg1 enableToolbarTimer:(BOOL)arg2 ;
-(void)_flushTileCache;
-(void)_cleanUpCurrentAirplaySession;
-(BOOL)wantsPhotoBrowserStyleStatusBar;
-(BOOL)_statusBarHidden;
-(PLAssetContainerDataSource *)_originalAssetContainerDataSource;
-(void)_setCurrentIndexPath:(id)arg1 ;
-(void)_requestImageForPhoto:(id)arg1 imageFormat:(int)arg2 inTile:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(id)_lowResolutionPreviewImageForPhoto:(id)arg1 ;
-(void)_configureVideoViewInTile:(id)arg1 ;
-(void)_willDisplayTileController:(id)arg1 ;
-(void)photoTileViewControllerCancelImageRequests:(id)arg1 ;
-(BOOL)canEditVideo;
-(PLPhotoTileViewController *)mostRecentlyActiveTile;
-(id)_tileForAsset:(id)arg1 shouldCreate:(BOOL)arg2 tileCache:(id)arg3 ;
-(void)_slideshowPlayTimerFired:(id)arg1 ;
-(void)_disableIdleTimer;
-(void)_forceRemoveSavingPhotoHUD;
-(id)_playbackVideoView;
-(BOOL)_shouldPauseOrStopVideo;
-(BOOL)isCameraApp;
-(void)_stopAirTunesSlideShow:(BOOL)arg1 ;
-(void)_stopStreamingPhotosToAirTunes;
-(void)_prepareForTVOut;
-(void)_cancelRemaking;
-(void)_updateIndexPathsWithChange:(id)arg1 ;
-(void)_setCurrentIndexPath:(id)arg1 refreshAssetTrackingDetails:(BOOL)arg2 ;
-(id)_findIndexPathForAssetWithObjectID:(id)arg1 globalUUID:(id)arg2 priorIndexPath:(id)arg3 assetCollection:(id)arg4 ;
-(void)_validateTileCache:(id)arg1 ;
-(void)_invalidateAirplayCache;
-(void)_updateTileAndImageCachesForChange:(id)arg1 ;
-(void)_updatePageControllerWithCurrentPath:(id)arg1 priorPreviousTileAsset:(id)arg2 priorNextTileAsset:(id)arg3 ;
-(void)_updateAfterAnimation;
-(void)_setSlideshowEndIndexPath:(id)arg1 ;
-(void)_setDeletedIndexPath:(id)arg1 ;
-(void)_setLastDisplayedRemoteSlideshowPhotoIndexPath:(id)arg1 ;
-(void)_updateTileIndexForPendingAssetIfNeededAndAvailable;
-(id)_updateIndexPath:(id)arg1 withChange:(id)arg2 deleteAction:(int)arg3 ;
-(NSIndexPath *)_slideshowEndIndexPath;
-(NSIndexPath *)_lastDisplayedRemoteSlideshowPhotoIndexPath;
-(NSIndexPath *)_deletedIndexPath;
-(BOOL)_isPhotoTileViewControllerStaleAtIndex:(unsigned long long)arg1 ;
-(BOOL)delayImageLoading;
-(void)_updateFullScreenPreviewImageForPhoto:(id)arg1 inTile:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)photoTileViewControllerRequestsFullScreenImage:(id)arg1 ;
-(void)photoTileViewController:(id)arg1 didAppear:(BOOL)arg2 ;
-(void)viewDidAppear;
-(void)updateBarsAnimated:(BOOL)arg1 ;
-(void)togglePlayPause:(id)arg1 ;
-(void)displayNextPhoto:(id)arg1 ;
-(void)displayPreviousPhoto:(id)arg1 ;
-(BOOL)_mainScrollerIsVisible;
-(void)_setMusicIsPlaying:(BOOL)arg1 ;
-(void)animateToIndex;
-(void)_didLoadImage:(id)arg1 forObjectID:(id)arg2 ;
-(BOOL)barsAreVisible;
-(UIView *)remakerContainerView;
-(void)_flushTileCache:(id)arg1 preservingTilesInPageController:(id)arg2 ;
-(void)_setPriorIndexPath:(id)arg1 ;
-(void)_hideCallout;
-(void)_pauseVideoPlaybackForIndexPath:(id)arg1 ;
-(void)_updateCurrentIndexForPageController:(id)arg1 ;
-(void)_showHDRPromptIfNeeded;
-(void)_showCommentTableIfNecessary:(double)arg1 ;
-(void)_hideCommentsTableIfNecessary:(double)arg1 ;
-(void)setMainScrollerEnabled:(BOOL)arg1 ;
-(void)_updateStatusBarVisibilityWithDuration:(double)arg1 ;
-(void)_updateForCommentsControllerEditMode:(id)arg1 ;
-(BOOL)_slideshowNotRunning;
-(void)_photoScrubberDidBeginScrubbing:(id)arg1 ;
-(void)_photoScrubberValueDidChange:(id)arg1 ;
-(void)_photoScrubberDidEndScrubbing:(id)arg1 ;
-(void)_setupPhotoScrubber:(BOOL)arg1 ;
-(void)_discardPhotoScrubber;
-(BOOL)showingCommentsTable;
-(void)_scrubberDidBeginScrubbing:(id)arg1 ;
-(void)_setScrubbedImageIndexPath:(id)arg1 ;
-(void)showCommentsTable;
-(void)_scrubberDidEndScrubbing:(id)arg1 ;
-(void)_shuffleAssets:(BOOL)arg1 ;
-(BOOL)canDelayImageLoading;
-(void)setDelayImageLoading:(BOOL)arg1 ;
-(void)_makeTilesPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(void)setStatusBarIsLocked:(BOOL)arg1 ;
-(void)_stopVideoPlaybackForIndexPath:(id)arg1 ;
-(void)setVideoEditingMode:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_stopSlideshowTimer;
-(BOOL)_stopSlideshow;
-(BOOL)_startingSlideshow;
-(BOOL)_playSlideshow;
-(BOOL)_pauseSlideshow;
-(BOOL)isActiveViewControllerInNavigationController;
-(void)_slideshowWillBegin;
-(void)_slideshowPlayCurrentSlide;
-(id)_preloadNextTileInCache:(id)arg1 insideCurrentAssetContainer:(BOOL)arg2 ;
-(void)_slideshowWillEnd;
-(void)showNextImageWithTransition:(int)arg1 insideCurrentAssetContainer:(BOOL)arg2 ;
-(void)setCurrentTileIndex:(unsigned long long)arg1 ;
-(void)_startSlideshowTimer;
-(void)_setMusicIsPlaying:(BOOL)arg1 forPhoto:(id)arg2 ;
-(void)_fadeIn;
-(void)_prepareToFade;
-(void)_fadeToViewContents;
-(void)_slideshowViewWasTapped:(id)arg1 ;
-(void)setUsesPhotoBrowserStyleStatusBar:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_displayLastImageForSlideshowPlugin:(id)arg1 ;
-(void)_removeAirTunesSlideShowViewAndReset;
-(void)_airTunesSlideShowViewWasTapped;
-(void)setAppInteractionDisabled:(BOOL)arg1 ;
-(void)_pauseVideoPlaybackForIndexPath:(id)arg1 fullStop:(BOOL)arg2 ;
-(void)updateAfterCollapse;
-(NSIndexPath *)_priorIndexPath;
-(id)_suppresionContexts;
-(unsigned long long)currentTileIndex;
-(id)_currentTVOutTile;
-(id)_currentTVOutVideoView;
-(void)setCurrentTileIndex:(unsigned long long)arg1 updateAfterAnimation:(BOOL)arg2 ;
-(void)_fetchPublicGlobalUUIDForCurrentAsset:(id)arg1 ;
-(void)setCurrentIndexPath:(id)arg1 updateAfterAnimation:(BOOL)arg2 ;
-(void)_transitionToImage:(id)arg1 fromOldIndex:(long long)arg2 toNewIndex:(long long)arg3 transition:(int)arg4 transitionView:(id)arg5 insideCurrentAssetContainer:(BOOL)arg6 ;
-(void)_dereferenceTile:(id)arg1 ;
-(void)_performCATransition:(id)arg1 ;
-(void)_transitionToImage:(id)arg1 fromOldIndex:(long long)arg2 toNewIndex:(long long)arg3 transition:(int)arg4 insideCurrentAssetContainer:(BOOL)arg5 ;
-(void)_prepareForDelete;
-(void)_finishRemoveAsset:(id)arg1 atIndexPath:(id)arg2 ;
-(void)showPreviousImageWithTransition:(int)arg1 insideCurrentAssetContainer:(BOOL)arg2 ;
-(void)_didDeleteCurrentAsset;
-(void)_setDeleteConfirmationViewController:(id)arg1 ;
-(UIViewController *)_deleteConfirmationViewController;
-(id)_buttonItemViewWithTag:(int)arg1 ;
-(void)mainScrollerDidEndSmoothScroll;
-(void)_streamPhoto:(id)arg1 withTransition:(id)arg2 ;
-(void)setVideoEditingMode:(BOOL)arg1 ;
-(id)_currentAirplayRoute;
-(void)_handleImageResultForPhoto:(id)arg1 inTile:(id)arg2 objectID:(id)arg3 result:(id)arg4 info:(id)arg5 ;
-(void)_loadImageForTile:(id)arg1 format:(int)arg2 ;
-(void)_cancelImageRequestsForPhoto:(id)arg1 ;
-(void)setMostRecentlyActiveTile:(PLPhotoTileViewController *)arg1 ;
-(BOOL)_isScrolling;
-(void)actionSheetDidFinish;
-(void)removeCurrentPhoto;
-(void)actionSheetWillAppear;
-(id<PLRootLibraryNavigationController>)rootNavigationController;
-(BOOL)_canTrimCurrentVideoInPlace;
-(void)_showConfirmationForPassthroughTrimming:(id)arg1 ;
-(void)_delayedExitEditingMode;
-(void)_commonDidBeginRemaking;
-(void)updateProgressView;
-(void)_commonRemakingProgressDidChange:(float)arg1 ;
-(void)_commonDidEndRemaking:(id)arg1 pathToTrimmedFile:(id)arg2 didSucceed:(BOOL)arg3 shouldReenableInteractionEvents:(BOOL)arg4 ;
-(void)_setPendingAssetForTileUpdate:(id)arg1 ;
-(void)_setEnableInteractionEventsAfterUpdatingTileIndex:(BOOL)arg1 ;
-(void)_scheduleTimeoutForPendingAsset;
-(PHAsset *)_pendingAssetForTileUpdate;
-(BOOL)_enableInteractionEventsAfterUpdatingTileIndex;
-(void)_cancelTimeoutForPendingAsset;
-(void)_timeoutPendingAsset;
-(id)photoCountFormatter;
-(void)removeRemakerContainerView;
-(void)_removeProgressView;
-(id)photoScrollerTitle;
-(BOOL)statusBarIsLocked;
-(void)_updateTVOutAfterAnimation;
-(void)_configureTVOutPageController;
-(void)setMenuControllerSourceRect:(CGRect)arg1 ;
-(void)_airTunesSlideShowTimerFired;
-(id)_nextAirTunesSlideshowPhoto;
-(id)airPlaySession:(id)arg1 previousPhotoForPhoto:(id)arg2 ;
-(id)airPlaySession:(id)arg1 nextPhotoForPhoto:(id)arg2 ;
-(void)airPlaySession:(id)arg1 didFailToStreamPhotoWithError:(id)arg2 ;
-(void)photoScrubber:(id)arg1 scrubbingSpeedDidChange:(long long)arg2 ;
-(void)photoTileViewController:(id)arg1 willAppear:(BOOL)arg2 ;
-(void)photoTileViewController:(id)arg1 didDisappear:(BOOL)arg2 ;
-(void)photoTileViewControllerRequestsFullSizeImage:(id)arg1 ;
-(void)photoTileViewControllerSingleTap:(id)arg1 ;
-(void)photoTileViewControllerDoubleTap:(id)arg1 ;
-(void)photoTileViewControllerWillBeginGesture:(id)arg1 ;
-(void)photoTileViewControllerDidEndGesture:(id)arg1 ;
-(BOOL)photoTileViewControllerAllowsEditing:(id)arg1 ;
-(BOOL)isPhotoTileParentPageControllerAnimating:(id)arg1 ;
-(void)photoTileViewController:(id)arg1 willEnterEditModeInCommentsController:(id)arg2 ;
-(void)photoTileViewController:(id)arg1 didExitEditModeInCommentsController:(id)arg2 ;
-(void)photoTileViewController:(id)arg1 commentsControllerWillBeginScrolling:(id)arg2 ;
-(BOOL)photoTileViewControllerCanShowCenterOverlay:(id)arg1 ;
-(id)photoTileViewControllerCustomCenterOverlay:(id)arg1 ;
-(id)photoTileViewControllerTopLayoutGuide:(id)arg1 ;
-(void)videoViewDidCreateAttachments:(id)arg1 ;
-(BOOL)videoViewCanBeginPlayback:(id)arg1 ;
-(void)videoViewDidBeginPlayback:(id)arg1 ;
-(void)videoViewDidPausePlayback:(id)arg1 ;
-(void)videoViewDidEndPlayback:(id)arg1 didFinish:(BOOL)arg2 ;
-(void)videoViewDidEndScrubbing:(id)arg1 ;
-(void)videoViewDidBeginRemaking:(id)arg1 ;
-(void)videoViewDidEndRemaking:(id)arg1 didSucceed:(BOOL)arg2 ;
-(void)videoView:(id)arg1 remakingProgressDidChange:(float)arg2 ;
-(void)videoViewWillBeginEditing:(id)arg1 ;
-(void)videoViewDidBeginEditing:(id)arg1 ;
-(void)videoViewDidCancelEditing:(id)arg1 ;
-(void)videoView:(id)arg1 displayPlayOverlay:(id)arg2 ;
-(BOOL)videoViewShouldRespondToPlayOverlayTap:(id)arg1 ;
-(BOOL)videoViewCanCreateMetadata:(id)arg1 ;
-(id)videoViewRequestsPickedAirplayRoute:(id)arg1 ;
-(long long)numPhotosInAlbumForPhotoScrubber:(id)arg1 ;
-(id)photoScrubber:(id)arg1 loadImageSynchronously:(BOOL)arg2 atIndex:(long long)arg3 forLoupe:(BOOL)arg4 ;
-(void)slideshowPluginReadyToBegin:(id)arg1 ;
-(void)slideshowPluginDidDisplayFinalImage:(id)arg1 ;
-(void)_showSavingPhotoHUDForPhoto:(id)arg1 ;
-(void)_removeSavingPhotoHUDForPhoto:(id)arg1 ;
-(void)storeCurrentConfiguration:(id)arg1 ;
-(UIScrollView *)mainScroller;
-(void)setPhotoScrubber:(PLPhotoScrubber *)arg1 ;
-(void)viewWillAppear;
-(void)viewWillDisappear;
-(void)_loadSlideshowPlugin;
-(id)_pl_albumAssetsForSlideShow:(id)arg1 startingAtIndex:(unsigned long long)arg2 ;
-(void)_showTileCache;
-(void)setNavigationBarDisabled:(BOOL)arg1 ;
-(void)setBottomBarDisabled:(BOOL)arg1 ;
-(void)imageViewWillSwitchToFullSizeImage:(id)arg1 ;
-(void)imageViewDidSwitchToFullSizeImage:(id)arg1 ;
-(BOOL)photoTileViewControllerIsDisplayingLandscape:(id)arg1 ;
-(void)setCanDelayImageLoading:(BOOL)arg1 ;
-(void)_performPostAlbumStreamTasksWithNewlyCreatedAlbum:(NSObject*)arg1 ;
-(id)_actionViewRootView;
-(void)videoRemaker:(id)arg1 progressDidChange:(float)arg2 ;
-(void)setCanShowCopyCallout:(BOOL)arg1 ;
-(BOOL)canShowCopyCallout;
-(void)currentAirplayRouteChanged;
-(void)saveSelectionOfMusic:(id)arg1 transition:(id)arg2 ;
-(NSDictionary *)slideshowSettingsForCurrentAssetContainer;
-(void)setSlideshowSettingsForCurrentAssetContainer:(NSDictionary *)arg1 ;
-(void)beginLocalSlideshowWithSettings:(id)arg1 ;
-(void)beginRemoteSlideshowToRouteID:(id)arg1 settings:(id)arg2 ;
-(void)setAirTunesMode:(int)arg1 ;
-(void)_airTunesServiceDidDisconnect:(id)arg1 ;
-(BOOL)_canUploadHDVideo;
-(BOOL)shouldShowActionMenu;
-(BOOL)shouldShowPlayButton;
-(BOOL)currentItemIsPlaying;
-(BOOL)shouldShowOverlaysWhenViewDisappears;
-(NSIndexPath *)_scrubbedImageIndexPath;
-(BOOL)showsAirTunesOption;
-(void)_setOriginalAssetContainerDataSource:(id)arg1 ;
@end

