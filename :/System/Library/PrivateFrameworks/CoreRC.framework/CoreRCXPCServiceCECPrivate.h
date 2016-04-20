/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:10 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CoreRCXPCServiceCECPrivate
@required
-(void)fakeCreateCECBusAsync:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)fakeRemoveCECBusAsync:(id)arg1 reply:(/*^block*/id)arg2;
-(void)fakeSetCECBusLinkStateAsync:(id)arg1 linkState:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(void)fakeCreateRemoteCECDeviceAsync:(unsigned long long)arg1 bus:(id)arg2 logicalAddress:(unsigned char)arg3 physicalAddress:(unsigned long long)arg4 reply:(/*^block*/id)arg5;
-(void)fakeSetCECDeviceLogicalAddressAsync:(id)arg1 logicalAddress:(unsigned char)arg2 reply:(/*^block*/id)arg3;
-(void)fakeRemoveCECDeviceAsync:(id)arg1 reply:(/*^block*/id)arg2;

@end

