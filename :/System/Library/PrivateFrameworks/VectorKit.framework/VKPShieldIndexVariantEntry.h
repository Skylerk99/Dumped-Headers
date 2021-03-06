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

@interface VKPShieldIndexVariantEntry : PBCodable <NSCopying> {

	NSMutableArray* _entries;
	NSMutableArray* _textEntries;
	int _variantType;
	SCD_Struct_VK533 _has;

}

@property (assign,nonatomic) BOOL hasVariantType; 
@property (assign,nonatomic) int variantType;                           //@synthesize variantType=_variantType - In the implementation block
@property (nonatomic,retain) NSMutableArray * entries;                  //@synthesize entries=_entries - In the implementation block
@property (nonatomic,retain) NSMutableArray * textEntries;              //@synthesize textEntries=_textEntries - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setVariantType:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)variantType;
-(NSMutableArray *)entries;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearEntries;
-(void)addEntries:(id)arg1 ;
-(unsigned long long)entriesCount;
-(void)setEntries:(NSMutableArray *)arg1 ;
-(id)entriesAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)textEntries;
-(void)setTextEntries:(NSMutableArray *)arg1 ;
-(void)setHasVariantType:(BOOL)arg1 ;
-(void)addTextEntries:(id)arg1 ;
-(BOOL)hasVariantType;
-(void)clearTextEntries;
-(unsigned long long)textEntriesCount;
-(id)textEntriesAtIndex:(unsigned long long)arg1 ;
@end

