/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:12 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSObject;

@interface GEOAltitudeManifestReserved : NSObject {

	map<unsigned int, _GEOAltitudeTriggerData, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, _GEOAltitudeTriggerData> > >* _reservedTriggerData;
	unsigned _reservedCurrentRegion;
	unsigned char _reservedTourServerType;
	NSObject*<OS_dispatch_queue> _reservedAccessQueue;

}
@end

