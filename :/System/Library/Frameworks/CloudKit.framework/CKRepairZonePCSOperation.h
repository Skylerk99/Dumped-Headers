/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:58 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray;

@interface CKRepairZonePCSOperation : CKDatabaseOperation {

	NSArray* _zoneIDs;
	/*^block*/id _zoneRepairedBlock;

}

@property (nonatomic,retain) NSArray * zoneIDs;               //@synthesize zoneIDs=_zoneIDs - In the implementation block
@property (nonatomic,copy) id zoneRepairedBlock;              //@synthesize zoneRepairedBlock=_zoneRepairedBlock - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(id)zoneRepairedBlock;
-(id)initWithZoneIDsToRepair:(id)arg1 ;
-(void)setZoneRepairedBlock:(id)arg1 ;
-(NSArray *)zoneIDs;
-(unsigned long long)activityStart;
-(void)setZoneIDs:(NSArray *)arg1 ;
@end

