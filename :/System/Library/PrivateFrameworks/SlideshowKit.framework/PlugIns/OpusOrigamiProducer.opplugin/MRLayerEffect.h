/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:57 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MRLayer.h>

@class MREffect, NSString, NSMutableDictionary, NSArray, MRSlideProvider, MCContainerEffect, NSDictionary;

@interface MRLayerEffect : MRLayer {

	MREffect* mEffect;
	NSString* mEffectID;
	NSMutableDictionary* mSlideProvidersForElementIDs;
	NSArray* mSlideProviders;
	NSMutableDictionary* mSlideShowTimeScripts;
	NSMutableDictionary* mTextsForElementIDs;
	MRSlideProvider* mMultiImageModelInput;
	unsigned mIndexOfFirstMultiImageInput;
	NSRange mMultiImageSlideRange;
	BOOL mNeedsToUpdateEffect;
	BOOL mNeedsToUpdateTiming;
	BOOL mNeedsToUpdateSlides;
	BOOL mNeedsToUpdateTexts;
	BOOL mNeedsToUpdateEffectAttributes;
	BOOL mNeedsToUpdateEffectLiveAttributes;
	BOOL mSlidesAreReadonly;
	BOOL mHasRequestedMoreSlides;
	NSString* _panoramaPanningSlideID;
	double _panoramaPanningPreviousDelta;
	BOOL _panoramaPanningIsLandscape;
	BOOL _ignoresNextTimeSynchronization;
	double _previouslyRenderedContainerTime;
	BOOL _isInInteractiveMode;
	NSString* mTargetedElement;
	NSString* mEditedElement;
	MCContainerEffect* mContainer;

}

@property (readonly) MCContainerEffect * container; 
@property (readonly) NSDictionary * slideProvidersForElementIDs; 
@property (readonly) NSDictionary * textsForElementIDs; 
@property (nonatomic,copy) NSString * targetedElement; 
@property (nonatomic,copy) NSString * editedElement; 
@property (readonly) MREffect * effect; 
@property (setter=suspendAsynchronousOperations:) BOOL asynchronousOperationsAreSuspended; 
@property (assign,nonatomic) BOOL isInInteractiveMode;                                                  //@synthesize isInInteractiveMode=_isInInteractiveMode - In the implementation block
-(double)panoramaPanningCancel:(id)arg1 ;
-(double)panoramaPanningEnd:(id)arg1 ;
-(double)panoramaPanningUpdate:(id)arg1 ;
-(double)panoramaPanningStart:(id)arg1 ;
-(double)pzrCancel:(id)arg1 ;
-(double)pzrUpdate:(id)arg1 ;
-(double)pzrStart:(id)arg1 ;
-(double)pzrEnd:(id)arg1 ;
-(void)_updateEffectAttributes;
-(void)_cleanupProviders;
-(void)_observePlugOnPreactivate;
-(void)_rebuildEffect;
-(void)_updateTiming;
-(void)_updateSlides;
-(void)_updateTexts;
-(void)_unobservePlugOnDepreactivate;
-(void)_observePlug;
-(void)_unobservePlug;
-(void)_renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)_retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)setEditedElement:(NSString *)arg1 ;
-(void)setScale:(double)arg1 ofSlide:(id)arg2 ;
-(void)setCenter:(CGPoint)arg1 ofSlide:(id)arg2 ;
-(void)setPlayerHint:(id)arg1 ofSlide:(id)arg2 ;
-(double)interestingTimeForElement:(id)arg1 ;
-(id)_dumpLayerWithOptions:(unsigned long long)arg1 ;
-(BOOL)supportsDynamicExpansion;
-(void)setRotation:(double)arg1 ofSlide:(id)arg2 ;
-(void)setKenBurnsType:(int)arg1 ofSlide:(id)arg2 ;
-(void)setAssetPath:(id)arg1 ofSlide:(id)arg2 ;
-(NSDictionary *)slideProvidersForElementIDs;
-(void)setIsInInteractiveMode:(BOOL)arg1 ;
-(double)interestingTimeForTime:(double)arg1 ;
-(void)setMaxScale:(double)arg1 ofSlide:(id)arg2 ;
-(BOOL)hasSomethingToRender;
-(id)currentSlideInfoForElement:(id)arg1 ;
-(long long)_maxLinesForTextElement:(id)arg1 ;
-(id)currentSlideInfos;
-(id)initWithEffectID:(id)arg1 andParameters:(id)arg2 ;
-(BOOL)isInInteractiveMode;
-(void)suspendAsynchronousOperations:(BOOL)arg1 ;
-(CGSize)_maxSizeForTextElement:(id)arg1 ;
-(id)_effectAttributes;
-(id)elementHitAtPoint:(CGPoint)arg1 localPoint:(CGPoint*)arg2 ;
-(void)_removeAudioDucker:(id)arg1 ;
-(void)preactivate;
-(void)_addAudioDucker:(id)arg1 ;
-(void)_requestRendering;
-(BOOL)_hideTextWhileEditing;
-(NSDictionary *)textsForElementIDs;
-(CGSize)_rendererSize;
-(BOOL)asynchronousOperationsAreSuspended;
-(BOOL)isAlphaFriendly;
-(void)endMorphing;
-(NSString *)editedElement;
-(void)synchronizeTime;
-(BOOL)_isNative3D;
-(void)resumeOrPause:(BOOL)arg1 ;
-(BOOL)hasSlides;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(id)initWithPlug:(id)arg1 andParameters:(id)arg2 inSuperlayer:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)getVerticesCoordinates:(CGPoint*)arg1 forElement:(id)arg2 ;
-(void)animateCenterOfSlide:(id)arg1 to:(CGPoint)arg2 withDuration:(double)arg3 ;
-(void)animateScaleOfSlide:(id)arg1 to:(double)arg2 withDuration:(double)arg3 ;
-(void)animateRotationOfSlide:(id)arg1 to:(double)arg2 withDuration:(double)arg3 ;
-(void)animateCenterOfSlide:(id)arg1 to:(CGPoint)arg2 withDuration:(double)arg3 andInitialSpeed:(CGSize)arg4 ;
-(void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2 ;
-(BOOL)getStartTime:(double*)arg1 andDuration:(double*)arg2 forMovingToElementID:(id)arg3 backwards:(BOOL)arg4 ;
-(BOOL)hasMoreSlidesFromTime:(double)arg1 backwards:(BOOL)arg2 startTime:(double*)arg3 duration:(double*)arg4 ;
-(void)getLazyDuration:(double*)arg1 lazyFactor:(double*)arg2 animationDuration:(double*)arg3 fromInterestingTime:(double)arg4 ;
-(BOOL)_setStateValue:(id)arg1 forKey:(id)arg2 ;
-(void)_effectTriggeredStop;
-(NSString *)targetedElement;
-(void)setTargetedElement:(NSString *)arg1 ;
-(void)setTime:(double)arg1 ofSlide:(id)arg2 ;
-(void)_stallRenderer;
-(void)setDuration:(double)arg1 ;
-(MCContainerEffect *)container;
-(BOOL)isOpaque;
-(void)activate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(MREffect *)effect;
-(void)cleanup;
-(BOOL)hasAudio;
-(void)setPixelSize:(CGSize)arg1 ;
-(void)unload;
@end

