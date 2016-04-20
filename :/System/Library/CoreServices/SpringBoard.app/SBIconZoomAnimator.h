/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBIconAnimator.h>
#import <SpringBoard/SBIconIndexNodeObserver.h>

@class NSMapTable, NSSet, SBIconListModel, SBIconListView, SBIconZoomSettings, NSString;

@interface SBIconZoomAnimator : SBIconAnimator <SBIconIndexNodeObserver> {

	NSMapTable* _listIconToViewMap;
	NSMapTable* _dockIconToViewMap;
	NSSet* _criticalIconNodeIdentifiers;
	SBIconListModel* _iconListModel;
	SBIconListView* _iconListView;
	SBIconListView* _dockListView;

}

@property (nonatomic,retain) SBIconZoomSettings * settings; 
@property (nonatomic,retain,readonly) SBIconListView * iconListView;              //@synthesize iconListView=_iconListView - In the implementation block
@property (nonatomic,retain,readonly) SBIconListView * dockListView;              //@synthesize dockListView=_dockListView - In the implementation block
@property (nonatomic,retain) NSSet * criticalIconNodeIdentifiers;                 //@synthesize criticalIconNodeIdentifiers=_criticalIconNodeIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_prepareAnimation;
-(id)iconViewForIcon:(id)arg1 ;
-(void)_cleanupAnimation;
-(SBIconListView *)dockListView;
-(id)initWithFolderController:(id)arg1 ;
-(void)setCriticalIconNodeIdentifiers:(NSSet *)arg1 ;
-(void)_setAnimationFraction:(double)arg1 ;
-(unsigned long long)_numberOfSignificantAnimations;
-(void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(/*^block*/id)arg3 ;
-(void)enumerateIconsAndIconViewsWithHandler:(/*^block*/id)arg1 ;
-(SBIconListView *)iconListView;
-(void)cleanupZoom;
-(void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(void)_iconModelDidRelayout;
-(void)_iconModelDidReload;
-(void)_clearObservers;
-(void)_cleanupZoom;
-(void)_setIconListView:(id)arg1 ;
-(void)_setDockListView:(id)arg1 ;
-(void)_applyLabelAlphaFraction:(double)arg1 ;
-(void)_invalidateAnimationForSignificantIconModelChangesForReason:(id)arg1 ;
-(unsigned long long)listIconCount;
-(unsigned long long)dockIconCount;
-(NSSet *)criticalIconNodeIdentifiers;
-(void)dealloc;
@end

