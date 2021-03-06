/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:09 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLFileStats : NSObject
+(id)logStartDate;
+(id)logEndDate;
+(long long)fileSizeAtPath:(id)arg1 ;
+(id)tableCounts;
+(id)select:(id)arg1 from:(id)arg2 where:(id)arg3 ;
+(double)totalLogDuration;
+(id)cpuTimeForProcess:(id)arg1 ;
+(id)logStartDateFromTable:(id)arg1 ;
+(id)logEndDateFromTable:(id)arg1 ;
+(id)statsForFile:(id)arg1 ;
+(double)totalLogDurationFromTable:(id)arg1 where:(id)arg2 ;
@end

