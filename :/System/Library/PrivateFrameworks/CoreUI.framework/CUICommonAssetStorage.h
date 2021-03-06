/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:15 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSData, NSSet;

@interface CUICommonAssetStorage : NSObject {

	carheader* _header;
	renditionkeyfmt* _keyfmt;
	void* _imagedb;
	void* _colordb;
	void* _fontdb;
	void* _fontsizedb;
	void* _zcglyphdb;
	void* _zcbezeldb;
	void* _facetKeysdb;
	NSData* _globals;
	BOOL _swap;
	NSSet* _externalTags;

}
+(void)initialize;
-(void)dealloc;
-(id)description;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)path;
-(id)initWithPath:(id)arg1 ;
-(id)uuid;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)assetExistsForKey:(id)arg1 ;
-(id)renditionNameForKeyList:(renditionkeytoken*)arg1 ;
-(unsigned)colorSpaceID;
-(const renditionkeyfmt*)keyFormat;
-(long long)maximumRenditionKeyTokenCount;
-(BOOL)usesCUISystemThemeRenditionKey;
-(id)zeroCodeGlyphList;
-(id)initWithPath:(id)arg1 forWriting:(BOOL)arg2 ;
-(BOOL)_commonInitWithStorage:(BOMStorageRef)arg1 forWritting:(BOOL)arg2 ;
-(void)_initDefaultHeaderVersion:(double)arg1 versionString:(const char*)arg2 ;
-(void)_swapHeader;
-(void)_bringHeaderInfoUpToDate;
-(void)_swapKeyFormat;
-(long long)_storagefileTimestamp;
-(BOOL)assetExistsForKeyData:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)assetKeysMatchingBlock:(/*^block*/id)arg1 ;
-(BOOL)swapped;
-(void)_swapRenditionKeyArray:(unsigned short*)arg1 ;
-(renditionkeytoken)_swapRenditionKeyToken:(renditionkeytoken)arg1 ;
-(void)_swapZeroCodeInformation:(SCD_Struct_CU16*)arg1 ;
-(id)_zeroCodeListFromTree:(const void*)arg1 ;
-(const FontValue*)_fontValueForFontType:(id)arg1 ;
-(unsigned)storageVersion;
-(unsigned)coreuiVersion;
-(long long)storageTimestamp;
-(int)keySemantics;
-(id)keyFormatData;
-(id)catalogGlobalData;
-(unsigned)renditionCount;
-(unsigned)associatedChecksum;
-(id)assetForKey:(id)arg1 ;
-(id)allAssetKeys;
-(const renditionkeytoken*)renditionKeyForName:(const char*)arg1 hotSpot:(CGPoint*)arg2 ;
-(id)allRenditionNames;
-(id)zeroCodeBezelList;
-(BOOL)getColor:(colordef*)arg1 forName:(const char*)arg2 ;
-(BOOL)hasColorForName:(const char*)arg1 ;
-(BOOL)getFontName:(id*)arg1 baselineOffset:(float*)arg2 forFontType:(id)arg3 ;
-(BOOL)getBaselineOffset:(float*)arg1 forFontType:(id)arg2 ;
-(float)fontSizeForFontSizeType:(id)arg1 ;
-(id)externalTags;
-(unsigned)schemaVersion;
-(void)finalize;
-(const char*)versionString;
@end

