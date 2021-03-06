/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebFormDelegate.h>

@protocol WebFormDelegate <NSObject>
@required
-(void)textFieldDidBeginEditing:(id)arg1 inFrame:(id)arg2;
-(void)textFieldDidEndEditing:(id)arg1 inFrame:(id)arg2;
-(void)textDidChangeInTextField:(id)arg1 inFrame:(id)arg2;
-(void)textDidChangeInTextArea:(id)arg1 inFrame:(id)arg2;
-(void)didFocusTextField:(id)arg1 inFrame:(id)arg2;
-(BOOL)textField:(id)arg1 doCommandBySelector:(SEL)arg2 inFrame:(id)arg3;
-(void)frame:(id)arg1 sourceFrame:(id)arg2 willSubmitForm:(id)arg3 withValues:(id)arg4 submissionListener:(id)arg5;
-(void)willSendSubmitEventToForm:(id)arg1 inFrame:(id)arg2 withValues:(id)arg3;

@end


@class NSString;

@interface WebFormDelegate : NSObject <WebFormDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedWebFormDelegate;
-(void)textFieldDidBeginEditing:(id)arg1 inFrame:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 inFrame:(id)arg2 ;
-(void)textDidChangeInTextField:(id)arg1 inFrame:(id)arg2 ;
-(void)textDidChangeInTextArea:(id)arg1 inFrame:(id)arg2 ;
-(void)didFocusTextField:(id)arg1 inFrame:(id)arg2 ;
-(BOOL)textField:(id)arg1 doCommandBySelector:(SEL)arg2 inFrame:(id)arg3 ;
-(void)frame:(id)arg1 sourceFrame:(id)arg2 willSubmitForm:(id)arg3 withValues:(id)arg4 submissionListener:(id)arg5 ;
-(void)willSendSubmitEventToForm:(id)arg1 inFrame:(id)arg2 withValues:(id)arg3 ;
@end

