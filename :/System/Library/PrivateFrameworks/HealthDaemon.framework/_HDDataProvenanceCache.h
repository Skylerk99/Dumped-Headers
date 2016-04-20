/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDHealthDaemon;
@class HDDataProvenanceManager, HDSQLiteDatabase, NSMutableDictionary;

@interface _HDDataProvenanceCache : NSObject {

	id<HDHealthDaemon> _healthDaemon;
	HDDataProvenanceManager* _provenanceManager;
	HDSQLiteDatabase* _database;
	NSMutableDictionary* _provenanceByID;
	NSMutableDictionary* _codableSourcesByID;
	NSMutableDictionary* _deviceUUIDBytesByID;

}

@property (nonatomic,retain) id<HDHealthDaemon> healthDaemon;                          //@synthesize healthDaemon=_healthDaemon - In the implementation block
@property (nonatomic,retain) HDDataProvenanceManager * provenanceManager;              //@synthesize provenanceManager=_provenanceManager - In the implementation block
@property (nonatomic,retain) HDSQLiteDatabase * database;                              //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * provenanceByID;                     //@synthesize provenanceByID=_provenanceByID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * codableSourcesByID;                 //@synthesize codableSourcesByID=_codableSourcesByID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deviceUUIDBytesByID;                //@synthesize deviceUUIDBytesByID=_deviceUUIDBytesByID - In the implementation block
-(id<HDHealthDaemon>)healthDaemon;
-(void)setHealthDaemon:(id<HDHealthDaemon>)arg1 ;
-(void)setDatabase:(HDSQLiteDatabase *)arg1 ;
-(id)initWithHealthDaemon:(id)arg1 database:(id)arg2 ;
-(id)provenanceWithID:(long long)arg1 ;
-(id)codableSourceWithProvenance:(id)arg1 ;
-(id)deviceUUIDBytesWithProvenance:(id)arg1 ;
-(HDDataProvenanceManager *)provenanceManager;
-(void)setProvenanceManager:(HDDataProvenanceManager *)arg1 ;
-(NSMutableDictionary *)provenanceByID;
-(void)setProvenanceByID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)codableSourcesByID;
-(void)setCodableSourcesByID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)deviceUUIDBytesByID;
-(void)setDeviceUUIDBytesByID:(NSMutableDictionary *)arg1 ;
-(HDSQLiteDatabase *)database;
@end

