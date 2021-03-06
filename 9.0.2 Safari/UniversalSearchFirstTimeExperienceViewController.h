//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SafariExplanationViewControllerDelegate.h"
#import "UniversalSearchFirstTimeExperienceViewDelegate.h"

@class NSString, UIScrollView, UniversalSearchFirstTimeExperienceView, WBSParsecSearchClient;

@interface UniversalSearchFirstTimeExperienceViewController : UIViewController <SafariExplanationViewControllerDelegate, UniversalSearchFirstTimeExperienceViewDelegate>
{
    UniversalSearchFirstTimeExperienceView *_firstTimeExperienceView;
    UIScrollView *_scrollView;
    _Bool _navigationBarVisibilityForRestore;
    id <UniversalSearchFirstTimeExperienceViewControllerDelegate> _delegate;
    WBSParsecSearchClient *_parsecSearchClient;
}

+ (_Bool)hasShownParsecFirstTimeUserExperience;
@property(nonatomic) _Bool navigationBarVisibilityForRestore; // @synthesize navigationBarVisibilityForRestore=_navigationBarVisibilityForRestore;
@property(readonly, nonatomic) WBSParsecSearchClient *parsecSearchClient; // @synthesize parsecSearchClient=_parsecSearchClient;
@property(nonatomic) __weak id <UniversalSearchFirstTimeExperienceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardDidShow:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)explanationViewController:(id)arg1 shouldLoadRequestInWebView:(id)arg2;
- (void)didTapLearnMoreLinkForFirstTimeExperienceView:(id)arg1;
- (id)iconImageNamesForFirstTimeExperienceView:(id)arg1;
- (void)didInteractWithUniversalSearchFirstTimeExperienceView:(id)arg1;
- (id)learnMoreTextForFirstTimeExperienceView:(id)arg1;
- (id)descriptionTextForFirstTimeExperienceView:(id)arg1;
- (void)setUniversalSearchHasShownFirstTimeUserExperience;
- (void)_unifiedFieldDidLoseFocus:(id)arg1;
- (void)unifiedFieldDidChange;
- (void)_updatePreferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithParsecSearchClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

