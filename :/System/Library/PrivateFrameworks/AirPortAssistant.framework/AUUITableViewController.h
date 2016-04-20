/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:54 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/TableViewManagerDelegate.h>

@class TableViewManager, UITableView;

@interface AUUITableViewController : UITableViewController <TableViewManagerDelegate> {

	TableViewManager* _tableManager;

}

@property (nonatomic,retain) UITableView * tableView; 
@property (nonatomic,readonly) TableViewManager * tableManager;                  //@synthesize tableManager=_tableManager - In the implementation block
@property (assign,nonatomic) id<TableViewManagerDelegate> delegate; 
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<TableViewManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<TableViewManagerDelegate>)delegate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(TableViewManager *)tableManager;
-(void)initAUUITableViewControllerCommon;
@end

