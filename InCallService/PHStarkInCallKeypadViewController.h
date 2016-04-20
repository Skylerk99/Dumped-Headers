//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHStarkGenericDialerViewController.h"

@class UIButton, UIView;

@interface PHStarkInCallKeypadViewController : PHStarkGenericDialerViewController
{
    UIButton *_backButton;
    UIButton *_endButton;
    UIView *_fakeNavigationBar;
}

@property(retain) UIView *fakeNavigationBar; // @synthesize fakeNavigationBar=_fakeNavigationBar;
@property(retain) UIButton *endButton; // @synthesize endButton=_endButton;
@property(retain) UIButton *backButton; // @synthesize backButton=_backButton;
- (void).cxx_destruct;
- (void)hardwareControlEventNotification:(id)arg1;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)focusedViewDidChange;
- (id)preferredFocusedItem;
- (void)_moveWithEvent:(id)arg1;
- (void)postMessageOverlayIfNeeded;
- (void)setLimitedSoftPhoneKeypad:(_Bool)arg1;
- (void)limitedUINotification:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)endButtonTapped:(id)arg1;
- (void)backButtonTapped:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

