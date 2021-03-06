/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:17 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSLocale, NSTimeZone, NSArray;

@interface NSCalendar : NSObject <NSCopying, NSSecureCoding>

@property (copy,readonly) NSString * calendarIdentifier; 
@property (copy) NSLocale * locale; 
@property (copy) NSTimeZone * timeZone; 
@property (assign) unsigned long long firstWeekday; 
@property (assign) unsigned long long minimumDaysInFirstWeek; 
@property (copy,readonly) NSArray * eraSymbols; 
@property (copy,readonly) NSArray * longEraSymbols; 
@property (copy,readonly) NSArray * monthSymbols; 
@property (copy,readonly) NSArray * shortMonthSymbols; 
@property (copy,readonly) NSArray * veryShortMonthSymbols; 
@property (copy,readonly) NSArray * standaloneMonthSymbols; 
@property (copy,readonly) NSArray * shortStandaloneMonthSymbols; 
@property (copy,readonly) NSArray * veryShortStandaloneMonthSymbols; 
@property (copy,readonly) NSArray * weekdaySymbols; 
@property (copy,readonly) NSArray * shortWeekdaySymbols; 
@property (copy,readonly) NSArray * veryShortWeekdaySymbols; 
@property (copy,readonly) NSArray * standaloneWeekdaySymbols; 
@property (copy,readonly) NSArray * shortStandaloneWeekdaySymbols; 
@property (copy,readonly) NSArray * veryShortStandaloneWeekdaySymbols; 
@property (copy,readonly) NSArray * quarterSymbols; 
@property (copy,readonly) NSArray * shortQuarterSymbols; 
@property (copy,readonly) NSArray * standaloneQuarterSymbols; 
@property (copy,readonly) NSArray * shortStandaloneQuarterSymbols; 
@property (copy,readonly) NSString * AMSymbol; 
@property (copy,readonly) NSString * PMSymbol; 
+(id)hk_gregorianCalendarWithUTCTimeZone;
+(id)__ck_currentCalendar;
+(void)__ck_setTestCalendar:(id)arg1 ;
+(id)CalCalendarWithUnsanitizedCalendarIdentifier:(id)arg1 ;
+(id)overlayCalendarForCalendarIdentifier:(id)arg1 timezone:(id)arg2 ;
+(id)CalGregorianGMTCalendar;
+(id)CalGregorianCalendarForTimeZone:(id)arg1 ;
+(id)sharedAutoupdatingCurrentCalendar;
+(id)autoupdatingCurrentCalendar;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(void)initialize;
+(id)currentCalendar;
+(id)calendarWithIdentifier:(id)arg1 ;
-(id)hk_yesterdayAtNoonForDate:(id)arg1 ;
-(id)hk_startOfTomorrowForDate:(id)arg1 ;
-(id)hk_startOfMonthForDate:(id)arg1 ;
-(id)hk_weekendDays;
-(id)hk_startOfFitnessWeekBeforeDate:(id)arg1 ;
-(id)hk_startOfDateBySubtractingDays:(long long)arg1 fromDate:(id)arg2 ;
-(id)hk_startOfDateByAddingDays:(long long)arg1 toDate:(id)arg2 ;
-(id)hk_startOfWeekWithFirstWeekday:(long long)arg1 beforeDate:(id)arg2 ;
-(unsigned long long)__ck_unitOfDisambiguityFromDate:(id)arg1 toDate:(id)arg2 ;
-(long long)daysInWeek;
-(long long)secondsInMinute;
-(long long)minutesInHour;
-(long long)hoursInDay;
-(long long)monthsInYearForDate:(id)arg1 ;
-(long long)secondsInDay;
-(id)dateBySanityCheckingDateRoundedToDay:(id)arg1 ;
-(long long)calendarDaysFromDate:(id)arg1 toDate:(id)arg2 ;
-(long long)daysInMonthContainingDate:(id)arg1 ;
-(BOOL)dateIsFirstOfMonth:(id)arg1 ;
-(BOOL)dateIsFirstOfYear:(id)arg1 ;
-(id)CalDateFromComponents:(id)arg1 inTimeZone:(id)arg2 ;
-(id)CalDateBySubtractingComponents:(id)arg1 fromDate:(id)arg2 ;
-(id)CalOccurrencesForBirthday:(id)arg1 inDateRange:(id)arg2 ;
-(long long)_cd_daysFromDate:(id)arg1 toDate:(id)arg2 ;
-(BOOL)_maps_isDateInToday:(id)arg1 inTimeZone:(id)arg2 ;
-(id)_maps_dateStringForDate:(id)arg1 withStyle:(unsigned long long)arg2 useRelativeFormatting:(BOOL)arg3 inTimeZone:(id)arg4 ;
-(id)_maps_offsetDate:(id)arg1 toTimeZone:(id)arg2 ;
-(BOOL)_maps_isDateInTomorrow:(id)arg1 inTimeZone:(id)arg2 ;
-(id)_dateOnlyComponentsForDate:(id)arg1 ;
-(id)_timeOnlyComponentsForDate:(id)arg1 ;
-(BOOL)date:(id)arg1 isSameDayAsDate:(id)arg2 ;
-(BOOL)date:(id)arg1 isSameYearAsDate:(id)arg2 ;
-(unsigned long long)bs_dayPeriodForDate:(id)arg1 inLocale:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)nextDateAfterDate:(id)arg1 matchingHour:(long long)arg2 minute:(long long)arg3 second:(long long)arg4 options:(unsigned long long)arg5 ;
-(id)nextDateAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 ;
-(void)getEra:(out long long*)arg1 yearForWeekOfYear:(out long long*)arg2 weekOfYear:(out long long*)arg3 weekday:(out long long*)arg4 fromDate:(id)arg5 ;
-(void)getHour:(out long long*)arg1 minute:(out long long*)arg2 second:(out long long*)arg3 nanosecond:(out long long*)arg4 fromDate:(id)arg5 ;
-(id)dateWithEra:(long long)arg1 yearForWeekOfYear:(long long)arg2 weekOfYear:(long long)arg3 weekday:(long long)arg4 hour:(long long)arg5 minute:(long long)arg6 second:(long long)arg7 nanosecond:(long long)arg8 ;
-(BOOL)rangeOfWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 containingDate:(id)arg3 ;
-(id)components:(unsigned long long)arg1 fromDateComponents:(id)arg2 toDateComponents:(id)arg3 options:(unsigned long long)arg4 ;
-(id)dateBySettingUnit:(unsigned long long)arg1 value:(long long)arg2 toDate:(id)arg3 options:(unsigned long long)arg4 ;
-(id)dateBySettingHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3 toDate:(id)arg4 options:(unsigned long long)arg5 ;
-(BOOL)date:(id)arg1 matchesComponents:(id)arg2 ;
-(id)_copyLocale;
-(id)_copyTimeZone;
-(void)_setGregorianStartDate:(id)arg1 ;
-(id)_gregorianStartDate;
-(SCD_Struct_NS24)_minimumRangeOfUnit:(unsigned long long)arg1 ;
-(SCD_Struct_NS24)_maximumRangeOfUnit:(unsigned long long)arg1 ;
-(SCD_Struct_NS24)_rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forAT:(double)arg3 ;
-(long long)_ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forAT:(double)arg3 ;
-(unsigned char)_rangeOfUnit:(unsigned long long)arg1 startTime:(double*)arg2 interval:(double*)arg3 forAT:(double)arg4 ;
-(unsigned char)_composeAbsoluteTime:(double*)arg1 :(const char*)arg2 :(char*)arg3 ;
-(unsigned char)_decomposeAbsoluteTime:(double)arg1 :(const char*)arg2 :(char*)arg3 ;
-(unsigned char)_addComponents:(double*)arg1 :(unsigned long long)arg2 :(const char*)arg3 :(char*)arg4 ;
-(unsigned char)_diffComponents:(double)arg1 :(double)arg2 :(unsigned long long)arg3 :(const char*)arg4 :(char*)arg5 ;
-(unsigned long long)_cfTypeID;
-(id)gregorianStartDate;
-(void)setGregorianStartDate:(id)arg1 ;
-(void)setFirstWeekday:(unsigned long long)arg1 ;
-(void)setMinimumDaysInFirstWeek:(unsigned long long)arg1 ;
-(NSRange)minimumRangeOfUnit:(unsigned long long)arg1 ;
-(BOOL)nextWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4 ;
-(BOOL)isDateInWeekend:(id)arg1 ;
-(void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(NSArray *)eraSymbols;
-(NSArray *)monthSymbols;
-(NSArray *)shortWeekdaySymbols;
-(NSArray *)longEraSymbols;
-(NSArray *)veryShortMonthSymbols;
-(NSArray *)veryShortStandaloneMonthSymbols;
-(NSArray *)veryShortWeekdaySymbols;
-(NSArray *)veryShortStandaloneWeekdaySymbols;
-(NSArray *)quarterSymbols;
-(NSArray *)shortQuarterSymbols;
-(NSArray *)standaloneQuarterSymbols;
-(NSArray *)shortStandaloneQuarterSymbols;
-(BOOL)isDateInToday:(id)arg1 ;
-(id)componentsInTimeZone:(id)arg1 fromDate:(id)arg2 ;
-(BOOL)isDateInTomorrow:(id)arg1 ;
-(long long)component:(unsigned long long)arg1 fromDate:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)calendarIdentifier;
-(id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3 ;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 ;
-(id)dateFromComponents:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSString *)AMSymbol;
-(NSString *)PMSymbol;
-(NSTimeZone *)timeZone;
-(NSLocale *)locale;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4 ;
-(BOOL)rangeOfUnit:(unsigned long long)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4 ;
-(unsigned long long)firstWeekday;
-(unsigned long long)minimumDaysInFirstWeek;
-(id)initWithCalendarIdentifier:(id)arg1 ;
-(NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
-(NSRange)maximumRangeOfUnit:(unsigned long long)arg1 ;
-(long long)compareDate:(id)arg1 toDate:(id)arg2 toUnitGranularity:(unsigned long long)arg3 ;
-(id)dateWithEra:(long long)arg1 year:(long long)arg2 month:(long long)arg3 day:(long long)arg4 hour:(long long)arg5 minute:(long long)arg6 second:(long long)arg7 nanosecond:(long long)arg8 ;
-(id)nextDateAfterDate:(id)arg1 matchingUnit:(unsigned long long)arg2 value:(long long)arg3 options:(unsigned long long)arg4 ;
-(BOOL)isDate:(id)arg1 equalToDate:(id)arg2 toUnitGranularity:(unsigned long long)arg3 ;
-(id)dateBySettingHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3 ofDate:(id)arg4 options:(unsigned long long)arg5 ;
-(id)startOfDayForDate:(id)arg1 ;
-(unsigned long long)ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
-(id)dateBySettingUnit:(unsigned long long)arg1 value:(long long)arg2 ofDate:(id)arg3 options:(unsigned long long)arg4 ;
-(BOOL)isDate:(id)arg1 inSameDayAsDate:(id)arg2 ;
-(BOOL)isDateInYesterday:(id)arg1 ;
-(NSArray *)standaloneMonthSymbols;
-(NSArray *)weekdaySymbols;
-(NSArray *)standaloneWeekdaySymbols;
-(NSArray *)shortMonthSymbols;
-(NSArray *)shortStandaloneMonthSymbols;
-(NSArray *)shortStandaloneWeekdaySymbols;
-(id)dateByAddingUnit:(unsigned long long)arg1 value:(long long)arg2 toDate:(id)arg3 options:(unsigned long long)arg4 ;
-(void)getEra:(out long long*)arg1 year:(out long long*)arg2 month:(out long long*)arg3 day:(out long long*)arg4 fromDate:(id)arg5 ;
@end

