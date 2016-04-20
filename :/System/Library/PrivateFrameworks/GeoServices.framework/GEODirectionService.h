/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:19 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEODirectionService : NSObject
+(id)sharedService;
-(id)ticketForDrivingRouteRecall:(id)arg1 waypoints:(id)arg2 maxRouteCount:(unsigned)arg3 routeAttributes:(id)arg4 feedback:(id)arg5 ;
-(id)ticketForWalkingRerouteFromLocation:(id)arg1 originalRoute:(id)arg2 stepIndex:(unsigned long long)arg3 ;
-(id)ticketForWalkingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 ;
-(id)ticketForTransitRerouteFromLocation:(id)arg1 originalRoute:(id)arg2 stepIndex:(unsigned long long)arg3 ;
-(id)ticketForTransitWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 ;
-(id)ticketForWalkingRouteRecall:(id)arg1 waypoints:(id)arg2 maxRouteCount:(unsigned)arg3 routeAttributes:(id)arg4 feedback:(id)arg5 ;
-(id)ticketForDrivingRerouteFromLocation:(id)arg1 originalRoute:(id)arg2 routeAttributes:(id)arg3 stepIndex:(unsigned long long)arg4 ;
-(id)ticketForTransitRouteRecall:(id)arg1 waypoints:(id)arg2 maxRouteCount:(unsigned)arg3 routeAttributes:(id)arg4 feedback:(id)arg5 ;
-(id)ticketForDrivingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 ;
@end

