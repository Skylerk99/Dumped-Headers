/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>

@class EKPersistentEvent, NSString, NSDate;

@interface EKPersistentSuggestedEventInfo : EKPersistentObject

@property (assign,nonatomic) EKPersistentEvent * owner; 
@property (nonatomic,copy) NSString * opaqueKey; 
@property (nonatomic,copy) NSString * uniqueKey; 
@property (assign,nonatomic) unsigned long long changedFields; 
@property (assign,nonatomic) BOOL changesAcknowledged; 
@property (nonatomic,copy) NSDate * timestamp; 
+(id)relations;
+(id)suggestedEventInfoWithOpaqueKey:(id)arg1 uniqueKey:(id)arg2 ;
-(NSString *)opaqueKey;
-(void)setChangesAcknowledged:(BOOL)arg1 ;
-(void)setOpaqueKey:(NSString *)arg1 ;
-(unsigned long long)changedFields;
-(BOOL)changesAcknowledged;
-(void)setChangedFields:(unsigned long long)arg1 ;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)entityType;
-(void)setOwner:(EKPersistentEvent *)arg1 ;
-(EKPersistentEvent *)owner;
-(void)setUniqueKey:(NSString *)arg1 ;
-(NSString *)uniqueKey;
@end

