/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EKTravelLookupManager : NSObject
+(void)geocodeAddress:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
+(void)estimateGeolocationFromHistoricDevicePositionAtLocation:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
+(id)defaultManager;
-(void)_travelTimeWithStartCoordinate:(id)arg1 endCoordinate:(id)arg2 arrivalDate:(id)arg3 withRouteType:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)findCoordinatesForLocation:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)travelTimeFrom:(id)arg1 to:(id)arg2 arrivalDate:(id)arg3 withRouteType:(id)arg4 withCompletionBlock:(/*^block*/id)arg5 ;
-(void)_updateLocation:(id)arg1 withMapItem:(id)arg2 forRoute:(id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)travelTimeFrom:(id)arg1 to:(id)arg2 arrivalDate:(id)arg3 withRouteTypes:(id)arg4 withCompletionBlock:(/*^block*/id)arg5 ;
@end

