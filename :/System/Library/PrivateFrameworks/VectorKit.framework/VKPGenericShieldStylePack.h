/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface VKPGenericShieldStylePack : PBCodable <NSCopying> {

	NSMutableArray* _genericShields;
	NSMutableArray* _textureAtlas;

}

@property (nonatomic,retain) NSMutableArray * textureAtlas;                //@synthesize textureAtlas=_textureAtlas - In the implementation block
@property (nonatomic,retain) NSMutableArray * genericShields;              //@synthesize genericShields=_genericShields - In the implementation block
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
-(NSMutableArray *)textureAtlas;
-(NSMutableArray *)genericShields;
-(unsigned long long)genericShieldsCount;
-(id)textureAtlasAtIndex:(unsigned long long)arg1 ;
-(id)genericShieldAtIndex:(unsigned long long)arg1 ;
-(void)addGenericShield:(id)arg1 ;
-(void)setGenericShields:(NSMutableArray *)arg1 ;
-(void)addTextureAtlas:(id)arg1 ;
-(void)setTextureAtlas:(NSMutableArray *)arg1 ;
-(void)clearTextureAtlas;
-(void)clearGenericShields;
-(unsigned long long)textureAtlasCount;
@end

