/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKCOUpdateOperation.h>
#import <iWorkImport/TSKCORangeOperation.h>
#import <iWorkImport/TSKCOUpdateRangeOperationSubset.h>
#import <iWorkImport/TSKCOTransforming.h>

@class TSKCORangeAddress;

@interface TSKCOUpdateRangeOperation : TSKCOUpdateOperation <TSKCORangeOperation, TSKCOUpdateRangeOperationSubset, TSKCOTransforming> {

	TSKCORangeAddress* mAddress;
	int mTransformBehavior;

}

@property (nonatomic,readonly) int transformBehavior; 
@property (nonatomic,readonly) TSKCORangeAddress * address; 
-(void)saveToArchiver:(id)arg1 message:(Operation*)arg2 ;
-(id)initWithUnarchiver:(id)arg1 message:(const Operation*)arg2 ;
-(id)transformUpdateRangeOperation:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)initWithRangeAddress:(id)arg1 propertyName:(id)arg2 transformBehavior:(int)arg3 noop:(BOOL)arg4 ;
-(id)operationWithNewNoop:(BOOL)arg1 ;
-(id)operationWithNewAddress:(id)arg1 ;
-(int)transformBehavior;
-(id)toUpdateRangeOperation;
-(id)fromUpdateRangeOperation:(id)arg1 ;
-(id)transformIdPlacementBaseOperation:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)transformUpdateIdOperation:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)transformReplaceRangeOperation:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)transformDynamicByAnyOperation:(id)arg1 byHigherPriority:(BOOL)arg2 ;
-(id)transformStaticByAnyOperation:(id)arg1 byHigherPriority:(BOOL)arg2 ;
-(id)ut_transformByTransformer:(id)arg1 ;
-(id)initWithRangeAddress:(id)arg1 propertyName:(id)arg2 transformBehavior:(int)arg3 ;
-(id)initWithRangeAddress:(id)arg1 propertyName:(id)arg2 ;
-(TSKCORangeAddress *)address;
-(void)dealloc;
-(id)description;
@end

