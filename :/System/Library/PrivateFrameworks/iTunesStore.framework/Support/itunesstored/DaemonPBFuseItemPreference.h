/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface DaemonPBFuseItemPreference : PBCodable <NSCopying> {

	long long _adamId;
	long long _createdOffsetMillis;
	NSString* _externalId;
	int _preference;
	int _preferenceType;
	SCD_Struct_Da9 _has;

}

@property (assign,nonatomic) int preference;                             //@synthesize preference=_preference - In the implementation block
@property (assign,nonatomic) BOOL hasAdamId; 
@property (assign,nonatomic) long long adamId;                           //@synthesize adamId=_adamId - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalId; 
@property (nonatomic,retain) NSString * externalId;                      //@synthesize externalId=_externalId - In the implementation block
@property (assign,nonatomic) BOOL hasCreatedOffsetMillis; 
@property (assign,nonatomic) long long createdOffsetMillis;              //@synthesize createdOffsetMillis=_createdOffsetMillis - In the implementation block
@property (assign,nonatomic) BOOL hasPreferenceType; 
@property (assign,nonatomic) int preferenceType;                         //@synthesize preferenceType=_preferenceType - In the implementation block
-(void)setExternalId:(NSString *)arg1 ;
-(void)setPreference:(int)arg1 ;
-(void)setPreferenceType:(int)arg1 ;
-(void)setCreatedOffsetMillis:(long long)arg1 ;
-(int)preferenceType;
-(int)preference;
-(void)setHasAdamId:(BOOL)arg1 ;
-(BOOL)hasAdamId;
-(BOOL)hasExternalId;
-(void)setHasCreatedOffsetMillis:(BOOL)arg1 ;
-(BOOL)hasCreatedOffsetMillis;
-(void)setHasPreferenceType:(BOOL)arg1 ;
-(BOOL)hasPreferenceType;
-(long long)createdOffsetMillis;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)externalId;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(long long)adamId;
-(void)setAdamId:(long long)arg1 ;
@end

