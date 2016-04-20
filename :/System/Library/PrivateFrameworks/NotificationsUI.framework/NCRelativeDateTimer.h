/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:32 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NCRelativeDateTimerDelegate;
@class NSCalendar, NSTimer, NSDate;

@interface NCRelativeDateTimer : NSObject {

	NSCalendar* _gregorian;
	NSTimer* _timer;
	NSDate* _date;
	id<NCRelativeDateTimerDelegate> _delegate;
	int _currResolution;
	long long _currValue;

}
+(void)initialize;
+(void)invalidateTimer:(id)arg1 ;
+(void)addTimerToMainRunLoop:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(id)date;
-(void)setDate:(id)arg1 ;
-(double)nextFireInterval;
-(void)_fireForLocaleEvent:(id)arg1 ;
-(void)fireAndSchedule;
-(void)_fireForEvent;
-(void)_fireAndUpdateTimerIfNecessary;
-(id)_timeDifferenceFromDate:(id)arg1 ;
-(double)_nextFireInterval:(id)arg1 resolution:(int)arg2 comparedToNow:(long long)arg3 ;
@end

