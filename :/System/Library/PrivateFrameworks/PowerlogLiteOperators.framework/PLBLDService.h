/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:10 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PLBatteryBreakdownService.h>

@class PLXPCResponderOperatorComposition;

@interface PLBLDService : PLBatteryBreakdownService {

	PLXPCResponderOperatorComposition* _batteryBreakdownResponder;
	PLXPCResponderOperatorComposition* _logBUIResultsResponder;

}

@property (retain) PLXPCResponderOperatorComposition * batteryBreakdownResponder;              //@synthesize batteryBreakdownResponder=_batteryBreakdownResponder - In the implementation block
@property (retain) PLXPCResponderOperatorComposition * logBUIResultsResponder;                 //@synthesize logBUIResultsResponder=_logBUIResultsResponder - In the implementation block
+(void)load;
+(id)entryEventPointBLD;
+(id)entryEventPointDefinitions;
-(id)init;
-(void)initOperatorDependancies;
-(id)batteryBreakdownWithPayload:(id)arg1 ;
-(void)setBatteryBreakdownResponder:(PLXPCResponderOperatorComposition *)arg1 ;
-(id)bldEntryWithBatteryBreakdown:(id)arg1 ;
-(PLXPCResponderOperatorComposition *)batteryBreakdownResponder;
-(PLXPCResponderOperatorComposition *)logBUIResultsResponder;
-(void)setLogBUIResultsResponder:(PLXPCResponderOperatorComposition *)arg1 ;
@end

