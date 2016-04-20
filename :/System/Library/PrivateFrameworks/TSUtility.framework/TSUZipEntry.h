/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TSUZipEntry : NSObject {

	BOOL _compressed;
	unsigned short _nameLength;
	unsigned short _extraFieldLength;
	unsigned _CRC;
	NSString* _name;
	unsigned long long _size;
	unsigned long long _compressedSize;
	unsigned long long _offset;

}

@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long size;                          //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned CRC;                                     //@synthesize CRC=_CRC - In the implementation block
@property (assign,getter=isCompressed,nonatomic) BOOL compressed;              //@synthesize compressed=_compressed - In the implementation block
@property (assign,nonatomic) unsigned long long compressedSize;                //@synthesize compressedSize=_compressedSize - In the implementation block
@property (assign,nonatomic) unsigned long long offset;                        //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned short nameLength;                        //@synthesize nameLength=_nameLength - In the implementation block
@property (assign,nonatomic) unsigned short extraFieldLength;                  //@synthesize extraFieldLength=_extraFieldLength - In the implementation block
-(void)setCRC:(unsigned)arg1 ;
-(void)setNameLength:(unsigned short)arg1 ;
-(void)setExtraFieldLength:(unsigned short)arg1 ;
-(unsigned)CRC;
-(unsigned short)nameLength;
-(unsigned short)extraFieldLength;
-(unsigned long long)size;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(void)setCompressed:(BOOL)arg1 ;
-(BOOL)isCompressed;
-(void)setCompressedSize:(unsigned long long)arg1 ;
-(unsigned long long)compressedSize;
@end

