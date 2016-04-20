/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLEntry.h>

@class PLAccountingRange, NSNumber;

@interface PLAccountingEnergyEventEntry : PLEntry {

	PLAccountingRange* _range;

}

@property (nonatomic,readonly) NSNumber * nodeID; 
@property (nonatomic,readonly) double energy; 
@property (nonatomic,readonly) PLAccountingRange * range;              //@synthesize range=_range - In the implementation block
+(void)load;
+(id)entryKey;
-(PLAccountingRange *)range;
-(id)initWithNodeID:(id)arg1 withEnergy:(double)arg2 withRange:(id)arg3 withEntryDate:(id)arg4 ;
-(double)energy;
-(NSNumber *)nodeID;
@end

