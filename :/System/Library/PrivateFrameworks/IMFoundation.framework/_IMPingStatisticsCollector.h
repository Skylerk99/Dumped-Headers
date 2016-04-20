/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:51 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class _IMPingPacketData, NSMutableArray, NSMutableString, IMPingStatistics;

@interface _IMPingStatisticsCollector : NSObject {

	_IMPingPacketData* _timestampArray[160];
	NSMutableArray* _roundTriptimes;
	NSMutableString* _stringToWriteToFile;
	IMPingStatistics* _stats;

}
-(void)dealloc;
-(id)init;
-(id)pingStats;
-(double)_computeMedianTime:(id)arg1 ;
-(double)_computeStandardDeviation:(id)arg1 numPings:(int)arg2 averageRTT:(double)arg3 ;
-(void)addEchoPacket:(int)arg1 packetTimestamp:(timeval)arg2 error:(int)arg3 ;
-(timeval)timeSentForPacket:(int)arg1 ;
-(void)addEchoReplyPacket:(int)arg1 ;
-(void)timeoutOldSequenceNumbers:(double)arg1 ;
-(BOOL)logStatsToFile:(id)arg1 error:(id*)arg2 ;
-(id)pingStatsForLastNSeconds:(double)arg1 ;
@end

