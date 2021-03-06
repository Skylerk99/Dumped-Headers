/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HAPMetadataTuple : NSObject {

	NSString* _characteristicName;
	NSString* _serviceName;

}

@property (nonatomic,readonly) NSString * characteristicName;              //@synthesize characteristicName=_characteristicName - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                     //@synthesize serviceName=_serviceName - In the implementation block
-(NSString *)serviceName;
-(id)initWithCharacteristic:(id)arg1 service:(id)arg2 ;
-(NSString *)characteristicName;
@end

