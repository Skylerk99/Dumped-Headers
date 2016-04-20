/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface HDCodableTimestampedKeyValuePair : PBCodable <NSCopying> {

	double _numberDoubleValue;
	long long _numberIntValue;
	double _timestamp;
	NSData* _bytesValue;
	NSString* _key;
	NSString* _stringValue;
	SCD_Struct_HD28 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNumberIntValue; 
@property (assign,nonatomic) long long numberIntValue;               //@synthesize numberIntValue=_numberIntValue - In the implementation block
@property (assign,nonatomic) BOOL hasNumberDoubleValue; 
@property (assign,nonatomic) double numberDoubleValue;               //@synthesize numberDoubleValue=_numberDoubleValue - In the implementation block
@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                 //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) BOOL hasBytesValue; 
@property (nonatomic,retain) NSData * bytesValue;                    //@synthesize bytesValue=_bytesValue - In the implementation block
-(void)setValue:(id)arg1 ;
-(id)decodedValue;
-(void)setTimestampWithDate:(id)arg1 ;
-(id)initWithKey:(id)arg1 value:(id)arg2 timestamp:(id)arg3 ;
-(id)decodedTimestamp;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(NSString *)key;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)hasKey;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasStringValue;
-(void)setNumberIntValue:(long long)arg1 ;
-(void)setHasNumberIntValue:(BOOL)arg1 ;
-(BOOL)hasNumberIntValue;
-(void)setNumberDoubleValue:(double)arg1 ;
-(void)setHasNumberDoubleValue:(BOOL)arg1 ;
-(BOOL)hasNumberDoubleValue;
-(long long)numberIntValue;
-(double)numberDoubleValue;
-(void)setBytesValue:(NSData *)arg1 ;
-(BOOL)hasBytesValue;
-(NSData *)bytesValue;
-(BOOL)readFrom:(id)arg1 ;
@end

