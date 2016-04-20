/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:57 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPMovieViewDelegate.h>
#import <libobjc.A.dylib/MPMediaPlayback.h>

@protocol MPMoviePlayerControllerDelegate;
@class NSMutableSet, NSDictionary, MPMoviePlayerController, NSArray, MPMovieView, MPNowPlayingObserver, NSError, MPAVController, NSMutableArray, MPInlineVideoController, UIWindow, NSMutableDictionary, MPMovieAccessLog, MPMovieErrorLog, NSString;

@interface MPMoviePlayerControllerNew : NSObject <MPMovieViewDelegate, MPMediaPlayback> {

	long long _additionalButtons;
	NSMutableSet* _asyncImageGenerators;
	long long _controlStyle;
	float _currentPlaybackRate;
	id<MPMoviePlayerControllerDelegate> _delegate;
	NSDictionary* _HTTPHeaderFields;
	MPMoviePlayerController* _moviePlayer;
	NSArray* _movies;
	BOOL _moviesNeedReload;
	long long _movieSourceType;
	MPMovieView* _movieView;
	MPNowPlayingObserver* _nowPlayingObserver;
	NSError* _playbackError;
	MPAVController* _player;
	NSMutableArray* _queuedThumbnailRequests;
	long long _repeatMode;
	long long _stateBeforeSettingPlaybackTime;
	MPInlineVideoController* _videoViewController;
	unsigned long long _finishNotificationsPosted;
	BOOL _shouldAutoplay;
	BOOL _useApplicationAudioSession;
	BOOL _setUseApplicationAudioSessionWhenPlaybackEnds;
	BOOL _preparedQueue;
	BOOL _didAppear;
	BOOL _ignorePlaybackStateChanges;
	BOOL _playWhenSourceTypeIsDetermined;
	BOOL _prepareWhenSourceTypeIsDetermined;
	BOOL _isChangingMoviePath;
	BOOL _wasPlayingBeforeSuspended;
	BOOL _canPostDidFinishNotificationOnItemChange;
	BOOL _readyForDisplay;
	BOOL _shouldRestartPlaybackFromBeginning;
	BOOL _useHostedWindowWhenFullscreen;
	BOOL _shouldIgnoreItemChange;
	BOOL _willSoonEndUsingVideoLayer;
	UIWindow* _preApexSupportWindow;
	double _initialPlaybackTime;
	double _endPlaybackTime;
	NSMutableDictionary* _timedMetadataForUniqueKey;
	BOOL _isActive;
	BOOL _isResigningActive;
	BOOL _didResignActive;
	BOOL _canShowControlsOverlayBeforeResignedActive;
	double _timeWhenResignedActive;
	unsigned long long _movieIndexWhenResignedActive;
	MPMovieAccessLog* _cachedAccessLog;
	MPMovieErrorLog* _cachedErrorLog;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isPreparedToPlay; 
@property (assign,nonatomic) double currentPlaybackTime; 
@property (assign,nonatomic) float currentPlaybackRate; 
-(void)_playbackStateDidChangeNotification:(id)arg1 ;
-(void)_setMoviePlayer:(id)arg1 ;
-(void)setContentURL:(id)arg1 ;
-(id)contentURL;
-(unsigned long long)loadState;
-(long long)controlStyle;
-(void)setControlStyle:(long long)arg1 ;
-(long long)repeatMode;
-(void)setRepeatMode:(long long)arg1 ;
-(BOOL)shouldAutoplay;
-(void)setShouldAutoplay:(BOOL)arg1 ;
-(void)setFullscreen:(BOOL)arg1 ;
-(long long)scalingMode;
-(void)setScalingMode:(long long)arg1 ;
-(BOOL)allowsAirPlay;
-(void)setAllowsAirPlay:(BOOL)arg1 ;
-(BOOL)isAirPlayVideoActive;
-(void)prepareToPlay;
-(BOOL)isPreparedToPlay;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(void)skipToNextItem;
-(void)skipToBeginning;
-(void)skipToPreviousItem;
-(unsigned long long)movieMediaTypes;
-(void)setMovieSourceType:(long long)arg1 ;
-(long long)movieSourceType;
-(double)playableDuration;
-(double)endPlaybackTime;
-(float)currentPlaybackRate;
-(void)setCurrentPlaybackRate:(float)arg1 ;
-(void)_resignActive;
-(BOOL)_isReadyForDisplay;
-(void)movieView:(id)arg1 willMoveToWindow:(id)arg2 ;
-(void)movieViewDidMoveToWindow:(id)arg1 ;
-(void)movieView:(id)arg1 willMoveToSuperview:(id)arg2 ;
-(void)_firstVideoFrameDisplayedNotification:(id)arg1 ;
-(void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1 ;
-(void)_itemDidChangeNotification:(id)arg1 ;
-(void)_itemReadyToPlayNotification:(id)arg1 ;
-(void)_itemPlaybackDidEndNotification:(id)arg1 ;
-(void)_itemPlaybackErrorNotification:(id)arg1 ;
-(void)_bufferingStateDidChangeNotification:(id)arg1 ;
-(void)_rateDidChangeNotification:(id)arg1 ;
-(void)_timedMetadataAvailableNotification:(id)arg1 ;
-(void)_timedMetadataImageAvailableNotification:(id)arg1 ;
-(void)_timeDidJumpNotification:(id)arg1 ;
-(void)_serverDiedNotification:(id)arg1 ;
-(void)_moviePlayerWillBecomeActiveNotification:(id)arg1 ;
-(void)_moviePlayerDidBecomeActiveNotification:(id)arg1 ;
-(void)_movieTypeAvailableNotification:(id)arg1 ;
-(void)_movieSourceTypeAvailableNotification:(id)arg1 ;
-(void)_movieDurationAvailableNotification:(id)arg1 ;
-(void)_movieNaturalSizeAvailableNotification:(id)arg1 ;
-(void)_videoViewPathWillChangeNotification:(id)arg1 ;
-(void)_willResignActiveNotification:(id)arg1 ;
-(void)_didBecomeActiveNotification:(id)arg1 ;
-(void)_willTerminateNotification:(id)arg1 ;
-(void)_simpleRemoteNotification:(id)arg1 ;
-(id)_movieOptions;
-(void)_setMovies:(id)arg1 ;
-(id)_videoViewController;
-(void)_ensureActive;
-(void)_setVideoViewControllerOverlayStyle;
-(void)_prepareToPlayWithStartIndex:(unsigned long long)arg1 ;
-(void)_cacheAccessAndErrorLogs;
-(void)_endPlayback;
-(void)_postNotificationName:(id)arg1 object:(id)arg2 ;
-(void)_setCurrentPlaybackTime:(double)arg1 timeOption:(long long)arg2 ;
-(void)_endUsingVideoLayer;
-(void)_postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(void)_postDidFinishNotificationWithReason:(long long)arg1 ;
-(void)_restartPlaybackFromBeginning;
-(void)_updateDisabledPartsFromDelegate;
-(void)_handlePlaybackEnd;
-(void)_clearPlaybackStateAfterTimeJumpIfNecessary;
-(void)_setUseApplicationAudioSession:(BOOL)arg1 ;
-(BOOL)_canContinuePlayingWhenLocked;
-(void)_pausePlaybackForSuspension;
-(BOOL)disallowsAMRAudio;
-(void)_setControlsHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_videoViewScaleModeDidChangeNotification:(id)arg1 ;
-(void)setInlinePlaybackUsesTVOut:(BOOL)arg1 ;
-(BOOL)inlinePlaybackUsesTVOut;
-(id)errorLog;
-(BOOL)_didPostFinishNotificationForReason:(long long)arg1 ;
-(void)requestThumbnailImagesAtTimes:(id)arg1 timeOption:(long long)arg2 ;
-(void)setUseApplicationAudioSession:(BOOL)arg1 ;
-(id)_nowPlayingMovie;
-(BOOL)_shouldContinuePlaybackInBackground;
-(BOOL)videoControllerShouldAutohide:(id)arg1 ;
-(void)videoControllerWillEnterFullscreen:(id)arg1 ;
-(void)videoControllerDidEnterFullscreen:(id)arg1 ;
-(void)videoControllerWillExitFullscreen:(id)arg1 ;
-(void)videoControllerDidExitFullscreen:(id)arg1 ;
-(void)viewControllerRequestsExit:(id)arg1 reason:(long long)arg2 ;
-(BOOL)videoController:(id)arg1 tappedButtonPart:(unsigned long long)arg2 ;
-(void)videoController:(id)arg1 willShowOverlayWithDuration:(double)arg2 ;
-(void)videoControllerDidShowOverlay:(id)arg1 ;
-(void)videoController:(id)arg1 willHideOverlayWithDuration:(double)arg2 ;
-(void)videoControllerDidHideOverlay:(id)arg1 ;
-(long long)_additionalButtons;
-(id)_advertisementView;
-(BOOL)_areControlsHidden;
-(id)_audioSessionModeOverride;
-(id)_currentItem;
-(id)_HTTPHeaderFields;
-(BOOL)_isNavigationBarHidden;
-(BOOL)_isTVOutEnabled;
-(id)_movieSubtitle;
-(id)_movieTitle;
-(id)_navigationBar;
-(double)_playableEndTime;
-(double)_playableStartTime;
-(id)_resolvedContentURL;
-(double)_seekableEndTime;
-(double)_seekableStartTime;
-(void)_setAdditionalButtons:(long long)arg1 ;
-(void)_setAudioSessionModeOverride:(id)arg1 ;
-(void)_setControlsHidden:(BOOL)arg1 ;
-(void)_setDisallowsAMRAudio:(BOOL)arg1 ;
-(void)_setHTTPHeaderFields:(id)arg1 ;
-(void)_setMovieMediaTypesOverride:(unsigned long long)arg1 ;
-(void)_setMovieSubtitle:(id)arg1 ;
-(void)_setMovieTitle:(id)arg1 ;
-(void)_setNavigationBarHidden:(BOOL)arg1 ;
-(void)_setShouldEnforceHDCP:(BOOL)arg1 ;
-(BOOL)_shouldEnforceHDCP;
-(id)_videoView;
-(void)_setUseHostedWindowWhenFullscreen:(BOOL)arg1 ;
-(BOOL)_useHostedWindowWhenFullscreen;
-(id)_hostedWindow;
-(unsigned)_hostedWindowContextID;
-(void)setMovieControlMode:(int)arg1 ;
-(BOOL)useApplicationAudioSession;
-(id)_movies;
-(void)_setNowPlayingMovie:(id)arg1 ;
-(id)thumbnailImageAtTime:(double)arg1 timeOption:(long long)arg2 ;
-(void)cancelAllThumbnailImageRequests;
-(id)timedMetadata;
-(id)timedMetadataForKey:(id)arg1 ;
-(id)playerItem;
-(void)play;
-(long long)playbackState;
-(double)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(double)arg1 ;
-(void)setPlayerItem:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_delegate;
-(id)view;
-(double)duration;
-(void)stop;
-(id)backgroundView;
-(void)_setDelegate:(id)arg1 ;
-(id)asset;
-(void)setAsset:(id)arg1 ;
-(void)pause;
-(CGSize)naturalSize;
-(void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isFullscreen;
-(double)initialPlaybackTime;
-(void)setInitialPlaybackTime:(double)arg1 ;
-(void)setEndPlaybackTime:(double)arg1 ;
-(id)accessLog;
@end

