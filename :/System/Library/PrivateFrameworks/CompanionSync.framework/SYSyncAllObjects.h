/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:55 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, SYMessageHeader, NSString;

@interface SYSyncAllObjects : PBCodable <NSCopying> {

	unsigned long long _version;
	NSMutableArray* _allObjects;
	SYMessageHeader* _header;
	NSString* _syncID;

}

@property (nonatomic,retain) SYMessageHeader * header;                 //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSString * syncID;                        //@synthesize syncID=_syncID - In the implementation block
@property (assign,nonatomic) unsigned long long version;               //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSMutableArray * allObjects;              //@synthesize allObjects=_allObjects - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSMutableArray *)allObjects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(void)setSyncID:(NSString *)arg1 ;
-(NSString *)syncID;
-(unsigned long long)allObjectsCount;
-(void)setAllObjects:(NSMutableArray *)arg1 ;
-(void)addAllObjects:(id)arg1 ;
-(void)clearAllObjects;
-(id)allObjectsAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(SYMessageHeader *)header;
@end

