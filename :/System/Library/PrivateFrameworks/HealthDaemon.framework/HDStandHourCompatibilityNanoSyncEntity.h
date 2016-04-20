/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDNanoSyncEntity.h>

@interface HDStandHourCompatibilityNanoSyncEntity : NSObject <HDNanoSyncEntity>
+(long long)finalAnchorForNanoSyncRestoreWithStore:(id)arg1 nowDate:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(id)objectsForNanoSyncRestoreWithStore:(id)arg1 nowDate:(id)arg2 syncAnchorRange:(HDSyncAnchorRange)arg3 lastSyncAnchor:(long long*)arg4 healthDaemon:(id)arg5 error:(id*)arg6 ;
+(int)nanoSyncObjectType;
+(id)sampleTypesByAgeInDaysForNanoSyncRestore;
+(id)convertCategorySample:(id)arg1 ;
@end

