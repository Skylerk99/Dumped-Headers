/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSTLayout, TSTLayoutSpace;

@interface TSTLayoutSpaceBundle : NSObject {

	TSTLayout* mLayout;
	TSTLayoutSpace* mSpace;
	TSTLayoutSpace* mFrozenHeaderColumnsSpace;
	TSTLayoutSpace* mFrozenHeaderRowsSpace;
	TSTLayoutSpace* mFrozenHeaderCornerSpace;
	TSTLayoutSpace* mRepeatHeaderColumnsSpace;
	TSTLayoutSpace* mRepeatHeaderRowsSpace;
	TSTLayoutSpace* mRepeatHeaderCornerSpace;

}

@property (assign,nonatomic) TSTLayout * layout; 
@property (nonatomic,retain) TSTLayoutSpace * space; 
@property (nonatomic,retain) TSTLayoutSpace * frozenHeaderColumnsSpace; 
@property (nonatomic,retain) TSTLayoutSpace * frozenHeaderRowsSpace; 
@property (nonatomic,retain) TSTLayoutSpace * frozenHeaderCornerSpace; 
@property (nonatomic,retain) TSTLayoutSpace * repeatHeaderColumnsSpace; 
@property (nonatomic,retain) TSTLayoutSpace * repeatHeaderRowsSpace; 
@property (nonatomic,retain) TSTLayoutSpace * repeatHeaderCornerSpace; 
-(int)validateLayoutSpaces;
-(void)invalidateTableOffsets;
-(void)invalidateCoordinates;
-(void)invalidateCoordinatesAfterColumn:(unsigned char)arg1 ;
-(void)invalidateCoordinatesAfterRow:(unsigned short)arg1 ;
-(void)enumerateLayoutSpacesUsingBlock:(/*^block*/id)arg1 ;
-(TSTLayoutSpace *)frozenHeaderColumnsSpace;
-(TSTLayoutSpace *)frozenHeaderRowsSpace;
-(TSTLayoutSpace *)frozenHeaderCornerSpace;
-(TSTLayoutSpace *)repeatHeaderColumnsSpace;
-(TSTLayoutSpace *)repeatHeaderRowsSpace;
-(TSTLayoutSpace *)repeatHeaderCornerSpace;
-(void)setFrozenHeaderColumnsSpace:(TSTLayoutSpace *)arg1 ;
-(void)setFrozenHeaderRowsSpace:(TSTLayoutSpace *)arg1 ;
-(void)setFrozenHeaderCornerSpace:(TSTLayoutSpace *)arg1 ;
-(BOOL)enumerateFrozenLayoutSpacesUsingBlock:(/*^block*/id)arg1 ;
-(void)setRepeatHeaderColumnsSpace:(TSTLayoutSpace *)arg1 ;
-(void)setRepeatHeaderRowsSpace:(TSTLayoutSpace *)arg1 ;
-(void)setRepeatHeaderCornerSpace:(TSTLayoutSpace *)arg1 ;
-(BOOL)enumerateRepeatLayoutSpacesUsingBlock:(/*^block*/id)arg1 ;
-(id)getSpaceContainingCellID:(SCD_Struct_TS315)arg1 ;
-(id)initWithLayout:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(TSTLayout *)layout;
-(void)setLayout:(TSTLayout *)arg1 ;
-(void)setSpace:(TSTLayoutSpace *)arg1 ;
-(TSTLayoutSpace *)space;
@end

