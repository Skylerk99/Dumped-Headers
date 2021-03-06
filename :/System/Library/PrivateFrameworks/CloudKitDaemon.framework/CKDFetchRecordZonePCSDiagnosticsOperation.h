/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:49 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKPCSDiagnosticInformation, NSString, NSDictionary, NSArray;

@interface CKDFetchRecordZonePCSDiagnosticsOperation : CKDDatabaseOperation {

	CKPCSDiagnosticInformation* _pcsDiagnosticInfo;
	NSString* _identityStatus;
	NSDictionary* _invalidPCSByZoneID;
	NSDictionary* _validPCSByZoneID;
	NSArray* _recordZoneIDs;

}

@property (nonatomic,retain) CKPCSDiagnosticInformation * pcsDiagnosticInfo;              //@synthesize pcsDiagnosticInfo=_pcsDiagnosticInfo - In the implementation block
@property (nonatomic,retain) NSString * identityStatus;                                   //@synthesize identityStatus=_identityStatus - In the implementation block
@property (nonatomic,retain) NSDictionary * invalidPCSByZoneID;                           //@synthesize invalidPCSByZoneID=_invalidPCSByZoneID - In the implementation block
@property (nonatomic,retain) NSDictionary * validPCSByZoneID;                             //@synthesize validPCSByZoneID=_validPCSByZoneID - In the implementation block
@property (nonatomic,retain) NSArray * recordZoneIDs;                                     //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(CKPCSDiagnosticInformation *)pcsDiagnosticInfo;
-(unsigned long long)activityStart;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(NSArray *)recordZoneIDs;
-(void)_handleRecordZoneFetch:(id)arg1 zoneID:(id)arg2 responseCode:(id)arg3 ;
-(void)setPcsDiagnosticInfo:(CKPCSDiagnosticInformation *)arg1 ;
-(NSString *)identityStatus;
-(void)setIdentityStatus:(NSString *)arg1 ;
-(NSDictionary *)invalidPCSByZoneID;
-(void)setInvalidPCSByZoneID:(NSDictionary *)arg1 ;
-(NSDictionary *)validPCSByZoneID;
-(void)setValidPCSByZoneID:(NSDictionary *)arg1 ;
@end

