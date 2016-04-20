/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBStarkAppToAppWorkspaceTransaction.h>

@class SBAlertChangeTransaction, SBAlert;

@interface SBStarkImpersonatedAppToAppWorkspaceTransaction : SBStarkAppToAppWorkspaceTransaction {

	SBAlertChangeTransaction* _deactivateAlertTransaction;
	SBAlert* _deactivatingAlert;
	BOOL _animatedAppActivation;

}
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)_doCommit;
-(id)_newAnimationFromAppToApp;
-(id)_newAnimationFromAppToNowPlaying;
-(void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(void)mainScreenApplicationUpdateScenesTransactionCompleted:(id)arg1 ;
-(void)_deactivateAlertIfPossible;
-(void)_handleFailureToLaunch;
-(id)_newAnimationFromAppToLauncher;
-(void)dealloc;
-(void)_didComplete;
@end

