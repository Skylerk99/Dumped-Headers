/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilitySettingsLoader/AccessibilitySettingsLoader-Structs.h>
@interface AssistiveTouchHelper : NSObject
+(void)initializeMonitoring;
-(void)_sendKeyboardStatusUpdate:(CGRect)arg1 ;
-(void)installMediaCategoriesAndValidate;
-(void)installiPodUICategoriesAndValidate;
-(void)installKeyboardListener;
-(void)installMediaControlsListener;
-(void)_handleMediaPlaybackEnded;
-(id)init;
-(void)enable;
@end

