/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:17 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NotificationRelay : NSObject {

	BOOL _refreshManagers;

}

@property (assign,nonatomic) BOOL refreshManagers;              //@synthesize refreshManagers=_refreshManagers - In the implementation block
+(id)sharedRelay;
-(id)init;
-(void)relayFrameworkNotification:(id)arg1 ;
-(BOOL)refreshManagers;
-(void)refreshManagersForPreferences:(BOOL)arg1 localNotifications:(BOOL)arg2 ;
-(void)setRefreshManagers:(BOOL)arg1 ;
@end

