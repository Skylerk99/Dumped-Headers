/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoAudioControl/NanoAudioControl-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NACVolumeValueMessage : PBCodable <NSCopying> {

	NSString* _category;
	float _volumeValue;
	SCD_Struct_NA1 _has;

}

@property (assign,nonatomic) BOOL hasVolumeValue; 
@property (assign,nonatomic) float volumeValue;                //@synthesize volumeValue=_volumeValue - In the implementation block
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) NSString * category;              //@synthesize category=_category - In the implementation block
-(void)setVolumeValue:(float)arg1 ;
-(float)volumeValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasCategory;
-(void)setHasVolumeValue:(BOOL)arg1 ;
-(BOOL)hasVolumeValue;
-(BOOL)readFrom:(id)arg1 ;
@end

