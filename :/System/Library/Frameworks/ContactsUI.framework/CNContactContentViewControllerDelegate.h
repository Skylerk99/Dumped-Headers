/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNContactContentViewControllerDelegate <CNContactViewControllerDelegate>
@optional
-(id)contactPresentedViewController:(id)arg1;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
-(void)contactViewController:(id)arg1 didChangeToEditMode:(BOOL)arg2;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4;
-(void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;

@end

