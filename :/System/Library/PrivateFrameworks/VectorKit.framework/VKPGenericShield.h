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

@interface VKPGenericShield : PBCodable <NSCopying> {

	int _style;
	NSMutableArray* _variants;

}

@property (assign,nonatomic) int style;                              //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSMutableArray * variants;              //@synthesize variants=_variants - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)variants;
-(void)clearVariants;
-(void)setVariants:(NSMutableArray *)arg1 ;
-(unsigned long long)variantsCount;
-(id)variantAtIndex:(unsigned long long)arg1 ;
-(void)addVariant:(id)arg1 ;
@end

