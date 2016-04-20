/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:49 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDCanvasDelegate.h>
#import <iWorkImport/TSDConnectedInfoReplacing.h>

@class KNSlide, KNSlideNode, KNPlaybackSession, KNAnimatedSlideModel, NSIndexSet, NSMutableSet, NSMutableArray, TSUNoCopyDictionary, TSDCanvas, TSDTexturedRectangle, NSSet, NSString;

@interface KNAnimatedSlideView : NSObject <TSDCanvasDelegate, TSDConnectedInfoReplacing> {

	KNSlide* mSlide;
	KNSlideNode* mSlideNode;
	KNSlideNode* mAlternateDestinationSlideNode;
	KNPlaybackSession* mSession;
	KNAnimatedSlideModel* mAnimatedSlideModel;
	unsigned long long mCurrentEventIndex;
	NSIndexSet* mEventIndexesToAnimate;
	BOOL mSlideIsBuildable;
	BOOL mTransitionInitialized;
	BOOL mShouldStopAnimations;
	NSMutableSet* mMovieRenderers;
	NSMutableSet* mActiveAnimatedBuilds;
	unsigned long long mSlideNumber;
	double mTransitionStartTime;
	unsigned long long mAnimationsActive;
	unsigned long long mAnimationsStarted;
	BOOL mIsInDelayBeforeActiveAnimations;
	NSMutableArray* mChunks;
	TSUNoCopyDictionary* mBuildsToStartAfterMovieStartsMap;
	TSUNoCopyDictionary* mTextureSetForRepMap;
	NSMutableArray* mDelayedAnimations;
	id mEventStartCallbackTarget;
	SEL mEventStartCallbackSelector;
	id mEventAnimationActiveCallbackTarget;
	SEL mEventAnimationActiveCallbackSelector;
	id mEventEndCallbackTarget;
	SEL mEventEndCallbackSelector;
	id mEventImmediateEndCallbackTarget;
	SEL mEventImmediateEndCallbackSelector;
	id mMovieStartCallbackTarget;
	SEL mMovieStartCallbackSelector;
	id mMovieEndCallbackTarget;
	SEL mMovieEndCallbackSelector;
	BOOL mEventTriggered;
	BOOL mQueuedTrigger;
	BOOL mSkipDelayOnTransition;
	BOOL mPlaysAutomaticTransitions;
	TSDCanvas* mCanvas;
	TSDTexturedRectangle* mOutgoingTexture;
	TSDTexturedRectangle* mIncomingTexture;
	int mIsTexturePreloadingCancelled;
	NSMutableSet* mTextureSets;

}

@property (assign,nonatomic) unsigned long long eventIndex; 
@property (nonatomic,readonly) unsigned long long eventCount; 
@property (nonatomic,readonly) BOOL hasBuilds; 
@property (nonatomic,readonly) BOOL isAnimating; 
@property (nonatomic,readonly) BOOL isNonMovieAnimationAnimating; 
@property (nonatomic,readonly) BOOL isNonMovieAnimationActive; 
@property (nonatomic,readonly) BOOL isDoneAnimating; 
@property (nonatomic,readonly) BOOL isMovieAnimating; 
@property (assign,nonatomic) BOOL eventHasTriggered; 
@property (assign,nonatomic) BOOL triggerQueued; 
@property (nonatomic,readonly) KNAnimatedSlideModel * model; 
@property (nonatomic,copy) NSIndexSet * eventIndexesToAnimate; 
@property (nonatomic,readonly) KNPlaybackSession * session; 
@property (nonatomic,readonly) NSSet * movieRenderers; 
@property (nonatomic,readonly) NSSet * activeAnimatedBuilds; 
@property (assign,nonatomic) BOOL skipDelayOnTransition; 
@property (assign,nonatomic) BOOL playsAutomaticTransitions; 
@property (nonatomic,readonly) TSDCanvas * canvas; 
@property (nonatomic,retain) TSDTexturedRectangle * outgoingTexture; 
@property (nonatomic,retain) TSDTexturedRectangle * incomingTexture; 
@property (nonatomic,readonly) KNAnimatedSlideView * nextASV; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerUserDefaults;
+(void)initialize;
-(BOOL)isPrintingCanvas;
-(BOOL)shouldSuppressBackgrounds;
-(BOOL)shouldShowInstructionalText;
-(BOOL)isCanvasDrawingIntoPDF:(id)arg1 ;
-(BOOL)isRenderingForKPF;
-(void)setOutgoingTexture:(TSDTexturedRectangle *)arg1 ;
-(void)setIncomingTexture:(TSDTexturedRectangle *)arg1 ;
-(TSDTexturedRectangle *)incomingTexture;
-(TSDTexturedRectangle *)outgoingTexture;
-(id)infoToConnectToForConnectionLineConnectedToInfo:(id)arg1 ;
-(id)initForSlideNode:(id)arg1 session:(id)arg2 ;
-(void)setupTransition;
-(void)renderEvent:(unsigned long long)arg1 intoContext:(CGContextRef)arg2 ignoreBuildVisibility:(BOOL)arg3 ;
-(void)setEventIndex:(unsigned long long)arg1 ;
-(void)preloadTexturesForEvent:(unsigned long long)arg1 ignoreBuildVisibility:(BOOL)arg2 priority:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)cancelTexturePreloading;
-(BOOL)hasTransitionAtEventIndex:(long long)arg1 ;
-(unsigned long long)slideNumber;
-(void)setTexture:(id)arg1 forRep:(id)arg2 ;
-(NSSet *)activeAnimatedBuilds;
-(id)repsCurrentlyVisible;
-(void)resumeAnimationsIfPaused;
-(void)interruptAndReset;
-(void)registerForMovieStartCallback:(SEL)arg1 target:(id)arg2 ;
-(void)p_recursivelyRemoveCallbackObserversFromAnimatedBuilds:(id)arg1 ;
-(void)p_tearDownTexturesIsExitingShow:(BOOL)arg1 ;
-(void)p_animateBuild:(id)arg1 afterDelay:(double)arg2 ;
-(void)buildHasFinishedAnimating:(id)arg1 ;
-(void)p_removeMovieRenderer:(id)arg1 ;
-(BOOL)p_shouldSkipActionBuild:(id)arg1 onMovieInfo:(id)arg2 ;
-(void)removeActiveAnimatedBuild:(id)arg1 ;
-(void)triggerNextEvent;
-(BOOL)playsAutomaticTransitions;
-(id)p_infosForSlide;
-(id)infosVisibleAtEvent:(unsigned long long)arg1 ignoreBuildVisibility:(BOOL)arg2 ;
-(id)infosCurrentlyVisible;
-(BOOL)p_shouldAddInfoToTree:(id)arg1 ;
-(void)p_initializeTextureSetForRep:(id)arg1 info:(id)arg2 eventIndex:(unsigned long long)arg3 shouldPrepareBuildAnimation:(BOOL)arg4 ignoreBuildVisibility:(BOOL)arg5 isRenderingToContext:(BOOL)arg6 buildInfos:(id)arg7 postInitBlock:(/*^block*/id)arg8 ;
-(void)p_renderTexturesOnBaseLayer:(id)arg1 atEvent:(unsigned long long)arg2 shouldPrepareBuildAnimation:(BOOL)arg3 ignoreBuildVisibility:(BOOL)arg4 ;
-(void)renderEvent:(unsigned long long)arg1 onBaseLayer:(id)arg2 shouldPrepareBuildAnimation:(BOOL)arg3 ;
-(void)triggerNextEventIgnoringDelay:(BOOL)arg1 ;
-(NSIndexSet *)eventIndexesToAnimate;
-(BOOL)isDoneAnimating;
-(void)p_animateCurrentEventIgnoringDelays:(BOOL)arg1 ;
-(double)p_minimumDelay;
-(id)p_getRenderersAtEventIndex:(long long)arg1 ;
-(void)transitionHasFinishedAnimating:(id)arg1 ;
-(void)transitionHasImmediatelyFinishedAnimating:(id)arg1 ;
-(void)p_animateTransition:(id)arg1 ;
-(void)p_performAnimationWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 delay:(double)arg4 ;
-(void)p_setupTransitionStartTime;
-(void)p_stopAllMovieRenderers;
-(void)p_resetMovieTextures;
-(void)p_clearMovieRenderers;
-(void)p_removeDelayedAnimation:(id)arg1 ;
-(void)movieHasFinishedPlayback:(id)arg1 ;
-(void)p_addMovieRenderer:(id)arg1 ;
-(void)p_movieStarted:(id)arg1 ;
-(void)p_animateBuild:(id)arg1 ;
-(void)addActiveAnimatedBuild:(id)arg1 ;
-(void)p_animateBuild:(id)arg1 isMoviePlayback:(BOOL)arg2 ;
-(void)registerForEventStartCallback:(SEL)arg1 target:(id)arg2 ;
-(void)registerForEventAnimationActiveCallback:(SEL)arg1 target:(id)arg2 ;
-(void)registerForEventEndCallback:(SEL)arg1 target:(id)arg2 ;
-(void)registerForEventImmediateEndCallback:(SEL)arg1 target:(id)arg2 ;
-(void)registerForMovieEndCallback:(SEL)arg1 target:(id)arg2 ;
-(BOOL)isNonMovieAnimationActive;
-(BOOL)isNonMovieAnimationAnimating;
-(BOOL)isMovieAnimating;
-(BOOL)hasBuilds;
-(BOOL)slideContainsRepsThatMustDrawOnMainThread;
-(KNAnimatedSlideView *)nextASV;
-(void)renderCurrentEvent;
-(BOOL)playAutomaticEvents;
-(void)setEventIndexesToAnimate:(NSIndexSet *)arg1 ;
-(BOOL)isAtFirstEvent;
-(void)setNewDestinationSlideNode:(id)arg1 ;
-(NSSet *)movieRenderers;
-(id)textureSetForRep:(id)arg1 ;
-(void)clearActiveAnimatedBuilds;
-(BOOL)eventHasTriggered;
-(void)setEventHasTriggered:(BOOL)arg1 ;
-(BOOL)skipDelayOnTransition;
-(void)setSkipDelayOnTransition:(BOOL)arg1 ;
-(void)setPlaysAutomaticTransitions:(BOOL)arg1 ;
-(BOOL)triggerQueued;
-(void)setTriggerQueued:(BOOL)arg1 ;
-(unsigned long long)eventIndex;
-(KNPlaybackSession *)session;
-(void)pauseAnimations;
-(void)dealloc;
-(void)reset;
-(KNAnimatedSlideModel *)model;
-(BOOL)isAnimating;
-(TSDCanvas *)canvas;
-(unsigned long long)eventCount;
-(id)documentRoot;
-(void)stopAnimations;
@end

