/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIViewController.h>

@class QLPreviewControllerReserved;

@interface QLPreviewController : UIViewController {

	QLPreviewControllerReserved* _reserved;

}

@property (__weak) id<QLPreviewControllerDataSource> dataSource; 
@property (assign) long long currentPreviewItemIndex; 
@property (readonly) id<QLPreviewItem> currentPreviewItem; 
@property (__weak) id<QLPreviewControllerDelegate> delegate; 
+(id)contentTypeForPreviewItem:(id)arg1 ;
+(BOOL)canPreviewDocumentType:(id)arg1 ;
+(id)_passThroughDocumentTypes;
+(BOOL)_shouldPassThroughDocumentType:(id)arg1 ;
+(BOOL)canPreviewMIMEType:(id)arg1 ;
+(id)titleForPreviewItem:(id)arg1 ;
+(BOOL)copyPreviewItemToPasteboard:(id)arg1 ;
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(BOOL)arg4 ;
+(BOOL)canPreviewItem:(id)arg1 ;
-(BOOL)ckCanDismissWhenSuspending;
-(void)_updateNavigationBarAnimated:(BOOL)arg1 ;
-(BOOL)_overlayVisible;
-(id)_currentNavigationController;
-(void)_updateToolbarVisibilityAnimated:(BOOL)arg1 ;
-(BOOL)_canShowStatusBar;
-(void)_updateToolbarAnimated:(BOOL)arg1 ;
-(void)_showOverlayAdjustingStatusBar:(BOOL)arg1 duration:(double)arg2 ;
-(void)_setControlsOverlayVisible:(BOOL)arg1 adjustingStatusBar:(BOOL)arg2 duration:(double)arg3 ;
-(void)_contentWasTapped;
-(void)_removeOverlayButtons;
-(void)_restoreOriginalNavigationBarItems;
-(void)_createControls;
-(void)_updateStatusBarVisibilityWithTraitCollection:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateToolbarWithMode:(int)arg1 traitCollection:(id)arg2 animated:(BOOL)arg3 ;
-(void)_updateNavigationBarWithMode:(int)arg1 traitCollection:(id)arg2 animated:(BOOL)arg3 ;
-(void)_updateToolbarVisibilityWithTraitCollection:(id)arg1 animated:(BOOL)arg2 ;
-(id)additionalLeftBarButtonItems;
-(id)additionalRightBarButtonItems;
-(BOOL)_needsAVControls;
-(unsigned long long)_customButtons;
-(BOOL)_needsToolbarForTraitCollection:(id)arg1 ;
-(unsigned long long)_currentAVButton;
-(unsigned long long)_buttonForAction;
-(unsigned long long)_buttonForArchive;
-(unsigned long long)toolBarButtonsForMode:(int)arg1 traitCollection:(id)arg2 ;
-(id)_flexibleSpaceItem;
-(id)_listDescriptionStringWithTitle:(id)arg1 ;
-(void)_updateNavigationBarTitleWithTraitCollection:(id)arg1 ;
-(unsigned long long)navigationBarButtonsForMode:(int)arg1 traitCollection:(id)arg2 ;
-(BOOL)_needsToolbar;
-(void)_hideOverlayAdjustingStatusBar:(BOOL)arg1 duration:(double)arg2 ;
-(id)_fixedSpaceItemWithWidth:(double)arg1 ;
-(id)imageWithImage:(id)arg1 drawnOnTopOf:(id)arg2 stretchedToSize:(CGSize)arg3 scale:(double)arg4 ;
-(id)_buttonItemForArchive;
-(void)setAdditionalLeftBarButtonItems:(id)arg1 ;
-(BOOL)_overlayVisibleBeforeDismissal;
-(void)previewContentController:(id)arg1 setAVState:(id)arg2 forPreviewItem:(id)arg3 ;
-(void)setAdditionalRightBarButtonItems:(id)arg1 ;
-(id)excludedActivityTypesForDocumentInteractionController:(id)arg1 ;
-(id)additionalActivitiesForDocumentInteractionController:(id)arg1 ;
-(id)activityItemForDocumentInteractionController:(id)arg1 ;
-(id)printInfoForDocumentInteractionController:(id)arg1 ;
-(void)prepareForPrinting;
-(void)_requestRemoteViewControllerIfNeeded;
-(void)_runDeferredAnimationBlock;
-(void)_unloadInternalViews;
-(id)itemsSource;
-(id)_displayedInteractionController;
-(void)setTransitioning:(BOOL)arg1 synchronizedWithBlock:(/*^block*/id)arg2 ;
-(void)_configurePreviewContentController;
-(void)dismissDisplayedInteractionControllerAnimated:(BOOL)arg1 ;
-(void)_showContentsIfPossibleAnimated:(BOOL)arg1 ;
-(long long)numberOfPreviewItems;
-(id)previewItemAtIndex:(long long)arg1 ;
-(void)_setCurrentPreviewItemIndex:(long long)arg1 fromClient:(BOOL)arg2 showContentsIfPossible:(BOOL)arg3 ;
-(void)removePreviewContentController;
-(void)_showGenericDisplayBundle;
-(int)_preferredModeWithParentViewController:(id)arg1 presentingViewController:(id)arg2 traitCollection:(id)arg3 ;
-(int)_preferredModeWithParentViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)_setupWithMode:(int)arg1 parentViewController:(id)arg2 ;
-(void)_setupPreferredModeWithParentViewController:(id)arg1 ;
-(BOOL)_addPreviewContentController;
-(void)_saveBarsState;
-(void)_loadInternalViews;
-(void)updateOrbState;
-(CGRect)_contentFrameForRemoteView;
-(void)_removeChildPreviewContentControllerIfNeeded;
-(void)leftArrowAction:(id)arg1 ;
-(void)rightArrowAction:(id)arg1 ;
-(void)dismissTransitionIsReadyToFinishSynchronizedWithBlock:(/*^block*/id)arg1 ;
-(BOOL)blockRemoteImages;
-(void)setUseCustomActionButton:(BOOL)arg1 ;
-(BOOL)useCustomActionButton;
-(void)setShowActionAsDefaultButton:(BOOL)arg1 ;
-(BOOL)showActionAsDefaultButton;
-(void)animateWhenReadyWithBlock:(/*^block*/id)arg1 ;
-(id)passThroughViewsForIndexSheet;
-(id)previewContentController;
-(id)swipeToDismissGestureRecognizer;
-(id)_documentProxyForPreviewItem:(id)arg1 ;
-(long long)currentSourceUUIDForPreviewContentController:(id)arg1 ;
-(long long)numberOfPreviewItemsInPreviewContentController:(id)arg1 ;
-(id)previewContentController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(void)previewContentController:(id)arg1 previewItemAtIndex:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)previewContentController:(id)arg1 willMoveToItemAtIndex:(long long)arg2 ;
-(void)previewContentController:(id)arg1 didMoveToItem:(id)arg2 atIndex:(long long)arg3 ;
-(void)previewContentController:(id)arg1 didLoadItem:(id)arg2 atIndex:(long long)arg3 withError:(id)arg4 ;
-(void)previewContentController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)previewContentController:(id)arg1 willShowOverlayWithDuration:(double)arg2 ;
-(void)previewContentController:(id)arg1 willHideOverlayWithDuration:(double)arg2 ;
-(void)contentWasTappedInPreviewContentController:(id)arg1 ;
-(void)showContentsWasTappedInPreviewContentController:(id)arg1 ;
-(void)overlayWasTappedInPreviewContentController:(id)arg1 ;
-(void)previewContentController:(id)arg1 receivedTapOnURL:(id)arg2 ;
-(void)actionButtonTapped:(id)arg1 ;
-(void)customActionButtonTapped:(id)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
-(void)arrowsAction:(id)arg1 ;
-(void)showArchiveContent:(id)arg1 ;
-(void)playButtonAction:(id)arg1 ;
-(void)navigationGoBackAction:(id)arg1 ;
-(BOOL)canPrint;
-(void)dismissalGestureDidUpdateInPreviewContentController:(id)arg1 state:(long long)arg2 trackingInformation:(id)arg3 ;
-(unsigned long long)currentOrbMode;
-(void)setDataSource:(id<QLPreviewControllerDataSource>)arg1 ;
-(void)setDelegate:(id<QLPreviewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<QLPreviewControllerDataSource>)dataSource;
-(id<QLPreviewControllerDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_commonInit;
-(id)_currentInteractionController;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(int)mode;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)documentInteractionControllerWillPresentOptionsMenu:(id)arg1 ;
-(void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1 ;
-(BOOL)sourceIsManaged;
-(id<QLPreviewItem>)currentPreviewItem;
-(void)setSourceIsManaged:(BOOL)arg1 ;
-(void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(BOOL)arg4 ;
-(void)setBlockRemoteImages:(BOOL)arg1 ;
-(void)setCurrentOrbMode:(unsigned long long)arg1 ;
-(void)setCurrentPreviewItemIndex:(long long)arg1 ;
-(void)_prepareDelayedAppearance;
-(void)setLoadingTextForMissingFiles:(id)arg1 ;
-(void)refreshCurrentPreviewItem;
-(long long)currentPreviewItemIndex;
@end

