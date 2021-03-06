/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:58 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <QuartzCore/CAEAGLLayer.h>
#import <OpusOrigamiProducer/MRMarimbaHitBlobSupport.h>
#import <OpusOrigamiProducer/MRMarimbaPlayback.h>
#import <OpusOrigamiProducer/MRMarimbaBasicPlayback.h>

@class MPDocument, MRRenderer, MPFaceDetector, NSDictionary, NSTimer, NSString, EAGLContext;

@interface MRMarimbaLayer : CAEAGLLayer <MRMarimbaHitBlobSupport, MRMarimbaPlayback, MRMarimbaBasicPlayback> {

	MRRenderer* _renderer;
	MPDocument* _document;
	BOOL _masterClockIsSet;
	BOOL _bailTimeWatcher;
	BOOL _stopWithVideo;
	BOOL _wasSuspended;
	MPFaceDetector* _faceDetector;
	double _morphingToAspectRatio;
	CGSize _frameBufferSize;
	NSDictionary* _nextMorphInfo;
	NSTimer* _faceTimer;
	double _timestampOfLastRenderPass;
	BOOL _enableSlideDidChangeNotification;
	BOOL _sizeChangedWhileRendererSizeWasLocked;
	NSString* _lastSlideChange;
	EAGLContext* _context;
	unsigned _viewRenderbuffer;
	unsigned _viewFramebuffer;
	unsigned _depthBuffer;
	BOOL _isAboutToPlay;
	BOOL _isReadonly;
	BOOL _slidesAreReadonly;
	BOOL _rendererSizeIsLocked;
	BOOL _correctsForAutorotation;
	BOOL _interactivityIsEnabled;

}

@property (assign,nonatomic) BOOL isAboutToPlay; 
@property (assign,nonatomic) double framesPerSecond; 
@property (assign,nonatomic) BOOL interactivityIsEnabled;                        //@synthesize interactivityIsEnabled=_interactivityIsEnabled - In the implementation block
@property (assign,nonatomic) BOOL isReadonly;                                    //@synthesize isReadonly=_isReadonly - In the implementation block
@property (assign,nonatomic) BOOL slidesAreReadonly;                             //@synthesize slidesAreReadonly=_slidesAreReadonly - In the implementation block
@property (assign,nonatomic) BOOL rendererSizeIsLocked;                          //@synthesize rendererSizeIsLocked=_rendererSizeIsLocked - In the implementation block
@property (assign,nonatomic) BOOL correctsForAutorotation;                       //@synthesize correctsForAutorotation=_correctsForAutorotation - In the implementation block
@property (readonly) CGSize size; 
@property (nonatomic,retain) MPDocument * document; 
@property (assign,nonatomic) double time; 
@property (nonatomic,readonly) double timeRemaining; 
@property (nonatomic,readonly) BOOL isPlaying; 
@property (assign,nonatomic) double volume; 
@property (assign,nonatomic) BOOL stopWithVideo; 
@property (assign,nonatomic) BOOL displaysFPS; 
@property (nonatomic,readonly) MRRenderer * renderer; 
@property (assign,nonatomic) BOOL enableSlideDidChangeNotification;              //@synthesize enableSlideDidChangeNotification=_enableSlideDidChangeNotification - In the implementation block
+(void)releaseResources;
+(id)layerWithDocument:(id)arg1 size:(CGSize)arg2 ;
+(BOOL)shouldRenderOnBackgroundThread;
+(id)layerWithDocument:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(BOOL)updateFramebuffer;
-(void)setBailTimeWatcher:(BOOL)arg1 ;
-(void)destroyFramebuffer;
-(void)setLastSlideChange:(id)arg1 ;
-(id)lastSlideChange;
-(BOOL)bailTimeWatcher;
-(BOOL)beginLiveUpdateForHitBlob:(id)arg1 ;
-(BOOL)endLiveUpdateForHitBlob:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toHitBlob:(id)arg2 ;
-(void)doGesture:(id)arg1 ;
-(void)endGesture:(id)arg1 ;
-(void)cancelGesture:(id)arg1 ;
-(id)blobHitAtPoint:(CGPoint)arg1 fromObjectsForObjectIDs:(id)arg2 localPoint:(CGPoint*)arg3 ;
-(BOOL)getOnScreenVertices:(CGPoint)arg1 forHitBlob:(id)arg2 ;
-(void)beginGesture:(id)arg1 ;
-(id)_currentEffectLayer;
-(void)gotoNextSlideLegacy;
-(void)moveToNextEffectContainer;
-(id)displayedEffectContainers;
-(void)gotoPreviousSlide:(BOOL)arg1 ;
-(void)_slideDidAppear:(id)arg1 ;
-(id)_firstEffectContainer;
-(void)moveToPreviousEffectContainer;
-(void)gotoSlideLegacy:(id)arg1 ;
-(void)gotoPreviousSlideLegacy;
-(id)_effectContainerForTime:(double)arg1 ;
-(id)_currentEffectContainer;
-(double)startTimeForSlide:(id)arg1 ;
-(void)whenTransitionIsFinishedSendAction:(SEL)arg1 toTarget:(id)arg2 ;
-(void)watcherThread:(id)arg1 ;
-(long long)_mainLayerIndex;
-(void)gotoNextSlide:(BOOL)arg1 ;
-(double)timeForSlide:(id)arg1 ;
-(void)callbackThread:(id)arg1 ;
-(double)relativeTime;
-(void)gotoSlide:(id)arg1 ;
-(void)moveToEffectContainer:(id)arg1 withStartOffset:(double)arg2 toStopOffset:(double)arg3 blocking:(BOOL)arg4 ;
-(void)_postNotificationForSlideChange:(id)arg1 ;
-(double)relativeTimeForLayer:(id)arg1 ;
-(void)moveToTitleSlide;
-(void)moveToSubtitleForSlide:(id)arg1 ;
-(double)relativeTimeForBackgroundAudio;
-(id)currentSlides;
-(void)removeEffectContainersBeforeTime:(double)arg1 ;
-(void)gotoPreviousSlide;
-(void)gotoText:(id)arg1 ;
-(void)gotoNextSlide;
-(id)currentSlide;
-(BOOL)isInTransition;
-(BOOL)nearingEndForSerializer:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 ;
-(BOOL)interactivityIsEnabled;
-(void)setupFaceDetection;
-(void)setInteractivityIsEnabled:(BOOL)arg1 ;
-(void)setCorrectsForAutorotation:(BOOL)arg1 ;
-(void)updateSizeOfRenderer:(id)arg1 ;
-(BOOL)_nearingEndForSerializer:(id)arg1 ;
-(BOOL)_effectRequestedSlides:(id)arg1 ;
-(void)didLiveChanged:(id)arg1 ;
-(void)pauseWhenStill;
-(void)didApplyStyle:(id)arg1 ;
-(void)didAddEffects:(id)arg1 ;
-(BOOL)displaysFPS;
-(BOOL)isAboutToPlay;
-(void)setDisplaysFPS:(BOOL)arg1 ;
-(void)warmupRenderer;
-(void)touchesMoved:(id)arg1 ;
-(void)touchesEnded:(id)arg1 ;
-(void)touchesBegan:(id)arg1 ;
-(void)endMorphing;
-(void)requestRendering:(BOOL)arg1 ;
-(BOOL)effect:(id)arg1 requestedNumberOfSlides:(unsigned long long)arg2 firstSlideIndexStillNeeded:(unsigned long long)arg3 ;
-(void)beginMorphingToAspectRatio:(double)arg1 andOrientation:(int)arg2 withDuration:(double)arg3 switchToDocument:(id)arg4 ;
-(void)goForth;
-(void)setIsAboutToPlay:(BOOL)arg1 ;
-(void)_reauthorForAspectRatioChange;
-(void)aspectRatioChangedTo:(id)arg1 ;
-(CGImageRef)snapshotAsCGImageForTime:(double)arg1 withSize:(CGSize)arg2 ;
-(void)setIsReadonly:(BOOL)arg1 ;
-(void)setRendererSizeIsLocked:(BOOL)arg1 ;
-(void)gotoBeginning;
-(void)setStopWithVideo:(BOOL)arg1 ;
-(void)gotoEnd;
-(void)prevFrame;
-(BOOL)rendererSizeIsLocked;
-(BOOL)correctsForAutorotation;
-(BOOL)stopWithVideo;
-(void)nextFrame;
-(CGImageRef)snapshotAsCGImage;
-(void)setEnableSlideDidChangeNotification:(BOOL)arg1 ;
-(void)beginEditingOfText:(id)arg1 ;
-(BOOL)slidesAreReadonly;
-(void)setSlidesAreReadonly:(BOOL)arg1 ;
-(BOOL)enableSlideDidChangeNotification;
-(BOOL)isReadonly;
-(BOOL)isAsynchronous;
-(void)togglePlayback;
-(void)play;
-(BOOL)isPlaying;
-(void)setVolume:(double)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(void)setTime:(double)arg1 ;
-(double)time;
-(void)goBack;
-(MPDocument *)document;
-(void)cleanup;
-(void)setDocument:(MPDocument *)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(void)pause;
-(void)setFramesPerSecond:(double)arg1 ;
-(double)framesPerSecond;
-(double)volume;
-(double)timeRemaining;
-(MRRenderer *)renderer;
@end

