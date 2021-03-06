/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogAccounting/PLAccountingOwner.h>

@class PLAccountingEnergyEstimateEventEntry;

@interface PLAccountingCorrectionOwner : PLAccountingOwner {

	PLAccountingEnergyEstimateEventEntry* _rootEnergyEstimate;

}

@property (__weak) id<PLAccountingCorrectionOwnerManager> manager; 
@property (retain) PLAccountingEnergyEstimateEventEntry * rootEnergyEstimate;              //@synthesize rootEnergyEstimate=_rootEnergyEstimate - In the implementation block
-(void)run;
-(id)range;
-(id)ID;
-(id)activationDate;
-(PLAccountingEnergyEstimateEventEntry *)rootEnergyEstimate;
-(void)correct;
-(id)initWithRootEnergyEstimate:(id)arg1 ;
-(void)setRunDate:(id)arg1 ;
-(void)setRootEnergyEstimate:(PLAccountingEnergyEstimateEventEntry *)arg1 ;
@end

