/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:55 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MRTransition.h>

@class MROrigamiAnimationPath;

@interface MRTransitionOrigamiFlip : MRTransition {

	MROrigamiAnimationPath* mBigSwing;
	MROrigamiAnimationPath* mSideSwing;

}
-(id)initWithTransitionID:(id)arg1 ;
-(BOOL)supportsDirectionOverride;
-(void)_cleanupSwingTimings;
-(void)_setupSwingTimings;
-(BOOL)controlsLayersTime;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)setAttributes:(id)arg1 ;
-(void)cleanup;
@end

