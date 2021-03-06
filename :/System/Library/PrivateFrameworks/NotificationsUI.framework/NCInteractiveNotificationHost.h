/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:32 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NCViewServiceDescriptor;


@protocol NCInteractiveNotificationHost <NSObject>
@property (assign,nonatomic) id<NCInteractiveNotificationHostDelegate> delegate; 
@property (nonatomic,readonly) BOOL showsKeyboard; 
@property (nonatomic,readonly) double bottomOverhangHeight; 
@property (assign,getter=isModal,nonatomic) BOOL modal; 
@property (assign,nonatomic) double maximumHeight; 
@property (nonatomic,retain,readonly) NCViewServiceDescriptor * inlayViewService; 
@property (nonatomic,retain,readonly) NCViewServiceDescriptor * accessoryViewService; 
@optional
-(void)disconnect;

@required
-(void)setModal:(BOOL)arg1;
-(BOOL)isModal;
-(void)setMaximumHeight:(double)arg1;
-(double)maximumHeight;
-(void)setDelegate:(id)arg1;
-(id<NCInteractiveNotificationHostDelegate>)delegate;
-(BOOL)showsKeyboard;
-(void)handleActionAtIndex:(long long)arg1;
-(double)bottomOverhangHeight;
-(NCViewServiceDescriptor *)inlayViewService;
-(NCViewServiceDescriptor *)accessoryViewService;
-(void)interactiveNotificationDidAppear;
-(void)didChangeRevealPercent:(double)arg1;
-(void)handleActionIdentifier:(id)arg1;
-(void)willPresentFromActionIdentifier:(id)arg1;
-(void)getActionContextWithCompletion:(/*^block*/id)arg1;

@end

