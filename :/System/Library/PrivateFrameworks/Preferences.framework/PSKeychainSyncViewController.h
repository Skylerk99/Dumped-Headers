/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:13 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/KeychainSyncViewController.h>

@protocol KeychainSyncViewControllerDelegate;
@class PSKeychainSyncHeaderView, PSSpecifier;

@interface PSKeychainSyncViewController : PSListController <KeychainSyncViewController> {

	PSKeychainSyncHeaderView* _headerView;
	PSSpecifier* _groupSpecifier;
	id<KeychainSyncViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<KeychainSyncViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)specifiers;
-(void)setDelegate:(id<KeychainSyncViewControllerDelegate>)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id<KeychainSyncViewControllerDelegate>)delegate;
-(double)heightForHeaderInTableView:(id)arg1 ;
-(id)viewForHeaderInTableView:(id)arg1 ;
-(id)headerView;
-(id)groupSpecifier;
@end

