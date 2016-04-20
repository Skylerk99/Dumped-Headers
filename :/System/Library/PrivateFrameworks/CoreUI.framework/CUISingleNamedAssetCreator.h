/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:16 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSString, NSMutableArray, CUIMutableCommonAssetStorage;

@interface CUISingleNamedAssetCreator : NSObject {

	NSString* _primaryName;
	unsigned long long _primaryIndex;
	NSMutableArray* _names;
	NSMutableArray* _generators;
	CUIMutableCommonAssetStorage* _store;

}

@property (assign) CUIMutableCommonAssetStorage * store;              //@synthesize store=_store - In the implementation block
@property (retain) NSString * primaryName;                            //@synthesize primaryName=_primaryName - In the implementation block
@property (assign) unsigned long long primaryIndex;                   //@synthesize primaryIndex=_primaryIndex - In the implementation block
@property (retain) NSMutableArray * names;                            //@synthesize names=_names - In the implementation block
@property (retain) NSMutableArray * generators;                       //@synthesize generators=_generators - In the implementation block
-(CUIMutableCommonAssetStorage *)store;
-(void)setStore:(CUIMutableCommonAssetStorage *)arg1 ;
-(NSString *)primaryName;
-(void)dealloc;
-(void)setGenerators:(NSMutableArray *)arg1 ;
-(NSMutableArray *)generators;
-(id)_defaultBaseKey;
-(void)_addImage:(CGImageRef)arg1 withBaseKey:(id)arg2 name:(id)arg3 ;
-(void)setPrimaryName:(NSString *)arg1 ;
-(void)setPrimaryIndex:(unsigned long long)arg1 ;
-(unsigned long long)primaryIndex;
-(id)_generatorForName:(id)arg1 ;
-(id)_flattenedImageBaseKey;
-(id)_radiosityImageBaseKey;
-(const renditionkeyfmt*)_keyFormat;
-(id)_keyDataFromKey:(const renditionkeytoken*)arg1 ;
-(void)_configureDefaultStorageParameters;
-(void)_finalizeNameIdentifiers;
-(BOOL)_extractFlattenedImages:(id*)arg1 ;
-(BOOL)_distillNameEntries:(id*)arg1 ;
-(BOOL)_distillRenditions:(id*)arg1 ;
-(id)initWithOutputURL:(id)arg1 versionString:(id)arg2 ;
-(void)addImage:(CGImageRef)arg1 withName:(id)arg2 ;
-(void)addLayerStackWithSize:(CGSize)arg1 stackData:(id)arg2 name:(id)arg3 ;
-(void)addLayerReference:(id)arg1 forImage:(CGImageRef)arg2 toLayerStackWithName:(id)arg3 ;
-(void)addFlattenedImage:(CGImageRef)arg1 forLayerStackWithName:(id)arg2 ;
-(BOOL)distillAndSave:(id*)arg1 ;
-(void)setNames:(NSMutableArray *)arg1 ;
-(NSMutableArray *)names;
@end

