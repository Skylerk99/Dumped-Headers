/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:36 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <QuartzCore/CATransformLayer.h>
#import <iWorkImport/TSCHMultiDataElementShapeLayer.h>

@class TSDFill, CAShapeLayer, CALayer;

@interface TSCHMultiDataBubbleShapeLayer : CATransformLayer <TSCHMultiDataElementShapeLayer> {

	TSDFill* mFill;
	double mViewScale;
	CAShapeLayer* mMaskLayer;
	CAShapeLayer* mStrokeLayer;
	CALayer* mImageLayer;
	double _viewScale;

}

@property (nonatomic,retain) TSDFill * fill; 
@property (assign,nonatomic) double viewScale;              //@synthesize viewScale=_viewScale - In the implementation block
-(double)viewScale;
-(BOOL)aboveIntercept;
-(id)chartRep;
-(id)currentValueLayer;
-(void)setFill:(id)arg1 stroke:(id)arg2 withViewScale:(double)arg3 ;
-(void)updateElementFrame:(CGRect)arg1 forSeries:(id)arg2 addingAnimationsToAnimationInfo:(id)arg3 ;
-(void)updateElementFrameToNullForSeries:(id)arg1 addingAnimationsToAnimationInfo:(id)arg2 ;
-(id)p_bubbleElementsRenderer;
-(void)p_addLayerAnimationsForUpdatingImage:(CGImageRef)arg1 bounds:(CGRect)arg2 position:(CGPoint)arg3 toAnimationInfo:(id)arg4 ;
-(void)p_addAnimationsForUpdatingPath:(CGPathRef)arg1 position:(CGPoint)arg2 toAnimationInfo:(id)arg3 onLayer:(id)arg4 ;
-(CGAffineTransform)p_renderingSymbolElementTransform;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(TSDFill *)fill;
-(void)setContentsScale:(double)arg1 ;
-(void)setFill:(TSDFill *)arg1 ;
-(void)setViewScale:(double)arg1 ;
@end

