/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:13 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject, UIInputViewAnimationController;
@class UIInputViewSetPlacement, UIInputViewAnimationStyle, UIInputViewSetNotificationInfo;

@interface UIInputViewPlacementTransition : NSObject {

	BOOL cancelled;
	int animationState;
	UIInputViewSetPlacement* fromPlacement;
	UIInputViewSetPlacement* toPlacement;
	UIInputViewAnimationStyle* animationStyle;
	UIInputViewSetNotificationInfo* notificationInfo;
	unsigned long long notifications;
	id<NSObject> animationContext;
	id<UIInputViewAnimationController> animationController;

}

@property (nonatomic,retain) UIInputViewSetPlacement * fromPlacement; 
@property (nonatomic,retain) UIInputViewSetPlacement * toPlacement; 
@property (nonatomic,retain) UIInputViewAnimationStyle * animationStyle; 
@property (nonatomic,retain) UIInputViewSetNotificationInfo * notificationInfo; 
@property (assign,nonatomic) unsigned long long notifications; 
@property (assign,nonatomic) int animationState; 
@property (nonatomic,retain) id<UIInputViewAnimationController> animationController; 
@property (nonatomic,retain) id<NSObject> animationContext; 
@property (assign,nonatomic) BOOL cancelled; 
+(id)transitionFromPlacement:(id)arg1 toPlacement:(id)arg2 withAnimationStyle:(id)arg3 ;
-(void)dealloc;
-(void)setAnimationController:(id<UIInputViewAnimationController>)arg1 ;
-(id<UIInputViewAnimationController>)animationController;
-(BOOL)cancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(UIInputViewAnimationStyle *)animationStyle;
-(int)animationState;
-(void)setAnimationState:(int)arg1 ;
-(void)setAnimationStyle:(UIInputViewAnimationStyle *)arg1 ;
-(void)setFromPlacement:(UIInputViewSetPlacement *)arg1 ;
-(void)setToPlacement:(UIInputViewSetPlacement *)arg1 ;
-(UIInputViewSetPlacement *)fromPlacement;
-(UIInputViewSetPlacement *)toPlacement;
-(BOOL)didAdvanceAnimationToState:(int)arg1 ;
-(UIInputViewSetNotificationInfo *)notificationInfo;
-(void)setNotificationInfo:(UIInputViewSetNotificationInfo *)arg1 ;
-(unsigned long long)notifications;
-(void)setNotifications:(unsigned long long)arg1 ;
-(id<NSObject>)animationContext;
-(void)setAnimationContext:(id<NSObject>)arg1 ;
@end

