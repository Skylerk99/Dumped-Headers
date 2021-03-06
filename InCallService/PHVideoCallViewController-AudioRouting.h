//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHVideoCallViewController.h"

#import "PHAudioRoutingAlertDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"

@class NSString;

@interface PHVideoCallViewController (AudioRouting) <PHAudioRoutingAlertDelegate, UIPopoverPresentationControllerDelegate>
- (id)muteActionTitleForAudioRoutingAlertController:(id)arg1;
- (id)hideActionTitleForAudioRoutingAlertController:(id)arg1;
- (void)hideAudioRoutingDeviceList;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)audioRoutingAlertControllerDidDismiss:(id)arg1;
- (void)audioRoutingAlertController:(id)arg1 didRequestMuteChange:(_Bool)arg2;
- (void)audioRoutingAlertController:(id)arg1 didSelectAction:(id)arg2;
- (void)showAudioRoutingDeviceList;
- (void)muteConference:(_Bool)arg1;
- (void)updateUIForMute:(_Bool)arg1;
- (void)resetAutodismissTimer;
- (void)setupAutodismissRoutingTimer;
- (void)_setupAutodismissRoutingTimer:(double)arg1;
- (void)_autodismissAudioMenu;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

