/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:00 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCellLayoutManager.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSString;

@interface UITableViewCellLayoutManagerEditable1 : UITableViewCellLayoutManager <UITextFieldDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)layoutSubviewsOfCell:(id)arg1 ;
-(id)defaultTextLabelFontForCell:(id)arg1 ;
-(id)detailTextLabelForCell:(id)arg1 ;
-(id)editableTextFieldForCell:(id)arg1 ;
-(double)defaultTextFieldFontSizeForCell:(id)arg1 ;
-(void)_textFieldStartEditing:(id)arg1 ;
-(void)_textFieldEndEditing:(id)arg1 ;
-(void)_textFieldEndEditingOnReturn:(id)arg1 ;
-(void)_textValueChanged:(id)arg1 ;
@end

