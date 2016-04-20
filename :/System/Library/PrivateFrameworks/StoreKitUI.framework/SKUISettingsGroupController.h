/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:10 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUISettingsGroupControllerDelegate;
@class NSMutableArray, SKUISettingsGroupDescription;

@interface SKUISettingsGroupController : NSObject {

	id<SKUISettingsGroupControllerDelegate> _delegate;
	NSMutableArray* _settingDescriptions;
	SKUISettingsGroupDescription* _settingsGroupDescription;

}

@property (assign,nonatomic,__weak) id<SKUISettingsGroupControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * settingDescriptions;                                 //@synthesize settingDescriptions=_settingDescriptions - In the implementation block
@property (nonatomic,retain) SKUISettingsGroupDescription * settingsGroupDescription;              //@synthesize settingsGroupDescription=_settingsGroupDescription - In the implementation block
-(void)setDelegate:(id<SKUISettingsGroupControllerDelegate>)arg1 ;
-(id<SKUISettingsGroupControllerDelegate>)delegate;
-(void)attachSettingDescription:(id)arg1 ;
-(NSMutableArray *)settingDescriptions;
-(id)_viewForSettingDescription:(id)arg1 ;
-(SKUISettingsGroupDescription *)settingsGroupDescription;
-(void)_reloadSettingDescription:(id)arg1 ;
-(void)setSettingDescriptions:(NSMutableArray *)arg1 ;
-(void)setSettingsGroupDescription:(SKUISettingsGroupDescription *)arg1 ;
@end

