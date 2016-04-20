/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:47 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _HKFactorization, NSString, _HKDimension;

@interface HKUnit : NSObject <NSSecureCoding, NSCopying> {

	long long _reduceToken;
	_HKFactorization* _dimensionReduction;
	_HKFactorization* _baseUnitReduction;
	double _reducedProportionalSize;
	double _scaleOffset;

}

@property (readonly) NSString * unitString; 
@property (nonatomic,readonly) _HKDimension * dimension; 
@property (nonatomic,readonly) double scaleOffset;                         //@synthesize scaleOffset=_scaleOffset - In the implementation block
@property (nonatomic,readonly) _HKFactorization * _baseUnits; 
+(id)_heightUnitForLocale:(id)arg1 ;
+(id)_distanceUnitForLocale:(id)arg1 ;
+(id)_personMassUnitForLocale:(id)arg1 ;
+(id)_temperatureUnitForLocale:(id)arg1 ;
+(id)_foodEnergyUnitForLocale:(id)arg1 ;
+(id)_nullUnit;
+(id)gramUnit;
+(id)_prefixStringForMetricPrefix:(long long)arg1 ;
+(id)moleUnitWithMolarMass:(double)arg1 ;
+(id)_moles;
+(id)literUnit;
+(id)pascalUnit;
+(id)secondUnitWithMetricPrefix:(long long)arg1 ;
+(id)jouleUnit;
+(id)siemenUnit;
+(id)ounceUnit;
+(id)yardUnit;
+(id)calorieUnit;
+(id)kilojoulesUnit;
+(id)moleUnitWithMetricPrefix:(long long)arg1 molarMass:(double)arg2 ;
+(id)literUnitWithMetricPrefix:(long long)arg1 ;
+(id)fluidOunceUSUnit;
+(id)fluidOunceImperialUnit;
+(id)pintUSUnit;
+(id)pintImperialUnit;
+(id)cupUSUnit;
+(id)cupImperialUnit;
+(id)centimeterOfWaterUnit;
+(id)atmosphereUnit;
+(id)milliseconds;
+(id)hourUnit;
+(id)dayUnit;
+(id)kelvinUnit;
+(id)siemenUnitWithMetricPrefix:(long long)arg1 ;
+(id)percentUnit;
+(id)unitFromMassFormatterUnit:(long long)arg1 ;
+(long long)massFormatterUnitFromUnit:(id)arg1 ;
+(id)unitFromLengthFormatterUnit:(long long)arg1 ;
+(long long)lengthFormatterUnitFromUnit:(id)arg1 ;
+(id)unitFromEnergyFormatterUnit:(long long)arg1 ;
+(long long)energyFormatterUnitFromUnit:(id)arg1 ;
+(BOOL)_isValidUnitString:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)unitFromString:(id)arg1 ;
+(id)gramUnitWithMetricPrefix:(long long)arg1 ;
+(id)meterUnit;
+(id)kilocalorieUnit;
+(id)minuteUnit;
+(id)countUnit;
+(id)pascalUnitWithMetricPrefix:(long long)arg1 ;
+(id)millimeterOfMercuryUnit;
+(id)mileUnit;
+(id)meterUnitWithMetricPrefix:(long long)arg1 ;
+(id)secondUnit;
+(id)degreeFahrenheitUnit;
+(id)degreeCelsiusUnit;
+(id)inchUnit;
+(id)footUnit;
+(id)poundUnit;
+(id)stoneUnit;
+(id)jouleUnitWithMetricPrefix:(long long)arg1 ;
-(double)_valueByConvertingValue:(double)arg1 toUnit:(id)arg2 ;
-(BOOL)_isCompatibleWithUnit:(id)arg1 ;
-(id)_dimensionReduction;
-(_HKFactorization *)_baseUnits;
-(double)_reducedProportionalSize;
-(double)scaleOffset;
-(void)_reduceIfNecessaryWithCycleSet:(id)arg1 ;
-(id)_computeBaseUnitReductionAndProportionalSize:(out double*)arg1 withCycleSet:(id)arg2 ;
-(id)unitMultipliedByUnit:(id)arg1 ;
-(id)unitDividedByUnit:(id)arg1 ;
-(id)unitRaisedToPower:(long long)arg1 ;
-(id)reciprocalUnit;
-(BOOL)_isCompatibleWithDimension:(id)arg1 ;
-(id)_baseUnitReductionAndProportionalSize:(out double*)arg1 withCycleSet:(id)arg2 ;
-(id)_baseUnitReduction;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_HKDimension *)dimension;
-(NSString *)unitString;
-(BOOL)isNull;
@end

