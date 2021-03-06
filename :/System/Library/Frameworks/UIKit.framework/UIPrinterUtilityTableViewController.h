/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:04 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class PKPrinter, NSArray;

@interface UIPrinterUtilityTableViewController : UITableViewController {

	PKPrinter* _printer;
	BOOL _showSupplyDataUnderPrinterName;
	NSArray* _supplyData;

}

@property (nonatomic,retain) NSArray * supplyData;              //@synthesize supplyData=_supplyData - In the implementation block
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setShowContactingPrinter:(BOOL)arg1 ;
-(void)setSupplyData:(NSArray *)arg1 ;
-(NSArray *)supplyData;
-(id)initWithPrinter:(id)arg1 ;
@end

