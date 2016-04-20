/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:53 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebApp.framework/WebApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebApp/WebApp-Structs.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, NSURL, NSString;

@interface WebApplication : UIApplication <UIApplicationDelegate> {

	NSURL* _lastActiveWebClipURL;
	id _webApp;
	BOOL _wasSuspendedUnderLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(BOOL)applicationSuspendWithSettings:(id)arg1 ;
-(void)applicationOpenURL:(id)arg1 ;
-(id)nameOfDefaultImageToUpdateAtSuspension;
-(BOOL)_shouldForceClassicMode;
-(id)nameOfDefaultImageToUpdateAtSuspension:(long long)arg1 ;
-(void)_showWebApplicationAtURL:(id)arg1 ;
@end

