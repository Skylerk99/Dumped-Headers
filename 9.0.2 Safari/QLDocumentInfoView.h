//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface QLDocumentInfoView : UIView
{
    UILabel *_documentNameLabel;
    UILabel *_documentSizeLabel;
    UIImageView *_iconImageView;
}

@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *documentSizeLabel; // @synthesize documentSizeLabel=_documentSizeLabel;
@property(retain, nonatomic) UILabel *documentNameLabel; // @synthesize documentNameLabel=_documentNameLabel;
- (void).cxx_destruct;
- (void)updateWithQuickLookDocument:(id)arg1;
- (id)_iconImageForDocumentProxy:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

