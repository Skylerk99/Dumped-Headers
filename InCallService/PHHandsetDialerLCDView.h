//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "DialerLCDFieldProtocol.h"
#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSLayoutConstraint, NSString, PHHandsetDialerNameLabelView, UIButton, UILabel, UILongPressGestureRecognizer;

@interface PHHandsetDialerLCDView : UIView <DialerLCDFieldProtocol, UIGestureRecognizerDelegate>
{
    _Bool _addContactButtonVisible;
    _Bool _deleteButtonVisible;
    _Bool _highlighted;
    _Bool _inCallMode;
    int _dialerType;
    UIButton *_deleteButton;
    UIButton *_addContactButton;
    id <DialerLCDFieldDelegate> _delegate;
    PHHandsetDialerNameLabelView *_nameAndLabelView;
    UILabel *_numberLabel;
    NSString *_unformattedText;
    UILongPressGestureRecognizer *_longPressRecognizer;
    NSLayoutConstraint *_numberLabelVerticalConstraint;
    NSLayoutConstraint *_nameAndLabelViewConstraint;
    NSArray *_numberLabelHorizontalConstraints;
}

@property(retain) NSArray *numberLabelHorizontalConstraints; // @synthesize numberLabelHorizontalConstraints=_numberLabelHorizontalConstraints;
@property(retain) NSLayoutConstraint *nameAndLabelViewConstraint; // @synthesize nameAndLabelViewConstraint=_nameAndLabelViewConstraint;
@property(retain) NSLayoutConstraint *numberLabelVerticalConstraint; // @synthesize numberLabelVerticalConstraint=_numberLabelVerticalConstraint;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(retain) NSString *unformattedText; // @synthesize unformattedText=_unformattedText;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain) PHHandsetDialerNameLabelView *nameAndLabelView; // @synthesize nameAndLabelView=_nameAndLabelView;
@property(nonatomic) _Bool inCallMode; // @synthesize inCallMode=_inCallMode;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) id <DialerLCDFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) UIButton *addContactButton; // @synthesize addContactButton=_addContactButton;
@property(retain) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(nonatomic) int dialerType; // @synthesize dialerType=_dialerType;
- (void).cxx_destruct;
- (void)updateNumberLabelHorizontalConstraints;
- (void)applyLayoutConstraints;
- (id)newAddContactButton;
- (id)newDeleteButton;
- (id)newNameAndLabelView;
- (id)lcdColor;
- (void)handleLongPress:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)_displayCallout;
- (void)_menuDidHide:(id)arg1;
- (void)_menuWillHide:(id)arg1;
- (void)_requestMakeCutCopyPasteCalloutVisible:(_Bool)arg1;
- (void)_makeCalloutVisible:(_Bool)arg1;
- (void)_setHighlighted:(_Bool)arg1;
- (void)updateAddAndDeleteButtonForText:(id)arg1 name:(id)arg2 suggestion:(_Bool)arg3 animated:(_Bool)arg4;
- (void)updateAddAndDeleteButtonForText:(id)arg1 name:(id)arg2 animated:(_Bool)arg3;
- (void)setName:(id)arg1 numberLabel:(id)arg2 suggestion:(_Bool)arg3;
- (void)setName:(id)arg1 numberLabel:(id)arg2;
- (void)deleteCharacter;
- (void)setText:(id)arg1 needsFormat:(_Bool)arg2;
- (void)setText:(id)arg1 needsFormat:(_Bool)arg2 name:(id)arg3 label:(id)arg4;
- (id)text;
- (void)dealloc;
- (struct CGSize)intrinsicContentSize;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 forDialerType:(int)arg2;
- (id)generateNumberLabelHorizontalConstraints;
- (float)deleteButtonYOffset;
- (float)addContactButtonYOffset;
- (float)deleteButtonRightPadding;
- (float)addContactButtonLeftPadding;
- (double)nameAndLabelFontSize;
- (id)numberLabelFont;
- (float)spacingBetweenNumberBaseLineAndNameTop;
- (float)numberLabelMinimumFontSize;
- (double)numberLabelMaximumFontSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

