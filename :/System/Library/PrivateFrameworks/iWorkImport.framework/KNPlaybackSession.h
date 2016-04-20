/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:47 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSDAnimationSession.h>

@protocol TSDCanvasDelegate, TSKAccessControllerReadTicket;
@class TSULRUCache, KNSlideNode, NSMutableArray, KNShow, KNAnimationContext, TSDBitmapRenderingQualityInfo, KNAnimatedSlideView, NSString;

@interface KNPlaybackSession : NSObject <TSDAnimationSession> {

	/*^block*/id mEndShowHandler;
	BOOL mHasEndShowHandlerBeenCancelled;
	id<TSDCanvasDelegate> mCanvasDelegate;
	TSULRUCache* mASVCache;
	KNSlideNode* mCurrentSlideNode;
	KNSlideNode* mAlternateNextSlideNode;
	NSMutableArray* mBreadCrumbTrail;
	KNSlideNode* mLastVisitedSlideNode;
	KNShow* mShow;
	KNAnimationContext* mAnimationContext;
	int mPlayMode;
	id<TSKAccessControllerReadTicket> mOutgoingRenderingTicket;
	id<TSKAccessControllerReadTicket> mIncomingRenderingTicket;
	TSDBitmapRenderingQualityInfo* mBitmapRenderingQualityInfo;
	BOOL mSkipSlides;
	BOOL mShouldAnimateTransitionOnLastSlide;
	BOOL mShouldAnimateNullTransitions;
	BOOL mShouldUseContentlessLayers;
	BOOL mSkipBuilds;
	BOOL mShouldPreferCARenderer;
	BOOL mDisableAutoAnimationRemoval;
	BOOL mShouldAutomaticallyPlayMovies;
	BOOL mShouldShowVideoReflectionsAndMasks;
	BOOL mShouldForceTextureGeneration;
	BOOL mShouldDrawTexturesAsynchronously;
	BOOL mShouldAlwaysSetCurrentGLContextWhenDrawing;
	BOOL mShouldUseSourceImage;
	BOOL mDisableTransitionTextureCaching;
	id<TSKAccessControllerReadTicket> mAccessControllerReadTicket;
	BOOL _isExitingShow;

}

@property (assign,nonatomic) KNSlideNode * alternateNextSlideNode; 
@property (nonatomic,readonly) KNAnimationContext * animationContext; 
@property (nonatomic,retain) TSDBitmapRenderingQualityInfo * bitmapRenderingQualityInfo; 
@property (nonatomic,retain) NSMutableArray * breadCrumbTrail; 
@property (assign,nonatomic) id<TSDCanvasDelegate> canvasDelegate; 
@property (nonatomic,readonly) KNAnimatedSlideView * currentCachedAnimatedSlideView; 
@property (nonatomic,copy) id endShowHandler; 
@property (nonatomic,readonly) BOOL isPreview; 
@property (nonatomic,readonly) KNAnimatedSlideView * nextAnimatedSlideViewAfterCurrent; 
@property (assign,nonatomic) int playMode; 
@property (assign,nonatomic) BOOL shouldAnimateTransitionOnLastSlide; 
@property (nonatomic,readonly) KNShow * show; 
@property (assign,nonatomic) BOOL skipSlides; 
@property (assign,nonatomic) BOOL shouldAnimateNullTransitions; 
@property (assign,nonatomic) BOOL shouldUseContentlessLayers; 
@property (assign,nonatomic) BOOL skipBuilds; 
@property (assign,nonatomic) BOOL shouldPreferCARenderer; 
@property (assign,nonatomic) BOOL disableAutoAnimationRemoval; 
@property (assign,nonatomic) BOOL shouldAutomaticallyPlayMovies; 
@property (assign,nonatomic) BOOL shouldShowVideoReflectionsAndMasks; 
@property (nonatomic,readonly) BOOL shouldShowInstructionalText; 
@property (assign,nonatomic) BOOL shouldForceTextureGeneration; 
@property (assign,nonatomic) BOOL shouldDrawTexturesAsynchronously; 
@property (assign,nonatomic) BOOL isExitingShow;                                                        //@synthesize isExitingShow=_isExitingShow - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSourceImage; 
@property (assign,nonatomic) BOOL disableTransitionTextureCaching; 
@property (assign,nonatomic) id<TSKAccessControllerReadTicket> accessControllerReadTicket; 
@property (assign,nonatomic) BOOL shouldAlwaysSetCurrentGLContextWhenDrawing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldShowInstructionalText;
-(TSDBitmapRenderingQualityInfo *)bitmapRenderingQualityInfo;
-(BOOL)shouldUseSourceImage;
-(void)setBitmapRenderingQualityInfo:(TSDBitmapRenderingQualityInfo *)arg1 ;
-(BOOL)shouldForceTextureGeneration;
-(void)setShouldForceTextureGeneration:(BOOL)arg1 ;
-(void)invalidateAnimatedSlideViewCache;
-(id<TSDCanvasDelegate>)canvasDelegate;
-(void)p_setCurrentSlideNode:(id)arg1 ;
-(void)dropABreadCrumb;
-(id)firstSlideNode;
-(id)nextSlideNodeAfterSlideNode:(id)arg1 ;
-(id)nextSlideNodeAfterCurrent;
-(id)previousSlideNodeBeforeCurrent;
-(id)lastSlideNode;
-(id)breadCrumb;
-(KNAnimatedSlideView *)currentCachedAnimatedSlideView;
-(KNAnimatedSlideView *)nextAnimatedSlideViewAfterCurrent;
-(unsigned long long)slideNumberForSlideNode:(id)arg1 ;
-(double)showScale;
-(id)textureSetForRep:(id)arg1 context:(id)arg2 shouldRender:(BOOL)arg3 ;
-(id)animatedSlideViewFor:(id)arg1 setupTransition:(BOOL)arg2 ;
-(void)p_executeEndShowHandler;
-(BOOL)isOffscreenPlayback;
-(BOOL)shouldDrawTexturesAsynchronously;
-(void)setShouldDrawTexturesAsynchronously:(BOOL)arg1 ;
-(void)setShouldUseSourceImage:(BOOL)arg1 ;
-(void)setPlayMode:(int)arg1 ;
-(id)initWithShow:(id)arg1 viewScale:(double)arg2 baseLayer:(id)arg3 isBaseLayerVisible:(BOOL)arg4 canvasDelegate:(id)arg5 endShowHandler:(/*^block*/id)arg6 ;
-(void)gotoSlideNode:(id)arg1 ;
-(id)gotoFirstSlide;
-(id)currentSlideNode;
-(id)nextSlideAfterCurrent;
-(BOOL)atBegginingOfDeck;
-(id)gotoLastSlide;
-(id)newTransitionTo:(id)arg1 ;
-(id)newFinalTextureForOutgoingSlide;
-(id)newInitialTextureForIncomingSlide;
-(id)newCanvas;
-(id)repForInfo:(id)arg1 onCanvas:(id)arg2 ;
-(void)invalidateSlideNumberLayoutsOnCanvas:(id)arg1 ;
-(id)textureSetForRep:(id)arg1 shouldRender:(BOOL)arg2 ;
-(void)renderTextureContentsIfNeeded:(id)arg1 ;
-(void)renderTextureSetContentsIfNeeded:(id)arg1 ;
-(id)renderConcurrentlyOutgoingSlideTexture:(id)arg1 andIncomingSlideTexture:(id)arg2 ;
-(void)waitUntilSlideTextureRenderingIsCompleteForIdentifier:(id)arg1 ;
-(void)executeEndShowHandlerAfterDelay:(double)arg1 ;
-(void)cancelEndShowHandler;
-(KNSlideNode *)alternateNextSlideNode;
-(void)setAlternateNextSlideNode:(KNSlideNode *)arg1 ;
-(NSMutableArray *)breadCrumbTrail;
-(void)setBreadCrumbTrail:(NSMutableArray *)arg1 ;
-(void)setCanvasDelegate:(id<TSDCanvasDelegate>)arg1 ;
-(id)endShowHandler;
-(void)setEndShowHandler:(id)arg1 ;
-(int)playMode;
-(BOOL)shouldAnimateTransitionOnLastSlide;
-(void)setShouldAnimateTransitionOnLastSlide:(BOOL)arg1 ;
-(BOOL)shouldAnimateNullTransitions;
-(void)setShouldAnimateNullTransitions:(BOOL)arg1 ;
-(BOOL)shouldUseContentlessLayers;
-(void)setShouldUseContentlessLayers:(BOOL)arg1 ;
-(BOOL)skipSlides;
-(void)setSkipSlides:(BOOL)arg1 ;
-(BOOL)skipBuilds;
-(void)setSkipBuilds:(BOOL)arg1 ;
-(BOOL)shouldPreferCARenderer;
-(void)setShouldPreferCARenderer:(BOOL)arg1 ;
-(BOOL)disableAutoAnimationRemoval;
-(void)setDisableAutoAnimationRemoval:(BOOL)arg1 ;
-(BOOL)shouldAutomaticallyPlayMovies;
-(void)setShouldAutomaticallyPlayMovies:(BOOL)arg1 ;
-(BOOL)shouldShowVideoReflectionsAndMasks;
-(void)setShouldShowVideoReflectionsAndMasks:(BOOL)arg1 ;
-(BOOL)shouldAlwaysSetCurrentGLContextWhenDrawing;
-(void)setShouldAlwaysSetCurrentGLContextWhenDrawing:(BOOL)arg1 ;
-(BOOL)disableTransitionTextureCaching;
-(void)setDisableTransitionTextureCaching:(BOOL)arg1 ;
-(id<TSKAccessControllerReadTicket>)accessControllerReadTicket;
-(void)setAccessControllerReadTicket:(id<TSKAccessControllerReadTicket>)arg1 ;
-(BOOL)isExitingShow;
-(void)setIsExitingShow:(BOOL)arg1 ;
-(id)gotoPreviousSlide;
-(id)gotoNextSlide;
-(id)currentSlide;
-(KNShow *)show;
-(void)dealloc;
-(KNAnimationContext *)animationContext;
-(BOOL)isPreview;
@end

