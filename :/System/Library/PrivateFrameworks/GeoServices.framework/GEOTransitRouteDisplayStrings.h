/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOFormattedString;

@interface GEOTransitRouteDisplayStrings : PBCodable <NSCopying> {

	NSString* _detailTimeFormatted;
	GEOFormattedString* _duration;
	GEOFormattedString* _durationList;
	GEOFormattedString* _planningDescription;
	GEOFormattedString* _serviceGap;

}

@property (nonatomic,readonly) BOOL hasDetailTimeFormatted; 
@property (nonatomic,retain) NSString * detailTimeFormatted;                        //@synthesize detailTimeFormatted=_detailTimeFormatted - In the implementation block
@property (nonatomic,readonly) BOOL hasPlanningDescription; 
@property (nonatomic,retain) GEOFormattedString * planningDescription;              //@synthesize planningDescription=_planningDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasDuration; 
@property (nonatomic,retain) GEOFormattedString * duration;                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasDurationList; 
@property (nonatomic,retain) GEOFormattedString * durationList;                     //@synthesize durationList=_durationList - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceGap; 
@property (nonatomic,retain) GEOFormattedString * serviceGap;                       //@synthesize serviceGap=_serviceGap - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEOFormattedString *)duration;
-(void)setDuration:(GEOFormattedString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDurationList:(GEOFormattedString *)arg1 ;
-(void)setDetailTimeFormatted:(NSString *)arg1 ;
-(BOOL)hasDurationList;
-(GEOFormattedString *)planningDescription;
-(BOOL)hasServiceGap;
-(GEOFormattedString *)durationList;
-(void)setServiceGap:(GEOFormattedString *)arg1 ;
-(void)setPlanningDescription:(GEOFormattedString *)arg1 ;
-(BOOL)hasDetailTimeFormatted;
-(GEOFormattedString *)serviceGap;
-(BOOL)hasPlanningDescription;
-(NSString *)detailTimeFormatted;
-(BOOL)hasDuration;
-(BOOL)readFrom:(id)arg1 ;
@end

