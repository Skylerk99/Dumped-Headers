/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:15 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSMutableArray, NSLock, NSObject;

@interface _GEOURLManifestListener : NSObject {

	NSMutableArray* _handlers;
	NSLock* _lock;
	NSObject*<OS_dispatch_source> _timeoutTimer;

}
+(id)sharedListener;
-(void)dealloc;
-(id)init;
-(void)waitForManifestWithHandler:(/*^block*/id)arg1 ;
-(void)_finish:(BOOL)arg1 ;
@end

