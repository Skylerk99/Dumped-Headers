/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSTMergeAction : NSObject <NSCopying> {

	int _type;
	vector<TSTCellUIDRange, std::__1::allocator<TSTCellUIDRange> >* _uidRanges;
	vector<TSCEFormula, std::__1::allocator<TSCEFormula> >* _mergeFormulas;
	vector<unsigned long, std::__1::allocator<unsigned long> >* _mergeFormulaIndexes;

}

@property (assign,nonatomic) int type;                                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasMergeFormulas; 
@property (assign,nonatomic) const vector<TSCEFormula* mergeFormulas;                      //@synthesize mergeFormulas=_mergeFormulas - In the implementation block
@property (assign,nonatomic) const vector<unsigned long* mergeFormulaIndexes;              //@synthesize mergeFormulaIndexes=_mergeFormulaIndexes - In the implementation block
@property (assign,nonatomic) const vector<TSTCellUIDRange* uidRanges;                      //@synthesize uidRanges=_uidRanges - In the implementation block
+(id)stringForMergeType:(int)arg1 ;
+(TSCEFormula*)p_createFormulaForUIDRange:(TSTCellUIDRange*)arg1 inTable:(id)arg2 ;
+(TSTCellUIDRange*)cellUIDRangeFromMergeFormula:(const TSCEFormula*)arg1 ;
+(id)mergeActionForRemovingRanges:(const vector<TSTCellUIDRange, std::__1::allocator<TSTCellUIDRange> >*)arg1 inTable:(id)arg2 ;
+(id)mergeActionForInsertingRange:(const TSTCellUIDRange*)arg1 inTable:(id)arg2 ;
-(void)saveToArchive:(MergeOperationArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const MergeOperationArchive*)arg1 unarchiver:(id)arg2 ;
-(void)enumerateMergeFormulasUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithType:(int)arg1 uidRanges:(const vector<TSTCellUIDRange, std::__1::allocator<TSTCellUIDRange> >*)arg2 ;
-(void)addFormulaIndex:(unsigned long long)arg1 ;
-(BOOL)hasMergeFormulas;
-(const vector<TSCEFormula*)mergeFormulas;
-(void)verify;
-(const vector<TSTCellUIDRange*)uidRanges;
-(const vector<unsigned long*)mergeFormulaIndexes;
-(id)changeDescriptorForTable:(id)arg1 ;
-(id)remapUIDsByColumnMap:(const TSUUuidMap*)arg1 rowMap:(const TSUUuidMap*)arg2 ownerMap:(const TSUUuidMap*)arg3 ;
-(void)setUidRanges:(const vector<TSTCellUIDRange*)arg1 ;
-(void)setMergeFormulas:(const vector<TSCEFormula*)arg1 ;
-(void)setMergeFormulaIndexes:(const vector<unsigned long*)arg1 ;
-(id)initWithType:(int)arg1 uidRange:(const TSTCellUIDRange*)arg2 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(int)arg1 ;
-(void)addFormula:(const TSCEFormula*)arg1 ;
@end

