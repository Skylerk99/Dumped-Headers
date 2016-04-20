/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SBDisplayItem, SBMainDisplayLayoutState, NSArray, _UILegibilitySettings, SBBestAppSuggestion;


@protocol SBMainAppSwitcherContentViewControlling <NSObject>
@property (setter=_setReturnToDisplayItem:,nonatomic,copy) SBDisplayItem * _returnToDisplayItem; 
@property (setter=_setReturnToSideDisplayItem:,nonatomic,copy) SBDisplayItem * _returnToSideDisplayItem; 
@property (setter=_setInitialDisplayItem:,nonatomic,copy) SBDisplayItem * _initialDisplayItem; 
@property (setter=_setInitialLayoutState:,nonatomic,retain) SBMainDisplayLayoutState * _initialLayoutState; 
@property (nonatomic,retain) NSArray * displayItems; 
@property (assign,nonatomic) id<SBMainAppSwitcherContentViewControllerDelegate> delegate; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,retain) SBBestAppSuggestion * bestAppSuggestion; 
@required
+(double)snapshotScale;
-(SBDisplayItem *)_returnToDisplayItem;
-(void)setDisplayItems:(id)arg1;
-(SBDisplayItem *)_returnToSideDisplayItem;
-(SBDisplayItem *)_initialDisplayItem;
-(void)startInteractiveTransition:(BOOL)arg1 presenting:(BOOL)arg2 withRequest:(id)arg3;
-(void)endInteractionWithCommitment:(BOOL)arg1;
-(void)setTransitionParameters:(UIEdgeInsets)arg1;
-(id)nextDisplayItem;
-(void)endTransitionWithSuccess:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)animatePresentationForTransitionRequest:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)animateDismissalToDisplayItem:(id)arg1 forTransitionRequest:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)insertDisplayItem:(id)arg1 atIndex:(unsigned long long)arg2 updateScrollPosition:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)removeDisplayItem:(id)arg1 updateScrollPosition:(BOOL)arg2 forReason:(long long)arg3 completion:(/*^block*/id)arg4;
-(void)replaceDisplayItem:(id)arg1 withDisplayItem:(id)arg2 completion:(/*^block*/id)arg3;
-(void)_setReturnToDisplayItem:(id)arg1;
-(void)_setReturnToSideDisplayItem:(id)arg1;
-(void)_setInitialDisplayItem:(id)arg1;
-(SBMainDisplayLayoutState *)_initialLayoutState;
-(void)_setInitialLayoutState:(id)arg1;
-(void)setBestAppSuggestion:(id)arg1;
-(NSArray *)displayItems;
-(void)setDelegate:(id)arg1;
-(id<SBMainAppSwitcherContentViewControllerDelegate>)delegate;
-(void)invalidate;
-(void)setLegibilitySettings:(id)arg1;
-(_UILegibilitySettings *)legibilitySettings;
-(SBBestAppSuggestion *)bestAppSuggestion;

@end

