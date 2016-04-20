/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:52 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AddressBookUI/AddressBookUI-Structs.h>
@class ABPeoplePickerNavigationController, NSMutableArray;

@interface ABPeoplePickerNavigationControllerPromptHandler : NSObject {

	ABPeoplePickerNavigationController* _ppnc;
	NSMutableArray* _prompts;

}
-(id)promptForViewControllerType:(int)arg1 orientation:(long long)arg2 ;
-(void)setPrompt:(id)arg1 forViewControllerType:(int)arg2 ;
-(BOOL)_shouldShowPromptForOrientation:(long long)arg1 ;
-(unsigned long long)indexForViewControllerType:(int)arg1 ;
-(void)dealloc;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithNavigationController:(id)arg1 ;
@end

