/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:02 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WelcomeKit/WLDaemonController.h>

@protocol WLDeviceAuthenticatorProtocol, WLDeviceAuthenticationDelegate;
@class WLSourceDevice;

@interface WLDeviceAuthenticationController : WLDaemonController {

	id<WLDeviceAuthenticatorProtocol> _authenticator;
	WLSourceDevice* _device;
	id<WLDeviceAuthenticationDelegate> _delegate;

}

@property (nonatomic,readonly) WLSourceDevice * device;                                         //@synthesize device=_device - In the implementation block
@property (nonatomic,__weak,readonly) id<WLDeviceAuthenticationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WLDeviceAuthenticationDelegate>)delegate;
-(WLSourceDevice *)device;
-(void)cancelAuthentication;
-(void)authenticate;
-(id)initWithSourceDevice:(id)arg1 delegate:(id)arg2 ;
@end

