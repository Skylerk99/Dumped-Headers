/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:12 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BluetoothManager/BluetoothManager-Structs.h>
@class NSMutableDictionary;

@interface BluetoothManager : NSObject {

	BTLocalDeviceImplRef _localDevice;
	BTSessionImplRef _session;
	int _available;
	BOOL _audioConnected;
	BOOL _scanningEnabled;
	BOOL _scanningInProgress;
	unsigned _scanningServiceMask;
	BTDiscoveryAgentImplRef _discoveryAgent;
	BTPairingAgentImplRef _pairingAgent;
	BTAccessoryManagerImplRef _accessoryManager;
	NSMutableDictionary* _btAddrDict;
	NSMutableDictionary* _btDeviceDict;

}
+(id)sharedInstance;
+(int)lastInitError;
+(void)setSharedInstanceQueue:(id)arg1 ;
-(long long)localDeviceSupportsService:(unsigned)arg1 ;
-(BTAccessoryManagerImplRef)_accessoryManager;
-(void)setDevicePairingEnabled:(BOOL)arg1 ;
-(void)setDeviceScanningEnabled:(BOOL)arg1 ;
-(void)resetDeviceScanning;
-(void)showPowerPrompt;
-(id)pairedDevices;
-(BOOL)isServiceSupported:(unsigned)arg1 ;
-(void)scanForConnectableDevices:(unsigned)arg1 ;
-(void)scanForServices:(unsigned)arg1 ;
-(void)cancelPairing;
-(BOOL)enabled;
-(void)dealloc;
-(id)init;
-(void)postNotificationName:(id)arg1 object:(id)arg2 ;
-(BOOL)setEnabled:(BOOL)arg1 ;
-(void)postNotification:(id)arg1 ;
-(void)_powerChanged;
-(BOOL)wasDeviceDiscovered:(id)arg1 ;
-(void)_removeDevice:(id)arg1 ;
-(id)connectingDevices;
-(void)acceptSSP:(long long)arg1 forDevice:(id)arg2 ;
-(void)setConnectable:(BOOL)arg1 ;
-(void)disconnectDevice:(id)arg1 ;
-(BOOL)_setup:(BTSessionImplRef)arg1 ;
-(BOOL)powered;
-(void)connectDevice:(id)arg1 ;
-(void)connectDevice:(id)arg1 withServices:(unsigned)arg2 ;
-(void)setPincode:(id)arg1 forDevice:(id)arg2 ;
-(void)unpairDevice:(id)arg1 ;
-(void)startVoiceCommand:(id)arg1 ;
-(BOOL)_attach:(id)arg1 ;
-(void)_cleanup:(BOOL)arg1 ;
-(void)_postNotificationWithArray:(id)arg1 ;
-(void)_scanForServices:(unsigned)arg1 withMode:(int)arg2 ;
-(BOOL)devicePairingEnabled;
-(id)addDeviceIfNeeded:(BTDeviceImplRef)arg1 ;
-(BOOL)_onlySensorsConnected;
-(void)postNotificationName:(id)arg1 object:(id)arg2 error:(id)arg3 ;
-(BOOL)isAnyoneScanning;
-(BOOL)isAnyoneAdvertising;
-(BOOL)deviceScanningEnabled;
-(BOOL)deviceScanningInProgress;
-(void)_restartScan;
-(void)_setScanState:(int)arg1 ;
-(void)_discoveryStateChanged;
-(void)_advertisingChanged;
-(BOOL)connectable;
-(void)_connectedStatusChanged;
-(void)_connectabilityChanged;
-(BOOL)audioConnected;
-(void)setAudioConnected:(BOOL)arg1 ;
-(void)enableTestMode;
-(void)setDiscoverable:(BOOL)arg1 ;
-(id)localAddress;
-(BOOL)setPowered:(BOOL)arg1 ;
-(void)_postNotification:(id)arg1 ;
-(id)connectedDevices;
-(BOOL)isDiscoverable;
-(void)endVoiceCommand:(id)arg1 ;
-(BOOL)connected;
-(BOOL)available;
-(int)powerState;
@end

