/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:58 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewController.h>

@protocol _UIAlertControllerTextFieldViewControllerContaining;
@class NSMutableArray, UIAlertControllerVisualStyle, UICollectionViewFlowLayout, NSArray;

@interface _UIAlertControllerTextFieldViewController : UICollectionViewController {

	NSMutableArray* textFieldViews;
	NSMutableArray* textFields;
	BOOL _textFieldsCanBecomeFirstResponder;
	UIAlertControllerVisualStyle* _visualStyle;
	UICollectionViewFlowLayout* _collectionViewLayout;
	BOOL _hidden;
	id<_UIAlertControllerTextFieldViewControllerContaining> _container;

}

@property (assign,nonatomic,__weak) id<_UIAlertControllerTextFieldViewControllerContaining> container;              //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) BOOL textFieldsCanBecomeFirstResponder; 
@property (assign,nonatomic) UIAlertControllerVisualStyle * visualStyle; 
@property (readonly) NSArray * textFields; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                                                           //@synthesize hidden=_hidden - In the implementation block
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(id)init;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(id<_UIAlertControllerTextFieldViewControllerContaining>)container;
-(void)setContainer:(id<_UIAlertControllerTextFieldViewControllerContaining>)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)textFieldAtIndex:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(UIAlertControllerVisualStyle *)visualStyle;
-(void)setVisualStyle:(UIAlertControllerVisualStyle *)arg1 ;
-(NSArray *)textFields;
-(id)addTextFieldWithPlaceholder:(id)arg1 isSecure:(BOOL)arg2 ;
-(void)setTextFieldsCanBecomeFirstResponder:(BOOL)arg1 ;
-(void)removeAllTextFields;
-(BOOL)textFieldsCanBecomeFirstResponder;
-(void)updateTextFieldStyle;
-(void)_returnKeyPressedInTextField:(id)arg1 ;
-(void)_updatePreferredContentSize;
-(long long)numberOfTextFields;
-(double)_bottomMarginForTextFields;
@end

