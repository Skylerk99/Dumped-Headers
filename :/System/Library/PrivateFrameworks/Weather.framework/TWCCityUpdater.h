/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:53 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/TWCUpdater.h>

@class NSArray, NSMutableArray;

@interface TWCCityUpdater : TWCUpdater {

	/*^block*/id _weatherUpdateCompletion;
	NSArray* _requestedCities;
	NSMutableArray* _parsedCities;

}

@property (nonatomic,retain) NSArray * requestedCities;                  //@synthesize requestedCities=_requestedCities - In the implementation block
@property (nonatomic,retain) NSMutableArray * parsedCities;              //@synthesize parsedCities=_parsedCities - In the implementation block
+(id)sharedCityUpdater;
+(void)clearSharedCityUpdater;
-(id)aggregateDictionaryDomain;
-(void)handleCompletionForCity:(id)arg1 withUpdateDetail:(unsigned long long)arg2 ;
-(void)_failed:(unsigned long long)arg1 ;
-(void)updateWeatherForCity:(id)arg1 ;
-(void)updateWeatherForCities:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSArray *)requestedCities;
-(void)setRequestedCities:(NSArray *)arg1 ;
-(NSMutableArray *)parsedCities;
-(void)setParsedCities:(NSMutableArray *)arg1 ;
@end

