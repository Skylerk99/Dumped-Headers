/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:07 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/SiriUISiriStatusViewDelegate.h>
#import <libobjc.A.dylib/SBUIPasscodeLockViewDelegate.h>
#import <libobjc.A.dylib/AFUISiriRemoteViewHosting.h>

@protocol SiriUISiriStatusViewProtocol, SBUIPasscodeLockView, AFUISiriViewDelegate;
@class UIView, _UIBackdropView, SiriUIAudioRoutePickerButton, SiriUIHelpButton, SiriUIContentButton, NSString;

@interface AFUISiriView : UIView <SiriUISiriStatusViewDelegate, SBUIPasscodeLockViewDelegate, AFUISiriRemoteViewHosting> {

	_UIBackdropView* _backdropView;
	UIView* _carPlayGatekeeperBackdropView;
	BOOL _backdropViewVisible;
	BOOL _carPlayGatekeeperBackdropViewVisible;
	UIView* _dimmingView;
	UIView* _dimmingAndLockContainer;
	UIView* _statusViewContainer;
	UIView*<SiriUISiriStatusViewProtocol> _siriStatusView;
	SiriUIAudioRoutePickerButton* _audioRoutePickerButton;
	SiriUIHelpButton* _helpButton;
	SiriUIContentButton* _reportBugButton;
	UIView*<SBUIPasscodeLockView> _lockView;
	unsigned long long _unlockAttemptCount;
	/*^block*/id _unlockCompletion;
	long long _frozenBackdropSnapshotOrientation;
	BOOL _disabled;
	BOOL _statusViewHidden;
	BOOL _keepStatusViewHidden;
	BOOL _flamesViewDeferred;
	BOOL _carDisplaySnippetVisible;
	UIView* _remoteContentView;
	UIView* _foregroundView;
	id<AFUISiriViewDelegate> _delegate;
	long long _siriSessionState;
	long long _mode;
	UIView* _frozenBackdropSnapshotView;

}

@property (nonatomic,readonly) UIView * foregroundView;                                //@synthesize foregroundView=_foregroundView - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISiriViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                            //@synthesize disabled=_disabled - In the implementation block
@property (assign,nonatomic) BOOL statusViewHidden;                                    //@synthesize statusViewHidden=_statusViewHidden - In the implementation block
@property (assign,nonatomic) BOOL keepStatusViewHidden;                                //@synthesize keepStatusViewHidden=_keepStatusViewHidden - In the implementation block
@property (assign,nonatomic) BOOL flamesViewDeferred;                                  //@synthesize flamesViewDeferred=_flamesViewDeferred - In the implementation block
@property (assign,nonatomic) BOOL carDisplaySnippetVisible;                            //@synthesize carDisplaySnippetVisible=_carDisplaySnippetVisible - In the implementation block
@property (assign,nonatomic) long long siriSessionState;                               //@synthesize siriSessionState=_siriSessionState - In the implementation block
@property (assign,nonatomic) long long mode;                                           //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) UIView * frozenBackdropSnapshotView;                      //@synthesize frozenBackdropSnapshotView=_frozenBackdropSnapshotView - In the implementation block
@property (assign,nonatomic) long long frozenBackdropSnapshotOrientation;              //@synthesize frozenBackdropSnapshotOrientation=_frozenBackdropSnapshotOrientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIView * remoteContentView;                               //@synthesize remoteContentView=_remoteContentView - In the implementation block
+(void)_animateView:(id)arg1 inBounds:(CGRect)arg2 fromYPosition:(double)arg3 toYPostion:(double)arg4 fade:(long long)arg5 completion:(/*^block*/id)arg6 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<AFUISiriViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<AFUISiriViewDelegate>)delegate;
-(void)setBackdropVisible:(BOOL)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(UIView *)foregroundView;
-(BOOL)_reducesMotionEffects;
-(id)dimBackdropSettings;
-(void)setFlamesViewDeferred:(BOOL)arg1 ;
-(void)_configureHelpButton;
-(void)configureReportBugButtonToShowHoldToTalkState:(BOOL)arg1 ;
-(void)_updateControlsAppearance;
-(void)_layoutReportBugButton;
-(void)_animateButtonsHidden:(BOOL)arg1 ;
-(void)_audioRouteButtonTapped:(id)arg1 ;
-(BOOL)_showsReportBugButton;
-(void)_createReportBugButtonWithTemplateImage:(id)arg1 andConfigureWithHoldToTalkState:(BOOL)arg2 ;
-(void)_loadReportBugButtonTemplateImageInBackgroundWithCompletion:(/*^block*/id)arg1 ;
-(void)_configureReportBugButtonWithHoldToTalkState:(BOOL)arg1 ;
-(void)_reportBugButtonTapped;
-(void)_reportBugButtonLongPressed;
-(BOOL)_shouldIndicateHoldToTalkMode;
-(void)_helpButtonTapped:(id)arg1 ;
-(BOOL)_helpButtonIsVisible;
-(id)_lockViewBackgroundColor;
-(id)_lockViewLegibilityProvider;
-(void)_animateLockViewIsAnimatingIn:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_hideLockViewWithResult:(long long)arg1 ;
-(void)_hideLockViewWithResult:(long long)arg1 hideCompletion:(/*^block*/id)arg2 ;
-(void)setStatusViewHidden:(BOOL)arg1 ;
-(float)audioLevelForSiriStatusView:(id)arg1 ;
-(void)siriStatusViewWasTapped:(id)arg1 ;
-(void)siriStatusViewHoldDidBegin:(id)arg1 ;
-(void)siriStatusViewHoldDidEnd:(id)arg1 ;
-(void)passcodeLockViewPasscodeEntered:(id)arg1 ;
-(void)passcodeLockViewCancelButtonPressed:(id)arg1 ;
-(void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1 ;
-(UIView *)remoteContentView;
-(void)setRemoteContentView:(UIView *)arg1 ;
-(void)setFrozenBackdropSnapshotView:(UIView *)arg1 ;
-(void)setCarDisplaySnippetVisible:(BOOL)arg1 ;
-(void)setStatusViewUserInteractionEnabled:(BOOL)arg1 ;
-(void)teardownStatusView;
-(void)setCarPlayGatekeeperBackdropVisible:(BOOL)arg1 ;
-(void)setBackdropShouldRasterize:(BOOL)arg1 ;
-(void)updateForPercentageRevealed:(double)arg1 ;
-(void)setShowAudioRoutePicker:(BOOL)arg1 ;
-(void)setAudioRoutePickerBluetoothOn:(BOOL)arg1 ;
-(void)_preferencesDidChange:(id)arg1 ;
-(void)setSiriSessionState:(long long)arg1 ;
-(void)setBugReportingAvailable:(BOOL)arg1 ;
-(void)setHelpButtonEmphasized:(BOOL)arg1 ;
-(void)pulseHelpButton;
-(void)showPasscodeUnlockWithStatusText:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelShowingPasscodeUnlock;
-(void)siriDidActivateFromSource:(long long)arg1 ;
-(BOOL)statusViewHidden;
-(BOOL)keepStatusViewHidden;
-(void)setKeepStatusViewHidden:(BOOL)arg1 ;
-(BOOL)flamesViewDeferred;
-(BOOL)carDisplaySnippetVisible;
-(long long)siriSessionState;
-(UIView *)frozenBackdropSnapshotView;
-(long long)frozenBackdropSnapshotOrientation;
-(void)setFrozenBackdropSnapshotOrientation:(long long)arg1 ;
@end

