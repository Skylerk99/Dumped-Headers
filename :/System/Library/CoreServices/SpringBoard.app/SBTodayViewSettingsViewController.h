/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol SBTodayViewSettingsViewControllerDelegate;
@class UINavigationController, UITableViewController, NSMutableArray, SBInterfaceItemInfo, NSArray, NSString;

@interface SBTodayViewSettingsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	id<SBTodayViewSettingsViewControllerDelegate> _settingsViewControllerDelegate;
	UINavigationController* _navigationController;
	UITableViewController* _tableViewController;
	NSMutableArray* _enabledTodayItems;
	NSMutableArray* _enabledWidgetItems;
	NSMutableArray* _disabledItems;
	SBInterfaceItemInfo* _todayItem;
	SBInterfaceItemInfo* _tomorrowItem;
	SBInterfaceItemInfo* _coreRoutineItem;
	BOOL _coreRoutineIsAvailable;
	NSArray* _groupIDs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSettingsViewControllerDelegate:(id)arg1 ;
-(id)_newBackgroundView;
-(BOOL)_updateCoreRoutineAvailability;
-(void)_loadInterfaceItems;
-(void)_cancelWidgetsSettings;
-(void)_dismissWidgetsSettings;
-(id)_interfaceItemForIndexPath:(id)arg1 ;
-(BOOL)_isNewInterfaceItem:(id)arg1 ;
-(long long)_indexOfFirstEnabledWidgetInSection:(unsigned long long)arg1 ;
-(long long)_indexOfLastEnabledWidgetInSection:(unsigned long long)arg1 ;
-(unsigned long long)_indexForInsertingItem:(id)arg1 intoArray:(id)arg2 ;
-(id)_interfaceItemsInSection:(unsigned long long)arg1 ;
-(void)_enableItemAtIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(void)_disableItemAtIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(void)_acknowledgeInterfaceItemsAndResetNewWidgetsCount;
-(void)_cancelWidgetsSettingsAcknowledgingInterfaceItemsAndResettingNewWidgetsCount:(BOOL)arg1 ;
-(void)_saveInterfaceItemsState;
-(void)_saveInterfaceItemsArrangement;
-(id)_enabledItemsForGroupID:(id)arg1 ;
-(long long)_compareInterfaceItem:(id)arg1 andInterfaceItemConsideringIsNew:(id)arg2 ;
-(BOOL)_isFixedSnippetsItem:(id)arg1 ;
-(unsigned long long)_sectionIndexForGroupKey:(id)arg1 ;
-(id)_groupKeyForSectionAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)viewWillLayoutSubviews;
-(void)tableView:(id)arg1 didEndReorderingRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)_layoutMode;
@end

