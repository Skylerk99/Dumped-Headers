/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:27 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCEReferenceEnumerator : NSObject {

	TSCEASTNodeArray* mAST;
	TSCEASTNodeArrayReferenceIteratorState* mReferenceIteratorState;

}
-(id)initWithCalculationEngine:(id)arg1 defaultFormulaOwnerID:(CFUUIDRef)arg2 nodeArray:(const TSCEASTNodeArray*)arg3 myHostCellID:(SCD_Struct_TS315)arg4 doImplicitIntersection:(BOOL)arg5 doUidReferences:(BOOL)arg6 ;
-(void)dealloc;
-(const TSCECReference*)nextReference;
@end

