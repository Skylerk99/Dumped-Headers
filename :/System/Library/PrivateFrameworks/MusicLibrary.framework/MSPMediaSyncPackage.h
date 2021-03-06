/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MSPMediaSyncError, MSPMediaSyncHeader, MSPMediaSyncOperation;

@interface MSPMediaSyncPackage : PBCodable <NSCopying> {

	MSPMediaSyncError* _error;
	MSPMediaSyncHeader* _header;
	MSPMediaSyncOperation* _syncOperation;
	int _type;
	BOOL _lastPackage;
	SCD_Struct_MI1 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasLastPackage; 
@property (assign,nonatomic) BOOL lastPackage;                                   //@synthesize lastPackage=_lastPackage - In the implementation block
@property (nonatomic,readonly) BOOL hasHeader; 
@property (nonatomic,retain) MSPMediaSyncHeader * header;                        //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncOperation; 
@property (nonatomic,retain) MSPMediaSyncOperation * syncOperation;              //@synthesize syncOperation=_syncOperation - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) MSPMediaSyncError * error;                          //@synthesize error=_error - In the implementation block
-(MSPMediaSyncError *)error;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(void)setSyncOperation:(MSPMediaSyncOperation *)arg1 ;
-(BOOL)lastPackage;
-(void)setLastPackage:(BOOL)arg1 ;
-(void)setHasLastPackage:(BOOL)arg1 ;
-(BOOL)hasLastPackage;
-(BOOL)hasSyncOperation;
-(MSPMediaSyncOperation *)syncOperation;
-(void)setError:(MSPMediaSyncError *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHeader:(MSPMediaSyncHeader *)arg1 ;
-(MSPMediaSyncHeader *)header;
-(BOOL)hasType;
-(BOOL)hasHeader;
-(BOOL)hasError;
@end

