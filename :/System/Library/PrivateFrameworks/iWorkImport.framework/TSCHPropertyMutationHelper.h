/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:29 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSCHPropertyMutationHelper : NSObject
+(id)convertToStyleSwapTuplesForStyleOwner:(id)arg1 styleSwapType:(int)arg2 nonStyleSwapType:(int)arg3 index:(unsigned long long)arg4 fromMutations:(id)arg5 forImport:(BOOL)arg6 withOptionalStyleValueConversionBlock:(/*^block*/id)arg7 ;
+(int)specificMutationPropertyForGeneric:(int)arg1 styleOwner:(id)arg2 allowSpecificProperties:(BOOL)arg3 ;
+(void)applyMutations:(id)arg1 forImport:(BOOL)arg2 forStyleOwner:(id)arg3 withNonStylePropertyList:(id)arg4 toStylePropertyMap:(id)arg5 andNonStylePropertyMap:(id)arg6 ;
+(int)safe_specificMutationPropertyForGeneric:(int)arg1 styleOwner:(id)arg2 allowSpecificProperties:(BOOL)arg3 ;
+(id)styleSwapTuplesFromMutationTuples:(id)arg1 forImport:(BOOL)arg2 ;
+(void)setValue:(id)arg1 forProperty:(int)arg2 ofStyleOwner:(id)arg3 ;
-(id)init;
@end

