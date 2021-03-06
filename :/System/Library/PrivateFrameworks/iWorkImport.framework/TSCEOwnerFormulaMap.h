/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:27 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCEOwnerFormulaMap : NSObject {

	vector<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula>, std::__1::allocator<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula> > >* mFormulas;
	vector<TSUColumnRowCoordinate, std::__1::allocator<TSUColumnRowCoordinate> >* mNonFormulaCells;

}
-(void)addFormula:(TSCEFormula*)arg1 atCellCoordinate:(SCD_Struct_TS315)arg2 ;
-(TSCEFormula*)formulaAtIndex:(unsigned long long)arg1 outCellCoordinate:(SCD_Struct_TS315*)arg2 ;
-(void)saveToArchive:(OwnerFormulaMapArchive*)arg1 archiver:(id)arg2 ;
-(unsigned long long)count;
-(id)description;
-(id)initWithArchive:(const OwnerFormulaMapArchive*)arg1 ;
@end

