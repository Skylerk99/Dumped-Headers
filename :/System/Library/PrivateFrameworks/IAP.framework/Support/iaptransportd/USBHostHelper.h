/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:37 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iaptransportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iaptransportd/iaptransportd-Structs.h>
@class NSThread;

@interface USBHostHelper : NSObject {

	NSThread* _runLoopThread;
	CIapPortUSBHost* _usbHostPort;

}

@property (assign,nonatomic) CIapPortUSBHost* usbHostPort;              //@synthesize usbHostPort=_usbHostPort - In the implementation block
-(CIapPortUSBHost*)usbHostPort;
-(void)setUsbHostPort:(CIapPortUSBHost*)arg1 ;
-(void)_run;
-(void)start;
@end

