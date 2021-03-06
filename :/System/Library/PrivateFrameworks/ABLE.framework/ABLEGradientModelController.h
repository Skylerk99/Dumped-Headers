/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ABLE/ABLEModelController.h>

@class NSDate, ABLECoreDuetController, ABLEGradient, NSDictionary, NSArray, NSMutableArray;

@interface ABLEGradientModelController : ABLEModelController {

	BOOL expires;
	BOOL enabled;
	float _lastGradient;
	float _lastShortGradient;
	double historyPeriodRequired;
	NSDate* expiryDate;
	double lifetime;
	double recurrence;
	unsigned long long _currentBON;
	unsigned long long _currentShortBON;
	ABLECoreDuetController* _coreDuetController;
	ABLEGradient* _gradient;
	NSDictionary* _configuration;
	NSArray* _lastData;
	NSMutableArray* _lastShortData;
	NSDate* _lastDate;

}

@property (assign) unsigned long long currentBON;                              //@synthesize currentBON=_currentBON - In the implementation block
@property (readonly) unsigned long long currentShortBON;                       //@synthesize currentShortBON=_currentShortBON - In the implementation block
@property (readonly) float lastGradient;                                       //@synthesize lastGradient=_lastGradient - In the implementation block
@property (readonly) float lastShortGradient;                                  //@synthesize lastShortGradient=_lastShortGradient - In the implementation block
@property (assign) double historyPeriodRequired; 
@property (retain) NSDate * expiryDate; 
@property (readonly) ABLECoreDuetController * coreDuetController;              //@synthesize coreDuetController=_coreDuetController - In the implementation block
@property (assign) BOOL enabled; 
@property (readonly) ABLEGradient * gradient;                                  //@synthesize gradient=_gradient - In the implementation block
@property (readonly) double lifetime; 
@property (readonly) double recurrence; 
@property (retain) NSDictionary * configuration;                               //@synthesize configuration=_configuration - In the implementation block
@property (retain) NSArray * lastData;                                         //@synthesize lastData=_lastData - In the implementation block
@property (retain) NSMutableArray * lastShortData;                             //@synthesize lastShortData=_lastShortData - In the implementation block
@property (retain) NSDate * lastDate;                                          //@synthesize lastDate=_lastDate - In the implementation block
-(id)initWithCoreDuetController:(id)arg1 ;
-(void)resetModel;
-(ABLECoreDuetController *)coreDuetController;
-(BOOL)existsDataForPredictionUsingDay:(id)arg1 andOffsetDays:(id)arg2 ;
-(unsigned long long)currentBON;
-(void)significantEventAtDate:(id)arg1 ;
-(void)calculateBONForCurrentLevel:(float)arg1 andChargeState:(BOOL)arg2 atDate:(id)arg3 onQueue:(id)arg4 usingHandler:(/*^block*/id)arg5 ;
-(BOOL)existsDataForPredictionUsingDefaultOffsetsAndDay:(id)arg1 ;
-(void)setHistoryPeriodRequired:(double)arg1 ;
-(NSMutableArray *)lastShortData;
-(void)calculateShortGradientBONForDate:(id)arg1 ;
-(id)getBatteryDataForDate:(id)arg1 asTable:(BOOL)arg2 ;
-(void)calculateShortGradientBONForDate:(id)arg1 chargeLevel:(float)arg2 ;
-(double)historyPeriodRequired;
-(unsigned long long)currentShortBON;
-(float)lastGradient;
-(float)lastShortGradient;
-(void)setCurrentBON:(unsigned long long)arg1 ;
-(void)setLastShortData:(NSMutableArray *)arg1 ;
-(void)updateConfiguration:(id)arg1 ;
-(NSDate *)expiryDate;
-(BOOL)enabled;
-(id)currentState;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(NSDictionary *)configuration;
-(BOOL)valid;
-(ABLEGradient *)gradient;
-(NSArray *)lastData;
-(void)setLastData:(NSArray *)arg1 ;
-(BOOL)expires;
-(id)defaultConfiguration;
-(void)setExpiryDate:(NSDate *)arg1 ;
-(NSDate *)lastDate;
-(void)setLastDate:(NSDate *)arg1 ;
-(double)recurrence;
-(double)lifetime;
@end

