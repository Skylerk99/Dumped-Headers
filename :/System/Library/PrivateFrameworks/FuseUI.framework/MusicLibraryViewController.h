/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MusicActionableHeaderViewDelegate.h>
#import <libobjc.A.dylib/MusicClientContextConsuming.h>
#import <libobjc.A.dylib/MusicLayoutMarginProxyViewDelegate.h>
#import <libobjc.A.dylib/MusicLibraryBrowseCollectionViewControllerDelegate.h>
#import <libobjc.A.dylib/MusicVerticalScrollingContainerViewControllerDelegate.h>
#import <libobjc.A.dylib/SKUIIndexBarControlDataSource.h>
#import <libobjc.A.dylib/SKUIIndexBarControlDelegate.h>
#import <libobjc.A.dylib/SKUIProxyScrollViewDelegate.h>
#import <UIKit/UIViewControllerRestoration.h>
#import <libobjc.A.dylib/MusicSplitInitialStateProviding.h>
#import <libobjc.A.dylib/SKUITabBarItemRootViewController.h>

@protocol MusicIndexBarDataSourceMusicIndexBarScrollDelegate;
@class MusicLibraryArtistsViewConfiguration, NSMutableArray, MusicHairlineView, SKUIIndexBarControl, MusicVerticalScrollingContainerItem, UIViewController, SKUIProxyScrollView, MusicActionableHeaderView, MusicLibraryBrowseCollectionViewController, MusicLibraryViewConfiguration, MusicStandaloneShuffleViewController, MusicVerticalScrollingContainerViewController, NSMutableDictionary, NSArray, MusicClientContext, MusicSwitcherButtonContainerView, NSString, SKUIClientContext;

@interface MusicLibraryViewController : UIViewController <MusicActionableHeaderViewDelegate, MusicClientContextConsuming, MusicLayoutMarginProxyViewDelegate, MusicLibraryBrowseCollectionViewControllerDelegate, MusicVerticalScrollingContainerViewControllerDelegate, SKUIIndexBarControlDataSource, SKUIIndexBarControlDelegate, SKUIProxyScrollViewDelegate, UIViewControllerRestoration, MusicSplitInitialStateProviding, SKUITabBarItemRootViewController> {

	MusicLibraryArtistsViewConfiguration* _artistsViewConfiguration;
	NSMutableArray* _entityProviderNotificationObservers;
	BOOL _hasIndexBarEntries;
	MusicHairlineView* _hairlineView;
	SKUIIndexBarControl* _indexBarControl;
	long long _indexBarControlVisibleTransactionCount;
	MusicVerticalScrollingContainerItem* _indexBarMinimumVerticalScrollingContainerItem;
	id<MusicIndexBarDataSource><MusicIndexBarScrollDelegate> _indexBarSupportDataSource;
	double _indexBarTrailingLayoutMarginAddition;
	BOOL _isContainedWithinSplitViewPrimary;
	BOOL _isIgnoringLayoutMarginsChange;
	BOOL _isIndexBarTracking;
	BOOL _isIndexBarVisible;
	UIViewController* _libraryBrowseViewController;
	BOOL _needsIndexBarVisibilityUpdate;
	SKUIProxyScrollView* _proxyScrollView;
	UIEdgeInsets _proxyScrollViewContentInsetAdditions;
	MusicActionableHeaderView* _recentlyAddedHeaderView;
	MusicLibraryBrowseCollectionViewController* _recentlyAddedViewController;
	MusicLibraryViewConfiguration* _selectedViewConfiguration;
	BOOL _shouldAnimatePendingIndexBarVisibilityUpdate;
	MusicStandaloneShuffleViewController* _shuffleAllViewController;
	MusicVerticalScrollingContainerViewController* _verticalScrollingContainerViewController;
	NSMutableDictionary* _viewConfigurationIdentifierToHasContentNumber;
	NSArray* _viewConfigurations;
	MusicClientContext* _clientContext;
	MusicSwitcherButtonContainerView* _switcherButtonContainerView;

}

@property (nonatomic,copy,readonly) NSString * preferredSelectedViewIdentifier; 
@property (nonatomic,readonly) NSArray * populatedViewConfigurations; 
@property (nonatomic,retain) MusicSwitcherButtonContainerView * switcherButtonContainerView;              //@synthesize switcherButtonContainerView=_switcherButtonContainerView - In the implementation block
@property (nonatomic,readonly) MusicLibraryViewConfiguration * selectedViewConfiguration; 
@property (nonatomic,readonly) UIViewController * selectedViewConfigurationViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
+(id)_recentlyAddedViewControllerWithClientContext:(id)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(id)contentScrollView;
-(void)viewDidLoad;
-(BOOL)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2 ;
-(void)verticalScrollingContainerViewControllerDidLayoutSubviews:(id)arg1 ;
-(void)verticalScrollingContainerViewControllerDidScroll:(id)arg1 ;
-(id)_verticalScrollingContainerViewController;
-(void)actionableHeaderViewDidSelectButton:(id)arg1 ;
-(NSString *)preferredSelectedViewIdentifier;
-(id)selectViewConfigurationWithIdentifier:(id)arg1 ;
-(MusicLibraryViewConfiguration *)selectedViewConfiguration;
-(id)populatedIdentifierForUserActivityContainerItemType:(long long)arg1 ;
-(NSArray *)populatedViewConfigurations;
-(id)viewConfigurationForIdentifier:(id)arg1 ;
-(void)_handleContentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)setSwitcherButtonContainerView:(MusicSwitcherButtonContainerView *)arg1 ;
-(void)layoutMarginProxyViewLayoutMarginsDidChange:(id)arg1 ;
-(double)_calculateHairlineViewHeight;
-(void)collectionViewFlowLayoutLayoutMetricsWereUpdatedForLibraryBrowseCollectionViewController:(id)arg1 ;
-(void)_musicLibraryViewControllerCommonInitialization;
-(void)_unregisterForNotificationsForIndexBarSupportDataSource:(id)arg1 ;
-(void)_unregisterEntityProviderChangeNotifications;
-(void)_indexBarControlTouchAction:(id)arg1 ;
-(void)_updateVerticalScrollingContainerItems;
-(id)_calculateIndexBarBackgroundColor;
-(void)_reapplyLayoutMarginAdditions;
-(void)_updateSwitcherButtonContainerViewSize;
-(void)_updateRecentlyAddedViewMoreButton;
-(void)_updateIndexBarVisibilityAnimated:(BOOL)arg1 ;
-(void)_updateIndexBarLayoutMarginsForVisibleIndexBarControl:(BOOL)arg1 ;
-(void)_updateRecentlyAddedViewSize;
-(void)showInitialStateForSplitViewController;
-(id)_indexBarControllingScrollView;
-(id)_viewConfigurations;
-(void)_switchToViewWithConfiguration:(id)arg1 ;
-(void)_updateRecentlyAddedHeaderViewSize;
-(void)_reloadIndexBarControlAnimated:(BOOL)arg1 ;
-(void)_updateHasContentFlagForViewConfiguration:(id)arg1 ;
-(void)_indexBarDataSourceDidInvalidateNotification:(id)arg1 ;
-(void)_updateIndexBarSupportDataSource;
-(void)_reloadLibraryBrowseViewController;
-(void)_registerForNotificationsForIndexBarSupportDataSource:(id)arg1 ;
-(void)_recentlyAddedEntityProviderDidInvalidateNotification:(id)arg1 ;
-(void)_updateHasContentFlags;
-(void)_registerEntityProviderChangeNotifications;
-(UIViewController *)selectedViewConfigurationViewController;
-(void)pushMoreRecentlyAddedView;
-(MusicSwitcherButtonContainerView *)switcherButtonContainerView;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(id)initWithTabBarItem:(id)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)scrollViewDidChangeContentInset:(id)arg1 ;
-(long long)indexBarControl:(id)arg1 numberOfEntriesInSection:(long long)arg2 ;
-(id)indexBarControl:(id)arg1 entryAtIndexPath:(id)arg2 ;
-(void)indexBarControl:(id)arg1 didSelectEntryAtIndexPath:(id)arg2 ;
-(void)indexBarControlDidSelectBeyondBottom:(id)arg1 ;
-(void)indexBarControlDidSelectBeyondTop:(id)arg1 ;
@end

