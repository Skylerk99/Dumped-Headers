/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:09 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKitUI/AKAppleIDAuthenticationInAppContext.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>

@class NSString, RUIStyle;

@interface AKAppleIDAuthenticationWatchBuddyContext : AKAppleIDAuthenticationInAppContext <RemoteUIControllerDelegate> {

	NSString* _password;
	RUIStyle* _remoteUIStyle;

}

@property (nonatomic,retain) NSString * password;                   //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) RUIStyle * remoteUIStyle;              //@synthesize remoteUIStyle=_remoteUIStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)presentBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(RUIStyle *)remoteUIStyle;
-(void)didReceiveObjectModel:(id)arg1 ;
-(void)willPresentModalNavigationController:(id)arg1 ;
-(void)setRemoteUIStyle:(RUIStyle *)arg1 ;
@end

