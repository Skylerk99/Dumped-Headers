/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:34 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/PlugIns/ExternalAccessoryWACUIBits.bundle/ExternalAccessoryWACUIBits
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WACUIHostProtocol <NSObject>
@required
-(void)_signalPresentationComplete;
-(void)dismissWithStatus:(int)arg1;
-(void)backendFoundNewWACDevices:(id)arg1 andRemovedWACDevices:(id)arg2;
-(void)backendDidStopSearchWithError:(id)arg1;
-(void)backendDidStartSearchWithError:(id)arg1;
-(void)wifiDidShutdown;
-(void)updateState:(long long)arg1;

@end

