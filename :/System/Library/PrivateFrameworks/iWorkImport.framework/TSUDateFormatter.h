/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSString;

@interface TSUDateFormatter : NSObject {

	NSString* mDateOnlyFormatString;
	NSString* mTimeOnlyFormatString;
	CFDateFormatterRef mFullDateFormatter;

}
+(id)defaultDateTimeFormat;
+(id)supportedDateFormats;
+(id)supportedTimeFormats;
+(unsigned long long)p_DateTimeSplitLocationInFormatString:(id)arg1 ;
+(id)dateFormatStringSpecialSymbols;
+(id)datePortionOfDateTimeFormatString:(id)arg1 ;
+(id)timePortionOfDateTimeFormatString:(id)arg1 ;
+(id)shortMonthNamesForNonCachedCurrentLocale;
-(id)fullDateString:(id)arg1 ;
-(id)appropriateOutputFormatStringForInputFormatString:(id)arg1 ;
-(id)stringFromDate:(id)arg1 format:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end

