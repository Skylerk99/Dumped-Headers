/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:27 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSData;

@interface EKPersistentLocation : EKPersistentObject <NSCopying>

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * address; 
@property (nonatomic,copy) NSNumber * latitude; 
@property (nonatomic,copy) NSNumber * longitude; 
@property (nonatomic,copy) NSNumber * referenceFrame; 
@property (nonatomic,copy) NSNumber * radius; 
@property (nonatomic,copy) NSString * addressBookEntityID; 
@property (nonatomic,copy) NSData * mapKitHandle; 
@property (nonatomic,copy) NSString * routing; 
+(id)defaultPropertiesToLoad;
+(id)relations;
-(id)calendarItemOwner;
-(NSString *)routing;
-(void)setCalendarItemOwner:(id)arg1 ;
-(void)setAlarmOwner:(id)arg1 ;
-(id)alarmOwner;
-(NSString *)addressBookEntityID;
-(void)setRouting:(NSString *)arg1 ;
-(void)setAddressBookEntityID:(NSString *)arg1 ;
-(void)setMapKitHandle:(NSData *)arg1 ;
-(NSData *)mapKitHandle;
-(NSString *)address;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)referenceFrame;
-(void)setReferenceFrame:(NSNumber *)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(int)entityType;
-(void)setLatitude:(NSNumber *)arg1 ;
-(void)setLongitude:(NSNumber *)arg1 ;
-(void)setRadius:(NSNumber *)arg1 ;
-(NSNumber *)radius;
@end

