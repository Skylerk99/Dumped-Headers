/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:35 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BluetoothSettings/BTSDevice.h>

@class CBPeripheral, CBCentralManager;

@interface BTSDeviceLE : BTSDevice {

	CBPeripheral* _peripheral;
	CBCentralManager* _centralManager;
	BOOL healthDevice;

}
+(id)deviceWithPeripheral:(id)arg1 manager:(id)arg2 ;
-(BOOL)paired;
-(void)dealloc;
-(id)description;
-(id)name;
-(id)identifier;
-(BOOL)connect;
-(void)disconnect;
-(BOOL)isHealthDevice;
-(void)setHealthDevice:(BOOL)arg1 ;
-(BOOL)isMyDevice;
-(BOOL)cloudPaired;
-(void)unpair;
-(id)classicDevice;
-(id)initWithPeripheral:(id)arg1 manager:(id)arg2 ;
-(BOOL)connected;
@end

