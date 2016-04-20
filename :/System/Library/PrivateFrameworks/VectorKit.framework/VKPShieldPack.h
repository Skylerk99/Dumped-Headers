/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:42 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface VKPShieldPack : PBCodable <NSCopying> {

	NSMutableArray* _atlas;
	NSMutableArray* _shields;

}

@property (nonatomic,retain) NSMutableArray * atlas;                //@synthesize atlas=_atlas - In the implementation block
@property (nonatomic,retain) NSMutableArray * shields;              //@synthesize shields=_shields - In the implementation block
-(NSMutableArray *)shields;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)atlas;
-(id)atlasAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)atlasCount;
-(void)clearAtlas;
-(void)setAtlas:(NSMutableArray *)arg1 ;
-(void)addAtlas:(id)arg1 ;
-(void)addShields:(id)arg1 ;
-(unsigned long long)shieldsCount;
-(id)shieldsAtIndex:(unsigned long long)arg1 ;
-(void)clearShields;
-(void)setShields:(NSMutableArray *)arg1 ;
@end

