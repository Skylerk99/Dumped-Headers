/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:10 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CoreRCManagerDelegate, OS_dispatch_queue;
#import <CoreRC/CoreRC-Structs.h>
@class NSObject, NSMutableSet, CoreIRLearningSession, NSSet;

@interface CoreRCManager : NSObject {

	id<CoreRCManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableSet* _busesInternal;
	CoreIRLearningSession* _learningSessionInternal;

}

@property (nonatomic,readonly) NSSet * buses; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                     //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) NSMutableSet * busesInternal;                                 //@synthesize busesInternal=_busesInternal - In the implementation block
@property (nonatomic,readonly) CoreIRLearningSession * learningSessionInternal;              //@synthesize learningSessionInternal=_learningSessionInternal - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(id)initWithSerialQueue:(id)arg1 ;
-(id)managedBusEquivalentTo:(id)arg1 ;
-(id)managedDeviceEquivalentTo:(id)arg1 ;
-(void)addBus:(id)arg1 ;
-(void)removeBus:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ofBus:(id)arg3 error:(id*)arg4 ;
-(id)propertyForKey:(id)arg1 ofBus:(id)arg2 error:(id*)arg3 ;
-(BOOL)setExtendedProperty:(id)arg1 forKey:(id)arg2 ofDevice:(id)arg3 error:(id*)arg4 ;
-(id)extendedPropertyForKey:(id)arg1 ofDevice:(id)arg2 error:(id*)arg3 ;
-(id)managedBusForDevice:(id)arg1 ;
-(BOOL)sendHIDEvent:(id)arg1 fromDevice:(id)arg2 toDevice:(id)arg3 error:(id*)arg4 ;
-(BOOL)sendCommand:(unsigned long long)arg1 fromDevice:(id)arg2 toDevice:(id)arg3 withDuration:(unsigned long long)arg4 error:(id*)arg5 ;
-(NSMutableSet *)busesInternal;
-(void)notifyDelegateAddBus:(id)arg1 ;
-(void)notifyDelegateRemoveBus:(id)arg1 ;
-(NSSet *)buses;
-(void)notifyDelegateUpdateBus:(id)arg1 ;
-(CoreIRLearningSession *)learningSessionInternal;
-(NSObject*<OS_dispatch_queue>)serialQueue;
@end

