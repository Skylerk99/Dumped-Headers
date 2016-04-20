/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:15 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDate;

@interface MBSnapshot : NSObject <NSCopying, NSCoding> {

	unsigned long long _snapshotID;
	NSString* _snapshotUUID;
	NSString* _deviceName;
	NSDate* _date;
	int _state;
	BOOL _isCompatible;
	NSString* _systemVersion;
	unsigned long long _quotaReserved;

}

@property (nonatomic,readonly) unsigned long long snapshotID;                 //@synthesize snapshotID=_snapshotID - In the implementation block
@property (nonatomic,readonly) NSString * snapshotUUID;                       //@synthesize snapshotUUID=_snapshotUUID - In the implementation block
@property (nonatomic,readonly) NSString * deviceName;                         //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                 //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) int state;                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL isCompatible;                             //@synthesize isCompatible=_isCompatible - In the implementation block
@property (nonatomic,readonly) NSString * systemVersion;                      //@synthesize systemVersion=_systemVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long quotaReserved;              //@synthesize quotaReserved=_quotaReserved - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(int)state;
-(NSDate *)date;
-(NSString *)systemVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)deviceName;
-(id)initWithSnapshotID:(unsigned long long)arg1 snapshotUUID:(id)arg2 deviceName:(id)arg3 date:(id)arg4 state:(int)arg5 isCompatible:(BOOL)arg6 systemVersion:(id)arg7 quotaReserved:(unsigned long long)arg8 ;
-(id)initWithSnapshotID:(unsigned long long)arg1 deviceName:(id)arg2 date:(id)arg3 state:(int)arg4 isCompatible:(BOOL)arg5 systemVersion:(id)arg6 quotaReserved:(unsigned long long)arg7 ;
-(id)initWithSnapshotUUID:(id)arg1 snapshotID:(unsigned long long)arg2 deviceName:(id)arg3 date:(id)arg4 state:(int)arg5 isCompatible:(BOOL)arg6 systemVersion:(id)arg7 quotaReserved:(unsigned long long)arg8 ;
-(unsigned long long)snapshotID;
-(NSString *)snapshotUUID;
-(BOOL)isCompatible;
-(unsigned long long)quotaReserved;
@end

