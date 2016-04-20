/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:56 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATFoundation/ATMessageLinkListener.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface ATLockdownListener : ATMessageLinkListener {

	NSObject*<OS_xpc_object> _connection;
	NSString* _serviceName;

}

@property (nonatomic,copy,readonly) NSString * serviceName;              //@synthesize serviceName=_serviceName - In the implementation block
-(NSString *)serviceName;
-(void)stop;
-(BOOL)start;
-(id)initWithServiceName:(id)arg1 ;
-(void)_handleNewConnection:(id)arg1 ;
@end

