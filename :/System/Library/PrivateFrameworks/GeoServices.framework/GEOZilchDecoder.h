/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:15 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequestManager.h>

@protocol OS_dispatch_queue, GEOMapAccessRestrictions;
@class NSObject;

@interface GEOZilchDecoder : GEOMapRequestManager {

	NSObject*<OS_dispatch_queue> _decoderQueue;
	NSObject*<OS_dispatch_queue> _requestQueue;
	mutex _lock;
	id<GEOMapAccessRestrictions> _mapAccessRestrictions;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> decoderQueue;                     //@synthesize decoderQueue=_decoderQueue - In the implementation block
@property (assign,nonatomic) id<GEOMapAccessRestrictions> mapAccessRestrictions;              //@synthesize mapAccessRestrictions=_mapAccessRestrictions - In the implementation block
+(BOOL)decodingSupported;
-(void)dealloc;
-(id)init;
-(id)decodeZilchMessage:(shared_ptr<zilch::Message>*)arg1 pathHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(id<GEOMapAccessRestrictions>)mapAccessRestrictions;
-(void)requestComplete:(id)arg1 ;
-(void)setRequestQueue:(id)arg1 ;
-(id)requestQueue;
-(NSObject*<OS_dispatch_queue>)decoderQueue;
-(void)trackRequest:(id)arg1 ;
-(void)setMapAccessRestrictions:(id<GEOMapAccessRestrictions>)arg1 ;
@end

