/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AKAppleIDAuthenticationLimitedUIProvider <NSObject>
@required
-(void)presentBasicLoginUIWithCompletion:(/*^block*/id)arg1;
-(void)dismissBasicLoginUIWithCompletion:(/*^block*/id)arg1;
-(void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4;
-(void)presentSecondFactorUIWithCompletion:(/*^block*/id)arg1;
-(void)dismissSecondFactorUIWithCompletion:(/*^block*/id)arg1;
-(void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4;

@end

