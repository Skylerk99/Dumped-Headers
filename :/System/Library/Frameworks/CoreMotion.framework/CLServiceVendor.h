/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CLServiceVendor : NSObject
+(BOOL)isServiceEnabled:(id)arg1 ;
+(BOOL)ensureServiceIsRunning:(id)arg1 ;
+(id)getSiloForService:(id)arg1 ;
+(id)proxyForService:(id)arg1 ;
+(void)rereadConfiguration;
+(BOOL)getKeyClass:(Class*)arg1 andSilo:(id*)arg2 forServiceWithName:(id)arg3 ;
+(id)getServiceWithName:(id)arg1 ;
+(void)retireServiceWithName:(id)arg1 ;
+(BOOL)isServiceRunning:(id)arg1 ;
+(id)proxyForService:(id)arg1 forClient:(id)arg2 ;
+(void)initialize;
@end

