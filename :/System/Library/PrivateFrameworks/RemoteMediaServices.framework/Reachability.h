/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
@class NSObject;

@interface Reachability : NSObject {

	BOOL _reachableOnWWAN;
	/*^block*/id _reachableBlock;
	/*^block*/id _unreachableBlock;
	SCNetworkReachabilityRef _reachabilityRef;
	NSObject*<OS_dispatch_queue> _reachabilitySerialQueue;
	id _reachabilityObject;

}

@property (nonatomic,copy) id reachableBlock;                                                   //@synthesize reachableBlock=_reachableBlock - In the implementation block
@property (nonatomic,copy) id unreachableBlock;                                                 //@synthesize unreachableBlock=_unreachableBlock - In the implementation block
@property (assign,nonatomic) BOOL reachableOnWWAN;                                              //@synthesize reachableOnWWAN=_reachableOnWWAN - In the implementation block
@property (assign,nonatomic) SCNetworkReachabilityRef reachabilityRef;                          //@synthesize reachabilityRef=_reachabilityRef - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> reachabilitySerialQueue;              //@synthesize reachabilitySerialQueue=_reachabilitySerialQueue - In the implementation block
@property (nonatomic,retain) id reachabilityObject;                                             //@synthesize reachabilityObject=_reachabilityObject - In the implementation block
+(id)reachabilityWithHostname:(id)arg1 ;
+(id)reachabilityWithAddress:(void*)arg1 ;
+(id)reachabilityForInternetConnection;
+(id)reachabilityForLocalWiFi;
+(id)reachabilityWithHostName:(id)arg1 ;
-(id)initWithReachabilityRef:(SCNetworkReachabilityRef)arg1 ;
-(void)setReachableOnWWAN:(BOOL)arg1 ;
-(void)setReachabilitySerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setReachableBlock:(id)arg1 ;
-(void)setUnreachableBlock:(id)arg1 ;
-(id)reachabilityObject;
-(NSObject*<OS_dispatch_queue>)reachabilitySerialQueue;
-(void)setReachabilityObject:(id)arg1 ;
-(BOOL)reachableOnWWAN;
-(BOOL)isReachableWithFlags:(unsigned)arg1 ;
-(BOOL)isReachableViaWiFi;
-(unsigned)reachabilityFlags;
-(id)reachableBlock;
-(id)unreachableBlock;
-(id)currentReachabilityFlags;
-(BOOL)isReachableViaWWAN;
-(BOOL)isConnectionOnDemand;
-(BOOL)isInterventionRequired;
-(void)dealloc;
-(id)description;
-(void)reachabilityChanged:(unsigned)arg1 ;
-(BOOL)isConnectionRequired;
-(BOOL)connectionRequired;
-(long long)currentReachabilityStatus;
-(BOOL)isReachable;
-(BOOL)startNotifier;
-(void)stopNotifier;
-(SCNetworkReachabilityRef)reachabilityRef;
-(void)setReachabilityRef:(SCNetworkReachabilityRef)arg1 ;
-(id)currentReachabilityString;
@end

