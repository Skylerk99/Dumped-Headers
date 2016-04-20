/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBBulletinObserverViewController.h>
#import <UIKit/UIGestureRecognizerDelegatePrivate.h>

@protocol SBNCTableViewControllerDelegate;
@class NSMutableArray, NSMutableDictionary, SBNotificationCenterTouchEater, SBNotificationCenterHeaderView, NSArray, NSString;

@interface SBNotificationsViewController : SBBulletinObserverViewController <UIGestureRecognizerDelegatePrivate> {

	NSMutableArray* _orderedSectionIDs;
	NSMutableDictionary* _sectionIDsToOrderedBulletins;
	SBNotificationCenterTouchEater* _clearButtonTouchEater;
	SBNotificationCenterHeaderView* _headerViewCurrentlyInClearState;
	NSMutableArray* _orderedChronologicalSectionIDs;
	NSMutableDictionary* _sectionIDsToChronologicalSectionInfos;
	struct {
		unsigned suppliesInsertionAnimation : 1;
		unsigned suppliesRemovalAnimation : 1;
		unsigned suppliesReplacementAnimation : 1;
		unsigned handlesBulletinActions : 1;
	}  _notificationsModeViewControllerDelegateFlags;
	id<SBNCTableViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<SBNCTableViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * orderedSectionIDs; 
@property (nonatomic,readonly) NSMutableDictionary * sectionIDsToOrderedBulletins; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)notificationCenterTableViewController:(id)arg1 insertionAnimationForRow:(id)arg2 inSection:(id)arg3 ;
-(BOOL)handleAction:(id)arg1 forBulletin:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)commitInsertionOfBulletin:(id)arg1 beforeBulletin:(id)arg2 inSection:(id)arg3 forFeed:(unsigned long long)arg4 ;
-(id)infoForBulletinSection:(id)arg1 ;
-(id)infoForBulletin:(id)arg1 inSection:(id)arg2 forFeed:(unsigned long long)arg3 ;
-(void)commitReplacementWithBulletin:(id)arg1 ofBulletin:(id)arg2 inSection:(id)arg3 ;
-(void)commitRemovalOfBulletin:(id)arg1 fromSection:(id)arg2 ;
-(void)commitInsertionOfSection:(id)arg1 beforeSection:(id)arg2 ;
-(void)commitRemovalOfSection:(id)arg1 ;
-(void)commitReorderOfSections:(id)arg1 ;
-(void)updateSection:(id)arg1 withInfo:(id)arg2 ;
-(void)updateSection:(id)arg1 withParameters:(id)arg2 ;
-(id)initWithObserverFeed:(unsigned long long)arg1 ;
-(void)commitMoveOfSection:(id)arg1 beforeSection:(id)arg2 ;
-(void)commitReplacementWithSection:(id)arg1 ofSection:(id)arg2 ;
-(id)contentUnavailableText;
-(long long)notificationCenterTableViewController:(id)arg1 removalAnimationForRow:(id)arg2 inSection:(id)arg3 ;
-(long long)notificationCenterTableViewController:(id)arg1 replacementAnimationForRow:(id)arg2 inSection:(id)arg3 ;
-(void)updateForChangeInMessagePrivacy;
-(void)_handleSignificantTimeChange:(id)arg1 ;
-(void)_handleTimeZoneChange:(id)arg1 ;
-(void)_updateSection:(id)arg1 withLockState:(BOOL)arg2 ;
-(void)_installClearButtonTouchEater;
-(void)_setHeaderViewCurrentlyInClearState:(id)arg1 ;
-(void)_handleEatenTouch:(id)arg1 ;
-(void)_configureBBSectionInfo:(id)arg1 ;
-(BOOL)_isChronologicalSectionInfo:(id)arg1 ;
-(BOOL)_isArrangedByAppSection;
-(void)_sortSectionIDs;
-(void)_invalidateClearActionsForSection:(id)arg1 ;
-(void)_commitRemovalOfBulletinBoardSectionIfNecessary:(id)arg1 ;
-(void)_commitRemovalOfChronologicalSectionIfNecessary:(id)arg1 ;
-(id)_chronologicalSectionInfoForDate:(id)arg1 creatingIfNecessary:(BOOL)arg2 ;
-(id)_chronologicalSectionAfterChronologicalSection:(id)arg1 ;
-(void)_updateSectionOrderForOperationInSection:(id)arg1 ;
-(id)_headerViewCurrentlyInClearState;
-(void)_populateBulletinInfo:(id)arg1 inSection:(id)arg2 ;
-(void)_populateBulletinInfo:(id)arg1 inSection:(id)arg2 andSectionOrderRule:(long long)arg3 ;
-(id)_allBulletinsSorted;
-(void)_tearDownChronologicalStructures;
-(void)_reloadOrderedSections:(id)arg1 ;
-(void)_updateSectionForChangeInLockScreenVisibility:(id)arg1 withProcessingBlock:(/*^block*/id)arg2 ;
-(void)_updateSectionForChangeInLockScreenVisibility:(id)arg1 withLockState:(BOOL)arg2 updatedSubsectionIDs:(id)arg3 ;
-(void)_updateSectionForChangeInMessagePrivacyIfNecessary:(id)arg1 ;
-(void)_updateSectionForChangeInNumberOfLines:(id)arg1 ;
-(void)_updateChronologicalSectionHeadersWithBlock:(/*^block*/id)arg1 ;
-(void)_updateChronologicalSectionsForTimeZoneChange;
-(void)_updateChronologicalSectionHeadersForSignificantTimeChange;
-(void)_updateChronologicalSectionHeadersForLocaleChange;
-(NSArray *)orderedSectionIDs;
-(NSMutableDictionary *)sectionIDsToOrderedBulletins;
-(void)_sortBulletins:(id)arg1 forSection:(id)arg2 ;
-(void)_handleLocalChange:(id)arg1 ;
-(void)setDelegate:(id<SBNCTableViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SBNCTableViewControllerDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)clearSection:(id)arg1 ;
@end

