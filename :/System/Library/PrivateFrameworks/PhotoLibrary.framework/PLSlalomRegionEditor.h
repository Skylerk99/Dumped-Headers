/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:58 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIControl.h>

@protocol PLSlalomRegionEditorDelegate;
@class UIImageView;

@interface PLSlalomRegionEditor : UIControl {

	UIImageView* _startHandleView;
	UIImageView* _endHandleView;
	UIImageView* _trackImageView;
	UIImageView* _trackSnapshotView;
	BOOL _draggingStart;
	BOOL _draggingEnd;
	double _touchOffset;
	BOOL _zoomed;
	BOOL _trackingZoom;
	CGPoint _touchLocationWhenTrackingZoomBegan;
	BOOL _forceLayout;
	double _zoomMinValue;
	double _zoomMaxValue;
	BOOL _zoomAnimating;
	id<PLSlalomRegionEditorDelegate> _delegate;
	double _trimHandleWidth;
	unsigned long long _regionEditorStyle;
	double _minValue;
	double _maxValue;
	double _startValue;
	double _endValue;
	double _zoomDelay;
	UIEdgeInsets _trackInsets;

}

@property (assign,nonatomic) id<PLSlalomRegionEditorDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets trackInsets;                                                        //@synthesize trackInsets=_trackInsets - In the implementation block
@property (assign,nonatomic) double trimHandleWidth;                                                          //@synthesize trimHandleWidth=_trimHandleWidth - In the implementation block
@property (assign,nonatomic) unsigned long long regionEditorStyle;                                            //@synthesize regionEditorStyle=_regionEditorStyle - In the implementation block
@property (assign,nonatomic) double minValue;                                                                 //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) double maxValue;                                                                 //@synthesize maxValue=_maxValue - In the implementation block
@property (assign,nonatomic) double startValue;                                                               //@synthesize startValue=_startValue - In the implementation block
@property (assign,nonatomic) double endValue;                                                                 //@synthesize endValue=_endValue - In the implementation block
@property (assign,nonatomic) double zoomDelay;                                                                //@synthesize zoomDelay=_zoomDelay - In the implementation block
@property (assign,setter=setZoomAnimating:,getter=isZoomAnimating,nonatomic) BOOL zoomAnimating;              //@synthesize zoomAnimating=_zoomAnimating - In the implementation block
-(double)endValue;
-(double)startValue;
-(double)maxValue;
-(void)setRegionEditorStyle:(unsigned long long)arg1 ;
-(void)setTrimHandleWidth:(double)arg1 ;
-(void)setZoomAnimating:(BOOL)arg1 ;
-(void)setZoomMinValue:(double)arg1 maxValue:(double)arg2 ;
-(void)setTrackInsets:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<PLSlalomRegionEditorDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<PLSlalomRegionEditorDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(double)minValue;
-(void)setMaxValue:(double)arg1 ;
-(void)setMinValue:(double)arg1 ;
-(void)setStartValue:(double)arg1 ;
-(void)setEndValue:(double)arg1 ;
-(BOOL)isZoomAnimating;
-(double)zoomDelay;
-(void)setZoomDelay:(double)arg1 ;
-(CGRect)_trackFrame;
-(id)_handleImage;
-(id)_handleTintColor;
-(void)_updateTrack;
-(CGRect)_startHandleFrame;
-(CGRect)_endHandleFrame;
-(void)setStartValue:(double)arg1 notify:(BOOL)arg2 ;
-(void)setEndValue:(double)arg1 notify:(BOOL)arg2 ;
-(double)_zoomMinValue;
-(double)_zoomMaxValue;
-(CGRect)_handleFrameForValue:(double)arg1 isStart:(BOOL)arg2 ;
-(double)_valueFromHandleFrame:(CGRect)arg1 isStart:(BOOL)arg2 ;
-(CGRect)_trackFrameNoZoom;
-(BOOL)_isZoomed;
-(double)_trackScale;
-(double)_trimHandleWidth;
-(BOOL)_isTouch:(id)arg1 inHandleIsStart:(BOOL)arg2 outTouchOffset:(double*)arg3 ;
-(void)_beginTrackingZoomWithTouch:(id)arg1 ;
-(void)_updateSlidersWithTouch:(id)arg1 ;
-(void)_cancelZoomTrackingIfNeccessaryWithTouch:(id)arg1 ;
-(void)_stopTrackingAndSendControlEvents:(unsigned long long)arg1 ;
-(void)_cancelTrackingZoom;
-(void)_cancelZoom;
-(double)_valueFromStartHandleFrame:(CGRect)arg1 ;
-(double)_valueFromEndHandleFrame:(CGRect)arg1 ;
-(void)_zoomPressWasHeld;
-(id)_trackImageForZoom:(BOOL)arg1 ;
-(id)_trackColor;
-(id)_tickColor;
-(unsigned long long)regionEditorStyle;
-(void)_drawCurveWithFlatEndsFromX:(double)arg1 fromY:(double)arg2 toX:(double)arg3 toY:(double)arg4 ;
-(UIEdgeInsets)trackInsets;
-(double)trimHandleWidth;
@end

