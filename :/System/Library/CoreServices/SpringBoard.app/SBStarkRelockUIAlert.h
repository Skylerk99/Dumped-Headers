/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBAlertAdapter.h>

@interface SBStarkRelockUIAlert : SBAlertAdapter {

	BOOL _animatingDismiss;

}
-(BOOL)shouldPendAlertItemsWhileActive;
-(id)_animationFactory;
-(void)_animateDismiss;
-(void)_dismissAndLock;
-(BOOL)handleLockButtonPressed;
-(void)dealloc;
-(id)init;
-(void)deactivate;
-(void)activate;
-(id)initWithViewController:(id)arg1 ;
-(BOOL)handleMenuButtonTap;
-(BOOL)handleMenuButtonDoubleTap;
-(BOOL)handleMenuButtonHeld;
-(BOOL)hasTranslucentBackground;
-(void)handleAutoLock;
@end

