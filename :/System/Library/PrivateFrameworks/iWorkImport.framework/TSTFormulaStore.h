/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:42 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCECalculationEngine, TSUSparseArray, TSCEOwnerFormulaMap;

@interface TSTFormulaStore : NSObject {

	CFUUIDRef _ownerID;
	TSCECalculationEngine* _calcEngine;
	TSUSparseArray* _formulas;
	unsigned long long _nextIndex;
	TSCEOwnerFormulaMap* _formulasForUndo;

}

@property (assign,nonatomic) CFUUIDRef formulaOwnerID; 
@property (nonatomic,retain) TSCECalculationEngine * calcEngine;                 //@synthesize calcEngine=_calcEngine - In the implementation block
@property (nonatomic,retain) TSCEOwnerFormulaMap * formulasForUndo;              //@synthesize formulasForUndo=_formulasForUndo - In the implementation block
+(SCD_Struct_TS315)coordFromIndex:(unsigned long long)arg1 ;
+(unsigned long long)indexFromCoord:(const SCD_Struct_TS315*)arg1 ;
-(CFUUIDRef)formulaOwnerID;
-(void)saveToArchive:(FormulaStoreArchive*)arg1 archiver:(id)arg2 ;
-(void)setFormulaOwnerID:(CFUUIDRef)arg1 ;
-(TSCECalculationEngine *)calcEngine;
-(void)setCalcEngine:(TSCECalculationEngine *)arg1 ;
-(TSCEOwnerFormulaMap *)formulasForUndo;
-(void)setFormulasForUndo:(TSCEOwnerFormulaMap *)arg1 ;
-(unsigned long long)reserveNextIndex;
-(void)clearFormulaAtIndex:(unsigned long long)arg1 ;
-(void)setFormula:(TSCEFormula*)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithOwnerID:(CFUUIDRef)arg1 ;
-(SCD_Struct_TS315)reserveNextCoordinate;
-(unsigned long long)maxIndex;
-(unsigned long long)markForRollback;
-(void)rollbackToMark:(unsigned long long)arg1 ;
-(unsigned long long)appendIndexedFormula:(TSCEFormula*)arg1 ;
-(void)registerAllFormulaToCalculationEngine;
-(id)initWithOwnerID:(CFUUIDRef)arg1 archive:(const FormulaStoreArchive*)arg2 unarchiver:(id)arg3 ;
-(void)foreach:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned long long)formulaCount;
-(const TSCEFormula*)formulaAtIndex:(unsigned long long)arg1 ;
@end

