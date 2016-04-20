/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:14 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol UIPopoverControllerDelegate;
@class UIPopoverController, UIViewController, _UIAlertControllerShimPresenterWindow, UIAlertController, UIAlertView, NSString;

@interface _UIAlertControllerShimPresenter : NSObject <UIPopoverControllerDelegate> {

	UIPopoverController* _popoverController;
	id<UIPopoverControllerDelegate> _popoverDelegate;
	UIViewController* _inPopoverViewController;
	_UIAlertControllerShimPresenterWindow* _window;
	UIAlertController* _alertController;
	UIAlertView* _legacyAlert;

}

@property (assign,nonatomic,__weak) UIAlertController * alertController;                          //@synthesize alertController=_alertController - In the implementation block
@property (assign,nonatomic) UIAlertView * legacyAlert;                                           //@synthesize legacyAlert=_legacyAlert - In the implementation block
@property (nonatomic,readonly) _UIAlertControllerShimPresenterWindow * window;                    //@synthesize window=_window - In the implementation block
@property (assign,nonatomic,__weak) id<UIPopoverControllerDelegate> popoverDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_topmostAlertWindow;
+(id)_topmostLegacyAlertIncludingPresentingAlerts:(BOOL)arg1 ;
+(void)_cancelPendingTouchesIfAppropriate;
+(void)_addPresenter:(id)arg1 ;
+(BOOL)_shouldPresentActionSheetsFullscreen;
+(void)_removePresenter:(id)arg1 ;
+(id)_currentFullScreenAlertPresenters;
-(void)dealloc;
-(_UIAlertControllerShimPresenterWindow *)window;
-(id)_popoverController;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(void)setLegacyAlert:(UIAlertView *)arg1 ;
-(void)_presentAlertControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_dismissAlertControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(UIAlertController *)alertController;
-(void)setPopoverDelegate:(id<UIPopoverControllerDelegate>)arg1 ;
-(void)_presentAlertControllerFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_presentAlertControllerFromRect:(CGRect)arg1 inView:(id)arg2 direction:(unsigned long long)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)_createWindowIfNecessary;
-(void)_tearDownInPopoverViewController;
-(UIAlertView *)legacyAlert;
-(id<UIPopoverControllerDelegate>)popoverDelegate;
@end

