//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIScrollViewDelegate.h"

@class ContinuousReadingBannerView, ContinuousReadingItem, ContinuousReadingPreviewView, NSString, SafariWebView, UIScrollView, UIView;

@interface ContinuousReadingViewController : NSObject <UIScrollViewDelegate>
{
    _Bool _suppressingAutoScroll;
    _Bool _committingToContinuousDocument;
    _Bool _scrollingToNextContinuousDocument;
    ContinuousReadingPreviewView *_previousItemPreviewView;
    ContinuousReadingPreviewView *_previewView;
    ContinuousReadingItem *_currentItem;
    SafariWebView *_currentWebView;
    id <ContinuousReadingViewControllerDelegate> _delegate;
    UIScrollView *_outerScrollView;
}

@property(retain, nonatomic, getter=_outerScrollView, setter=_setOuterScrollView:) UIScrollView *outerScrollView; // @synthesize outerScrollView=_outerScrollView;
@property(nonatomic) __weak id <ContinuousReadingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isScrollingToNextContinuousDocument) _Bool scrollingToNextContinuousDocument; // @synthesize scrollingToNextContinuousDocument=_scrollingToNextContinuousDocument;
@property(readonly, nonatomic, getter=isCommittingToContinuousDocument) _Bool committingToContinuousDocument; // @synthesize committingToContinuousDocument=_committingToContinuousDocument;
@property(nonatomic, getter=isSuppressingAutoScroll) _Bool suppressingAutoScroll; // @synthesize suppressingAutoScroll=_suppressingAutoScroll;
@property(nonatomic) __weak SafariWebView *currentWebView; // @synthesize currentWebView=_currentWebView;
@property(retain, nonatomic) ContinuousReadingItem *currentItem; // @synthesize currentItem=_currentItem;
@property(retain, nonatomic) ContinuousReadingPreviewView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) ContinuousReadingPreviewView *previousItemPreviewView; // @synthesize previousItemPreviewView=_previousItemPreviewView;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (double)_scrollOffsetYForPreviousDocument;
- (double)_scrollOffsetYForNextDocument;
@property(readonly, nonatomic) double scrollOffsetYForCurrentDocument;
- (void)_commitToPreviousContinuousDocument;
- (void)_commitToNextContinuousDocument;
- (void)_willCommitToContinuousDocumentInPreviewView:(id)arg1;
- (void)updateContinuousPreviewViewSizeAttributes;
- (void)innerScrollViewDidScroll:(id)arg1;
- (void)didCreateWebViewForPreviousDocument:(id)arg1;
- (void)didCreateWebViewForNextDocument:(id)arg1;
@property(readonly, nonatomic, getter=isUserInteractingWithContainer) _Bool userInteractingWithContainer;
@property(readonly, nonatomic) ContinuousReadingBannerView *topBannerView;
@property(readonly, retain, nonatomic) UIView *view;
- (void)updateOuterScrollView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

