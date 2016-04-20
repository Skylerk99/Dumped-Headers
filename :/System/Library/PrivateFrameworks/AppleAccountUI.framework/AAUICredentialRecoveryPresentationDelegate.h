/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:04 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AAUICredentialRecoveryPresentationDelegate
@optional
-(id)navigationItemToShowInitialLoadingForCredentialRecoveryController:(id)arg1;
-(id)navigationControllerForPresentationWithCredentialRecoveryController:(id)arg1;

@required
-(void)credentialRecoveryController:(id)arg1 didFailWithError:(id)arg2;
-(void)credentialRecoveryController:(id)arg1 finishedWithSuccess:(BOOL)arg2;
-(void)credentialRecoveryController:(id)arg1 needsPresentationOfViewController:(id)arg2;

@end

