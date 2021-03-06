/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:38 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class UIImage;

@interface MCMoreDetailsController : PSListController {

	UIImage* _iconImage;

}

@property (nonatomic,retain) UIImage * iconImage;              //@synthesize iconImage=_iconImage - In the implementation block
-(void)setIconImage:(UIImage *)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(UIImage *)iconImage;
-(id)_specifierForPayload:(id)arg1 ;
-(id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 ;
@end

