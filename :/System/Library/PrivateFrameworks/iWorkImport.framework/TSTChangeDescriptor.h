/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:42 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSTCellRegion, NSHashTable;

@interface TSTChangeDescriptor : NSObject {

	int mChangeDescriptor;
	TSTCellRegion* mCellRegion;
	SCD_Struct_TS315 mCellID;
	TSTCellRegion* mStrokeRegion;
	NSHashTable* mReferenceIdentifiers;

}

@property (nonatomic,readonly) int changeDescriptor; 
@property (nonatomic,readonly) TSTCellRegion * cellRegion; 
@property (nonatomic,readonly) SCD_Struct_TS315 cellID; 
@property (nonatomic,readonly) TSTCellRegion * strokeRegion; 
@property (nonatomic,readonly) NSHashTable * referenceIdentifiers; 
@property (nonatomic,readonly) TSUColumnRowRect strokeRange; 
@property (nonatomic,readonly) TSUColumnRowRect cellRange; 
+(id)changeDescriptorWithType:(int)arg1 cellRange:(TSUColumnRowRect)arg2 ;
+(id)changeDescriptorWithType:(int)arg1 cellRegion:(id)arg2 ;
+(id)changeDescriptorWithType:(int)arg1 cellRegion:(id)arg2 strokeRegion:(id)arg3 ;
+(id)changeDescriptorWithType:(int)arg1 strokeRegion:(id)arg2 ;
+(id)changeDescriptorWithType:(int)arg1 cellID:(SCD_Struct_TS315)arg2 cellRegion:(id)arg3 strokeRegion:(id)arg4 ;
+(id)changeDescriptorWithType:(int)arg1 ;
+(id)changeDescriptorWithType:(int)arg1 cellID:(SCD_Struct_TS315)arg2 cellRange:(TSUColumnRowRect)arg3 ;
+(id)changeDescriptorWithType:(int)arg1 cellID:(SCD_Struct_TS315)arg2 cellRange:(TSUColumnRowRect)arg3 strokeRange:(TSUColumnRowRect)arg4 ;
+(id)changeDescriptorWithType:(int)arg1 cellID:(SCD_Struct_TS315)arg2 strokeRange:(TSUColumnRowRect)arg3 ;
+(id)changeDescriptorWithType:(int)arg1 strokeRange:(TSUColumnRowRect)arg2 ;
+(id)changeDescriptorWithType:(int)arg1 cellRange:(TSUColumnRowRect)arg2 strokeRange:(TSUColumnRowRect)arg3 ;
+(id)changeDescriptorWithType:(int)arg1 referenceIdentifiers:(id)arg2 ;
-(TSUColumnRowRect)cellRange;
-(id)initWithChangeDescriptorType:(int)arg1 andCellRegion:(id)arg2 andCellID:(SCD_Struct_TS315)arg3 andStrokeRegion:(id)arg4 andReferenceIdentifiers:(id)arg5 ;
-(int)changeDescriptor;
-(TSTCellRegion *)cellRegion;
-(TSTCellRegion *)strokeRegion;
-(TSUColumnRowRect)strokeRange;
-(NSHashTable *)referenceIdentifiers;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(SCD_Struct_TS315)cellID;
@end

