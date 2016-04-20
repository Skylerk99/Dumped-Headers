/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEORPWatchAuxiliaryControl : PBCodable <NSCopying> {

	NSString* _hardwareIdentifier;
	NSString* _osBuild;
	NSString* _osVersion;

}

@property (nonatomic,readonly) BOOL hasHardwareIdentifier; 
@property (nonatomic,retain) NSString * hardwareIdentifier;              //@synthesize hardwareIdentifier=_hardwareIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasOsVersion; 
@property (nonatomic,retain) NSString * osVersion;                       //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasOsBuild; 
@property (nonatomic,retain) NSString * osBuild;                         //@synthesize osBuild=_osBuild - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasHardwareIdentifier;
-(NSString *)hardwareIdentifier;
-(NSString *)osBuild;
-(void)setOsVersion:(NSString *)arg1 ;
-(BOOL)hasOsBuild;
-(BOOL)hasOsVersion;
-(void)setHardwareIdentifier:(NSString *)arg1 ;
-(void)setOsBuild:(NSString *)arg1 ;
-(NSString *)osVersion;
-(BOOL)readFrom:(id)arg1 ;
@end

