/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:09 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLCoreOperator.h>

@class NSMutableDictionary;

@interface PLCoreService : PLCoreOperator {

	NSMutableDictionary* _services;

}

@property (retain) NSMutableDictionary * services;              //@synthesize services=_services - In the implementation block
-(id)init;
-(NSMutableDictionary *)services;
-(void)setServices:(NSMutableDictionary *)arg1 ;
-(void)startServices;
-(void)stopServices;
@end

