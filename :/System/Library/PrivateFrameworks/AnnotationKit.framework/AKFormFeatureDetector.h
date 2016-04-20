/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:58 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AKFormFeatureDetectorDelegate;
#import <AnnotationKit/AnnotationKit-Structs.h>
@class NSObject;

@interface AKFormFeatureDetector : NSObject {

	NSObject*<AKFormFeatureDetectorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSObject*<AKFormFeatureDetectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(CGContextRef)_newBitmapInRect:(CGRect)arg1 onPage:(id)arg2 scale:(double)arg3 ;
+(CGContextRef)_newBitmapFromCGPDFDocument:(CGPDFDocumentRef)arg1 ;
-(void)setDelegate:(NSObject*<AKFormFeatureDetectorDelegate>)arg1 ;
-(void)dealloc;
-(NSObject*<AKFormFeatureDetectorDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(id)_featureAtPoint:(CGPoint)arg1 onPage:(id)arg2 mode:(long long)arg3 ;
-(id)_checkboxAtPoint:(CGPoint)arg1 onPage:(id)arg2 pageBitmap:(CGContextRef)arg3 ;
-(CGRect)_translateFeature:(id)arg1 toPageOrigin:(CGPoint)arg2 ;
-(id)_formFieldAtPoint:(CGPoint)arg1 onPage:(id)arg2 enforceMaxWidth:(BOOL)arg3 pageBitmap:(CGContextRef)arg4 ;
-(id)_snappedFormFieldForField:(id)arg1 ;
-(id)_defaultFeatureForPoint:(CGPoint)arg1 onPage:(id)arg2 snapToVerticalEdges:(BOOL)arg3 ;
-(id)_lineAtPoint:(CGPoint)arg1 onPage:(id)arg2 useVerticalCenter:(BOOL)arg3 ;
-(id)_boxOnLine:(id)arg1 atPoint:(CGPoint)arg2 ;
-(BOOL)_floatPixelBufferForCGContext:(CGContextRef)arg1 imageBuffer:(vImage_Buffer*)arg2 ;
-(float*)_thresholdPixelStripIn:(float*)arg1 withImageLenth:(long long)arg2 thresholdValue:(float)arg3 startingPtr:(float*)arg4 withThresholdLength:(long long)arg5 ;
-(float*)_shiftScanAwayFromEdgeInPixels:(float*)arg1 ;
-(long long)_scanToEdgeOfFormFieldStartingAtPoint:(CGPoint)arg1 withBitmapData:(float*)arg2 width:(long long)arg3 height:(long long)arg4 bottomRowStartsAt:(float*)arg5 bottomRowEndsAt:(float*)arg6 withLineThickness:(long long)arg7 gapWidthForDottedLines:(long long)arg8 separatorHeights:(id)arg9 andRegionHeight:(long long*)arg10 trackAverageSpacingWidth:(long long*)arg11 trackFarthestPossibleEdge:(long long*)arg12 trackNumberOfSegments:(long long*)arg13 trackNumberOfGapsForDottedLine:(long long*)arg14 goingLeft:(BOOL)arg15 ;
-(unsigned long long)_findLineEdgeTypeOnLeft:(BOOL)arg1 startingAt:(float*)arg2 withPageLeftEdge:(float*)arg3 withPageWidth:(long long)arg4 andFormHeight:(unsigned long long)arg5 ;
-(CGRect)_findExtentForLineTop:(double)arg1 lineBottom:(double)arg2 x:(double)arg3 onPage:(id)arg4 ;
-(SCD_Struct_AK9)_findVerticalEdgesAtPoint:(CGPoint)arg1 extent:(long long)arg2 onPage:(id)arg3 ;
-(id)featureAtPoint:(CGPoint)arg1 onPage:(id)arg2 mode:(long long)arg3 ;
-(void)_drawThresholdedBitmapForTestForPageBitmap:(CGContextRef)arg1 withPixels:(float*)arg2 ;
@end

