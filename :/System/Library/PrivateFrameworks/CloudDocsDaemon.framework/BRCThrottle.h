/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCThrottleBase.h>

@class NSMutableDictionary, BRCMinHeap;

@interface BRCThrottle : BRCThrottleBase {

	NSMutableDictionary* _retryCounters;
	BRCMinHeap* _retryHeap;

}
+(long long)throttleHashFormat:(id)arg1 ;
+(long long)throttleHashBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(void)incrementRetryCount:(long long)arg1 ;
-(long long)nsecsToNextRetry:(long long)arg1 now:(long long)arg2 ;
-(id)initWithName:(id)arg1 andParameters:(id)arg2 ;
-(void)_cleanupStaleCounters:(long long)arg1 ;
-(void)logFirstBackoffTimes:(unsigned)arg1 ;
@end

