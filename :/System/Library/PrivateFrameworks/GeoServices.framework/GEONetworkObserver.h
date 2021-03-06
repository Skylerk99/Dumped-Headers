/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSLock;

@interface GEONetworkObserver : NSObject {

	NSLock* _lock;
	unsigned _networkReachability;
	SCNetworkReachabilityRef _networkReach;
	CFDictionaryRef _networkObservers;
	BOOL _networkNotified;
	BOOL _networkReachable;

}
+(id)sharedNetworkObserver;
+(id)allocWithZone:(NSZone*)arg1 ;
-(BOOL)isNetworkReachable;
-(void)dealloc;
-(id)init;
-(void)_networkReachableFirstCallBack:(id)arg1 ;
-(BOOL)isConnectionRequired;
-(void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2 ;
-(BOOL)isCellConnection;
-(void)_networkObserversInitialize;
-(void)initializeIfNecessary;
-(void)_networkReachableCallBack:(unsigned)arg1 ;
-(void)removeNetworkReachableObserver:(id)arg1 ;
@end

