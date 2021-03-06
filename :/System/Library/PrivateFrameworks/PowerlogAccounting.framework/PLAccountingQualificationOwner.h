/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogAccounting/PLAccountingOwner.h>

@class PLAccountingEnergyEstimateEventEntry;

@interface PLAccountingQualificationOwner : PLAccountingOwner {

	PLAccountingEnergyEstimateEventEntry* _energyEstimate;

}

@property (__weak) id<PLAccountingQualificationOwnerManager> manager; 
@property (retain) PLAccountingEnergyEstimateEventEntry * energyEstimate;              //@synthesize energyEstimate=_energyEstimate - In the implementation block
-(void)run;
-(id)range;
-(id)ID;
-(id)activationDate;
-(id)initWithEnergyEstimate:(id)arg1 ;
-(void)setRunDate:(id)arg1 ;
-(PLAccountingEnergyEstimateEventEntry *)energyEstimate;
-(void)qualify;
-(void)setEnergyEstimate:(PLAccountingEnergyEstimateEventEntry *)arg1 ;
@end

