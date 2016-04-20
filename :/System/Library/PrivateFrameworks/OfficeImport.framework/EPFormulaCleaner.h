/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:46 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDProcessor.h>

@class EDSheet, EDFormula, EDName, EDRowBlocks, OITSUIntDictionary;

@interface EPFormulaCleaner : EDProcessor {

	EDSheet* mCurrentSheet;
	EDFormula* mFormula;
	EDFormula* mTokensToClean;
	EDName* mParentName;
	int mRowOffset;
	int mColumnOffset;
	EDRowBlocks* mBaseFormulaRowBlocks;
	OITSUIntDictionary* mNameArrayedTestCache;
	OITSUIntDictionary* mNameCircularReferenceTestCache;

}
-(void)reset;
-(void)reportWarning:(int)arg1 ;
-(void)cleanFormula:(id)arg1 sheet:(id)arg2 name:(id)arg3 ;
-(id)newFormulaToCleanFromSharedFormula:(id)arg1 ;
-(BOOL)cleanTokenAtIndex:(unsigned)arg1 tokenOffset:(int*)arg2 ;
-(BOOL)cleanArray:(unsigned)arg1 ;
-(BOOL)cleanRef:(unsigned)arg1 updateSheet:(BOOL)arg2 ;
-(BOOL)cleanArea:(unsigned)arg1 updateSheet:(BOOL)arg2 ;
-(BOOL)cleanName:(unsigned)arg1 tokenOffset:(int*)arg2 ;
-(BOOL)cleanNameX:(unsigned)arg1 tokenOffset:(int*)arg2 ;
-(BOOL)cleanRef3D:(unsigned)arg1 ;
-(BOOL)cleanArea3D:(unsigned)arg1 ;
-(BOOL)cleanFunc:(unsigned)arg1 ;
-(BOOL)cleanFuncVar:(unsigned)arg1 ;
-(BOOL)cleanUnion:(unsigned)arg1 ;
-(BOOL)cleanRange:(unsigned)arg1 tokenOffset:(int*)arg2 ;
-(void)addOffsetsToRow:(int*)arg1 rowRelative:(BOOL)arg2 column:(int*)arg3 columnRelative:(BOOL)arg4 ;
-(BOOL)isThereContentOutsideOfLassoBoundsForSheet:(id)arg1 rowMin:(int)arg2 rowMax:(int)arg3 columnMin:(int)arg4 columnMax:(int)arg5 ;
-(BOOL)isReferenceValidInLassoForRow:(int)arg1 rowRelative:(BOOL)arg2 column:(int)arg3 columnRelative:(BOOL)arg4 ;
-(void)updateWorksheet:(id)arg1 row:(int)arg2 column:(int)arg3 inDictionary:(id)arg4 ;
-(void)updateSheet:(id)arg1 row:(int)arg2 rowRelative:(BOOL)arg3 column:(int)arg4 columnRelative:(BOOL)arg5 ;
-(BOOL)isReferenceValidInLassoForSheet:(id)arg1 rowMin:(int)arg2 rowMinRelative:(BOOL)arg3 rowMax:(int)arg4 rowMaxRelative:(BOOL)arg5 columnMin:(int)arg6 columnMinRelative:(BOOL)arg7 columnMax:(int)arg8 columnMaxRelative:(BOOL)arg9 ;
-(void)updateSheet:(id)arg1 rowMin:(int)arg2 rowMinRelative:(BOOL)arg3 rowMax:(int)arg4 rowMaxRelative:(BOOL)arg5 columnMin:(int)arg6 columnMinRelative:(BOOL)arg7 columnMax:(int)arg8 columnMaxRelative:(BOOL)arg9 ;
-(BOOL)isLinkReferenceIndexSupported:(unsigned)arg1 allowExternal:(BOOL)arg2 ;
-(id)worksheetsFromLinkReferenceIndex:(unsigned)arg1 ;
-(BOOL)cleanName:(unsigned)arg1 nameIndex:(unsigned)arg2 sheetIndex:(unsigned long long)arg3 tokenOffset:(int*)arg4 ;
-(BOOL)checkSupportedAddInName:(id)arg1 externalLink:(BOOL)arg2 ;
-(BOOL)checkFunctionId:(int)arg1 tokenIndex:(unsigned)arg2 ;
-(unsigned)useEvaluationStackToGetParameter:(unsigned)arg1 tokenIndex:(unsigned)arg2 ;
-(BOOL)combineCellReferences:(unsigned)arg1 tokenOffset:(int*)arg2 ;
-(void)reportWarning:(int)arg1 parameter:(id)arg2 ;
-(BOOL)isArrayedFormulaSupported:(id)arg1 allowSimpleRanges:(BOOL)arg2 ;
-(BOOL)doesNameIndexContainCircularReferences:(unsigned)arg1 sheetIndex:(unsigned long long)arg2 previousNameIndexes:(set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >*)arg3 ;
-(void)applyMaxCellsInName:(id)arg1 ;
-(BOOL)useEvaluationStackToCheckFunctionId:(int)arg1 functionName:(id)arg2 tokenIndex:(unsigned)arg3 ;
-(id)useEvaluationStackToGetParameter:(unsigned)arg1 tokenIndex:(unsigned)arg2 allReferencesAllowed:(BOOL)arg3 success:(BOOL*)arg4 ;
-(int)useEvaluationStackToGetParameterTokenType:(unsigned)arg1 tokenIndex:(unsigned)arg2 success:(BOOL*)arg3 ;
-(id)worksheetFromLinkReferenceIndex:(unsigned)arg1 ;
-(BOOL)checkCustomFunction:(unsigned)arg1 ;
-(void)prepareToProcessFormula:(id)arg1 sheet:(id)arg2 name:(id)arg3 ;
-(void)dealloc;
-(BOOL)isObjectSupported:(id)arg1 ;
-(void)applyProcessorToObject:(id)arg1 sheet:(id)arg2 ;
-(void)cleanFormula:(id)arg1 name:(id)arg2 ;
-(void)cleanFormula:(id)arg1 sheet:(id)arg2 ;
@end

