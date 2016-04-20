/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogAccounting/PLAccountingDependency.h>

@class PLAccountingEnergyEventEntry;

@interface PLAccountingCorrectionDependency : PLAccountingDependency {

	PLAccountingEnergyEventEntry* _energyEvent;

}

@property (retain) PLAccountingEnergyEventEntry * energyEvent;              //@synthesize energyEvent=_energyEvent - In the implementation block
-(id)range;
-(id)ID;
-(id)activationDate;
-(PLAccountingEnergyEventEntry *)energyEvent;
-(id)initWithEnergyEvent:(id)arg1 ;
-(void)setEnergyEvent:(PLAccountingEnergyEventEntry *)arg1 ;
@end

