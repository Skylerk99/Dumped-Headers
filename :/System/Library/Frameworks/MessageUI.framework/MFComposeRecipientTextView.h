/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:06 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFComposeHeaderView.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>
#import <libobjc.A.dylib/MFMultiDragSource.h>
#import <libobjc.A.dylib/MFMultiDragDestination.h>
#import <libobjc.A.dylib/MFComposeRecipientAtomDelegate.h>

@protocol MFDraggableItem;
@class _MFAtomTextView, UITextView, UIColor, UIView, NSMutableArray, NSMutableDictionary, NSTimer, NSArray, UIFont, UIButton, _MFAtomTextAttachment, NSString;

@interface MFComposeRecipientTextView : MFComposeHeaderView <UITextViewDelegate, NSLayoutManagerDelegate, MFMultiDragSource, MFMultiDragDestination, MFComposeRecipientAtomDelegate> {

	_MFAtomTextView* _textView;
	UITextView* _inactiveTextView;
	UIColor* _inactiveTextColor;
	UIView* _atomContainerView;
	NSMutableArray* _atomViews;
	NSMutableDictionary* _atomPresentationOptionsByRecipient;
	NSMutableDictionary* _atomLayoutOptionsByRecipient;
	long long _atomViewAnimationDepth;
	NSRange _dragSourceRange;
	id<MFDraggableItem> _pivotItem;
	BOOL _parentIsClosing;
	BOOL _textViewExclusionPathsAreValid;
	BOOL _isTextFieldCollapsed;
	BOOL _collapsedStateInitialized;
	BOOL _indicatesUnsafeRecipientsWhenCollapsed;
	BOOL _notifyDelegateOfSizeChange;
	NSTimer* _collapsableUpdateTimer;
	NSArray* _properties;
	NSMutableArray* _recipientsBeingRemoved;
	BOOL _editable;
	BOOL _allowsDragAndDrop;
	BOOL _separatorHidden;
	BOOL _expanded;
	BOOL _didIgnoreFirstResponderResign;
	int _hideLastAtomComma;
	UIFont* _baseFont;
	long long _maxRecipients;
	UIButton* _addButton;
	_MFAtomTextAttachment* _placeholderAttachment;

}

@property (assign,nonatomic) id<MFComposeRecipientTextViewDelegate> delegate; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSArray * addresses; 
@property (nonatomic,copy,readonly) NSArray * uncommentedAddresses; 
@property (assign,nonatomic) BOOL editable;                                                //@synthesize editable=_editable - In the implementation block
@property (assign,nonatomic) BOOL allowsDragAndDrop;                                       //@synthesize allowsDragAndDrop=_allowsDragAndDrop - In the implementation block
@property (assign,getter=isSeparatorHidden,nonatomic) BOOL separatorHidden;                //@synthesize separatorHidden=_separatorHidden - In the implementation block
@property (assign,nonatomic) BOOL expanded;                                                //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) BOOL indicatesUnsafeRecipientsWhenCollapsed;                  //@synthesize indicatesUnsafeRecipientsWhenCollapsed=_indicatesUnsafeRecipientsWhenCollapsed - In the implementation block
@property (nonatomic,readonly) BOOL didIgnoreFirstResponderResign;                         //@synthesize didIgnoreFirstResponderResign=_didIgnoreFirstResponderResign - In the implementation block
@property (assign,nonatomic) long long maxRecipients;                                      //@synthesize maxRecipients=_maxRecipients - In the implementation block
@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) UITextView * textView; 
@property (nonatomic,readonly) UIButton * addButton;                                       //@synthesize addButton=_addButton - In the implementation block
@property (nonatomic,readonly) double offsetForRowWithTextField; 
@property (nonatomic,readonly) unsigned long long numberOfRowsOfTextInField; 
@property (nonatomic,retain) UIFont * baseFont;                                            //@synthesize baseFont=_baseFont - In the implementation block
@property (nonatomic,retain) UIColor * inactiveTextColor; 
@property (assign,nonatomic) int hideLastAtomComma;                                        //@synthesize hideLastAtomComma=_hideLastAtomComma - In the implementation block
@property (nonatomic,retain) _MFAtomTextAttachment * placeholderAttachment;                //@synthesize placeholderAttachment=_placeholderAttachment - In the implementation block
@property (nonatomic,readonly) UIView * atomContainerView;                                 //@synthesize atomContainerView=_atomContainerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultFont;
-(NSArray *)uncommentedAddresses;
-(void)invalidateAtomPresentationOptionsForRecipient:(id)arg1 ;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(BOOL)isSeparatorHidden;
-(void)setProperty:(int)arg1 ;
-(void)deselectComposeRecipientAtom:(id)arg1 ;
-(void)composeRecipientAtomShowPersonCard:(id)arg1 ;
-(void)composeRecipientAtomSelectPrevious:(id)arg1 ;
-(void)composeRecipientAtomSelectNext:(id)arg1 ;
-(void)refreshPreferredContentSize;
-(double)textFieldOffsetForNumberOfRowsToScroll:(unsigned long long)arg1 numberOfRowsAboveField:(long long)arg2 ;
-(UIFont *)baseFont;
-(void)setEditable:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)didIgnoreFirstResponderResign;
-(void)setAllowsDragAndDrop:(BOOL)arg1 ;
-(void)setIndicatesUnsafeRecipientsWhenCollapsed:(BOOL)arg1 ;
-(id)viewForDragSource;
-(void)dropItems:(id)arg1 ;
-(void)dragCompletedWithItems:(id)arg1 success:(BOOL)arg2 ;
-(id)destinationViewForDrop;
-(void)dragMovedToPoint:(CGPoint)arg1 withItems:(id)arg2 ;
-(void)dragExitedWithItems:(id)arg1 ;
-(void)dragEnteredAtPoint:(CGPoint)arg1 withItems:(id)arg2 ;
-(CGRect)frameForDraggedItem:(id)arg1 isPivotView:(out BOOL*)arg2 ;
-(BOOL)shouldCollapseMultipleItems;
-(id)viewForDraggedItem:(id)arg1 atScale:(double)arg2 ;
-(void)dragStartedWithItems:(id)arg1 ;
-(void)willDropItems:(id)arg1 ;
-(void)animatePlaceholderForDragFailureWithItems:(id)arg1 ;
-(CGRect)frameForDroppedItem:(id)arg1 ;
-(id)supportedDropTypes:(id)arg1 ;
-(BOOL)allowsDrag;
-(id)itemsForDragAtPoint:(CGPoint)arg1 ;
-(BOOL)containsAddress:(id)arg1 ;
-(void)_setAddButtonVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_useRightToLeftLayout;
-(void)_invalidateTextContainerExclusionPaths;
-(void)_updateInactiveTextView;
-(void)_removeAllRecipients;
-(void)addRecipient:(id)arg1 index:(unsigned long long)arg2 animate:(BOOL)arg3 ;
-(void)_addRecord:(void*)arg1 identifier:(int)arg2 ;
-(void)_beginAtomViewAnimations;
-(id)_atomAttachmentForRecipient:(id)arg1 ;
-(void)_insertAtomAttachment:(id)arg1 atCharacterIndex:(unsigned long long)arg2 ;
-(void)_didRemoveRecipient:(id)arg1 ;
-(id)_userEnteredTextWithRange:(NSRange*)arg1 ;
-(void)_setTextViewIsCollapsed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_canAddAdditionalAtoms;
-(void)_recomputeTextContainerExclusionPaths;
-(BOOL)_isTextViewCollapsed;
-(id)_textContainerExclusionPathsWithAddButton:(BOOL)arg1 ;
-(BOOL)_textViewContainsAtomizedRecipients;
-(BOOL)_hasUnsafeRecipients;
-(UIColor *)inactiveTextColor;
-(BOOL)_delegateRespondsToSizeChange;
-(void)_notifyDelegateOfNewSize:(CGSize)arg1 ;
-(BOOL)_isAddButtonVisible;
-(void)_addButtonTapped:(id)arg1 ;
-(void)_insertAtomAttachment:(id)arg1 andReplaceCharactersInRange:(NSRange)arg2 ;
-(id)_atomViewAtCharacterIndex:(unsigned long long)arg1 ;
-(void)_resetSelectionState;
-(id)_valueForAtomLayoutOption:(id)arg1 withRecipient:(id)arg2 ;
-(void)_addAddressAtomSubview:(id)arg1 ;
-(BOOL)_shouldAnimateAtomViewChanges;
-(void)_removeAddressAtomSubview:(id)arg1 ;
-(void)_notifyDelegateOfSizeChange;
-(_MFAtomTextAttachment *)placeholderAttachment;
-(BOOL)allowsDragAndDrop;
-(id)_placeholderAttachmentForRecipient:(id)arg1 ;
-(void)setPlaceholderAttachment:(_MFAtomTextAttachment *)arg1 ;
-(NSRange)_placeholderAttachmentRange;
-(void)_setValue:(id)arg1 forAtomLayoutOption:(id)arg2 withRecipient:(id)arg3 ;
-(NSRange)_rangeForComposeRecipientAtom:(id)arg1 ;
-(void)_invalidateAtomPresentationOptionsCache;
-(void)atomTextViewDidBecomeFirstResponder:(id)arg1 ;
-(void)atomTextViewDidResignFirstResponder:(id)arg1 ;
-(void)atomTextView:(id)arg1 didChangeWritingDirection:(long long)arg2 ;
-(UIView *)atomContainerView;
-(BOOL)indicatesUnsafeRecipientsWhenCollapsed;
-(long long)maxRecipients;
-(void)setMaxRecipients:(long long)arg1 ;
-(int)hideLastAtomComma;
-(void)setHideLastAtomComma:(int)arg1 ;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(void)setAddresses:(NSArray *)arg1 ;
-(UIButton *)addButton;
-(void)reflow;
-(NSArray *)addresses;
-(void)removeRecipient:(id)arg1 ;
-(void)addRecipient:(id)arg1 ;
-(void)addRecord:(void*)arg1 property:(int)arg2 identifier:(int)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MFComposeRecipientTextViewDelegate>)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MFComposeRecipientTextViewDelegate>)delegate;
-(BOOL)becomeFirstResponder;
-(NSString *)text;
-(BOOL)isFirstResponder;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)clearText;
-(void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3 ;
-(void)setLabel:(id)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(BOOL)hasContent;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(BOOL)editable;
-(void)_longPressGestureRecognized:(id)arg1 ;
-(UITextView *)textView;
-(void)setProperties:(id)arg1 ;
-(void)_tapGestureRecognized:(id)arg1 ;
-(void)parentWillClose;
-(void)parentDidClose;
-(unsigned long long)_atomPresentationOptionsForRecipient:(id)arg1 ;
-(void)setInactiveTextColor:(UIColor *)arg1 ;
-(void)invalidateAtomPresentationOptions;
-(id)atomViewsInRange:(NSRange)arg1 ;
-(id)atomViewForRecipient:(id)arg1 ;
-(unsigned long long)numberOfRowsOfTextInField;
-(double)offsetForRowWithTextField;
-(void)selectComposeRecipientAtom:(id)arg1 ;
-(BOOL)finishEnteringRecipient;
-(void)addAddress:(id)arg1 ;
-(void)setBaseFont:(UIFont *)arg1 ;
@end

