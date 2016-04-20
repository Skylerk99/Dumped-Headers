/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:32 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/ContactsSettings.bundle/ContactsSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, NSMutableArray;

@interface ContactsShortNameController : PSListController {

	PSSpecifier* _shortNameEnabledSpecifier;
	PSSpecifier* _shortNameFormatsGroup;
	NSMutableArray* _shortNameFormatsSpecifiers;

}
-(id)shortNameFormat;
-(void)setShortNameFormat:(id)arg1 ;
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setShortNameEnabled:(id)arg1 ;
-(id)shortNameEnabled;
-(void)setPreferNicknames:(id)arg1 ;
-(id)preferNicknames;
@end

