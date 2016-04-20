/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:17 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PKPaymentSetupTableViewController.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKTableHeaderView, PKLinkedAppView, PKPaymentSetupProduct;

@interface PKPaymentCardUnsupportedViewController : PKPaymentSetupTableViewController {

	PKTableHeaderView* _headerView;
	PKLinkedAppView* _appViewCell;
	PKPaymentSetupProduct* _product;
	id<PKPaymentSetupViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) PKPaymentSetupProduct * product;                                //@synthesize product=_product - In the implementation block
@property (assign,nonatomic) id<PKPaymentSetupViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_done:(id)arg1 ;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(id)initWithUnsupportedProduct:(id)arg1 context:(long long)arg2 delegate:(id)arg3 ;
-(PKPaymentSetupProduct *)product;
-(void)_updateViewsWithProduct:(id)arg1 ;
-(void)setDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<PKPaymentSetupViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(unsigned long long)edgesForExtendedLayout;
@end

