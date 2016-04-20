/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBSoftwareUpdateSettings : _UISettings {

	unsigned long long _defaultRepopDuration;
	unsigned long long _repopStrategyTest;

}

@property (assign,nonatomic) unsigned long long defaultRepopDuration;              //@synthesize defaultRepopDuration=_defaultRepopDuration - In the implementation block
@property (assign,nonatomic) unsigned long long repopStrategyTest;                 //@synthesize repopStrategyTest=_repopStrategyTest - In the implementation block
+(id)settingsControllerModule;
-(unsigned long long)repopStrategyTest;
-(unsigned long long)defaultRepopDuration;
-(void)setDefaultRepopDuration:(unsigned long long)arg1 ;
-(void)setRepopStrategyTest:(unsigned long long)arg1 ;
-(void)setDefaultValues;
@end

