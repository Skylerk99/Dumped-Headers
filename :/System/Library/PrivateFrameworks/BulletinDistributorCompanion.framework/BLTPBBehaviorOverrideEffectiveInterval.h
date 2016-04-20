/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:14 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, BLTPBDateComponents;

@interface BLTPBBehaviorOverrideEffectiveInterval : PBCodable <NSCopying> {

	NSString* _calendarIdentifier;
	BLTPBDateComponents* _endComponents;
	int _repeatInterval;
	BLTPBDateComponents* _startComponents;
	SCD_Struct_BL1 _has;

}

@property (nonatomic,readonly) BOOL hasStartComponents; 
@property (nonatomic,retain) BLTPBDateComponents * startComponents;              //@synthesize startComponents=_startComponents - In the implementation block
@property (nonatomic,readonly) BOOL hasEndComponents; 
@property (nonatomic,retain) BLTPBDateComponents * endComponents;                //@synthesize endComponents=_endComponents - In the implementation block
@property (nonatomic,readonly) BOOL hasCalendarIdentifier; 
@property (nonatomic,retain) NSString * calendarIdentifier;                      //@synthesize calendarIdentifier=_calendarIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasRepeatInterval; 
@property (assign,nonatomic) int repeatInterval;                                 //@synthesize repeatInterval=_repeatInterval - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setRepeatInterval:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)calendarIdentifier;
-(int)repeatInterval;
-(id)dictionaryRepresentation;
-(void)setStartComponents:(BLTPBDateComponents *)arg1 ;
-(void)setEndComponents:(BLTPBDateComponents *)arg1 ;
-(void)setCalendarIdentifier:(NSString *)arg1 ;
-(BOOL)hasStartComponents;
-(BOOL)hasEndComponents;
-(BOOL)hasCalendarIdentifier;
-(void)setHasRepeatInterval:(BOOL)arg1 ;
-(BOOL)hasRepeatInterval;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BLTPBDateComponents *)startComponents;
-(BLTPBDateComponents *)endComponents;
@end

