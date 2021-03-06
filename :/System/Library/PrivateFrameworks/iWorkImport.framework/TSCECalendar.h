/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:27 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSCalendar, NSObject;

@interface TSCECalendar : NSObject {

	NSCalendar* mCalendar;
	NSObject*<OS_dispatch_semaphore> mSem;

}
-(void)extractComponentsFromDate:(id)arg1 year:(long long*)arg2 month:(long long*)arg3 day:(long long*)arg4 hour:(long long*)arg5 minute:(long long*)arg6 second:(long long*)arg7 ;
-(void)extractComponentsFromDate:(id)arg1 year:(long long*)arg2 month:(long long*)arg3 day:(long long*)arg4 ;
-(void)dealloc;
-(id)init;
-(void)setTimeZone:(id)arg1 ;
-(id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3 ;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 ;
-(id)dateFromComponents:(id)arg1 ;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4 ;
-(id)initWithCalendarIdentifier:(id)arg1 ;
@end

