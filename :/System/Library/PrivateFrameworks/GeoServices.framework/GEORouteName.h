/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:15 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEONameInfo;

@interface GEORouteName : PBCodable <NSCopying> {

	int _lastZilchStitchedIndex;
	GEONameInfo* _nameInfo;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) BOOL hasNameInfo; 
@property (nonatomic,retain) GEONameInfo * nameInfo;                      //@synthesize nameInfo=_nameInfo - In the implementation block
@property (assign,nonatomic) BOOL hasLastZilchStitchedIndex; 
@property (assign,nonatomic) int lastZilchStitchedIndex;                  //@synthesize lastZilchStitchedIndex=_lastZilchStitchedIndex - In the implementation block
-(CGImageRef)_mapKitImage;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasLastZilchStitchedIndex;
-(GEONameInfo *)nameInfo;
-(void)setLastZilchStitchedIndex:(int)arg1 ;
-(void)setNameInfo:(GEONameInfo *)arg1 ;
-(void)setHasLastZilchStitchedIndex:(BOOL)arg1 ;
-(int)lastZilchStitchedIndex;
-(BOOL)hasNameInfo;
-(BOOL)readFrom:(id)arg1 ;
@end

