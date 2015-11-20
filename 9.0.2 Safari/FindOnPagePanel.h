//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "BrowserPanel.h"
#import "UIKeyInput.h"

@class FindOnPageToolbar, NSString, UITextField;

@interface FindOnPagePanel : UIView <BrowserPanel, UIKeyInput>
{
    _Bool _requiresKeyboard;
    _Bool _usesNarrowLayout;
    FindOnPageToolbar *_toolbar;
}

- (void).cxx_destruct;
- (void)_advance:(id)arg1;
- (void)_dismiss:(id)arg1;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (_Bool)hasText;
- (_Bool)canBecomeFirstResponder;
- (_Bool)_requiresKeyboardWhenFirstResponder;
- (void)updateUI;
@property(readonly, nonatomic) UITextField *findTextField;
- (id)inputAccessoryView;
@property(readonly, nonatomic) FindOnPageToolbar *toolbar;
- (id)keyCommands;
- (void)didMoveToSuperview;
- (void)setUsesNarrowLayout:(_Bool)arg1;
- (_Bool)shouldHideOnSuspend;
- (int)panelType;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;

@end

