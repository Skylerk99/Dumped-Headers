/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:06 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class _MPUSharedLibrariesViewController, UINavigationController;

@interface MPUSharedLibrariesViewController : UIViewController {

	_MPUSharedLibrariesViewController* _sharedLibariesViewController;
	UINavigationController* _navigationController;
	BOOL _showsCancelButton;

}

@property (assign,nonatomic) BOOL showsCancelButton;              //@synthesize showsCancelButton=_showsCancelButton - In the implementation block
@property (assign,nonatomic) BOOL showsLocalLibrary; 
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(BOOL)showsCancelButton;
-(void)presentSharedLibrariesViewController:(BOOL)arg1 ;
-(void)setShowsLocalLibrary:(BOOL)arg1 ;
-(BOOL)showsLocalLibrary;
-(void)dismissSharedLibrariesViewController:(BOOL)arg1 ;
@end

