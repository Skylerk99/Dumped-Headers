/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray, ABLECoreDuetController;

@interface ABLEPredictabilityController : NSObject {

	BOOL _approximateMissingData;
	NSDictionary* _currentData;
	NSArray* _dayOffsets;
	double _rejectionThresholdForMissingData;
	ABLECoreDuetController* _coreDuetController;

}

@property (retain) NSDictionary * currentData;                                 //@synthesize currentData=_currentData - In the implementation block
@property (assign) BOOL approximateMissingData;                                //@synthesize approximateMissingData=_approximateMissingData - In the implementation block
@property (retain) NSArray * dayOffsets;                                       //@synthesize dayOffsets=_dayOffsets - In the implementation block
@property (assign) double rejectionThresholdForMissingData;                    //@synthesize rejectionThresholdForMissingData=_rejectionThresholdForMissingData - In the implementation block
@property (readonly) ABLECoreDuetController * coreDuetController;              //@synthesize coreDuetController=_coreDuetController - In the implementation block
-(id)initWithCoreDuetController:(id)arg1 ;
-(void)setRejectionThresholdForMissingData:(double)arg1 ;
-(void)setDayOffsets:(NSArray *)arg1 ;
-(id)calculateCorrelationForDay:(id)arg1 andDayOffsets:(id)arg2 ;
-(void)setApproximateMissingData:(BOOL)arg1 ;
-(void)setCurrentData:(NSDictionary *)arg1 ;
-(NSArray *)dayOffsets;
-(ABLECoreDuetController *)coreDuetController;
-(NSDictionary *)currentData;
-(id)calculateCorrelationForYesterdayAndDayOffsets:(id)arg1 ;
-(double)rejectionThresholdForMissingData;
-(BOOL)approximateMissingData;
-(id)calculateCorrelationForDefaultDayOffsets;
-(double)calculateCorrelationForOneDay;
@end

