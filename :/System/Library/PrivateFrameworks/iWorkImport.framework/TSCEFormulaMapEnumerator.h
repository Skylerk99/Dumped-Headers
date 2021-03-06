/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:27 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCEFormulaMap;

@interface TSCEFormulaMapEnumerator : NSObject {

	TSCEFormulaMap* mFormulaMap;
	hash_map_iterator<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<const __CFUUID *, std::__1::vector<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula>, std::__1::allocator<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula> > > >, void *> *> >* mOwnersToFormulasIterator;
	wrap_iter<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula> *>* mFormulasForAnOwnerIterator;

}
-(id)initWithFormulaMap:(id)arg1 ;
-(TSCEFormula*)nextFormulaGettingOwner:(const _CFUUID*)arg1 cellCoordinate:(SCD_Struct_TS315*)arg2 ;
-(void)dealloc;
-(BOOL)hasNext;
@end

