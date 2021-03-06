/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:52 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/RemindersWidget.axbundle/RemindersWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reminders-Assistant/__RemindersUITextViewAccessibility_super.h>

@class RemindersCheckboxCellAccessibility;

@interface RemindersUITextViewAccessibility : __RemindersUITextViewAccessibility_super

@property (assign,nonatomic) RemindersCheckboxCellAccessibility * accessibilityCheckboxCell; 
@property (assign,nonatomic) BOOL accessibilityIsRemindersCreationFooterViewTextView; 
+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)setAccessibilityIsRemindersCreationFooterViewTextView:(BOOL)arg1 ;
-(BOOL)_axIsCheckboxCellTextView;
-(RemindersCheckboxCellAccessibility *)accessibilityCheckboxCell;
-(void)setAccessibilityCheckboxCell:(RemindersCheckboxCellAccessibility *)arg1 ;
-(BOOL)accessibilityIsRemindersCreationFooterViewTextView;
-(BOOL)_axIsNonEditingCreationFooterView;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
@end

