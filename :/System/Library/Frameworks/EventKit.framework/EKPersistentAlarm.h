/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSTimeZone, NSString, NSData, EKPersistentLocation, NSSet;

@interface EKPersistentAlarm : EKPersistentObject <NSCopying>

@property (nonatomic,copy) NSDate * absoluteDate; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic) double relativeOffset; 
@property (nonatomic,readonly) BOOL isAbsolute; 
@property (assign,nonatomic) long long alarmType; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSData * externalData; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,copy) EKPersistentLocation * location; 
@property (assign,nonatomic) long long proximity; 
@property (nonatomic,copy) NSDate * acknowledgedDate; 
@property (assign,getter=isDefaultAlarm,nonatomic) BOOL defaultAlarm; 
@property (nonatomic,retain) EKPersistentAlarm * originalAlarm; 
@property (nonatomic,copy) NSSet * snoozedAlarms; 
+(id)defaultPropertiesToLoad;
+(id)relations;
-(NSSet *)snoozedAlarms;
-(id)calendarItemOwner;
-(EKPersistentAlarm *)originalAlarm;
-(void)setAcknowledgedDate:(NSDate *)arg1 ;
-(void)setOriginalAlarm:(EKPersistentAlarm *)arg1 ;
-(NSDate *)acknowledgedDate;
-(void)setCalendarItemOwner:(id)arg1 ;
-(long long)alarmType;
-(void)setAlarmType:(long long)arg1 ;
-(id)calendarOwner;
-(void)setCalendarOwner:(id)arg1 ;
-(BOOL)isDefaultAlarm;
-(void)setDefaultAlarm:(BOOL)arg1 ;
-(void)setSnoozedAlarms:(NSSet *)arg1 ;
-(NSString *)externalID;
-(BOOL)isAbsolute;
-(NSDate *)absoluteDate;
-(void)setAbsoluteDate:(NSDate *)arg1 ;
-(void)setRelativeOffset:(double)arg1 ;
-(double)relativeOffset;
-(id)init;
-(id)description;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)UUID;
-(EKPersistentLocation *)location;
-(NSTimeZone *)timeZone;
-(void)setLocation:(EKPersistentLocation *)arg1 ;
-(BOOL)validate:(id*)arg1 ;
-(int)entityType;
-(void)setExternalID:(NSString *)arg1 ;
-(NSData *)externalData;
-(void)setExternalData:(NSData *)arg1 ;
-(long long)proximity;
-(void)setProximity:(long long)arg1 ;
@end

