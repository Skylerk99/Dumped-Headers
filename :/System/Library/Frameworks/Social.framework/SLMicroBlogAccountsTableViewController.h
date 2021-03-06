/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:33 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol SLMicroBlogAccountsTableViewControllerDelegate;
@class NSArray, SLMicroBlogUserRecord, UIImage;

@interface SLMicroBlogAccountsTableViewController : UITableViewController {

	NSArray* _accountUserRecords;
	SLMicroBlogUserRecord* _selectedAccountUserRecord;
	id<SLMicroBlogAccountsTableViewControllerDelegate> _selectionDelegate;
	UIImage* _blankImage;

}
-(void)cancelButtonTapped:(id)arg1 ;
-(void)setSelectionDelegate:(id)arg1 ;
-(void)didUpdateAccountUserRecord:(id)arg1 ;
-(void)setAccountUserRecords:(id)arg1 ;
-(void)setCurrentAccountUserRecord:(id)arg1 ;
-(id)_accountUserRecordForIndexPath:(id)arg1 ;
-(id)_blankImage;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
@end

