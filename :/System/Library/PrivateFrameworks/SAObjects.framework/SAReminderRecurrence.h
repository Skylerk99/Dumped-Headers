/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAReminderRecurrence : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * daysOfTheMonth; 
@property (nonatomic,copy) NSArray * daysOfTheWeek; 
@property (nonatomic,copy) NSArray * daysOfTheYear; 
@property (nonatomic,copy) NSString * frequencyTimeUnit; 
@property (assign,nonatomic) long long interval; 
@property (nonatomic,copy) NSArray * monthsOfTheYear; 
@property (nonatomic,copy) NSArray * weeksOfTheYear; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recurrence;
+(id)recurrenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)daysOfTheMonth;
-(void)setDaysOfTheMonth:(NSArray *)arg1 ;
-(NSArray *)monthsOfTheYear;
-(void)setMonthsOfTheYear:(NSArray *)arg1 ;
-(NSArray *)daysOfTheWeek;
-(void)setDaysOfTheWeek:(NSArray *)arg1 ;
-(NSArray *)daysOfTheYear;
-(NSArray *)weeksOfTheYear;
-(void)setDaysOfTheYear:(NSArray *)arg1 ;
-(void)setWeeksOfTheYear:(NSArray *)arg1 ;
-(void)setInterval:(long long)arg1 ;
-(long long)interval;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)frequencyTimeUnit;
-(void)setFrequencyTimeUnit:(NSString *)arg1 ;
@end

