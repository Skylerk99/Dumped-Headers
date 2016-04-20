/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:26 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKContactlessInterfaceSessionDelegate <NSObject>
@optional
-(void)contactlessInterfaceSessionDidFailTransaction:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3;
-(void)contactlessInterfaceSessionDidTimeout:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 valueAddedServicePasses:(id)arg4;
-(void)contactlessInterfaceSessionDidFail:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 valueAddedServicePasses:(id)arg4;
-(void)contactlessInterfaceSession:(id)arg1 didGeneratePaymentTransaction:(id)arg2 forPaymentApplication:(id)arg3 paymentPass:(id)arg4 andValueAddedServiceTransactions:(id)arg5 forValueAddedServicePasses:(id)arg6;
-(void)contactlessInterfaceSession:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
-(void)contactlessInterfaceSessionDidEnterField:(id)arg1 withProperties:(id)arg2;
-(void)contactlessInterfaceSessionDidExitField:(id)arg1;
-(void)contactlessInterfaceSessionDidSelectPayment:(id)arg1;
-(void)contactlessInterfaceSessionDidSelectValueAddedService:(id)arg1;
-(void)contactlessInterfaceSessionDidEnterField:(id)arg1;

@end

