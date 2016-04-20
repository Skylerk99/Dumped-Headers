/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, NSLock;

@interface GEOGeocodeRequester : NSObject {

	NSMapTable* _pendingBatchGeocodes;
	NSLock* _pendingGeocodesLock;

}
+(id)sharedGeocodeRequester;
-(void)dealloc;
-(id)init;
-(void)batchReverseGeocode:(id)arg1 success:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)cancelBatchReverseGeocode:(id)arg1 ;
@end

