/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:10 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/PlugIns/CoreRCHIDService.plugin/CoreRCHIDService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRCHIDService/CoreRCHIDService-Structs.h>
#import <CoreRCHIDService/CoreRCBusDelegate.h>
#import <CoreRCHIDService/CoreRCManagerDelegate.h>
#import <CoreRCHIDService/IIOCFPlugInDelegate.h>
#import <CoreRCHIDService/IIOHIDService2Delegate.h>

@class NSMutableSet, CoreRCManager, NSString;

@interface CoreRCHIDService : NSObject <CoreRCBusDelegate, CoreRCManagerDelegate, IIOCFPlugInDelegate, IIOHIDService2Delegate> {

	IUnknown* _ioPlugInInterface;
	IUnknown* _hidServiceInterface2;
	CFUUIDRef _factoryID;
	/*function pointer*/void* _eventCallback;
	void* _eventTarget;
	void* _eventContext;
	NSMutableSet* _monitoredBuses;
	NSMutableSet* _monitoredDevices;
	CoreRCManager* _manager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CoreRCManager * manager;              //@synthesize manager=_manager - In the implementation block
-(void)bus:(id)arg1 deviceHasBeenAdded:(id)arg2 ;
-(void)bus:(id)arg1 deviceHasBeenRemoved:(id)arg2 ;
-(void)device:(id)arg1 receivedHIDEvent:(id)arg2 fromDevice:(id)arg3 ;
-(void)manager:(id)arg1 hasAdded:(id)arg2 ;
-(void)manager:(id)arg1 hasRemoved:(id)arg2 ;
-(void)dispatchHIDEvent:(IOHIDEventRef)arg1 options:(unsigned)arg2 ;
-(IUnknown*)interfaceWithID:(CFUUIDRef)arg1 ;
-(int)startWithIOService:(unsigned)arg1 propertyTable:(id)arg2 ;
-(BOOL)fakeHIDWithCommand:(id)arg1 ;
-(int)probeIOService:(unsigned)arg1 propertyTable:(id)arg2 order:(int*)arg3 ;
-(id)copyIOHIDServicePropertyForKey:(id)arg1 ;
-(BOOL)setIOHIDServicePropertyForKey:(id)arg1 withValue:(id)arg2 ;
-(void)setIOHIDServiceEventCallback:(/*function pointer*/void*)arg1 target:(void*)arg2 context:(void*)arg3 ;
-(CoreRCManager *)manager;
-(void)addDevice:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(int)stop;
-(void)scheduleWithDispatchQueue:(id)arg1 ;
-(void)addBus:(id)arg1 ;
-(void)removeBus:(id)arg1 ;
-(void)unscheduleFromDispatchQueue:(id)arg1 ;
-(void)removeDevice:(id)arg1 ;
@end

