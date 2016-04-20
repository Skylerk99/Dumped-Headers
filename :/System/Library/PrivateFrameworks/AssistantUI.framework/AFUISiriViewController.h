/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/AFUISiriRemoteViewControllerDataSource.h>
#import <libobjc.A.dylib/AFUISiriRemoteViewControllerDelegate.h>
#import <libobjc.A.dylib/AFUISiriViewDelegate.h>
#import <libobjc.A.dylib/SiriUIAudioRoutePickerControllerDelegate.h>
#import <libobjc.A.dylib/AFUISiriSessionLocalDataSource.h>
#import <libobjc.A.dylib/AFUISiriSessionLocalDelegate.h>

@protocol AFUISiriViewControllerDataSource, AFUISiriViewControllerDelegate, OS_dispatch_queue;
@class AFUISiriSession, AFUISiriRemoteViewController, NSObject, SiriUIAudioRoutePickerController, UIStatusBar, AFUIRequestOptions, NSNumber, NSString;

@interface AFUISiriViewController : UIViewController <AFUISiriRemoteViewControllerDataSource, AFUISiriRemoteViewControllerDelegate, AFUISiriViewDelegate, SiriUIAudioRoutePickerControllerDelegate, AFUISiriSessionLocalDataSource, AFUISiriSessionLocalDelegate> {

	BOOL _active;
	BOOL _systemHostedPresentation;
	BOOL _attemptingRemoteViewControllerPresentation;
	BOOL _remoteViewControllerDispatchQueueSuspended;
	long long _vtEnabledCount;
	long long _currentRequestSource;
	/*^block*/id _triggerUpdater;
	BOOL _visible;
	BOOL _eyesFree;
	BOOL _isStark;
	BOOL _showsStatusBar;
	BOOL _statusBarEnabled;
	BOOL _mapsGatekeeperEnabled;
	BOOL _hasCalledBeginAppearanceTransition;
	BOOL _hasCalledEndAppearanceTransition;
	BOOL _inHoldToTalkMode;
	id<AFUISiriViewControllerDataSource> _dataSource;
	id<AFUISiriViewControllerDelegate> _delegate;
	AFUISiriSession* _session;
	AFUISiriRemoteViewController* _remoteViewController;
	NSObject*<OS_dispatch_queue> _remoteViewControllerDispatchQueue;
	SiriUIAudioRoutePickerController* _routePickerController;
	UIStatusBar* _statusBar;
	AFUIRequestOptions* _currentRequestOptions;
	NSNumber* _recordingStartedTimeValue;
	double _viewDidAppearTime;

}

@property (assign,nonatomic,__weak) id<AFUISiriViewControllerDataSource> dataSource;                                                                                         //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISiriViewControllerDelegate> delegate;                                                                                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                                                                                                                  //@synthesize visible=_visible - In the implementation block
@property (assign,getter=isEyesFree,nonatomic) BOOL eyesFree;                                                                                                                //@synthesize eyesFree=_eyesFree - In the implementation block
@property (assign,nonatomic) BOOL isStark;                                                                                                                                   //@synthesize isStark=_isStark - In the implementation block
@property (assign,nonatomic) BOOL showsStatusBar;                                                                                                                            //@synthesize showsStatusBar=_showsStatusBar - In the implementation block
@property (assign,nonatomic) BOOL statusBarEnabled;                                                                                                                          //@synthesize statusBarEnabled=_statusBarEnabled - In the implementation block
@property (assign,nonatomic) BOOL mapsGatekeeperEnabled;                                                                                                                     //@synthesize mapsGatekeeperEnabled=_mapsGatekeeperEnabled - In the implementation block
@property (nonatomic,readonly) BOOL hasScreenSnapshot; 
@property (nonatomic,readonly) BOOL isProcessingAcousticIdRequest; 
@property (nonatomic,retain) UIView*<AFUISiriRemoteViewHosting> view; 
@property (getter=_session,nonatomic,readonly) AFUISiriSession * session;                                                                                                    //@synthesize session=_session - In the implementation block
@property (getter=_remoteViewController,nonatomic,readonly) AFUISiriRemoteViewController * remoteViewController;                                                             //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (getter=_remoteViewControllerDispatchQueue,nonatomic,readonly) NSObject*<OS_dispatch_queue> remoteViewControllerDispatchQueue;                                     //@synthesize remoteViewControllerDispatchQueue=_remoteViewControllerDispatchQueue - In the implementation block
@property (assign,setter=_setHasCalledBeginAppearanceTransition:,getter=_hasCalledBeginAppearanceTransition,nonatomic) BOOL hasCalledBeginAppearanceTransition;              //@synthesize hasCalledBeginAppearanceTransition=_hasCalledBeginAppearanceTransition - In the implementation block
@property (assign,setter=_setHasCalledEndAppearanceTransition:,getter=_hasCalledEndAppearanceTransition,nonatomic) BOOL hasCalledEndAppearanceTransition;                    //@synthesize hasCalledEndAppearanceTransition=_hasCalledEndAppearanceTransition - In the implementation block
@property (nonatomic,retain) SiriUIAudioRoutePickerController * routePickerController;                                                                                       //@synthesize routePickerController=_routePickerController - In the implementation block
@property (setter=_setStatusBar:,getter=_statusBar,nonatomic,retain) UIStatusBar * statusBar;                                                                                //@synthesize statusBar=_statusBar - In the implementation block
@property (assign,setter=_setInHoldToTalkMode:,getter=_isInHoldToTalkMode,nonatomic) BOOL inHoldToTalkMode;                                                                  //@synthesize inHoldToTalkMode=_inHoldToTalkMode - In the implementation block
@property (setter=_setCurrentRequestOptions:,getter=_currentRequestOptions,nonatomic,copy) AFUIRequestOptions * currentRequestOptions;                                       //@synthesize currentRequestOptions=_currentRequestOptions - In the implementation block
@property (setter=_setRecordingStartedTimeValue:,getter=_recordingStartedTimeValue,nonatomic,retain) NSNumber * recordingStartedTimeValue;                                   //@synthesize recordingStartedTimeValue=_recordingStartedTimeValue - In the implementation block
@property (assign,setter=_setViewDidAppearTime:,getter=_viewDidAppearTime,nonatomic) double viewDidAppearTime;                                                               //@synthesize viewDidAppearTime=_viewDidAppearTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_statusBarFrameDidChange:(id)arg1 ;
-(void)setDataSource:(id<AFUISiriViewControllerDataSource>)arg1 ;
-(void)setDelegate:(id<AFUISiriViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<AFUISiriViewControllerDataSource>)dataSource;
-(id<AFUISiriViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setVisible:(BOOL)arg1 ;
-(id)_remoteViewController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(BOOL)isVisible;
-(void)endSession;
-(void)preheat;
-(void)_sendBeginAppearanceTransitionIfReadyAnimated:(BOOL)arg1 ;
-(void)_sendEndAppearanceTransitionIfReady;
-(void)siriViewDidReceiveAudioRouteAction:(id)arg1 ;
-(void)siriViewDidReceiveReportBugAction:(id)arg1 ;
-(void)siriViewDidReceiveBugButtonLongPress:(id)arg1 ;
-(void)siriViewDidReceiveHelpAction:(id)arg1 ;
-(BOOL)siriView:(id)arg1 attemptUnlockWithPassword:(id)arg2 ;
-(float)audioRecordingPowerLevelForSiriView:(id)arg1 ;
-(void)siriViewDidRecieveStatusViewTappedAction:(id)arg1 ;
-(void)siriViewDidRecieveStatusViewHoldDidBeginAction:(id)arg1 ;
-(void)siriViewDidRecieveStatusViewHoldDidEndAction:(id)arg1 ;
-(void)siriView:(id)arg1 didReceiveSiriActivationMessageWithSource:(long long)arg2 ;
-(void)siriDidActivateFromSource:(long long)arg1 ;
-(void)handlePasscodeUnlockWithCompletion:(/*^block*/id)arg1 ;
-(void)viewWillAppearFinishedForSiriRemoteViewController:(id)arg1 ;
-(void)viewWillDisappearFinishedForSiriRemoteViewController:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2 ;
-(void)dismissSiriRemoteViewController:(id)arg1 delayForTTS:(BOOL)arg2 ;
-(void)startGuidedAccessForRemoteViewController:(id)arg1 ;
-(id)siriRemoteViewController:(id)arg1 bulletinWithIdentifier:(id)arg2 ;
-(void)siriRemoteViewController:(id)arg1 didReadBulletinWithIdentifier:(id)arg2 ;
-(void)siriRemoteViewController:(id)arg1 startRequestWithOptions:(id)arg2 ;
-(void)userRelevantEventDidOccurInSiriRemoteViewController:(id)arg1 ;
-(BOOL)siriRemoteViewController:(id)arg1 launchApplicationWithBundleIdentifier:(id)arg2 withURL:(id)arg3 ;
-(void)notifyOnNextUserInteractionForSiriRemoteViewController:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg1 siriIdleAndQuietStatusDidChange:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setStatusViewHidden:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setCarDisplaySnippetVisible:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setCarDisplayGatekeeperVisible:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setStatusViewDisabled:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setStatusViewUserInteractionEnabled:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg1 willPresentViewControllerWithStatusBarStyle:(long long)arg2 ;
-(void)siriRemoteViewController:(id)arg1 willDismissViewControllerWithStatusBarStyle:(long long)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setHelpButtonEmphasized:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setBugReportingAvailable:(BOOL)arg2 ;
-(void)siriRemoteViewController:(id)arg1 handlePasscodeUnlockWithCompletion:(/*^block*/id)arg2 ;
-(void)siriRemoteViewControllerPulseHelpButton:(id)arg1 ;
-(void)siriRemoteViewControllerDidPresentUserInterface:(id)arg1 ;
-(BOOL)siriRemoteViewController:(id)arg1 openURL:(id)arg2 delaySessionEndForTTS:(BOOL)arg3 ;
-(BOOL)siriRemoteViewController:(id)arg1 openURL:(id)arg2 appBundleID:(id)arg3 allowSiriDismissal:(BOOL)arg4 ;
-(void)siriRemoteViewControllerDidDetectMicButtonTap:(id)arg1 ;
-(void)siriRemoteViewControllerDidDetectMicButtonLongPressBegan:(id)arg1 ;
-(void)siriRemoteViewControllerDidDetectMicButtonLongPressEnded:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg1 didChangePresentationPeekMode:(unsigned long long)arg2 ;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)showPresentationWithIdentifier:(id)arg1 properties:(id)arg2 ;
-(void)siriDidDeactivate;
-(void)userInteractionDidOccur;
-(void)setIsStark:(BOOL)arg1 ;
-(void)setLockState:(unsigned long long)arg1 ;
-(void)resetContextTypes:(long long)arg1 ;
-(void)startRequestWithOptions:(id)arg1 ;
-(void)stopRequestWithOptions:(id)arg1 ;
-(void)updateRequestOptions:(id)arg1 ;
-(void)telephonyRequestCompleted;
-(void)siriSession:(id)arg1 didChangeToState:(long long)arg2 ;
-(void)siriSession:(id)arg1 didChangeDialogPhase:(id)arg2 ;
-(void)siriSessionRecordingPreparationHasFinished:(id)arg1 ;
-(id)underlyingConnection;
-(id)bulletinsForSiriSession:(id)arg1 ;
-(id)contextAppInfosForSiriSession:(id)arg1 ;
-(unsigned long long)lockStateForSiriSession:(id)arg1 ;
-(void)siriSessionDidResetContext:(id)arg1 ;
-(void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestAndCancelRequest:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)isPreventingActivationGesture;
-(BOOL)isListening;
-(BOOL)isEyesFree;
-(BOOL)isProcessingAcousticIdRequest;
-(id)initWithConnection:(id)arg1 systemHostedPresentation:(BOOL)arg2 ;
-(void)_suspendRemoteViewControllerDispatchQueue;
-(void)_resumeRemoteViewControllerDispatchQueue;
-(id)_session;
-(BOOL)statusBarEnabled;
-(void)_addStatusBar;
-(void)_removeStatusBar;
-(id)_statusBar;
-(void)_enqueueRemoteViewControllerMessageBlock:(/*^block*/id)arg1 ;
-(CGRect)_statusBarFrame;
-(void)_setStatusBar:(id)arg1 ;
-(id)_siriView;
-(void)_updateAudioRoutePicker;
-(BOOL)hasScreenSnapshot;
-(void)_setViewDidAppearTime:(double)arg1 ;
-(void)_setHasCalledBeginAppearanceTransition:(BOOL)arg1 ;
-(void)_setHasCalledEndAppearanceTransition:(BOOL)arg1 ;
-(void)_presentRemoteViewController;
-(BOOL)_hasCalledBeginAppearanceTransition;
-(BOOL)_hasCalledEndAppearanceTransition;
-(void)setShowsStatusBar:(BOOL)arg1 ;
-(unsigned long long)lockStateForSiriRemoteViewController:(id)arg1 ;
-(void)_handleMicButtonTapFromSource:(long long)arg1 ;
-(void)_handleMicButtonLongPressBeganFromSource:(long long)arg1 ;
-(void)_handleMicButtonLongPressEndedFromSource:(long long)arg1 ;
-(void)startRequestWithActivationTrigger:(id)arg1 ;
-(void)handlePasscodeUnlockAndCancelRequest:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)defrost;
-(void)_setVoiceTriggerEnabled:(BOOL)arg1 ;
-(double)_viewDidAppearTime;
-(void)_setRecordingStartedTimeValue:(id)arg1 ;
-(void)_setCurrentRequestOptions:(id)arg1 ;
-(BOOL)_isInHoldToTalkMode;
-(id)_currentRequestOptions;
-(BOOL)_holdToTalkThresholdHasElapsed;
-(void)_transitionToAutomaticEndpointMode;
-(id)_recordingStartedTimeValue;
-(double)_manualEndpointingThreshold;
-(void)_setInHoldToTalkMode:(BOOL)arg1 ;
-(void)_exitHoldToTalkMode;
-(void)_holdToTalkTriggerDidReleaseFromSource:(long long)arg1 ;
-(void)_activationTriggerDidRelease:(id)arg1 ;
-(void)_enterHoldToTalkMode;
-(BOOL)isStark;
-(id)_routePickerController;
-(void)_setShowAudioRoutePicker:(BOOL)arg1 ;
-(void)presentRemoteViewControllerIfNecessary;
-(void)_presentDeferredFlamesViewIfNecessary;
-(void)siriRemoteViewController:(id)arg1 didEncounterUnexpectedServiceError:(id)arg2 ;
-(void)routePickerController:(id)arg1 hasRoutesToPick:(BOOL)arg2 ;
-(void)routePickerControllerPickedNewRoute:(id)arg1 isBluetooth:(BOOL)arg2 ;
-(void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestWithCompletion:(/*^block*/id)arg2 ;
-(void)_enqueueRemoteViewControllerMessageBlockWithWeaklyReferencedRemoteViewController:(/*^block*/id)arg1 ;
-(long long)currentSource;
-(void)updateContexts:(long long)arg1 ;
-(AFUIRequestOptions *)currentRequestOptions;
-(void)updateViewForPercentageRevealed:(double)arg1 ;
-(void)handleViewFullyRevealed;
-(void)shortTapAction;
-(BOOL)hasQueuedTTS;
-(void)cancelTTS;
-(BOOL)showsStatusBar;
-(void)setStatusBarEnabled:(BOOL)arg1 ;
-(BOOL)mapsGatekeeperEnabled;
-(void)setMapsGatekeeperEnabled:(BOOL)arg1 ;
-(id)_remoteViewControllerDispatchQueue;
-(SiriUIAudioRoutePickerController *)routePickerController;
-(void)setRoutePickerController:(SiriUIAudioRoutePickerController *)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)setEyesFree:(BOOL)arg1 ;
-(void)setAlertContext;
@end

