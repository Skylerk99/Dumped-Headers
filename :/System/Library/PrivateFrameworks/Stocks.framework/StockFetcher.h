/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SymbolValidatorDelegate.h>

@class SymbolValidator, NSTimer, NSString;

@interface StockFetcher : NSObject <SymbolValidatorDelegate> {

	double _timeoutDuration;
	SymbolValidator* _validator;
	/*^block*/id _completionHandler;
	NSTimer* _timeoutTimer;

}

@property (assign) double timeoutDuration;                          //@synthesize timeoutDuration=_timeoutDuration - In the implementation block
@property (retain) SymbolValidator * validator;                     //@synthesize validator=_validator - In the implementation block
@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSTimer * timeoutTimer;                //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithValidator:(id)arg1 ;
-(SymbolValidator *)validator;
-(void)setValidator:(SymbolValidator *)arg1 ;
-(id)init;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(double)timeoutDuration;
-(void)setTimeoutTimer:(NSTimer *)arg1 ;
-(NSTimer *)timeoutTimer;
-(void)symbolValidator:(id)arg1 didValidateSymbols:(id)arg2 ;
-(void)symbolValidator:(id)arg1 didFailWithError:(id)arg2 ;
-(void)cleanUpAndReportResult:(id)arg1 ;
-(void)attemptRemoteFetchOfStockWithSymbol:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)remoteFetchTimedOut;
-(void)fetchStockWithSymbol:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setTimeoutDuration:(double)arg1 ;
@end

