/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray;

@interface TSUDateParser : NSObject {

	NSMutableArray* mFormatCategories;
	CFLocaleRef mLocale;
	BOOL mIsJapaneseLocale;
	CFDateFormatterRef mSpecialCaseFormatter;

}
+(id)parserForDefaultLocale;
-(void)addFormat:(id)arg1 locale:(CFLocaleRef)arg2 formatCategoryMap:(id)arg3 ;
-(void)parseFormat:(id)arg1 initialPattern:(id*)arg2 separator:(unsigned short*)arg3 ;
-(void)datePreferencesChanged:(id)arg1 ;
-(void)dealloc;
-(CFDateRef)newDateFromString:(CFStringRef)arg1 preferredFormatString:(CFStringRef)arg2 successfulFormatString:(const _CFString*)arg3 tryAggressiveFormats:(BOOL)arg4 ;
-(id)initWithLocale:(CFLocaleRef)arg1 ;
-(CFDateFormatterRef)specialCaseDateFormatterForLocale:(CFLocaleRef)arg1 ;
-(CFDateRef)newDateFromStringTryingFormats:(CFStringRef)arg1 locale:(CFLocaleRef)arg2 formats:(id)arg3 outSuccessfulFormatString:(const _CFString*)arg4 ;
-(CFDateRef)newDateFromString:(CFStringRef)arg1 successfulFormatString:(const _CFString*)arg2 ;
@end

