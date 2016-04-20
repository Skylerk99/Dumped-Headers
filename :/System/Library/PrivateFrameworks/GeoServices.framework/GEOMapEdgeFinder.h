/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:12 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder, NSMutableSet, GEOMapAccess;

@interface GEOMapEdgeFinder : GEOMapRequest {

	GEOMapTileFinder* _tileFinder;
	SCD_Struct_GE16 _centerPoint;
	double _mapRadius;
	/*^block*/id _edgeHandler;
	NSMutableSet* _edgeBuilders;

}

@property (nonatomic,readonly) GEOMapAccess * map; 
@property (nonatomic,copy) id edgeHandler;                      //@synthesize edgeHandler=_edgeHandler - In the implementation block
-(void)cancel;
-(void)dealloc;
-(BOOL)_checkEdgeForDuplicates:(const shared_ptr<geo::MapEdge>*)arg1 ;
-(void)_buildersInTile:(id)arg1 localPoint:(const Matrix<float, 2, 1>*)arg2 localRadiusSqr:(float)arg3 localSearch:(const Box<float, 2>*)arg4 handler:(/*^block*/id)arg5 ;
-(id)initWithMap:(id)arg1 center:(SCD_Struct_GE16)arg2 radius:(double)arg3 ;
-(id)edgeHandler;
-(void)setEdgeHandler:(id)arg1 ;
-(void)findEdges:(/*^block*/id)arg1 ;
-(GEOMapAccess *)map;
@end

