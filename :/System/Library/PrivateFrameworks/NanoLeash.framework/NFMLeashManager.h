/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMIDIBluetoothDriver/CBCentralManagerDelegate.h>
#import <AppleMIDIBluetoothDriver/CBPeripheralDelegate.h>
#import <libobjc.A.dylib/CBScalablePipeManagerDelegate.h>

@protocol OS_dispatch_queue, NFMLLeashBreakDelegate, OS_dispatch_source;
@class NSObject, NSString, CBScalablePipeManager, CBScalablePipe, CBCentralManager, CBPeripheral;

@interface NFMLeashManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate, CBScalablePipeManagerDelegate> {

	/*^block*/id _proximityChangeHandler;
	NSObject*<OS_dispatch_queue> _centralQueue;
	BOOL _testMode;
	BOOL _connected;
	BOOL _needsToScanForPeripheral;
	long long _leashMode;
	NSString* _serviceUUID;
	NSString* _leashIdentifier;
	CBScalablePipeManager* _pipeManager;
	CBScalablePipe* _pipe;
	CBCentralManager* _centralManager;
	CBPeripheral* _peripheral;
	CBPeripheral* _discoveredPeripheral;
	long long _centralPhase;
	id<NFMLLeashBreakDelegate> _leashDelegate;
	NSObject*<OS_dispatch_source> _leashDispatchSourceTimer;
	NSObject*<OS_dispatch_queue> _externalQueue;

}

@property (assign,nonatomic) long long leashMode;                                                 //@synthesize leashMode=_leashMode - In the implementation block
@property (nonatomic,copy) NSString * serviceUUID;                                                //@synthesize serviceUUID=_serviceUUID - In the implementation block
@property (nonatomic,copy) NSString * leashIdentifier;                                            //@synthesize leashIdentifier=_leashIdentifier - In the implementation block
@property (assign,nonatomic) BOOL testMode;                                                       //@synthesize testMode=_testMode - In the implementation block
@property (assign,nonatomic) BOOL connected;                                                      //@synthesize connected=_connected - In the implementation block
@property (nonatomic,retain) CBScalablePipeManager * pipeManager;                                 //@synthesize pipeManager=_pipeManager - In the implementation block
@property (nonatomic,retain) CBScalablePipe * pipe;                                               //@synthesize pipe=_pipe - In the implementation block
@property (nonatomic,retain) CBCentralManager * centralManager;                                   //@synthesize centralManager=_centralManager - In the implementation block
@property (nonatomic,retain) CBPeripheral * peripheral;                                           //@synthesize peripheral=_peripheral - In the implementation block
@property (nonatomic,retain) CBPeripheral * discoveredPeripheral;                                 //@synthesize discoveredPeripheral=_discoveredPeripheral - In the implementation block
@property (assign,nonatomic) long long centralPhase;                                              //@synthesize centralPhase=_centralPhase - In the implementation block
@property (assign,nonatomic) BOOL needsToScanForPeripheral;                                       //@synthesize needsToScanForPeripheral=_needsToScanForPeripheral - In the implementation block
@property (assign,nonatomic,__weak) id<NFMLLeashBreakDelegate> leashDelegate;                     //@synthesize leashDelegate=_leashDelegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> leashDispatchSourceTimer;              //@synthesize leashDispatchSourceTimer=_leashDispatchSourceTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> externalQueue;                          //@synthesize externalQueue=_externalQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scalablePipeManagerDidUpdateState:(id)arg1 ;
-(void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3 ;
-(void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2 ;
-(void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2 ;
-(void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3 ;
-(CBScalablePipe *)pipe;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)update:(id)arg1 ;
-(void)connect;
-(CBCentralManager *)centralManager;
-(void)setCentralManager:(CBCentralManager *)arg1 ;
-(CBPeripheral *)peripheral;
-(void)peripheralDidUpdateRSSI:(id)arg1 error:(id)arg2 ;
-(void)setPeripheral:(CBPeripheral *)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)leashTest;
-(void)setLeashMode:(long long)arg1 ;
-(void)setLeashIdentifier:(NSString *)arg1 ;
-(void)beginMonitoringLeash;
-(void)stopMonitoringLeash;
-(void)setProximityChangeHandler:(/*^block*/id)arg1 ;
-(void)setTestMode:(BOOL)arg1 ;
-(long long)leashMode;
-(NSString *)leashIdentifier;
-(BOOL)testMode;
-(CBScalablePipeManager *)pipeManager;
-(void)setPipeManager:(CBScalablePipeManager *)arg1 ;
-(void)setPipe:(CBScalablePipe *)arg1 ;
-(CBPeripheral *)discoveredPeripheral;
-(void)setDiscoveredPeripheral:(CBPeripheral *)arg1 ;
-(long long)centralPhase;
-(void)setCentralPhase:(long long)arg1 ;
-(BOOL)needsToScanForPeripheral;
-(void)setNeedsToScanForPeripheral:(BOOL)arg1 ;
-(id<NFMLLeashBreakDelegate>)leashDelegate;
-(void)setLeashDelegate:(id<NFMLLeashBreakDelegate>)arg1 ;
-(NSObject*<OS_dispatch_source>)leashDispatchSourceTimer;
-(void)setLeashDispatchSourceTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_queue>)externalQueue;
-(void)setExternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setConnected:(BOOL)arg1 ;
-(BOOL)connected;
-(void)setServiceUUID:(NSString *)arg1 ;
-(NSString *)serviceUUID;
@end

