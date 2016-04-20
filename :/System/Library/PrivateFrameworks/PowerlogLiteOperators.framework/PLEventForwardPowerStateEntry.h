/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:11 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLEntry.h>

@class NSArray;

@interface PLEventForwardPowerStateEntry : PLEntry

@property (readonly) short state; 
@property (readonly) short event; 
@property (readonly) NSArray * reason; 
@property (readonly) BOOL isBasebandWake; 
+(void)load;
+(id)entryKey;
-(short)state;
-(short)event;
-(NSArray *)reason;
-(id)initEntryWithState:(short)arg1 withEvent:(short)arg2 withReason:(id)arg3 withDate:(id)arg4 ;
-(id)initEntryWithIOMessage:(unsigned)arg1 ;
-(BOOL)isBasebandWake;
@end

