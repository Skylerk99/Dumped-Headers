/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iOSDiagnosticsSupport.framework/iOSDiagnosticsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NFContactlessPaymentSessionDelegate <NSObject>
@optional
-(void)contactlessPaymentSessionDidEndUnexpectedly:(id)arg1;
-(void)contactlessPaymentSession:(id)arg1 didDetectField:(BOOL)arg2;
-(void)contactlessPaymentSession:(id)arg1 didDetectTechnology:(id)arg2;
-(void)contactlessPaymentSession:(id)arg1 didSelectApplet:(id)arg2;
-(void)contactlessPaymentSession:(id)arg1 didStartTransaction:(id)arg2;
-(void)contactlessPaymentSession:(id)arg1 didEndTransaction:(id)arg2;
-(void)contactlessPaymentSession:(id)arg1 didReceiveButtonPressForApplet:(id)arg2;
-(void)contactlessPaymentSession:(id)arg1 didExpireTransactionForApplet:(id)arg2;

@end

