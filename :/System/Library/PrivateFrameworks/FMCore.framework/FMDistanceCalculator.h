/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:27 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLocale, NSUserDefaults;

@interface FMDistanceCalculator : NSObject {

	NSLocale* _locale;
	NSUserDefaults* _userDefaults;

}

@property (assign,nonatomic) long long measurementSystem; 
@property (nonatomic,retain) NSLocale * locale;                          //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSUserDefaults * userDefaults;              //@synthesize userDefaults=_userDefaults - In the implementation block
-(id)init;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)userDefaults;
-(id)initWithDefaultsSuiteName:(id)arg1 ;
-(long long)measurementSystem;
-(id)_scaledAndConvertedMin:(double)arg1 andMax:(double)arg2 ;
-(id)_localizedStringFromNumber:(id)arg1 numberStyle:(unsigned long long)arg2 fractionDigits:(unsigned long long)arg3 ;
-(void)setMeasurementSystem:(long long)arg1 ;
-(double)averageDistanceFromLocation:(id)arg1 toLocation:(id)arg2 ;
-(id)localizedDistanceFromLocation:(id)arg1 toLocation:(id)arg2 ;
@end

