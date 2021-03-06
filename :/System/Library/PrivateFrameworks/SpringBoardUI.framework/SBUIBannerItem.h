/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBUIQuietModePlayability.h>

@class NSString;

@interface SBUIBannerItem : NSObject <SBUIQuietModePlayability>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(/*^block*/id)action;
-(id)title;
-(unsigned long long)priority;
-(id)sortDate;
-(id)message;
-(BOOL)shouldPlayLightsAndSirens;
-(BOOL)inertWhenLocked;
-(id)actionWithIdentifier:(id)arg1 ;
-(id)sound;
-(BOOL)isCritical;
-(id)subActions;
-(BOOL)overridesQuietMode;
-(BOOL)overridesPocketMode;
-(BOOL)isSticky;
-(BOOL)canShowInAssistant;
-(BOOL)canShowWhileLocked;
-(id)pullDownNotification;
-(BOOL)shouldShowModalSubActions;
-(id)subActionLabels;
-(BOOL)hasSubActions;
-(id)defaultActionWithContext:(id)arg1 ;
-(id)lockScreenActionContextWithContext:(id)arg1 ;
@end

