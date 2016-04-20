/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:42 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSTLayoutSpaceBundle, TSTCoordinateArray, TSTLayoutSpaceBezierPathCache, TSTLayout, TSTMasterLayout;

@interface TSTLayoutSpace : NSObject {

	TSTLayoutSpaceBundle* mBundle;
	int mLayoutSpaceType;
	BOOL mInvalidTableOffset;
	unsigned char mInvalidColumnIndex;
	unsigned short mInvalidRowIndex;
	SCD_Struct_TS548 mGridRange;
	BOOL mHeaderColumnsRepeat;
	BOOL mHeaderRowsRepeat;
	double mViewScale;
	CGAffineTransform mTransformToCanvas;
	CGAffineTransform mTransformFromCanvas;
	CGAffineTransform mTransformToDevice;
	CGAffineTransform mTransformFromDevice;
	BOOL mDrawBlackAndWhite;
	BOOL mDrawPreventAntialias;
	CGPoint mTableOffset;
	TSTCoordinateArray* mHeaderRowColumnCoordinates;
	TSTCoordinateArray* mBodyColumnCoordinates;
	TSTCoordinateArray* mHeaderColumnRowCoordinates;
	TSTCoordinateArray* mBodyRowCoordinates;
	CGRect mCachedFrame;
	CGRect mCachedAlignedFrame;
	CGRect mCachedStrokeFrame;
	CGRect mCachedAlignedStrokeFrame;
	TSTLayoutSpaceBezierPathCache* mBezierPathCache;
	BOOL mLayoutDirectionIsLeftToRight;
	opaque_pthread_rwlock_t mLock;

}

@property (nonatomic,readonly) TSTLayoutSpaceBundle * bundle; 
@property (nonatomic,readonly) int layoutSpaceType; 
@property (nonatomic,readonly) TSTLayout * layout; 
@property (nonatomic,readonly) TSTMasterLayout * masterLayout; 
@property (nonatomic,readonly) BOOL layoutDirectionIsLeftToRight; 
@property (nonatomic,readonly) BOOL isMain; 
@property (nonatomic,readonly) BOOL isFrozen; 
@property (nonatomic,readonly) BOOL isRepeat; 
@property (nonatomic,readonly) BOOL isColumns; 
@property (nonatomic,readonly) BOOL isRows; 
@property (nonatomic,readonly) BOOL isCorner; 
@property (assign,nonatomic) BOOL headerColumnsRepeat; 
@property (assign,nonatomic) BOOL headerRowsRepeat; 
@property (assign,nonatomic) double viewScale; 
@property (assign,nonatomic) CGAffineTransform transformToCanvas; 
@property (assign,nonatomic) CGAffineTransform transformFromCanvas; 
@property (assign,nonatomic) CGAffineTransform transformToDevice; 
@property (assign,nonatomic) CGAffineTransform transformFromDevice; 
@property (assign,nonatomic) BOOL drawBlackAndWhite; 
@property (assign,nonatomic) BOOL drawPreventAntialias; 
@property (assign,nonatomic) CGPoint tableOffset; 
@property (nonatomic,readonly) TSTLayoutSpaceBezierPathCache * bezierPathCache; 
-(BOOL)isRows;
-(BOOL)isColumns;
-(double)viewScale;
-(TSTMasterLayout *)masterLayout;
-(BOOL)p_getLayoutDirectionLeftToRight;
-(CGPoint)tableOffset;
-(void)invalidateCoordinates;
-(void)invalidateCoordinatesAfterColumn:(unsigned char)arg1 ;
-(void)invalidateCoordinatesAfterRow:(unsigned short)arg1 ;
-(BOOL)headerRowsRepeat;
-(BOOL)headerColumnsRepeat;
-(BOOL)layoutDirectionIsLeftToRight;
-(void)lockForRead;
-(void)setTransformToCanvas:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transformToCanvas;
-(CGAffineTransform)transformToDevice;
-(int)layoutSpaceType;
-(id)initWithLayoutSpaceBundle:(id)arg1 type:(int)arg2 ;
-(void)setHeaderRowsRepeat:(BOOL)arg1 ;
-(void)setHeaderColumnsRepeat:(BOOL)arg1 ;
-(void)lockForWrite;
-(void)validateCachedFrames;
-(int)validateCoordinateCache:(id)arg1 ;
-(int)validateTableOffset:(id)arg1 ;
-(TSTLayoutSpaceBezierPathCache *)bezierPathCache;
-(void)setTableOffset:(CGPoint)arg1 ;
-(BOOL)drawPreventAntialias;
-(BOOL)drawBlackAndWhite;
-(void)p_drawStrokeForGridColumn:(unsigned)arg1 strokeRect:(SCD_Struct_TS548)arg2 clearStroke:(BOOL)arg3 shadowType:(int)arg4 context:(CGContextRef)arg5 ;
-(void)p_drawStrokeForGridRow:(unsigned)arg1 strokeRect:(SCD_Struct_TS548)arg2 clearStroke:(BOOL)arg3 shadowType:(int)arg4 context:(CGContextRef)arg5 ;
-(void)invalidateTableOffset;
-(void)drawStrokesInGridRange:(SCD_Struct_TS548)arg1 clearStrokes:(BOOL)arg2 context:(CGContextRef)arg3 ;
-(CGAffineTransform)transformFromCanvas;
-(void)setTransformFromCanvas:(CGAffineTransform)arg1 ;
-(void)setTransformToDevice:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transformFromDevice;
-(void)setTransformFromDevice:(CGAffineTransform)arg1 ;
-(void)setDrawBlackAndWhite:(BOOL)arg1 ;
-(void)setDrawPreventAntialias:(BOOL)arg1 ;
-(BOOL)isMain;
-(BOOL)isCorner;
-(void)dealloc;
-(id)description;
-(BOOL)isFrozen;
-(void)unlock;
-(TSTLayout *)layout;
-(TSTLayoutSpaceBundle *)bundle;
-(int)validate:(id)arg1 ;
-(BOOL)isRepeat;
-(void)setViewScale:(double)arg1 ;
@end

