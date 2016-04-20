/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOPBTransitZoomRangeString : PBCodable <NSCopying> {

	NSString* _labelLanguage;
	NSString* _labelText;
	unsigned _minZoom;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) BOOL hasMinZoom; 
@property (assign,nonatomic) unsigned minZoom;                      //@synthesize minZoom=_minZoom - In the implementation block
@property (nonatomic,readonly) BOOL hasLabelLanguage; 
@property (nonatomic,retain) NSString * labelLanguage;              //@synthesize labelLanguage=_labelLanguage - In the implementation block
@property (nonatomic,readonly) BOOL hasLabelText; 
@property (nonatomic,retain) NSString * labelText;                  //@synthesize labelText=_labelText - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasMinZoom:(BOOL)arg1 ;
-(NSString *)labelLanguage;
-(BOOL)hasLabelLanguage;
-(BOOL)hasMinZoom;
-(BOOL)hasLabelText;
-(void)setMinZoom:(unsigned)arg1 ;
-(NSString *)labelText;
-(void)setLabelLanguage:(NSString *)arg1 ;
-(void)setLabelText:(NSString *)arg1 ;
-(unsigned)minZoom;
-(BOOL)readFrom:(id)arg1 ;
@end

