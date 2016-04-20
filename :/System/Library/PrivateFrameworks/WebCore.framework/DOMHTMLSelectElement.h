/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:56 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLFormElement, NSString, DOMHTMLOptionsCollection;

@interface DOMHTMLSelectElement : DOMHTMLElement

@property (assign) BOOL autofocus; 
@property (assign) BOOL disabled; 
@property (readonly) DOMHTMLFormElement * form; 
@property (assign) BOOL multiple; 
@property (copy) NSString * name; 
@property (assign) int size; 
@property (copy,readonly) NSString * type; 
@property (readonly) DOMHTMLOptionsCollection * options; 
@property (readonly) int length; 
@property (assign) int selectedIndex; 
@property (copy) NSString * value; 
@property (readonly) BOOL willValidate; 
-(void)_startAssistingDocumentView:(id)arg1 ;
-(void)_stopAssistingDocumentView:(id)arg1 ;
-(BOOL)_requiresAccessoryView;
-(BOOL)_requiresInputView;
-(BOOL)_supportsAutoFill;
-(BOOL)nodeCanBecomeFirstResponder;
-(id)createPeripheral;
-(unsigned)completeLength;
-(id)listItemAtIndex:(int)arg1 ;
-(int)structuralComplexityContribution;
-(void)_activateItemAtIndex:(int)arg1 ;
-(void)_activateItemAtIndex:(int)arg1 allowMultipleSelection:(BOOL)arg2 ;
-(void)remove:(int)arg1 ;
-(id)validity;
-(int)size;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(int)length;
-(NSString *)type;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setSize:(int)arg1 ;
-(int)selectedIndex;
-(void)setSelectedIndex:(int)arg1 ;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(id)item:(unsigned)arg1 ;
-(DOMHTMLFormElement *)form;
-(DOMHTMLOptionsCollection *)options;
-(BOOL)multiple;
-(id)labels;
-(void)setRequired:(BOOL)arg1 ;
-(id)namedItem:(id)arg1 ;
-(BOOL)autofocus;
-(void)setAutofocus:(BOOL)arg1 ;
-(BOOL)willValidate;
-(id)validationMessage;
-(BOOL)checkValidity;
-(void)setCustomValidity:(id)arg1 ;
-(void)setMultiple:(BOOL)arg1 ;
-(BOOL)required;
-(id)selectedOptions;
-(void)add:(id)arg1 before:(id)arg2 ;
-(void)add:(id)arg1 :(id)arg2 ;
@end

