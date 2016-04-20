/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicNavigationController.h>
#import <libobjc.A.dylib/MusicJSWelcomeNativeViewControllerDelegate.h>
#import <libobjc.A.dylib/MusicJSNativeViewControllerFactory.h>
#import <libobjc.A.dylib/MusicClientContextConsuming.h>

@protocol MusicWelcomeNavigationControllerDisappearanceObserver;
@class NSMutableArray, MusicWelcomePlaceholderView, MusicClientContext, NSString, SKUIClientContext;

@interface MusicWelcomeNavigationController : MusicNavigationController <MusicJSWelcomeNativeViewControllerDelegate, MusicJSNativeViewControllerFactory, MusicClientContextConsuming> {

	NSMutableArray* _queuedNativeViewEventTypes;
	BOOL _registeredWithModalNavigationStackRegistry;
	MusicWelcomePlaceholderView* _welcomePlaceholderView;
	MusicClientContext* _clientContext;
	id<MusicWelcomeNavigationControllerDisappearanceObserver> _disappearanceObserver;

}

@property (assign,nonatomic,__weak) id<MusicWelcomeNavigationControllerDisappearanceObserver> disappearanceObserver;              //@synthesize disappearanceObserver=_disappearanceObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
+(BOOL)automaticallyInstallAccountBarButtonItem;
+(BOOL)automaticallyInstallSearchBarButtonItem;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)loadJSNativeViewControllerWithAppContext:(id)arg1 ;
-(void)jsDidCloseWelcomeNativeViewController:(id)arg1 withOptions:(id)arg2 ;
-(void)jsWelcomeNativeViewController:(id)arg1 setWelcomeDocument:(id)arg2 options:(id)arg3 ;
-(void)_setRegisteredWithModalNavigationStackRegistry:(BOOL)arg1 ;
-(void)_handleClientDidLoadNotification:(id)arg1 ;
-(void)_dispatchNativeViewEventOfType:(long long)arg1 ;
-(id<MusicWelcomeNavigationControllerDisappearanceObserver>)disappearanceObserver;
-(void)setDisappearanceObserver:(id<MusicWelcomeNavigationControllerDisappearanceObserver>)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
@end

