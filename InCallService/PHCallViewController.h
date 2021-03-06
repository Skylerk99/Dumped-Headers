//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class CNContact, PHContactsClient, TPSuperBottomBar;

@interface PHCallViewController : UIViewController
{
    _Bool _wantsApplicationDismissalStyle;
    unsigned short _currentState;
    id <PHInCallRootViewControllerProtocol> _inCallRootViewController;
    TPSuperBottomBar *_bottomBar;
    CNContact *_contact;
    PHContactsClient *_contactsClient;
}

@property(nonatomic) unsigned short currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) PHContactsClient *contactsClient; // @synthesize contactsClient=_contactsClient;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) TPSuperBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property _Bool wantsApplicationDismissalStyle; // @synthesize wantsApplicationDismissalStyle=_wantsApplicationDismissalStyle;
@property(nonatomic) __weak id <PHInCallRootViewControllerProtocol> inCallRootViewController; // @synthesize inCallRootViewController=_inCallRootViewController;
- (void).cxx_destruct;
- (void)showFailureAlertIfNecessaryForCall:(id)arg1;
- (void)releaseDismissalAssertionIfNeeded;
- (void)obtainDismissalAssertionIfNeeded;
- (id)dismissalAssertionReason;
- (_Bool)needsDismissalAssertion;
- (double)_yOffsetForLoweredButtons;
- (double)_bottomMarginForBottomBar;
- (_Bool)shouldShowActionTypeSendToVoicemail;
- (void)showErrorAlertWithTitle:(id)arg1 message:(id)arg2 alternateButton:(id)arg3 alternateButtonURL:(id)arg4;
- (void)showErrorAlertWithTitle:(id)arg1 message:(id)arg2 alternateButton:(id)arg3 alternateButtonURL:(id)arg4 otherButton:(id)arg5 otherButtonURL:(id)arg6;
- (void)showErrorAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)setStatusBarHidden:(_Bool)arg1 withDuration:(double)arg2;
- (void)autoAnswer;
- (void)cancelAutoAnswer;
- (void)setupAutoAnswer;
- (_Bool)_shouldAutoAnswer;
- (struct CGRect)sourceRectForDeclineWithReminderPopover;
- (struct CGRect)sourceRectForDeclineWithMessagePopover;
- (id)sourceViewForDeclineWithActionPopover;
- (void)declineWithReminderForCall:(id)arg1;
- (void)declineWithMessageForCall:(id)arg1;
- (_Bool)isReminderAllowedForCall:(id)arg1;
- (_Bool)isMessagingAllowedForCall:(id)arg1;
- (_Bool)isCallbackAllowedForCall:(id)arg1;
- (long long)desiredButtonEvents;
- (_Bool)allowsBanners;
- (_Bool)allowsOtherAlertsToStackOnTop;
- (_Bool)allowsMenuButtonDismissal;
- (void)transitionToIdleAfterDelay;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

