/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:56 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/__SBIconControllerAccessibility_super.h>

@interface SBIconControllerAccessibility : __SBIconControllerAccessibility_super
+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)setIsEditing:(BOOL)arg1 ;
-(long long)_accessibilityIconListIndex;
-(void)_resetFolderSpringloadTimer;
-(void)_cancelFolderSpringloadTimer;
-(long long)_accessibilityIconListCount;
-(void)setRecipientIcon:(id)arg1 duration:(double)arg2 ;
-(void)setGrabbedIcon:(id)arg1 ;
-(void)_accessibilityIconMovedToPosition;
-(void)scrollToIconListAtIndex:(int)arg1 animate:(BOOL)arg2 ;
-(void)_accessibilityCancelSBAXIconMoveSpeakTimer;
-(void)_accessibilitySBAXIconFolderOpeningTimerFired;
-(void)noteGrabbedIconLocationChangedWithTouch:(id)arg1 ;
-(void)resetCurrentVisibleIconListImageVisibilityAndJitterState;
-(void)_animateFolder:(id)arg1 open:(BOOL)arg2 animated:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)createNewFolderFromRecipientIcon:(id)arg1 grabbedIcon:(id)arg2 ;
-(void)_closeFolderController:(id)arg1 animated:(BOOL)arg2 withCompletion:(id)arg3 ;
@end

