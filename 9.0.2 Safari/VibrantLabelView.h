//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor, UIFont, UILabel;

@interface VibrantLabelView : UIView
{
    UILabel *_overlayLabel;
    UILabel *_label;
    _Bool _usesVibrantEffect;
    UIColor *_nonVibrantColor;
    UIFont *_font;
    NSString *_text;
    long long _numberOfLines;
    long long _textAlignment;
}

@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *nonVibrantColor; // @synthesize nonVibrantColor=_nonVibrantColor;
@property(nonatomic) _Bool usesVibrantEffect; // @synthesize usesVibrantEffect=_usesVibrantEffect;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

