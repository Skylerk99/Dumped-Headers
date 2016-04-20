/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWidgetHandlingNCColumnViewController.h>
#import <libobjc.A.dylib/NCSnippetDataSourceObserver.h>

@class NSArray, EKUIMiniMonthView, NSString;

@interface SBTodayViewController : SBWidgetHandlingNCColumnViewController <NCSnippetDataSourceObserver> {

	NSArray* _todaySnippetIdentifierOrder;
	NSArray* _tomorrowSnippetIdentifierOrder;
	EKUIMiniMonthView* _miniMonth;

}

@property (assign,nonatomic) CGAffineTransform contentTransform; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interfaceItemForDatum:(id)arg1 fromDataSourceWithIdentifier:(id)arg2 ;
-(id)_widgetHandlingBulletinViewController;
-(id)_orderedEnabledInterfaceItems;
-(void)todayViewSettingsViewController:(id)arg1 didReorderInterfaceItems:(id)arg2 inGroup:(id)arg3 ;
-(id)_representedGroup;
-(BOOL)notificationCenterTableViewController:(id)arg1 didSelectAction:(id)arg2 forRow:(id)arg3 inSection:(id)arg4 ;
-(BOOL)notificationCenterTableViewController:(id)arg1 shouldHighlightRow:(id)arg2 inSection:(id)arg3 ;
-(BOOL)notificationCenterTableViewController:(id)arg1 didSelectRow:(id)arg2 inSection:(id)arg3 ;
-(void)forceUpdateTableHeader;
-(void)updateTableFooter;
-(void)widgetsEditButtonTapped:(id)arg1 ;
-(void)_updateTableHeaderIfNecessary;
-(id)_bulletinOrderStringForSnippetInfo:(id)arg1 ;
-(BOOL)_isElementWithIdentifierEnabled:(id)arg1 ;
-(void)_insertSnippetSectionIfPossible:(id)arg1 ;
-(void)_sortSnippets:(id)arg1 usingGuide:(id)arg2 ;
-(id)_snippetAfterSnippet:(id)arg1 inCollection:(id)arg2 ;
-(id)_snippetRowInfoWithIdentifier:(id)arg1 inSection:(id)arg2 ;
-(id)_todayViewControllerDelegate;
-(id)_sectionInfoForSnippetCategory:(long long)arg1 ;
-(void)_replaceWithSnippetIfPossible:(id)arg1 snippet:(id)arg2 inSection:(id)arg3 ;
-(void)_insertSnippetIfPossible:(id)arg1 inSection:(id)arg2 sortGuide:(id)arg3 ;
-(void)_removeSnippetWithIdentifierIfPossible:(id)arg1 inSection:(id)arg2 ;
-(void)_replaceWithSnippetDatum:(id)arg1 inSection:(id)arg2 ;
-(id)_todaySectionInfo;
-(id)_tomorrowSectionInfo;
-(id)todayTableFooterView;
-(id)todayTableHeaderView;
-(void)_updateTableHeader:(BOOL)arg1 ;
-(void)_removeSnippetSectionIfPossible:(id)arg1 ;
-(CGAffineTransform)contentTransform;
-(void)setContentTransform:(CGAffineTransform)arg1 ;
-(id)_lazyMiniMonth;
-(void)snippetDataSource:(id)arg1 replaceWithDatum:(id)arg2 ;
-(void)snippetDataSource:(id)arg1 removeDatum:(id)arg2 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

