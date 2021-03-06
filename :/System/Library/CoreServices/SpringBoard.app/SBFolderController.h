/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:26 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBFolderControllerDelegate.h>
#import <SpringBoard/SBFolderObserver.h>
#import <SpringBoard/SBFolderViewDelegate.h>

@protocol SBFolderControllerDelegate;
@class SBIconViewMap, SBFolderView, NSTimer, NSMapTable, SBIconAnimator, SBFolder, _UILegibilitySettings, SBFolderControllerAnimationContext, SBIcon, SBFolderContext, NSArray, NSString;

@interface SBFolderController : NSObject <SBFolderControllerDelegate, SBFolderObserver, SBFolderViewDelegate> {

	SBIconViewMap* _viewMap;
	SBFolderView* _contentView;
	BOOL _didAutoScroll;
	NSTimer* _autoScrollTimer;
	CGPoint _dragPausePoint;
	NSTimer* _dragPauseTimer;
	NSTimer* _closeFolderTimer;
	BOOL _grabbedIconHasEverEnteredFolderView;
	long long _dropDestinationPageIndex;
	NSMapTable* _editingContextsByFolder;
	SBIconAnimator* _iconAnimator;
	BOOL _isOpen;
	BOOL _isEditing;
	BOOL _isAnimating;
	BOOL _active;
	BOOL _rotating;
	id<SBFolderControllerDelegate> _delegate;
	SBFolder* _folder;
	long long _orientation;
	_UILegibilitySettings* _legibilitySettings;
	SBFolderController* _outerFolderController;
	SBFolderController* _innerFolderController;
	SBFolderControllerAnimationContext* _animationContext;
	/*^block*/id _postScrollingAction;
	SBIcon* _grabbedIcon;
	SBFolderContext* _lastContext;

}

@property (assign,nonatomic) id<SBFolderControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SBFolder * folder;                                                  //@synthesize folder=_folder - In the implementation block
@property (assign,nonatomic) long long orientation;                                              //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) long long currentPageIndex; 
@property (assign,getter=isOpen,nonatomic) BOOL open;                                            //@synthesize isOpen=_isOpen - In the implementation block
@property (getter=isEditing,nonatomic,readonly) BOOL editing;                                    //@synthesize isEditing=_isEditing - In the implementation block
@property (getter=isScrolling,nonatomic,readonly) BOOL scrolling; 
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                                  //@synthesize isAnimating=_isAnimating - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                         //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,retain,readonly) SBFolderView * contentView;                                //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,copy,readonly) NSArray * iconListViews; 
@property (nonatomic,readonly) unsigned long long iconListViewCount; 
@property (assign,nonatomic) long long dropDestinationPageIndex;                                 //@synthesize dropDestinationPageIndex=_dropDestinationPageIndex - In the implementation block
@property (assign,nonatomic) SBFolderController * outerFolderController;                         //@synthesize outerFolderController=_outerFolderController - In the implementation block
@property (nonatomic,retain) SBFolderController * innerFolderController;                         //@synthesize innerFolderController=_innerFolderController - In the implementation block
@property (nonatomic,retain) SBFolderControllerAnimationContext * animationContext;              //@synthesize animationContext=_animationContext - In the implementation block
@property (nonatomic,copy) id postScrollingAction;                                               //@synthesize postScrollingAction=_postScrollingAction - In the implementation block
@property (nonatomic,readonly) CGRect _autoscrollExclusionRegion; 
@property (assign,getter=isActive,nonatomic) BOOL active;                                        //@synthesize active=_active - In the implementation block
@property (assign,getter=isRotating,nonatomic) BOOL rotating;                                    //@synthesize rotating=_rotating - In the implementation block
@property (nonatomic,retain) SBIcon * grabbedIcon;                                               //@synthesize grabbedIcon=_grabbedIcon - In the implementation block
@property (nonatomic,retain) SBFolderContext * lastContext;                                      //@synthesize lastContext=_lastContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)maxFolderDepth;
+(double)wallpaperScaleForDepth:(unsigned long long)arg1 ;
+(Class)listViewClass;
-(void)unscatterAnimated:(BOOL)arg1 afterDelay:(double)arg2 withCompletion:(/*^block*/id)arg3 ;
-(SBIcon *)grabbedIcon;
-(BOOL)setCurrentPageIndexToListContainingIcon:(id)arg1 animated:(BOOL)arg2 ;
-(id)currentIconListView;
-(id)_viewMap;
-(id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3 context:(id)arg4 ;
-(unsigned long long)iconListViewCount;
-(NSArray *)iconListViews;
-(BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3 ;
-(SBFolderController *)innerFolderController;
-(BOOL)isDisplayingIcon:(id)arg1 ;
-(id)dockListView;
-(void)setDockOffscreenFraction:(double)arg1 ;
-(void)setDockVerticalStretch:(double)arg1 ;
-(BOOL)_listIndexIsVisible:(unsigned long long)arg1 ;
-(BOOL)pushFolder:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)popFolderAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)addAdditionalInnerFolderAnimations;
-(void)prepareToOpen;
-(void)prepareToClose;
-(UIEdgeInsets)statusBarInsetsForOrientation:(long long)arg1 ;
-(unsigned long long)_depth;
-(CGRect)_autoscrollExclusionRegion;
-(id)deepestFolderController;
-(id)iconListViewAtIndex:(unsigned long long)arg1 ;
-(void)prepareToTearDown;
-(void)popToIndexPath:(id)arg1 ;
-(void)layoutIconLists:(double)arg1 domino:(BOOL)arg2 forceRelayout:(BOOL)arg3 ;
-(long long)dropDestinationPageIndex;
-(id)folderControllerForFolder:(id)arg1 ;
-(id)addEmptyListView;
-(void)scatterAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)prepareToLaunchTappedIcon:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setGrabbedIcon:(SBIcon *)arg1 ;
-(void)noteGrabbedIconDidChange:(id)arg1 ;
-(id)iconListViewForTouch:(id)arg1 ;
-(void)noteGrabbedIcon:(id)arg1 locationDidChangeWithTouch:(id)arg2 ;
-(void)noteUserIsInteractingWithIcons;
-(void)handleReachabilityActivated:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(Class)controllerClassForFolder:(id)arg1 ;
-(BOOL)folderController:(id)arg1 draggedIconDidPauseAtLocation:(CGPoint)arg2 inListView:(id)arg3 ;
-(BOOL)folderController:(id)arg1 draggedIconDidMoveFromListView:(id)arg2 toListView:(id)arg3 ;
-(BOOL)folderController:(id)arg1 draggedIconMightDropFromListView:(id)arg2 ;
-(void)folderController:(id)arg1 draggedIconShouldDropFromListView:(id)arg2 ;
-(void)folderControllerShouldClose:(id)arg1 ;
-(void)folderControllerShouldBeginEditing:(id)arg1 ;
-(void)folderControllerDidEndScrolling:(id)arg1 ;
-(void)folderControllerDidReceiveCancelReachabilityAction:(id)arg1 ;
-(void)setInnerFolderController:(SBFolderController *)arg1 ;
-(void)setPostScrollingAction:(id)arg1 ;
-(void)folderView:(id)arg1 currentPageIndexDidChange:(long long)arg2 ;
-(id)_iconPageIndicatorImageSetCache;
-(void)fadeContentForMagnificationFraction:(double)arg1 ;
-(void)folder:(id)arg1 didAddList:(id)arg2 ;
-(void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3 ;
-(void)didAnimate;
-(void)prepareForZoomAnimation;
-(void)cleanUpAfterZoomAnimation;
-(BOOL)doesPageContainIconListView:(long long)arg1 ;
-(void)willAnimateWithSettings:(id)arg1 ;
-(BOOL)hasDock;
-(Class)iconListViewClassForFolderView:(id)arg1 ;
-(void)folderViewWillBeginScrolling:(id)arg1 ;
-(void)folderViewDidEndScrolling:(id)arg1 ;
-(void)folderViewShouldClose:(id)arg1 ;
-(void)folderViewShouldBeginEditing:(id)arg1 ;
-(void)folderViewDidReceiveCancelReachabilityAction:(id)arg1 ;
-(void)fadeContentForMinificationFraction:(double)arg1 ;
-(void)_resetIconLists;
-(void)setOuterFolderController:(SBFolderController *)arg1 ;
-(void)_cancelAllInteractionTimers;
-(void)_updateAssociatedControllerStateAnimated:(BOOL)arg1 ;
-(id)_addEmptyListForce:(BOOL)arg1 ;
-(void)_compactFolder;
-(BOOL)_restoreFromContext:(id)arg1 ;
-(SBFolderContext *)lastContext;
-(void)setLastContext:(SBFolderContext *)arg1 ;
-(id)iconListViewContainingIcon:(id)arg1 ;
-(void)_cancelAutoScroll;
-(void)_cancelDragPauseTimer;
-(void)_cancelCloseFolderTimer;
-(void)_closeFolderTimerFired;
-(void)_setCloseFolderTimerIfNecessary;
-(void)setDropDestinationPageIndex:(long long)arg1 ;
-(void)_dragPauseTimerFired:(id)arg1 ;
-(BOOL)_canDropIconInListView:(id)arg1 ;
-(void)_resetDragPauseTimerForPoint:(CGPoint)arg1 inIconListView:(id)arg2 ;
-(void)_doAutoScrollByPageCount:(long long)arg1 ;
-(void)_updateAutoScrollForTouch:(id)arg1 ;
-(void)_scrollLeft:(id)arg1 ;
-(void)_scrollRight:(id)arg1 ;
-(void)_updateDragPauseForTouch:(id)arg1 ;
-(void)_updateCloseFolderForTouch:(id)arg1 ;
-(void)_updateDropDestinationForTouch:(id)arg1 ;
-(void)_clearIconAnimator;
-(id)_newAnimatorForZoomUp:(BOOL)arg1 ;
-(SBFolderController *)outerFolderController;
-(void)_animateFloatyFolderOpen:(BOOL)arg1 settings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_iconAppearsOnCurrentPage:(id)arg1 ;
-(void)_setInnerFolderOpen:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)postScrollingAction;
-(void)_noteFolderListsDidChange;
-(unsigned long long)_indexOfIconListForIcon:(id)arg1 ;
-(id)currentIndexPath;
-(void)setDelegate:(id<SBFolderControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SBFolderControllerDelegate>)delegate;
-(BOOL)_allowUserInteraction;
-(BOOL)isActive;
-(void)setOrientation:(long long)arg1 ;
-(long long)orientation;
-(id)_createContext;
-(BOOL)isRotating;
-(SBFolderView *)contentView;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(BOOL)isAnimating;
-(void)setAnimating:(BOOL)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)_invalidate;
-(void)setRotating:(BOOL)arg1 ;
-(BOOL)isScrolling;
-(long long)currentPageIndex;
-(Class)_contentViewClass;
-(SBFolderControllerAnimationContext *)animationContext;
-(void)setAnimationContext:(SBFolderControllerAnimationContext *)arg1 ;
-(SBFolder *)folder;
-(void)setFolder:(SBFolder *)arg1 ;
-(BOOL)isOpen;
-(void)setOpen:(BOOL)arg1 ;
@end

