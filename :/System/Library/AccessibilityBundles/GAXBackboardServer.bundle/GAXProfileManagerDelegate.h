/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:35 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GAXProfileManagerDelegate <NSObject>
@required
-(id)profileManagerSessionAppID:(id)arg1;
-(void)didExitSingleAppModeWithProfileManager:(id)arg1;
-(void)didExitAppSelfLockModeWithProfileManager:(id)arg1;
-(void)didEnterAppSelfLockModeWithProfileManager:(id)arg1;
-(void)didEnterSingleAppModeWithProfileManager:(id)arg1;
-(void)appDidChangeForSingleAppModeWithProfileManager:(id)arg1;

@end

