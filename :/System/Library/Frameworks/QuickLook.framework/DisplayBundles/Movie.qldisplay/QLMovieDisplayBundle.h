/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/Movie.qldisplay/Movie
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Movie/Movie-Structs.h>
#import <QuickLook/QLDisplayBundle.h>

@class QLMovieViewController;

@interface QLMovieDisplayBundle : QLDisplayBundle {

	QLMovieViewController* _movieViewController;

}
+(BOOL)needsAVControls;
+(double)allowedLoadingDelay;
-(void)_loadMovieControllerIfNeeded;
-(void)_updateAVState;
-(void)_updateScrubberOffsetForTraitCollection:(id)arg1 ;
-(void)enterBackground;
-(void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2 ;
-(void)togglePlayState;
-(void)loadWithHints:(id)arg1 ;
-(void)setOrbMode:(unsigned long long)arg1 ;
-(BOOL)wantsCustomOrbPop;
-(void)audioSessionDidInterrupt;
-(BOOL)canBeCached;
-(void)enterForeground;
-(BOOL)canCopyToPasteboard;
-(int)airPlayMode;
-(void)willStartSwiping:(BOOL)arg1 ;
-(void)didFinishSwiping;
-(void)dealloc;
-(void)invalidate;
-(void)loadView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

