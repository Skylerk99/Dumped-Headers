/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:17 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSString;

@interface DeviceNameEditingController : PSListController {

	id _effectiveSettingsChangedNotificationObserver;
	NSString* _originalDeviceName;

}

@property (nonatomic,retain) id effectiveSettingsChangedNotificationObserver;              //@synthesize effectiveSettingsChangedNotificationObserver=_effectiveSettingsChangedNotificationObserver - In the implementation block
@property (nonatomic,retain) NSString * originalDeviceName;                                //@synthesize originalDeviceName=_originalDeviceName - In the implementation block
-(BOOL)canBeShownFromSuspendedState;
-(id)specifiers;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)suspend;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldSelectResponderOnAppearance;
-(void)setEffectiveSettingsChangedNotificationObserver:(id)arg1 ;
-(id)effectiveSettingsChangedNotificationObserver;
-(id)deviceName:(id)arg1 ;
-(id)_editedDeviceName;
-(NSString *)originalDeviceName;
-(void)setOriginalDeviceName:(NSString *)arg1 ;
@end

