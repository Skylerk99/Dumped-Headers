/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOTFTrafficSnapshot : PBCodable <NSCopying> {

	long long _feedUpdateTime;
	NSString* _feedId;
	NSMutableArray* _incidents;
	NSMutableArray* _regions;
	NSMutableArray* _speeds;
	unsigned _trafficVersion;
	SCD_Struct_GE7 _has;

}

@property (nonatomic,retain) NSMutableArray * regions;                //@synthesize regions=_regions - In the implementation block
@property (nonatomic,retain) NSMutableArray * incidents;              //@synthesize incidents=_incidents - In the implementation block
@property (nonatomic,retain) NSMutableArray * speeds;                 //@synthesize speeds=_speeds - In the implementation block
@property (assign,nonatomic) BOOL hasFeedUpdateTime; 
@property (assign,nonatomic) long long feedUpdateTime;                //@synthesize feedUpdateTime=_feedUpdateTime - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedId; 
@property (nonatomic,retain) NSString * feedId;                       //@synthesize feedId=_feedId - In the implementation block
@property (assign,nonatomic) BOOL hasTrafficVersion; 
@property (assign,nonatomic) unsigned trafficVersion;                 //@synthesize trafficVersion=_trafficVersion - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)incidents;
-(BOOL)hasTrafficVersion;
-(void)setRegions:(NSMutableArray *)arg1 ;
-(BOOL)hasFeedUpdateTime;
-(void)clearSpeeds;
-(void)setIncidents:(NSMutableArray *)arg1 ;
-(long long)feedUpdateTime;
-(void)clearIncidents;
-(unsigned long long)regionsCount;
-(id)regionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)regions;
-(unsigned long long)incidentsCount;
-(NSString *)feedId;
-(id)incidentsAtIndex:(unsigned long long)arg1 ;
-(void)addIncidents:(id)arg1 ;
-(void)addSpeeds:(id)arg1 ;
-(void)setFeedId:(NSString *)arg1 ;
-(id)speedsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)speeds;
-(void)setTrafficVersion:(unsigned)arg1 ;
-(unsigned long long)speedsCount;
-(BOOL)hasFeedId;
-(void)setFeedUpdateTime:(long long)arg1 ;
-(void)clearRegions;
-(unsigned)trafficVersion;
-(void)addRegion:(id)arg1 ;
-(void)setHasTrafficVersion:(BOOL)arg1 ;
-(void)setSpeeds:(NSMutableArray *)arg1 ;
-(void)setHasFeedUpdateTime:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

