/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:11 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOVLaneCharacteristic : PBCodable <NSCopying> {

	NSMutableArray* _laneDirections;
	NSMutableArray* _laneDividers;
	NSMutableArray* _laneTypes;
	unsigned _roadLaneCount;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) BOOL hasRoadLaneCount; 
@property (assign,nonatomic) unsigned roadLaneCount;                       //@synthesize roadLaneCount=_roadLaneCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * laneDividers;                //@synthesize laneDividers=_laneDividers - In the implementation block
@property (nonatomic,retain) NSMutableArray * laneDirections;              //@synthesize laneDirections=_laneDirections - In the implementation block
@property (nonatomic,retain) NSMutableArray * laneTypes;                   //@synthesize laneTypes=_laneTypes - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasRoadLaneCount;
-(id)laneDirectionAtIndex:(unsigned long long)arg1 ;
-(void)setHasRoadLaneCount:(BOOL)arg1 ;
-(unsigned long long)laneTypesCount;
-(void)addLaneType:(id)arg1 ;
-(unsigned long long)laneDividersCount;
-(void)setLaneDividers:(NSMutableArray *)arg1 ;
-(unsigned long long)laneDirectionsCount;
-(id)laneDividerAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)laneDirections;
-(NSMutableArray *)laneDividers;
-(id)laneTypeAtIndex:(unsigned long long)arg1 ;
-(void)setRoadLaneCount:(unsigned)arg1 ;
-(void)setLaneDirections:(NSMutableArray *)arg1 ;
-(unsigned)roadLaneCount;
-(void)clearLaneTypes;
-(void)clearLaneDividers;
-(void)clearLaneDirections;
-(void)addLaneDivider:(id)arg1 ;
-(void)addLaneDirection:(id)arg1 ;
-(NSMutableArray *)laneTypes;
-(void)setLaneTypes:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

