//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "BrowserPanel.h"
#import "UINavigationControllerDelegate.h"

@class MFMailComposeViewController, NSString;

@interface BrowserMailComposePanel : UIViewController <BrowserPanel, UINavigationControllerDelegate>
{
    MFMailComposeViewController *_mailController;
}

@property(readonly) MFMailComposeViewController *mailController; // @synthesize mailController=_mailController;
- (void).cxx_destruct;
- (_Bool)shouldHideOnSuspend;
- (int)panelType;
- (void)applicationDidResume;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)dealloc;
- (id)initWithURL:(id)arg1 mailComposeDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

