//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class VibrantLabelView, VibrantSeparatorView;

@interface FrequentlyVisitedSitesSectionHeaderView : UIView
{
    _Bool _isInLayoutSubviews;
    double _requiredHeight;
    double _labelHeight;
    VibrantLabelView *_frequentlyVisitedSitesLabel;
    VibrantSeparatorView *_separatorView;
    double _labelLeftInset;
    CDUnknownBlockType _updateOnLayout;
}

@property(copy, nonatomic) CDUnknownBlockType updateOnLayout; // @synthesize updateOnLayout=_updateOnLayout;
@property(nonatomic) double labelLeftInset; // @synthesize labelLeftInset=_labelLeftInset;
@property(readonly, nonatomic) VibrantSeparatorView *separatorView; // @synthesize separatorView=_separatorView;
@property(readonly, nonatomic) VibrantLabelView *frequentlyVisitedSitesLabel; // @synthesize frequentlyVisitedSitesLabel=_frequentlyVisitedSitesLabel;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

