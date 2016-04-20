/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKCOIdPlacementBaseOperation.h>

@interface TSKCOIdPlacementRearrangeOperation : TSKCOIdPlacementBaseOperation
-(void)saveToArchiver:(id)arg1 message:(Operation*)arg2 ;
-(id)initWithUnarchiver:(id)arg1 message:(const Operation*)arg2 ;
-(id)transformUpdateRangeOperation:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)transformUpdateIdOperation:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)transformReplaceRangeOperation:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)initWithIdAddress:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(BOOL)arg4 noop:(BOOL)arg5 ;
-(id)p_transformRearrangeOrPlacementOperation:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)p_transformAdd:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)p_transformRemove:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)p_transformRearrange:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)p_transformPlacement:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)initWithIdAddress:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 ;
-(id)description;
@end

