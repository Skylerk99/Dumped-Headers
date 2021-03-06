/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, GEOLatLng;

@interface GEOPBTransitAccessPoint : PBCodable <NSCopying> {

	unsigned long long _muid;
	unsigned _accessPointIndex;
	NSString* _entranceNameDisplayString;
	NSMutableArray* _entranceZoomNames;
	NSString* _exitNameDisplayString;
	NSMutableArray* _exitZoomNames;
	GEOLatLng* _location;
	unsigned _stationIndex;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) BOOL hasAccessPointIndex; 
@property (assign,nonatomic) unsigned accessPointIndex;                         //@synthesize accessPointIndex=_accessPointIndex - In the implementation block
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                           //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLng * location;                              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasStationIndex; 
@property (assign,nonatomic) unsigned stationIndex;                             //@synthesize stationIndex=_stationIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * entranceZoomNames;                //@synthesize entranceZoomNames=_entranceZoomNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * exitZoomNames;                    //@synthesize exitZoomNames=_exitZoomNames - In the implementation block
@property (nonatomic,readonly) BOOL hasEntranceNameDisplayString; 
@property (nonatomic,retain) NSString * entranceNameDisplayString;              //@synthesize entranceNameDisplayString=_entranceNameDisplayString - In the implementation block
@property (nonatomic,readonly) BOOL hasExitNameDisplayString; 
@property (nonatomic,retain) NSString * exitNameDisplayString;                  //@synthesize exitNameDisplayString=_exitNameDisplayString - In the implementation block
-(id)bestEntranceName;
-(id)bestExitNameWithLocale:(out id*)arg1 ;
-(id)bestEntranceNameWithLocale:(out id*)arg1 ;
-(id)bestExitName;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOLatLng *)location;
-(id)dictionaryRepresentation;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasStationIndex:(BOOL)arg1 ;
-(void)addExitZoomName:(id)arg1 ;
-(NSString *)exitNameDisplayString;
-(void)clearEntranceZoomNames;
-(BOOL)hasEntranceNameDisplayString;
-(void)setStationIndex:(unsigned)arg1 ;
-(unsigned)stationIndex;
-(void)setEntranceZoomNames:(NSMutableArray *)arg1 ;
-(NSMutableArray *)entranceZoomNames;
-(BOOL)hasAccessPointIndex;
-(BOOL)hasExitNameDisplayString;
-(BOOL)hasLocation;
-(void)clearExitZoomNames;
-(void)setExitZoomNames:(NSMutableArray *)arg1 ;
-(void)setExitNameDisplayString:(NSString *)arg1 ;
-(unsigned long long)entranceZoomNamesCount;
-(BOOL)hasMuid;
-(NSMutableArray *)exitZoomNames;
-(id)entranceZoomNameAtIndex:(unsigned long long)arg1 ;
-(unsigned)accessPointIndex;
-(void)setHasAccessPointIndex:(BOOL)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(void)addEntranceZoomName:(id)arg1 ;
-(void)setAccessPointIndex:(unsigned)arg1 ;
-(BOOL)hasStationIndex;
-(NSString *)entranceNameDisplayString;
-(unsigned long long)muid;
-(void)setEntranceNameDisplayString:(NSString *)arg1 ;
-(unsigned long long)exitZoomNamesCount;
-(void)setMuid:(unsigned long long)arg1 ;
-(id)exitZoomNameAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

