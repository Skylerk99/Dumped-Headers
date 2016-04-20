/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:06 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEORouteHypothesizerUpdaterDelegate <NSObject>
@optional
-(void)routeHypothesizerUpdaterDidArrive:(id)arg1;
-(void)routeHypothesizerUpdater:(id)arg1 faultedWithError:(id)arg2;
-(void)routeHypothesizerUpdater:(id)arg1 didChangeTravelState:(BOOL)arg2;

@required
-(void)routeHypothesizerUpdater:(id)arg1 willRequestNewRoute:(id)arg2;
-(void)routeHypothesizerUpdater:(id)arg1 receivedNewRoute:(id)arg2 request:(id)arg3 response:(id)arg4;

@end

