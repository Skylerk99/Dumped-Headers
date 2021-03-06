/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIWindow, NSMutableSet, SBBulletinRootViewController, UIViewController;

@interface SBBulletinWindowController : NSObject {

	UIWindow* _bulletinWindow;
	BOOL _rotatingKeyboard;
	BOOL _aboveAssistant;
	NSMutableSet* _windowClients;
	NSMutableSet* _keyClients;
	NSMutableSet* _busyClients;
	NSMutableSet* _busyReasons;
	SBBulletinRootViewController* _rootVC;
	BOOL _wantsKeyWindow;

}

@property (nonatomic,retain,readonly) UIViewController * rootViewController;                                     //@synthesize rootVC=_rootVC - In the implementation block
@property (nonatomic,retain,readonly) UIWindow * window;                                                         //@synthesize bulletinWindow=_bulletinWindow - In the implementation block
@property (assign,getter=isWindowAboveAssistant,nonatomic) BOOL windowAboveAssistant;                            //@synthesize aboveAssistant=_aboveAssistant - In the implementation block
@property (assign,setter=_setWantsKeyWindow:,getter=_wantsKeyWindow,nonatomic) BOOL wantsKeyWindow;              //@synthesize wantsKeyWindow=_wantsKeyWindow - In the implementation block
+(BOOL)shouldSuppressAlertForBulletin:(id)arg1 ;
+(id)sharedInstance;
+(BOOL)_isSecure;
-(BOOL)allowsShowNotificationsSystemGestureFromBanner;
-(void)setBusy:(BOOL)arg1 forReason:(id)arg2 ;
-(BOOL)allowsShowNotificationsGesture;
-(void)addWindowClient:(id)arg1 ;
-(void)removeWindowClient:(id)arg1 ;
-(BOOL)allowsShowNotificationsSystemGesture;
-(BOOL)allowsHideNotificationsGesture;
-(void)addBusyClient:(id)arg1 ;
-(void)removeBusyClient:(id)arg1 ;
-(void)setWindowAboveAssistant:(BOOL)arg1 ;
-(BOOL)allowsDismissBannerGesture;
-(void)updateKeyWindowStatusIfNecessary;
-(void)_resignAsKeyWindow;
-(BOOL)_allowsShowNotificationsSystemGestureFromBanner:(BOOL)arg1 ;
-(void)_setWantsKeyWindow:(BOOL)arg1 ;
-(void)_becomeKeyWindow;
-(void)_didBecomeKeyWindow:(id)arg1 ;
-(void)_didResignKeyWindow:(id)arg1 ;
-(BOOL)_isBusyForReason:(id)arg1 ;
-(void)addWindowClient:(id)arg1 withChildViewController:(id)arg2 ;
-(void)removeWindowClient:(id)arg1 withChildViewController:(id)arg2 ;
-(BOOL)_hasKeyWindowClients;
-(BOOL)isWindowAboveAssistant;
-(BOOL)_wantsKeyWindow;
-(BOOL)isBusy;
-(void)dealloc;
-(UIWindow *)window;
-(id)init;
-(UIViewController *)rootViewController;
-(BOOL)_allowsShowNotificationsGestureFromBanner:(BOOL)arg1 ;
@end

