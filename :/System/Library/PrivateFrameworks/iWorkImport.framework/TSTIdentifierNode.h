/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTExpressionNode.h>

@class NSString;

@interface TSTIdentifierNode : TSTExpressionNode {

	NSString* mSheetName;
	NSString* mTableName;
	NSString* mIdentifier;
	unsigned mSymbol;

}

@property (assign,nonatomic) unsigned symbol; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(IdentifierNodeArchive*)arg1 archiver:(id)arg2 ;
-(id)initFromArchive:(const IdentifierNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(id)formulaPlainText;
-(void)buildASTNodeArray:(TSCEASTNodeArray*)arg1 hostCell:(SCD_Struct_TS315)arg2 symbolTable:(TSCESymbolTable*)arg3 ;
-(id)detokenizedText;
-(id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4 ;
-(id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3 ;
-(id)copyByResolvingIdentifiers:(id)arg1 hostTable:(id)arg2 forceReferenceInterpretation:(BOOL)arg3 symbolTable:(TSCESymbolTable*)arg4 oldToNewNodeMap:(id)arg5 ;
-(TSTCSENodeData)recordHashesForSubexpressions:(id)arg1 ;
-(id)initWithContext:(id)arg1 identifier:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4 ;
-(BOOL)isEqualToExpressionNode:(id)arg1 ;
-(id)identifierWithWhitespaceAppended;
-(void)setSheetName:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)identifier;
-(id)string;
-(unsigned)symbol;
-(void)setSymbol:(unsigned)arg1 ;
-(void)setTableName:(id)arg1 ;
-(id)sheetName;
-(id)tableName;
-(int)tokenType;
@end

