/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDPUI/CDPTableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol CDPDevicePickerDelegate;
@class NSArray, UIButton, UILabel, NSString;

@interface CDPDevicePickerViewController : CDPTableViewController <UITableViewDataSource, UITableViewDelegate> {

	NSArray* _devices;
	id<CDPDevicePickerDelegate> _delegate;
	UIButton* _remoteApprovalButton;
	UILabel* _encryptedLabel;
	BOOL _shouldOfferRemoteApproval;

}

@property (assign,nonatomic) BOOL shouldOfferRemoteApproval;              //@synthesize shouldOfferRemoteApproval=_shouldOfferRemoteApproval - In the implementation block
@property (nonatomic,copy) NSArray * devices;                             //@synthesize devices=_devices - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDevices:(NSArray *)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(id)initWithDevices:(id)arg1 delegate:(id)arg2 ;
-(void)setShouldOfferRemoteApproval:(BOOL)arg1 ;
-(void)approveFromAnotherDeviceTapped:(id)arg1 ;
-(BOOL)shouldOfferRemoteApproval;
-(NSArray *)devices;
@end

