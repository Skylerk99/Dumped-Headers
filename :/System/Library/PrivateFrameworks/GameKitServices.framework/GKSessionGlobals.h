/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:50 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameKitServices/GameKitServices-Structs.h>
@interface GKSessionGlobals : NSObject {

	unsigned* _activePIDList;
	unsigned long long _activePIDListSize;
	unsigned long long _activePIDListCount;
	opaque_pthread_mutex_t _lock;

}
-(id)init;
-(void)lock;
-(void)unlock;
-(void)unregisterPID:(unsigned)arg1 ;
-(void)registerPID:(unsigned)arg1 ;
-(BOOL)hasActivePID:(unsigned)arg1 ;
@end

