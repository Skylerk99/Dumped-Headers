/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogAccounting/PLAccountingEventEntry.h>

@class NSNumber;

@interface PLAccountingPowerEventEntry : PLAccountingEventEntry

@property (nonatomic,readonly) NSNumber * rootNodeID; 
@property (nonatomic,readonly) double power; 
+(void)load;
+(double)minPowerDifference;
+(double)minPowerPercentageDifference;
-(int)instanceDirectionality;
-(BOOL)isEqualContentsWithEvent:(id)arg1 ;
-(BOOL)isEmptyEvent;
-(id)initWithRootNodeID:(id)arg1 withPower:(double)arg2 withRange:(id)arg3 ;
-(double)power;
-(NSNumber *)rootNodeID;
-(id)subEntryKey;
@end

