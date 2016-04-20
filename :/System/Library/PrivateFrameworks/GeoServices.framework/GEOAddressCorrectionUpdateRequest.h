/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOAddressCorrectionUpdateRequest : PBRequest <NSCopying> {

	NSString* _addressID;
	NSMutableArray* _addressResults;
	int _correctionStatus;
	NSMutableArray* _significantLocations;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) BOOL hasCorrectionStatus; 
@property (assign,nonatomic) int correctionStatus;                               //@synthesize correctionStatus=_correctionStatus - In the implementation block
@property (nonatomic,retain) NSMutableArray * significantLocations;              //@synthesize significantLocations=_significantLocations - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressID; 
@property (nonatomic,retain) NSString * addressID;                               //@synthesize addressID=_addressID - In the implementation block
@property (nonatomic,retain) NSMutableArray * addressResults;                    //@synthesize addressResults=_addressResults - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(Class)responseClass;
-(unsigned)requestTypeCode;
-(id)significantLocationAtIndex:(unsigned long long)arg1 ;
-(void)setAddressID:(NSString *)arg1 ;
-(id)addressResultAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)significantLocationsCount;
-(unsigned long long)addressResultsCount;
-(int)correctionStatus;
-(void)setCorrectionStatus:(int)arg1 ;
-(NSString *)addressID;
-(NSMutableArray *)addressResults;
-(BOOL)hasAddressID;
-(NSMutableArray *)significantLocations;
-(void)clearSignificantLocations;
-(void)setHasCorrectionStatus:(BOOL)arg1 ;
-(void)setAddressResults:(NSMutableArray *)arg1 ;
-(void)clearAddressResults;
-(void)addAddressResult:(id)arg1 ;
-(void)addSignificantLocation:(id)arg1 ;
-(BOOL)hasCorrectionStatus;
-(void)setSignificantLocations:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

