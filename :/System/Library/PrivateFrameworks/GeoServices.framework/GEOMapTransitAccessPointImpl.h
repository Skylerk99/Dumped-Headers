/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:15 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapTransitAccessPoint.h>

@protocol GEOMapTransitStation;
@class GEOMapAccess, NSString;

@interface GEOMapTransitAccessPointImpl : NSObject <GEOMapTransitAccessPoint> {

	GEOMapAccess* _map;
	shared_ptr<geo::MapAccessPointFeature>* _accessPoint;
	id<GEOMapTransitStation> _station;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_GE16 coordinate; 
@property (nonatomic,readonly) unsigned long long transitID; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) double boundingRadius; 
@property (nonatomic,readonly) SCD_Struct_GE57 boundingRect; 
@property (nonatomic,readonly) SCD_Struct_GE16* polygonPoints; 
@property (nonatomic,readonly) long long polygonPointsCount; 
@property (nonatomic,readonly) unsigned long long stationID; 
@property (nonatomic,readonly) double groundRadius; 
@property (nonatomic,readonly) unsigned char entranceExitType; 
@property (nonatomic,readonly) unsigned short accessType; 
-(SCD_Struct_GE16)coordinate;
-(void)dealloc;
-(SCD_Struct_GE57)boundingRect;
-(unsigned long long)transitID;
-(unsigned char)entranceExitType;
-(long long)polygonPointsCount;
-(SCD_Struct_GE16*)polygonPoints;
-(unsigned short)accessType;
-(NSString *)internalName;
-(id)findStops:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(double)groundRadius;
-(double)boundingRadius;
-(id)findStation:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findGeometryWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)stationID;
-(id)initWithMap:(id)arg1 accessPoint:(shared_ptr<geo::MapAccessPointFeature>*)arg2 ;
-(double)distanceInMetersFrom:(SCD_Struct_GE16)arg1 ;
-(id)findAccessPoints:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

