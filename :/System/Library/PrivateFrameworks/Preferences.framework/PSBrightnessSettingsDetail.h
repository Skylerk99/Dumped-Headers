/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:14 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSSettingsDetail.h>

@class NSString;

@interface PSBrightnessSettingsDetail : NSObject <PSSettingsDetail>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)currentValue;
+(void)setValue:(double)arg1 ;
+(id)iconImage;
+(id)preferencesURL;
+(double)incrementedBrightnessValue:(double)arg1 ;
+(void)incrementBrightnessValue:(double)arg1 ;
+(void)beginBrightnessAdjustmentTransaction;
+(void)endBrightnessAdjustmentTransaction;
+(void)beginObservingExternalBrightnessChanges:(/*^block*/id)arg1 changedAction:(/*^block*/id)arg2 ;
+(void)endObservingExternalBrightnessChanges;
+(BOOL)deviceSupportsAutoBrightness;
+(void)setAutoBrightnessEnabled:(BOOL)arg1 ;
+(BOOL)autoBrightnessEnabled;
@end

