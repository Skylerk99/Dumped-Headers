/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:14 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEORPProblemStatusResponse : PBCodable <NSCopying> {

	NSMutableArray* _problemStatus;
	int _statusCode;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode;                              //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,retain) NSMutableArray * problemStatus;              //@synthesize problemStatus=_problemStatus - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)statusCode;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStatusCode:(int)arg1 ;
-(BOOL)hasStatusCode;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(void)setProblemStatus:(NSMutableArray *)arg1 ;
-(NSMutableArray *)problemStatus;
-(id)problemStatusAtIndex:(unsigned long long)arg1 ;
-(void)addProblemStatus:(id)arg1 ;
-(unsigned long long)problemStatusCount;
-(void)clearProblemStatus;
-(BOOL)readFrom:(id)arg1 ;
@end

