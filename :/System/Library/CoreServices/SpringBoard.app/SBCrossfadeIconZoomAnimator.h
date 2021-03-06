/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBScaleIconZoomAnimator.h>

@class UIView, SBCrossfadeZoomSettings;

@interface SBCrossfadeIconZoomAnimator : SBScaleIconZoomAnimator {

	UIView* _crossfadeView;
	BOOL _performsTrueCrossfade;
	BOOL _masksCorners;

}

@property (nonatomic,retain) SBCrossfadeZoomSettings * settings; 
@property (assign,nonatomic) BOOL performsTrueCrossfade;                      //@synthesize performsTrueCrossfade=_performsTrueCrossfade - In the implementation block
@property (assign,nonatomic) BOOL masksCorners;                               //@synthesize masksCorners=_masksCorners - In the implementation block
-(void)_prepareAnimation;
-(void)setMasksCorners:(BOOL)arg1 ;
-(BOOL)masksCorners;
-(BOOL)performsTrueCrossfade;
-(void)setPerformsTrueCrossfade:(BOOL)arg1 ;
-(void)_cleanupAnimation;
-(CGRect)_zoomedFrame;
-(CGPoint)_zoomedIconCenter;
-(void)_setAnimationFraction:(double)arg1 ;
-(unsigned long long)_numberOfSignificantAnimations;
-(void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(/*^block*/id)arg3 ;
-(id)initWithFolderController:(id)arg1 crossfadeView:(id)arg2 icon:(id)arg3 ;
-(void)_cleanupZoom;
-(void)_delayedForRotation;
-(void)_assertCrossfadeViewSizeIfNecessary;
-(void)dealloc;
@end

