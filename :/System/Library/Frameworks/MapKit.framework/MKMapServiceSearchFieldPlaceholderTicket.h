/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:53 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOMapServiceTraits;


@protocol MKMapServiceSearchFieldPlaceholderTicket <NSObject>
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@required
-(void)cancel;
-(GEOMapServiceTraits *)traits;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2;

@end

