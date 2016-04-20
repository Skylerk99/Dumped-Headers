/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ABLE/ABLEModelController.h>

@class NSDate, NSArray, ABLECoreDuetController, ABLEPredictabilityController, ABLEPredictionController, ABLEBONPrediction;

@interface ABLEPredictionModelController : ABLEModelController {

	BOOL valid;
	BOOL expires;
	BOOL enabled;
	BOOL _softLanding;
	NSDate* expiryDate;
	double lifetime;
	NSArray* dayOffsets;
	double predictabilityOffset;
	unsigned long long _currentBON;
	ABLECoreDuetController* _coreDuetController;
	ABLEPredictabilityController* _predictabilityController;
	ABLEPredictionController* _predictionController;
	double _minimumValidCorrelation;
	NSArray* _predictionVector;
	NSArray* _adjustedPredictionVector;
	NSArray* _predictionPriorDayVector;
	NSArray* _adjustedPredictionPriorDayVector;
	NSArray* _todayActualVector;
	NSDate* _priorDay;
	double _samplePeriod;
	NSArray* _priorDayActualVector;
	NSDate* _predictionDate;
	double _rsquaredForPriorDay;
	ABLEBONPrediction* _bonMap;
	double _minimumRSquared;
	double _softLandingDecayRate;
	double _softLandingMinimum;
	double _softLandingMaximum;

}

@property (retain) NSArray * dayOffsets; 
@property (readonly) unsigned long long currentBON;                                      //@synthesize currentBON=_currentBON - In the implementation block
@property (readonly) double lifetime; 
@property (readonly) ABLECoreDuetController * coreDuetController;                        //@synthesize coreDuetController=_coreDuetController - In the implementation block
@property (retain) ABLEPredictabilityController * predictabilityController;              //@synthesize predictabilityController=_predictabilityController - In the implementation block
@property (retain) ABLEPredictionController * predictionController;                      //@synthesize predictionController=_predictionController - In the implementation block
@property (assign) double minimumValidCorrelation;                                       //@synthesize minimumValidCorrelation=_minimumValidCorrelation - In the implementation block
@property (retain) NSArray * predictionVector;                                           //@synthesize predictionVector=_predictionVector - In the implementation block
@property (retain) NSArray * adjustedPredictionVector;                                   //@synthesize adjustedPredictionVector=_adjustedPredictionVector - In the implementation block
@property (retain) NSArray * predictionPriorDayVector;                                   //@synthesize predictionPriorDayVector=_predictionPriorDayVector - In the implementation block
@property (retain) NSArray * adjustedPredictionPriorDayVector;                           //@synthesize adjustedPredictionPriorDayVector=_adjustedPredictionPriorDayVector - In the implementation block
@property (retain) NSArray * todayActualVector;                                          //@synthesize todayActualVector=_todayActualVector - In the implementation block
@property (retain) NSDate * priorDay;                                                    //@synthesize priorDay=_priorDay - In the implementation block
@property (assign) double samplePeriod;                                                  //@synthesize samplePeriod=_samplePeriod - In the implementation block
@property (retain) NSArray * priorDayActualVector;                                       //@synthesize priorDayActualVector=_priorDayActualVector - In the implementation block
@property (retain) NSDate * predictionDate;                                              //@synthesize predictionDate=_predictionDate - In the implementation block
@property (assign) double rsquaredForPriorDay;                                           //@synthesize rsquaredForPriorDay=_rsquaredForPriorDay - In the implementation block
@property (readonly) ABLEBONPrediction * bonMap;                                         //@synthesize bonMap=_bonMap - In the implementation block
@property (assign) double minimumRSquared;                                               //@synthesize minimumRSquared=_minimumRSquared - In the implementation block
@property (assign) BOOL softLanding;                                                     //@synthesize softLanding=_softLanding - In the implementation block
@property (assign) double softLandingDecayRate;                                          //@synthesize softLandingDecayRate=_softLandingDecayRate - In the implementation block
@property (assign) double softLandingMinimum;                                            //@synthesize softLandingMinimum=_softLandingMinimum - In the implementation block
@property (assign) double softLandingMaximum;                                            //@synthesize softLandingMaximum=_softLandingMaximum - In the implementation block
@property (assign) BOOL enabled; 
@property (assign) double predictabilityOffset; 
+(id)predictionVectorWithSession:(id)arg1 date:(id)arg2 config:(id)arg3 ;
+(id)defaultConfiguration;
-(id)initWithCoreDuetController:(id)arg1 ;
-(void)resetModel;
-(void)setMinimumRSquared:(double)arg1 ;
-(void)setMinimumValidCorrelation:(double)arg1 ;
-(ABLEPredictabilityController *)predictabilityController;
-(ABLEPredictionController *)predictionController;
-(void)setDayOffsets:(NSArray *)arg1 ;
-(void)setPredictabilityOffset:(double)arg1 ;
-(NSArray *)dayOffsets;
-(double)predictabilityOffset;
-(double)minimumValidCorrelation;
-(void)setPriorDay:(NSDate *)arg1 ;
-(void)setSamplePeriod:(double)arg1 ;
-(void)setPredictionPriorDayVector:(NSArray *)arg1 ;
-(NSArray *)predictionPriorDayVector;
-(void)setAdjustedPredictionPriorDayVector:(NSArray *)arg1 ;
-(ABLECoreDuetController *)coreDuetController;
-(void)setTodayActualVector:(NSArray *)arg1 ;
-(void)setPriorDayActualVector:(NSArray *)arg1 ;
-(void)setRsquaredForPriorDay:(double)arg1 ;
-(void)setPredictionVector:(NSArray *)arg1 ;
-(NSArray *)predictionVector;
-(void)setAdjustedPredictionVector:(NSArray *)arg1 ;
-(void)setPredictionDate:(NSDate *)arg1 ;
-(NSArray *)adjustedPredictionVector;
-(double)rsquaredForPriorDay;
-(double)minimumRSquared;
-(void)createPredictionForDateRaw:(id)arg1 ;
-(NSDate *)predictionDate;
-(double)getPredictionFromExistingPredictionForDate:(id)arg1 ;
-(ABLEBONPrediction *)bonMap;
-(BOOL)existsDataForPredictionUsingDay:(id)arg1 andOffsetDays:(id)arg2 ;
-(unsigned long long)currentBON;
-(NSDate *)priorDay;
-(double)samplePeriod;
-(NSArray *)priorDayActualVector;
-(NSArray *)todayActualVector;
-(NSArray *)adjustedPredictionPriorDayVector;
-(void)significantEventAtDate:(id)arg1 ;
-(void)calculateBONForCurrentLevel:(float)arg1 andChargeState:(BOOL)arg2 atDate:(id)arg3 onQueue:(id)arg4 usingHandler:(/*^block*/id)arg5 ;
-(BOOL)existsDataForPredictionUsingDefaultOffsetsAndDay:(id)arg1 ;
-(void)setPredictabilityController:(ABLEPredictabilityController *)arg1 ;
-(void)setPredictionController:(ABLEPredictionController *)arg1 ;
-(BOOL)softLanding;
-(void)setSoftLanding:(BOOL)arg1 ;
-(double)softLandingDecayRate;
-(void)setSoftLandingDecayRate:(double)arg1 ;
-(double)softLandingMinimum;
-(void)setSoftLandingMinimum:(double)arg1 ;
-(double)softLandingMaximum;
-(void)setSoftLandingMaximum:(double)arg1 ;
-(void)updateConfiguration:(id)arg1 ;
-(id)expiryDate;
-(BOOL)enabled;
-(id)currentState;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)valid;
-(void)setValid:(BOOL)arg1 ;
-(BOOL)expires;
-(double)lifetime;
@end

