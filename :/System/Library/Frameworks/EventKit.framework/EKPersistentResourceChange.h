/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKPersistentObject.h>

@class NSString, NSURL, EKPersistentCalendar, EKPersistentCalendarItem, NSDate, NSNumber;

@interface EKPersistentResourceChange : EKPersistentObject

@property (nonatomic,copy,readonly) NSString * changedByDisplayName; 
@property (nonatomic,copy,readonly) NSURL * changedByAddress; 
@property (nonatomic,copy,readonly) NSString * changedByFirstName; 
@property (nonatomic,copy,readonly) NSString * changedByLastName; 
@property (nonatomic,retain,readonly) EKPersistentCalendar * calendar; 
@property (nonatomic,retain,readonly) EKPersistentCalendarItem * calendarItem; 
@property (nonatomic,readonly) unsigned changeType; 
@property (nonatomic,copy,readonly) NSDate * timestamp; 
@property (nonatomic,readonly) unsigned changedProperties; 
@property (nonatomic,readonly) NSNumber * createCount; 
@property (nonatomic,readonly) NSNumber * updateCount; 
@property (nonatomic,readonly) NSNumber * deleteCount; 
@property (nonatomic,readonly) NSString * deletedTitle; 
@property (nonatomic,readonly) BOOL alerted; 
@property (nonatomic,readonly) unsigned publicStatus; 
+(id)defaultPropertiesToLoad;
+(id)relations;
-(BOOL)alerted;
-(NSString *)deletedTitle;
-(NSString *)changedByDisplayName;
-(NSURL *)changedByAddress;
-(NSString *)changedByFirstName;
-(NSString *)changedByLastName;
-(unsigned)changedProperties;
-(unsigned)publicStatus;
-(EKPersistentCalendarItem *)calendarItem;
-(NSNumber *)updateCount;
-(NSNumber *)createCount;
-(NSDate *)timestamp;
-(NSNumber *)deleteCount;
-(EKPersistentCalendar *)calendar;
-(unsigned)changeType;
@end

