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

@class GEOLatLng, GEOMapItemStorage, GEOWaypointTyped;

@interface GEOComposedWaypoint : PBCodable <NSCopying> {

	GEOLatLng* _latLng;
	GEOMapItemStorage* _mapItemStorage;
	GEOWaypointTyped* _waypoint;

}

@property (nonatomic,readonly) BOOL hasWaypoint; 
@property (nonatomic,retain) GEOWaypointTyped * waypoint;                     //@synthesize waypoint=_waypoint - In the implementation block
@property (nonatomic,readonly) BOOL hasMapItemStorage; 
@property (nonatomic,retain) GEOMapItemStorage * mapItemStorage;              //@synthesize mapItemStorage=_mapItemStorage - In the implementation block
@property (nonatomic,readonly) BOOL hasLatLng; 
@property (nonatomic,retain) GEOLatLng * latLng;                              //@synthesize latLng=_latLng - In the implementation block
+(void)composedWaypointForMapItem:(id)arg1 forQuickETA:(BOOL)arg2 traits:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
+(id)composedWaypointForCurrentLocation:(id)arg1 traits:(id)arg2 completionHandler:(/*^block*/id)arg3 networkActivityHandler:(/*^block*/id)arg4 ;
+(id)composedWaypointForSearchString:(id)arg1 completionItem:(id)arg2 traits:(id)arg3 clientAttributes:(id)arg4 completionHandler:(/*^block*/id)arg5 networkActivityHandler:(/*^block*/id)arg6 ;
+(id)composedWaypointForAddressString:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
+(id)composedWaypointForIncompleteMapItem:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
+(id)composedWaypointForMapItem:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
+(id)composedWaypointForLocation:(id)arg1 mapItem:(id)arg2 traits:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
+(id)composedWaypointForTransitID:(unsigned long long)arg1 coordinate:(SCD_Struct_GE16)arg2 isCurrentLocation:(BOOL)arg3 traits:(id)arg4 clientAttributes:(id)arg5 completionHandler:(/*^block*/id)arg6 networkActivityHandler:(/*^block*/id)arg7 ;
+(id)composedWaypointForMapItemToRefine:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
+(void)composedWaypointForMapServiceResponse:(id)arg1 clientAttributes:(id)arg2 error:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)composedWaypointForID:(unsigned long long)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
-(double)distanceToWaypoint:(id)arg1 ;
-(id)timezone;
-(id)geoMapItem;
-(BOOL)isCurrentLocation;
-(void)setIsCurrentLocation:(BOOL)arg1 ;
-(id)initWithMapItem:(id)arg1 ;
-(id)initWithLocation:(id)arg1 isCurrentLocation:(BOOL)arg2 ;
-(BOOL)isLocationWaypointType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOLatLng *)latLng;
-(void)setLatLng:(GEOLatLng *)arg1 ;
-(BOOL)hasLatLng;
-(void)setWaypoint:(GEOWaypointTyped *)arg1 ;
-(GEOWaypointTyped *)waypoint;
-(void)setMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(GEOMapItemStorage *)mapItemStorage;
-(BOOL)hasWaypoint;
-(BOOL)hasMapItemStorage;
-(BOOL)readFrom:(id)arg1 ;
@end

