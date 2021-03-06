/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSCalendar;

@interface HKDateCache : NSObject {

	NSDate* _startOfDayMidnight;
	NSDate* _endOfDayMidnight;
	NSCalendar* _calendar;

}

@property (nonatomic,readonly) NSDate * startOfDayMidnight; 
@property (nonatomic,readonly) NSDate * endOfDayMidnight; 
-(BOOL)isDateInToday:(id)arg1 ;
-(id)init;
-(id)initWithCalendar:(id)arg1 ;
-(void)flushCache;
-(NSDate *)startOfDayMidnight;
-(NSDate *)endOfDayMidnight;
-(void)_significantTimeChangeOccurred:(id)arg1 ;
@end

