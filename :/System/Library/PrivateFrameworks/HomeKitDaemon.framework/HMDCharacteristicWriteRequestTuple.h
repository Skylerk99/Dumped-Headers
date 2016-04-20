/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:33 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMDCharacteristic;

@interface HMDCharacteristicWriteRequestTuple : NSObject {

	HMDCharacteristic* _characteristic;
	id _value;

}

@property (nonatomic,readonly) HMDCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,readonly) id value;                                        //@synthesize value=_value - In the implementation block
+(id)tupleWithCharacteristic:(id)arg1 value:(id)arg2 ;
-(id)description;
-(id)value;
-(HMDCharacteristic *)characteristic;
@end

