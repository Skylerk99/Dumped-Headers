/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:49 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData;

@interface CKDPRecordRetrieveChangesResponse : PBCodable <NSCopying> {

	NSMutableArray* _changedRecords;
	NSMutableArray* _changedShares;
	NSData* _clientChangeToken;
	int _status;
	NSData* _syncContinuationToken;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,retain) NSMutableArray * changedRecords;              //@synthesize changedRecords=_changedRecords - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncContinuationToken; 
@property (nonatomic,retain) NSData * syncContinuationToken;               //@synthesize syncContinuationToken=_syncContinuationToken - In the implementation block
@property (nonatomic,readonly) BOOL hasClientChangeToken; 
@property (nonatomic,retain) NSData * clientChangeToken;                   //@synthesize clientChangeToken=_clientChangeToken - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                   //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSMutableArray * changedShares;               //@synthesize changedShares=_changedShares - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setClientChangeToken:(NSData *)arg1 ;
-(BOOL)hasClientChangeToken;
-(NSData *)clientChangeToken;
-(void)addChangedRecord:(id)arg1 ;
-(void)addChangedShare:(id)arg1 ;
-(unsigned long long)changedRecordsCount;
-(void)clearChangedRecords;
-(id)changedRecordAtIndex:(unsigned long long)arg1 ;
-(void)setSyncContinuationToken:(NSData *)arg1 ;
-(unsigned long long)changedSharesCount;
-(void)clearChangedShares;
-(id)changedShareAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSyncContinuationToken;
-(NSMutableArray *)changedRecords;
-(void)setChangedRecords:(NSMutableArray *)arg1 ;
-(NSData *)syncContinuationToken;
-(NSMutableArray *)changedShares;
-(void)setChangedShares:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasStatus;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

