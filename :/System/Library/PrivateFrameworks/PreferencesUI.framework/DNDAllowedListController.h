/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:17 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSArray, NSMutableArray;

@interface DNDAllowedListController : PSListController {

	NSArray* _presetGroups;
	NSMutableArray* _usersGroups;

}
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)identifierForType:(unsigned long long)arg1 ;
-(void)setDisruptionGroup:(id)arg1 specifier:(id)arg2 ;
-(id)getGroupSelectionFromSpecifiers:(id)arg1 ;
@end

