/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:07 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOStyleAttributes;

@interface GEOPBTransitBrand : PBCodable <NSCopying> {

	unsigned long long _muid;
	unsigned _brandIndex;
	NSString* _nameDisplayString;
	GEOStyleAttributes* _styleAttributes;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) BOOL hasBrandIndex; 
@property (assign,nonatomic) unsigned brandIndex;                               //@synthesize brandIndex=_brandIndex - In the implementation block
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                           //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes;              //@synthesize styleAttributes=_styleAttributes - In the implementation block
@property (nonatomic,readonly) BOOL hasNameDisplayString; 
@property (nonatomic,retain) NSString * nameDisplayString;                      //@synthesize nameDisplayString=_nameDisplayString - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasMuid;
-(void)setHasMuid:(BOOL)arg1 ;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(GEOStyleAttributes *)styleAttributes;
-(BOOL)hasStyleAttributes;
-(BOOL)hasNameDisplayString;
-(void)setNameDisplayString:(NSString *)arg1 ;
-(NSString *)nameDisplayString;
-(unsigned)brandIndex;
-(void)setBrandIndex:(unsigned)arg1 ;
-(BOOL)hasBrandIndex;
-(void)setHasBrandIndex:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

