/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:54 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYPeer, SYVectorClock;

@interface SYMessageHeader : PBCodable <NSCopying> {

	unsigned long long _sequenceNumber;
	double _timeout;
	double _timestamp;
	SYPeer* _sender;
	SYVectorClock* _state;
	unsigned _version;
	SCD_Struct_SY6 _has;

}

@property (assign,nonatomic) double timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) SYPeer * sender;                                //@synthesize sender=_sender - In the implementation block
@property (nonatomic,retain) SYVectorClock * state;                          //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned version;                               //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned long long sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) BOOL hasTimeout; 
@property (assign,nonatomic) double timeout;                                 //@synthesize timeout=_timeout - In the implementation block
-(double)timeout;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(SYVectorClock *)state;
-(void)setState:(SYVectorClock *)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SYPeer *)sender;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(void)setSender:(SYPeer *)arg1 ;
-(void)setHasTimeout:(BOOL)arg1 ;
-(BOOL)hasTimeout;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(unsigned long long)sequenceNumber;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

