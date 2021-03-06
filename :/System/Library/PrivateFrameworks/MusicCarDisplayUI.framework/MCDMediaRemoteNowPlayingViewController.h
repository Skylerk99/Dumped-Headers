/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:18 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MPUNowPlayingDelegate.h>
#import <libobjc.A.dylib/MCDNowPlayingViewControllerDataSource.h>
#import <libobjc.A.dylib/MCDNowPlayingViewControllerDelegate.h>

@class MPUNowPlayingController, UIAlertController, MCDNowPlayingViewController, NSDictionary, NSString;

@interface MCDMediaRemoteNowPlayingViewController : UIViewController <MPUNowPlayingDelegate, MCDNowPlayingViewControllerDataSource, MCDNowPlayingViewControllerDelegate> {

	MPUNowPlayingController* _nowPlayingController;
	BOOL _isScrubbing;
	UIAlertController* _actionSheetAlertController;
	MCDNowPlayingViewController* _nowPlayingViewController;
	double _elapsedTime;
	struct {
		unsigned play : 1;
		unsigned pause : 1;
		unsigned stop : 1;
		unsigned togglePlayPause : 1;
		unsigned nextTrack : 1;
		unsigned previousTrack : 1;
		unsigned toggleRecord : 1;
		unsigned fastForward : 1;
		unsigned rewind : 1;
		unsigned record : 1;
		unsigned changePlaybackRate : 1;
		unsigned likeTrack : 1;
		unsigned banTrack : 1;
		unsigned rateTrack : 1;
		unsigned bookmarkTrack : 1;
		unsigned fastForwardWithInterval : 1;
		unsigned rewindWithInterval : 1;
	}  __supportedCommandsFlags;
	NSDictionary* _supportedCommands;
	BOOL _observingMediaRemoteCommandChanges;
	NSString* _expectedPlaybackBundleIdentifier;
	NSDictionary* _nowPlayingInfo;

}

@property (nonatomic,copy) NSString * expectedPlaybackBundleIdentifier;              //@synthesize expectedPlaybackBundleIdentifier=_expectedPlaybackBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * nowPlayingInfo;                          //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)nowPlayingInfo;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)preferredFocusedItem;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_updateSupportedCommands;
-(void)nowPlayingController:(id)arg1 nowPlayingInfoDidChange:(id)arg2 ;
-(void)nowPlayingController:(id)arg1 playbackStateDidChange:(BOOL)arg2 ;
-(void)nowPlayingController:(id)arg1 nowPlayingApplicationDidChange:(id)arg2 ;
-(void)nowPlayingController:(id)arg1 elapsedTimeDidChange:(double)arg2 ;
-(void)setExpectedPlaybackBundleIdentifier:(NSString *)arg1 ;
-(id)artistTextForNowPlayingController:(id)arg1 ;
-(id)albumTextForNowPlayingController:(id)arg1 ;
-(id)titleForNowPlayingController:(id)arg1 ;
-(id)backgroundArtForNowPlayingController:(id)arg1 ;
-(BOOL)nowPlayingViewControllerIsShowingExplicitTrack:(id)arg1 ;
-(double)playbackDurationForNowPlayingViewController:(id)arg1 withElapsedTime:(out double*)arg2 ;
-(BOOL)nowPlayingViewControllerIsPlaying:(id)arg1 ;
-(BOOL)nowPlayingViewController:(id)arg1 shouldDisplayButton:(long long)arg2 withImage:(out id*)arg3 tinted:(out BOOL*)arg4 ;
-(void)nowPlayingViewController:(id)arg1 didSendAction:(long long)arg2 state:(long long)arg3 ;
-(void)_nowPlayingAppChangedIsPlaying:(id)arg1 ;
-(void)_stopObservingRemoteCommandChanges;
-(void)_startObservingRemoteCommandChanges;
-(void)_updateAllContent;
-(void)_updateNowPlayingDictionary:(id)arg1 ;
-(BOOL)_nowPlayingBundleIDMatchesExpectedID;
-(void)_updatePlayControls;
-(unsigned)_bestCommandForFastForwardPosition;
-(double)_skipForwardInterval;
-(id)_skipIntervalButtonImageForInterval:(double)arg1 ;
-(unsigned)_bestCommandForRewindPosition;
-(BOOL)_trackIsLiked;
-(double)_skipBackwardInterval;
-(void)_performActionForRightCommand;
-(void)_updateSupportedCommandsWithArray:(id)arg1 ;
-(void)_supportedControlsDidUpdate:(id)arg1 ;
-(MRMediaRemoteCommandInfoRef)_mediaCommandInfoForCommand:(unsigned)arg1 ;
-(id)_titleForFeedbackCommand:(unsigned)arg1 ;
-(void)_presentLikeBanActionSheet;
-(NSString *)expectedPlaybackBundleIdentifier;
@end

