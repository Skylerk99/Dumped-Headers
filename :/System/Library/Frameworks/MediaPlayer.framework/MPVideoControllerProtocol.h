/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:58 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView, UIColor, _UIHostedWindow, UIImage, MPVideoView;


@protocol MPVideoControllerProtocol <MPControllerProtocol>
@property (assign,nonatomic) BOOL allowsDetailScrubbing; 
@property (assign,nonatomic) BOOL allowsWirelessPlayback; 
@property (assign,nonatomic) BOOL alwaysAllowHidingControlsOverlay; 
@property (assign,nonatomic) int artworkImageStyle; 
@property (assign,nonatomic) BOOL attemptAutoPlayWhenControlsHidden; 
@property (nonatomic,readonly) UIView * backgroundView; 
@property (nonatomic,retain) UIColor * backstopColor; 
@property (assign,nonatomic) BOOL canAnimateControlsOverlay; 
@property (nonatomic,readonly) BOOL canChangeScaleMode; 
@property (assign,nonatomic) BOOL canShowControlsOverlay; 
@property (assign,nonatomic) BOOL controlsOverlayVisible; 
@property (assign,nonatomic) unsigned long long desiredParts; 
@property (assign,nonatomic) BOOL disableAutoRotation; 
@property (assign,nonatomic) BOOL disableControlsAutohide; 
@property (assign,nonatomic) unsigned long long disabledParts; 
@property (assign,nonatomic) BOOL displayPlaybackErrorAlerts; 
@property (nonatomic,readonly) _UIHostedWindow * hostedWindow; 
@property (nonatomic,readonly) unsigned hostedWindowContextID; 
@property (assign,nonatomic) BOOL inlinePlaybackUsesTVOut; 
@property (assign,nonatomic) unsigned long long itemTypeOverride; 
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen; 
@property (nonatomic,retain) UIImage * posterImage; 
@property (assign,nonatomic) unsigned long long scaleMode; 
@property (assign,nonatomic) BOOL TVOutEnabled; 
@property (nonatomic,readonly) BOOL viewControllerWillRequestExit; 
@property (nonatomic,retain,readonly) UIView*<MPVideoOverlay> videoOverlayView; 
@property (nonatomic,retain,readonly) MPVideoView * videoView; 
@property (assign,nonatomic) unsigned long long visibleParts; 
@property (assign,nonatomic) BOOL autoPlayWhenLikelyToKeepUp; 
@required
-(void)setFullscreen:(BOOL)arg1;
-(void)setScaleModeOverride:(unsigned long long)arg1 animated:(BOOL)arg2;
-(unsigned long long)scaleMode;
-(void)setCanShowControlsOverlay:(BOOL)arg1;
-(void)setAutoPlayWhenLikelyToKeepUp:(BOOL)arg1;
-(void)setAllowsWirelessPlayback:(BOOL)arg1;
-(BOOL)allowsWirelessPlayback;
-(BOOL)TVOutEnabled;
-(void)setItemTypeOverride:(unsigned long long)arg1;
-(BOOL)canShowControlsOverlay;
-(void)displayVideoView;
-(void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2;
-(BOOL)controlsOverlayVisible;
-(UIView*<MPVideoOverlay>)videoOverlayView;
-(unsigned long long)visibleParts;
-(unsigned long long)desiredParts;
-(void)setDesiredParts:(unsigned long long)arg1;
-(void)setVisibleParts:(unsigned long long)arg1;
-(BOOL)alwaysAllowHidingControlsOverlay;
-(void)setAlwaysAllowHidingControlsOverlay:(BOOL)arg1;
-(void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3;
-(void)setDisplayPlaybackErrorAlerts:(BOOL)arg1;
-(void)setUseHostedWindowWhenFullscreen:(BOOL)arg1;
-(void)setTVOutEnabled:(BOOL)arg1;
-(void)setInlinePlaybackUsesTVOut:(BOOL)arg1;
-(BOOL)inlinePlaybackUsesTVOut;
-(_UIHostedWindow *)hostedWindow;
-(unsigned)hostedWindowContextID;
-(void)setDisabledParts:(unsigned long long)arg1;
-(void)setAttemptAutoPlayWhenControlsHidden:(BOOL)arg1;
-(void)setClosedCaptions:(id)arg1;
-(void)setPosterImage:(id)arg1;
-(void)setArtworkImageStyle:(int)arg1;
-(void)setCanAnimateControlsOverlay:(BOOL)arg1;
-(void)setDisableControlsAutohide:(BOOL)arg1;
-(void)setDisableAutoRotation:(BOOL)arg1;
-(void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
-(void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
-(BOOL)canHideOverlay:(BOOL)arg1;
-(void)setAllowsDetailScrubbing:(BOOL)arg1;
-(void)setControlsNeedLayout;
-(BOOL)viewControllerWillRequestExit;
-(BOOL)autoPlayWhenLikelyToKeepUp;
-(BOOL)disableControlsAutohide;
-(int)artworkImageStyle;
-(unsigned long long)itemTypeOverride;
-(BOOL)canChangeScaleMode;
-(void)setScaleMode:(unsigned long long)arg1;
-(void)prepareToDisplayVideo;
-(unsigned long long)disabledParts;
-(void)exitFullscreen;
-(void)showAlternateTracksController:(id)arg1;
-(void)setOwnsStatusBar:(BOOL)arg1;
-(BOOL)allowsDetailScrubbing;
-(BOOL)attemptAutoPlayWhenControlsHidden;
-(UIColor *)backstopColor;
-(void)setBackstopColor:(id)arg1;
-(BOOL)canAnimateControlsOverlay;
-(void)setControlsOverlayVisible:(BOOL)arg1;
-(BOOL)disableAutoRotation;
-(BOOL)displayPlaybackErrorAlerts;
-(UIImage *)posterImage;
-(MPVideoView *)videoView;
-(UIView *)backgroundView;
-(void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
-(BOOL)isFullscreen;

@end

