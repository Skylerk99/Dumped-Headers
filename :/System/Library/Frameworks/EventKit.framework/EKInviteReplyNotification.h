/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:27 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKObject.h>

@class EKCalendar, NSString, NSDate;

@interface EKInviteReplyNotification : EKObject

@property (nonatomic,readonly) EKCalendar * calendar; 
@property (nonatomic,readonly) NSString * calendarName; 
@property (nonatomic,readonly) NSString * shareeDisplayName; 
@property (nonatomic,readonly) NSString * shareeAddress; 
@property (nonatomic,readonly) NSString * shareeFirstName; 
@property (nonatomic,readonly) NSString * shareeLastName; 
@property (nonatomic,readonly) unsigned long long status; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) BOOL alerted; 
-(NSString *)shareeDisplayName;
-(NSString *)shareeAddress;
-(NSString *)shareeFirstName;
-(NSString *)shareeLastName;
-(BOOL)alerted;
-(id)lazyLoadRelationForKey:(id)arg1 ;
-(id)_persistentInviteReplyNotification;
-(void)clearAlertedStatus;
-(NSString *)calendarName;
-(NSDate *)creationDate;
-(EKCalendar *)calendar;
-(unsigned long long)status;
@end

