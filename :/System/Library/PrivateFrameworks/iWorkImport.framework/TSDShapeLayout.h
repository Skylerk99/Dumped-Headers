/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:37 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDStyledLayout.h>

@class TSUBezierPath, TSDPathSource, TSDEditableBezierPathSource, TSDInfoGeometry, TSDMutableStroke, TSDFill;

@interface TSDShapeLayout : TSDStyledLayout {

	struct {
		unsigned path : 1;
		unsigned pathBounds : 1;
		unsigned pathBoundsWithoutStroke : 1;
		unsigned pathIsOpen : 1;
		unsigned pathIsLineSegment : 1;
		unsigned alignmentFrame : 1;
		unsigned alignmentFrameInRoot : 1;
		unsigned headAndTail : 1;
		unsigned headLineEnd : 1;
		unsigned tailLineEnd : 1;
		unsigned clippedPath : 1;
	}  mShapeInvalidFlags;
	TSUBezierPath* mCachedPath;
	CGRect mCachedPathBounds;
	CGRect mCachedPathBoundsWithoutStroke;
	BOOL mCachedPathIsOpen;
	BOOL mCachedPathIsLineSegment;
	CGRect mCachedAlignmentFrame;
	CGRect mCachedAlignmentFrameInRoot;
	CGAffineTransform mCachedAlignmentFrameInRootTransformInRoot;
	CGPoint mHeadPoint;
	CGPoint mTailPoint;
	CGPoint mHeadLineEndPoint;
	CGPoint mTailLineEndPoint;
	double mHeadLineEndAngle;
	double mTailLineEndAngle;
	long long mHeadCutSegment;
	long long mTailCutSegment;
	double mHeadCutT;
	double mTailCutT;
	TSUBezierPath* mCachedClippedPath;
	TSDPathSource* mShrunkenPathSource;
	TSDEditableBezierPathSource* mCachedEditableBezierPathSource;
	TSDPathSource* mCachedPathSource;
	TSDPathSource* mResizePathSource;
	TSDInfoGeometry* mResizeInfoGeometry;
	TSDInfoGeometry* mInitialInfoGeometry;
	TSDMutableStroke* mDynamicStroke;
	TSDFill* mDynamicFill;

}

@property (nonatomic,readonly) TSDFill * fill; 
@property (nonatomic,retain) TSDFill * dynamicFill; 
-(id)textWrapperForExteriorWrap;
-(void)invalidateFrame;
-(id)layoutGeometryFromInfo;
-(id)computeLayoutGeometry;
-(void)processChangedProperty:(int)arg1 ;
-(id)i_computeWrapPath;
-(CGRect)boundsForStandardKnobs;
-(CGRect)alignmentFrame;
-(BOOL)shouldBeDisplayedInShowMode;
-(BOOL)isStrokeBeingManipulated;
-(void)dynamicStrokeWidthChangeDidBegin;
-(void)dynamicStrokeWidthUpdateToValue:(double)arg1 ;
-(void)dynamicStrokeWidthChangeDidEnd;
-(id)initialInfoGeometry;
-(CGPoint)centerForConnecting;
-(CGRect)alignmentFrameInRoot;
-(BOOL)supportsRotation;
-(BOOL)supportsResize;
-(id)pathSource;
-(BOOL)isTailEndOnLeft;
-(BOOL)pathIsOpen;
-(id)shapeInfo;
-(CGRect)shapeFrameWithTransform:(CGAffineTransform)arg1 ;
-(void)aliasPathForScale:(double)arg1 adjustedStroke:(id*)arg2 adjustedPath:(id*)arg3 startDelta:(CGPoint*)arg4 endDelta:(CGPoint*)arg5 ;
-(CGRect)pathBoundsWithoutStroke;
-(BOOL)pathIsLineSegment;
-(id)layoutInfoGeometry;
-(void)invalidatePathBounds;
-(CGAffineTransform)computeLayoutTransform;
-(id)p_cachedPath;
-(CGRect)p_cachedPathBounds;
-(CGRect)p_cachedPathBoundsWithoutStroke;
-(BOOL)p_cachedPathIsOpen;
-(BOOL)p_cachedPathIsLineSegment;
-(id)p_createClippedPath;
-(CGRect)p_boundsOfLineEndForHead:(BOOL)arg1 transform:(CGAffineTransform)arg2 ;
-(BOOL)isInvisibleAutosizingShape;
-(void)aliasPathForScale:(double)arg1 originalStroke:(id)arg2 adjustedStroke:(id*)arg3 adjustedPath:(id*)arg4 startDelta:(CGPoint*)arg5 endDelta:(CGPoint*)arg6 ;
-(CGPoint)headPoint;
-(CGPoint)tailPoint;
-(id)i_computeWrapPathClosed:(BOOL)arg1 ;
-(id)p_unitePath:(id)arg1 withLineEndForHead:(BOOL)arg2 stroke:(id)arg3 ;
-(id)editablePathSource;
-(id)smartPathSource;
-(CGRect)aliasedAlignmentFrameForScale:(double)arg1 ;
-(BOOL)canBeIntersected;
-(BOOL)canResetTextAndObjectHandles;
-(CGPoint)unclippedHeadPoint;
-(CGPoint)unclippedTailPoint;
-(void)p_updateResizeInfoGeometryFromResizePathSource;
-(TSDFill *)dynamicFill;
-(void)setDynamicFill:(TSDFill *)arg1 ;
-(id)initWithInfo:(id)arg1 ;
-(void)invalidatePath;
-(void)dealloc;
-(id)path;
-(TSDFill *)fill;
-(id)stroke;
-(CGSize)minimumSize;
-(void)setGeometry:(id)arg1 ;
-(CGRect)pathBounds;
-(id)clippedPathForLineEnds;
-(id)strokeHeadLineEnd;
-(id)strokeTailLineEnd;
-(CGPoint)headLineEndPoint;
-(CGPoint)tailLineEndPoint;
-(double)headLineEndAngle;
-(double)tailLineEndAngle;
-(double)lineEndScale;
-(void)p_validateHeadLineEnd;
-(void)p_validateTailLineEnd;
-(void)p_invalidateClippedPath;
-(void)p_validateHeadAndTail;
-(void)p_computeAngle:(double*)arg1 point:(CGPoint*)arg2 cutSegment:(long long*)arg3 cutT:(double*)arg4 forLineEndAtHead:(BOOL)arg5 ;
-(void)p_invalidateHead;
-(void)p_invalidateTail;
-(BOOL)isInvisible;
@end

