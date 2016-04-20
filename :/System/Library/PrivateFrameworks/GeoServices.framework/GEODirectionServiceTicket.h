/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:19 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEODirectionsRouteRequest, GEOComposedRoute, NSDictionary;


@protocol GEODirectionServiceTicket <NSObject>
@property (nonatomic,readonly) GEODirectionsRouteRequest * request; 
@property (nonatomic,readonly) BOOL isReroute; 
@property (nonatomic,readonly) GEOComposedRoute * originalRoute; 
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
@required
-(void)cancel;
-(GEODirectionsRouteRequest *)request;
-(GEOComposedRoute *)originalRoute;
-(NSDictionary *)responseUserInfo;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2;
-(BOOL)isReroute;

@end

