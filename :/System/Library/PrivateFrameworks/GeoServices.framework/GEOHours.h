/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:12 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOHours : PBCodable <NSCopying> {

	SCD_Struct_GE1* _days;
	NSMutableArray* _timeRanges;

}

@property (nonatomic,readonly) unsigned long long daysCount; 
@property (nonatomic,readonly) int* days; 
@property (nonatomic,retain) NSMutableArray * timeRanges;                 //@synthesize timeRanges=_timeRanges - In the implementation block
-(id)initWithPlaceDataHours:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addTimeRange:(id)arg1 ;
-(NSMutableArray *)timeRanges;
-(void)addDay:(int)arg1 ;
-(void)clearDays;
-(id)timeRangeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)timeRangesCount;
-(void)setDays:(int*)arg1 count:(unsigned long long)arg2 ;
-(int)dayAtIndex:(unsigned long long)arg1 ;
-(void)clearTimeRanges;
-(unsigned long long)daysCount;
-(int*)days;
-(void)setTimeRanges:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

