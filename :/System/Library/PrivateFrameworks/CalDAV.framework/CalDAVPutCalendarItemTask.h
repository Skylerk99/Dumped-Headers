/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:16 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPutTask.h>

@class NSString;

@interface CalDAVPutCalendarItemTask : CoreDAVPutTask {

	NSString* _previousScheduleTag;

}

@property (assign,nonatomic) id<CalDAVPutCalendarItemTaskDelegate> delegate; 
@property (nonatomic,retain) NSString * previousScheduleTag;                              //@synthesize previousScheduleTag=_previousScheduleTag - In the implementation block
-(id)description;
-(NSString *)previousScheduleTag;
-(void)setPreviousScheduleTag:(NSString *)arg1 ;
-(id)additionalHeaderValues;
@end

