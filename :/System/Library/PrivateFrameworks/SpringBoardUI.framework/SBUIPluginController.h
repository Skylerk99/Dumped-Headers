/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBPluginBundleController.h>

@protocol SBUIPluginControllerHost;
@interface SBUIPluginController : NSObject <SBPluginBundleController> {

	id<SBUIPluginControllerHost> _host;
	BOOL _isVisible;

}

@property (assign,nonatomic) id<SBUIPluginControllerHost> host;              //@synthesize host=_host - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                  //@synthesize isVisible=_isVisible - In the implementation block
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(id<SBUIPluginControllerHost>)host;
-(void)handleViewFullyRevealed;
-(void)setHost:(id<SBUIPluginControllerHost>)arg1 ;
-(BOOL)handledMenuButtonDownEvent;
-(BOOL)handledMenuButtonUpEvent;
-(BOOL)handledMenuButtonTap;
-(void)registeredWithHost;
-(BOOL)supportedAndEnabled;
-(BOOL)wantsActivationEvent:(int)arg1 eventSource:(int)arg2 interval:(double*)arg3 ;
-(void)prepareForActivationEvent:(int)arg1 eventSource:(int)arg2 afterInterval:(double)arg3 ;
-(void)cancelPendingActivationEvent:(int)arg1 ;
-(BOOL)handleActivationEvent:(int)arg1 eventSource:(int)arg2 context:(void*)arg3 ;
-(BOOL)handledPasscodeUnlockWithCompletion:(/*^block*/id)arg1 ;
-(void)handleBluetoothDismissal;
-(void)handlePreheatCommand;
-(BOOL)handledWiredMicButtonTap;
-(BOOL)handledButtonDownEventFromSource:(int)arg1 ;
-(BOOL)handledButtonUpEventFromSource:(int)arg1 ;
-(BOOL)handledButtonTapFromSource:(int)arg1 ;
-(id)viewControllerForActivationContext:(id)arg1 ;
-(void)viewPartiallyRevealedWithPercentRevealed:(double)arg1 ;
@end

