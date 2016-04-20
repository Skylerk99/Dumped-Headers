/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBDisplayManagerObserver.h>
#import <SpringBoard/SBWorkspaceSlaving.h>

@class FBSDisplay, NSString;

@interface SBExternalDisplayController : NSObject <FBDisplayManagerObserver, SBWorkspaceSlaving> {

	BOOL _listeningForApplicationStateChanges;
	FBSDisplay* _currentDisplay;

}

@property (setter=_setCurrentDisplay:,getter=_currentDisplay,nonatomic,retain) FBSDisplay * currentDisplay;                                                                       //@synthesize currentDisplay=_currentDisplay - In the implementation block
@property (assign,setter=_setListeningForApplicationStateChanges:,getter=_isListeningForApplicationStateChanges,nonatomic) BOOL listeningForApplicationStateChanges;              //@synthesize listeningForApplicationStateChanges=_listeningForApplicationStateChanges - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)master:(id)arg1 slaveTransactionsForTransitionRequest:(id)arg2 ;
-(id)_getFirstRunningWatchApp;
-(id)_currentDisplay;
-(long long)_eventForMainDisplayTransitionRequest:(id)arg1 ;
-(id)_eventLabelForEvent:(long long)arg1 ;
-(void)_setCurrentDisplay:(id)arg1 ;
-(BOOL)_isListeningForApplicationStateChanges;
-(void)_appStateDidChange:(id)arg1 ;
-(void)_setListeningForApplicationStateChanges:(BOOL)arg1 ;
-(BOOL)_displayConnectShouldWaitForAppRunning:(id)arg1 ;
-(BOOL)_application:(id)arg1 canAccessDisplay:(id)arg2 ;
-(void)_handleDisplayConnectIfPossible:(id)arg1 ;
-(void)_startListeningForApplicationLaunch;
-(BOOL)_shouldConnectDisplayNow:(id)arg1 ;
-(void)_connectDisplay:(id)arg1 ;
-(void)_stopListeningForApplicationLaunch;
-(id)_slaveTransactionForMainDisplayTransitionRequest:(id)arg1 currentExternalDisplay:(id)arg2 ;
-(id)expectedForegroundAppsOnDisplay:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_noteScreenDidChangeMode:(id)arg1 ;
-(void)displayManager:(id)arg1 didDisconnectDisplay:(id)arg2 ;
-(void)displayManager:(id)arg1 willConnectDisplay:(id)arg2 ;
-(void)displayManager:(id)arg1 didConnectDisplay:(id)arg2 ;
@end

