/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:17 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPaymentAuthorizationControllerDelegate <NSObject>
@optional
-(void)paymentAuthorizationControllerWillAuthorizePayment:(id)arg1;
-(void)paymentAuthorizationController:(id)arg1 didSelectShippingMethod:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentAuthorizationController:(id)arg1 didSelectShippingAddress:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentAuthorizationController:(id)arg1 didSelectPaymentMethod:(id)arg2 completion:(/*^block*/id)arg3;

@required
-(void)paymentAuthorizationControllerDidFinish:(id)arg1;
-(void)paymentAuthorizationController:(id)arg1 didAuthorizePayment:(id)arg2 completion:(/*^block*/id)arg3;

@end

