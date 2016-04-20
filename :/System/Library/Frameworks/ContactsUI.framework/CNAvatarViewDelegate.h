/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNAvatarViewDelegate <NSObject>
@optional
-(BOOL)shouldShowActionsForAvatarView:(id)arg1;
-(id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
-(void)avatarView:(id)arg1 willShowActions:(id)arg2;
-(BOOL)avatarView:(id)arg1 shouldShowContact:(id)arg2;
-(void)willDismissActionsForAvatarView:(id)arg1;
-(void)didDismissActionsForAvatarView:(id)arg1;

@required
-(id)presentingViewControllerForAvatarView:(id)arg1;

@end

