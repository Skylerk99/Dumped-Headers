/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIStarkDosidoAnimation.h>

@class NSNumber;

@interface SBUIStarkDosidoNowPlayingAnimation : SBUIStarkDosidoAnimation {

	NSNumber* _activatedNowPlaying;
	BOOL _waitForNowPlaying;

}
-(void)_cleanupAnimation;
-(id)initFromApp:(id)arg1 toNowPlayingWithStarkScreenController:(id)arg2 ;
-(id)initFromNowPlayingToAlertImpersonator:(id)arg1 starkScreenController:(id)arg2 ;
-(void)_setupStartDependencies;
-(BOOL)_waitsForApplicationActivationIfNecessary;
-(void)_commonInitWaitForNowPlaying:(BOOL)arg1 fromView:(id)arg2 toView:(id)arg3 alert:(id)arg4 toDisplay:(id)arg5 ;
-(id)initFromNowPlayingToNowPlayingWithStarkScreenController:(id)arg1 ;
-(id)initFromNowPlayingToApp:(id)arg1 starkScreenController:(id)arg2 ;
-(id)initFromAlertImpersonator:(id)arg1 toNowPlayingWithStarkScreenController:(id)arg2 ;
-(void)_startAnimation;
@end

