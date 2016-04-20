/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:49 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/GLKViewDelegate.h>
#import <libobjc.A.dylib/RCWaveformDataSourceObserver.h>

@protocol RCGLWaveformRendererDelegate;
@class EAGLContext, CADisplayLink, NSTimer, CALayer, UIView, RCWaveformDataSource, RCUIConfiguration, NSString;

@interface RCGLWaveformRenderer : UIViewController <GLKViewDelegate, RCWaveformDataSourceObserver> {

	EAGLContext* _eaglContext;
	CADisplayLink* _displayLink;
	unsigned _vertexBuffers[2];
	SCD_Struct_RC4 _renderedTimeRange;
	BOOL _renderedTimeRangeIsApproximatedWaveform;
	SCD_Struct_RC4 _highlightTimeRange;
	vector<float, std::__1::allocator<float> >* _waveformVertexData;
	unsigned long long _renderedWaveformVertices;
	unsigned _shaderProgram;
	int _projectionUniform;
	int _modelviewUniform;
	int _foregroundColorUniform;
	int _highlightColorUniform;
	int _highlightColorTimelineRange;
	BOOL _buffersInitialized;
	BOOL _shadersInitialized;
	BOOL _preparedForRendering;
	BOOL _centerKeylineRendered;
	CGRect _lastViewportRect;
	double _cachedContentWidth;
	BOOL _contentWidthDirty;
	NSTimer* _displayLinkTerminationTimer;
	CALayer* _modelviewLayer;
	BOOL _isAnimatingModelview;
	BOOL _needsVisibleRangeRendering;
	BOOL _hasDisplayedPreGLContentCenterline;
	UIView* _preGLContentCenterline;
	BOOL _frequentUpdatesSegmentUpdatesExpectedHint;
	BOOL _paused;
	BOOL _activeDisplayLinkRequired;
	RCWaveformDataSource* _dataSource;
	id<RCGLWaveformRendererDelegate> _rendererDelegate;
	double _spacingWidth;
	double _dataPointWidth;
	RCUIConfiguration* _UIConfiguration;
	SCD_Struct_RC4 _visibleTimeRange;

}

@property (nonatomic,retain) RCWaveformDataSource * dataSource;                                              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<RCGLWaveformRendererDelegate> rendererDelegate;                       //@synthesize rendererDelegate=_rendererDelegate - In the implementation block
@property (assign,nonatomic) BOOL frequentUpdatesSegmentUpdatesExpectedHint;                                 //@synthesize frequentUpdatesSegmentUpdatesExpectedHint=_frequentUpdatesSegmentUpdatesExpectedHint - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                                    //@synthesize paused=_paused - In the implementation block
@property (assign,getter=isActiveDisplayLinkRequired,nonatomic) BOOL activeDisplayLinkRequired;              //@synthesize activeDisplayLinkRequired=_activeDisplayLinkRequired - In the implementation block
@property (assign,nonatomic) double spacingWidth;                                                            //@synthesize spacingWidth=_spacingWidth - In the implementation block
@property (assign,nonatomic) double dataPointWidth;                                                          //@synthesize dataPointWidth=_dataPointWidth - In the implementation block
@property (nonatomic,copy) RCUIConfiguration * UIConfiguration;                                              //@synthesize UIConfiguration=_UIConfiguration - In the implementation block
@property (assign,nonatomic) SCD_Struct_RC4 visibleTimeRange;                                                //@synthesize visibleTimeRange=_visibleTimeRange - In the implementation block
@property (assign,nonatomic) SCD_Struct_RC4 highlightTimeRange; 
@property (nonatomic,readonly) double contentWidth; 
@property (nonatomic,readonly) CGRect visibleRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_willResignActiveNotification:(id)arg1 ;
-(void)_didBecomeActiveNotification:(id)arg1 ;
-(void)_setupNotifications;
-(void)_teardownNotifications;
-(BOOL)isPaused;
-(id<RCGLWaveformRendererDelegate>)rendererDelegate;
-(void)setRendererDelegate:(id<RCGLWaveformRendererDelegate>)arg1 ;
-(void)setDataSource:(RCWaveformDataSource *)arg1 ;
-(void)dealloc;
-(RCWaveformDataSource *)dataSource;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)viewDidLayoutSubviews;
-(CGRect)visibleRect;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(double)contentWidth;
-(void)glkView:(id)arg1 drawInRect:(CGRect)arg2 ;
-(void)_stopUpdating;
-(void)_startUpdating;
-(void)waveformDataSourceDidFinishLoading:(id)arg1 ;
-(void)waveformDataSource:(id)arg1 didLoadWaveformSegment:(id)arg2 ;
-(void)setVisibleTimeRange:(SCD_Struct_RC4)arg1 ;
-(SCD_Struct_RC4)visibleTimeRange;
-(void)setHighlightTimeRange:(SCD_Struct_RC4)arg1 ;
-(SCD_Struct_RC4)highlightTimeRange;
-(void)setUIConfiguration:(RCUIConfiguration *)arg1 ;
-(RCUIConfiguration *)UIConfiguration;
-(SCD_Struct_RC4)_highlightTimeRange;
-(void)_stopRendering;
-(void)_prepareForRendering;
-(void)_startRendering;
-(void)_startTemporarilyShowingPreGLCenterLine;
-(void)_stopShowingPreGLCenterLine;
-(void)_clearRenderingState;
-(float)_pixelsPerSecond;
-(BOOL)_currentViewportRequiresRenderingNewSegments;
-(void)_setNeedsVisibleTimeRangeRendering;
-(void)_performOrDispatchToMainThread:(/*^block*/id)arg1 ;
-(void)setVisibleTimeRange:(SCD_Struct_RC4)arg1 withAnimationDuration:(double)arg2 ;
-(void)_setNeedsRendering;
-(void)_cancelScheduledTerminateDisplayLink;
-(double)_nonCachedContentWidth;
-(double)horizontalOffsetAtTime:(double)arg1 withVisibleTimeRange:(SCD_Struct_RC4)arg2 ;
-(float)_pixelsPerSecondWithVisibleTimeRange:(SCD_Struct_RC4)arg1 ;
-(double)timeAtHorizontalOffset:(double)arg1 withVisibleTimeRange:(SCD_Struct_RC4)arg2 ;
-(double)_timeForPixelOffset:(float)arg1 withVisibleTimeRange:(SCD_Struct_RC4)arg2 ;
-(double)horizontalOffsetAtTime:(double)arg1 ;
-(void)_draw:(id)arg1 ;
-(id)_pathForShader:(id)arg1 ;
-(unsigned)_compileShaderOfType:(unsigned)arg1 pathToSource:(id)arg2 ;
-(void)_setupGL;
-(void)_setupBuffers;
-(void)_setupShaders;
-(void)_updateProjection;
-(void)_displayLinkDidUpdate:(id)arg1 ;
-(void)_performScheduledTerminateDisplayLink;
-(void)_renderVisibleTimeRangeImmediately;
-(void)_scheduleTerminateDisplayLink;
-(void)_updateModelview;
-(void)_updateClearColor;
-(void)_updateForegroundColor;
-(void)_updateHighlightTimeRange;
-(void)_renderCenterKeylineIfNeeded;
-(BOOL)frequentUpdatesSegmentUpdatesExpectedHint;
-(SCD_Struct_RC4)_timeRangeToRenderForVisibleTimeRange:(SCD_Struct_RC4)arg1 ;
-(void)_renderSegments:(id)arg1 timeRangeOfSegments:(SCD_Struct_RC4)arg2 isApproximatedWaveform:(BOOL)arg3 ;
-(double)pointsPerSecondWithVisibleTimeRange:(SCD_Struct_RC4)arg1 ;
-(double)timeAtHorizontalOffset:(double)arg1 ;
-(id)rasterizeTimeRange:(SCD_Struct_RC4)arg1 imageSize:(CGSize)arg2 ;
-(void)glkViewRenderingContextValidityDidChange:(id)arg1 ;
-(void)setActiveDisplayLinkRequired:(BOOL)arg1 ;
-(float)_pixelOffsetForTime:(double)arg1 ;
-(double)_timeForPixelOffset:(float)arg1 ;
-(void)setFrequentUpdatesSegmentUpdatesExpectedHint:(BOOL)arg1 ;
-(BOOL)isActiveDisplayLinkRequired;
-(double)spacingWidth;
-(void)setSpacingWidth:(double)arg1 ;
-(double)dataPointWidth;
-(void)setDataPointWidth:(double)arg1 ;
@end

