/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, NSLock;

@interface GEOLocationShiftRequester : NSObject {

	NSMapTable* _pendingRequests;
	NSLock* _pendingRequestsLock;
	NSMapTable* _providers;

}
+(id)sharedRequester;
-(void)dealloc;
-(id)init;
-(void)cancelRequest:(id)arg1 ;
-(void)registerProvider:(Class)arg1 ;
-(void)startRequest:(id)arg1 finished:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(Class)classForProviderID:(short)arg1 ;
@end

