//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class CatalogViewController;

@interface BrowserRootViewController : UIViewController
{
    long long _preferredStatusBarStyle;
    _Bool _canBecomeFirstResponder;
    CatalogViewController *_catalogViewController;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property(retain, nonatomic) CatalogViewController *catalogViewController; // @synthesize catalogViewController=_catalogViewController;
- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)overrideTraitCollectionForChildViewController:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (long long)sizeClassForWidth:(double)arg1;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (struct UIEdgeInsets)_avoidanceInsets;
@property(nonatomic) long long preferredStatusBarStyle;

@end

