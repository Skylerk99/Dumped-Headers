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

@class NSString;

@interface GEOABExperimentAssignment : PBCodable <NSCopying> {

	int _placeRequestType;
	NSString* _querySubstring;
	int _serviceType;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) BOOL hasServiceType; 
@property (assign,nonatomic) int serviceType;                        //@synthesize serviceType=_serviceType - In the implementation block
@property (assign,nonatomic) BOOL hasPlaceRequestType; 
@property (assign,nonatomic) int placeRequestType;                   //@synthesize placeRequestType=_placeRequestType - In the implementation block
@property (nonatomic,readonly) BOOL hasQuerySubstring; 
@property (nonatomic,retain) NSString * querySubstring;              //@synthesize querySubstring=_querySubstring - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasPlaceRequestType;
-(void)setPlaceRequestType:(int)arg1 ;
-(int)placeRequestType;
-(void)setHasPlaceRequestType:(BOOL)arg1 ;
-(void)setServiceType:(int)arg1 ;
-(BOOL)hasServiceType;
-(int)serviceType;
-(BOOL)hasQuerySubstring;
-(NSString *)querySubstring;
-(void)setQuerySubstring:(NSString *)arg1 ;
-(void)setHasServiceType:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

