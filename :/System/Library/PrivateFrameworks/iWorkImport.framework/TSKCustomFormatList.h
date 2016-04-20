/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, TSUNoCopyDictionary, TSUSparseArray, NSMutableSet;

@interface TSKCustomFormatList : TSPObject <NSCopying> {

	NSMutableDictionary* mFormatsByKeyDictionary;
	TSUNoCopyDictionary* mKeysByFormatDictionary;
	TSUNoCopyDictionary* mKeysByFormatWithNameStemMatching;
	TSUSparseArray* mKeysByIndex;
	TSUNoCopyDictionary* mIndexesByKey;
	NSMutableSet* mNamesList;
	BOOL mUpgrading;
	BOOL mUpgradingDone;
	BOOL mImporting;
	BOOL mImportingDone;

}

@property (assign,nonatomic) BOOL importing; 
@property (assign,nonatomic) BOOL upgrading; 
+(void)archiveKeys:(id)arg1 message:(RepeatedPtrField<TSP::UUID>*)arg2 ;
+(id)unarchiveKeys:(const RepeatedPtrField<TSP::UUID>*)arg1 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)setImporting:(BOOL)arg1 ;
-(void)setUpgrading:(BOOL)arg1 ;
-(id)customFormatForKey:(id)arg1 ;
-(id)addCustomFormat:(id)arg1 oldKey:(id)arg2 fuzzyNameMatching:(BOOL)arg3 ;
-(void)upgradeLegacyCustomTSUFormatStruct:(SCD_Struct_TS61*)arg1 ;
-(BOOL)importing;
-(void)p_setCustomFormat:(id)arg1 key:(id)arg2 legacyKey:(unsigned)arg3 ;
-(BOOL)upgrading;
-(id)p_keyForFormatUsingNameStem:(id)arg1 ;
-(id)p_newUniqueNameFromName:(id)arg1 ;
-(void)p_setCustomFormat:(id)arg1 key:(id)arg2 ;
-(void)removeCustomFormatForKey:(id)arg1 ;
-(id)keyForCustomFormat:(id)arg1 ;
-(id)addedKeysRelativeTo:(id)arg1 ;
-(BOOL)hasFormatNamed:(id)arg1 ;
-(unsigned long long)inspectorIndexForKey:(id)arg1 ;
-(id)keyForInspectorIndex:(unsigned long long)arg1 ;
-(void)removeCustomFormatsForKeys:(id)arg1 ;
-(void)updateCustomFormat:(id)arg1 oldKey:(id)arg2 ;
-(id)addImportedCustomFormat:(id)arg1 ;
-(void)addCustomFormatForUpgrade:(id)arg1 legacyKey:(unsigned)arg2 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(id)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithContext:(id)arg1 ;
@end

