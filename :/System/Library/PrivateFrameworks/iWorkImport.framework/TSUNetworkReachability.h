/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSUNetworkReachability : NSObject {

	SCNetworkReachabilityRef _reachabilityRef;
	BOOL _localWiFi;

}

@property (nonatomic,readonly) BOOL connectionRequired; 
@property (nonatomic,readonly) long long status; 
+(id)networkReachabilityWithHostName:(id)arg1 ;
+(id)networkReachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)networkReachabilityForDocumentResources;
+(id)networkReachabilityForInternetConnection;
+(id)networkReachabilityForLocalWiFi;
+(long long)networkReachabilityStatusForDocumentResources;
+(long long)networkReachabilityStatusForInternetConnection;
+(long long)networkReachabilityStatusForLocalWiFi;
-(id)initWithReachabilityRef:(SCNetworkReachabilityRef)arg1 ;
-(void)dealloc;
-(id)init;
-(long long)status;
-(long long)localWiFiStatusForFlags:(unsigned)arg1 ;
-(long long)networkStatusForFlags:(unsigned)arg1 ;
-(BOOL)connectionRequired;
@end

