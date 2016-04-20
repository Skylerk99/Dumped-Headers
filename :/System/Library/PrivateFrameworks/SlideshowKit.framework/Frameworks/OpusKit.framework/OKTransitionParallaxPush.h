/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:49 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKTransition.h>

@interface OKTransitionParallaxPush : OKTransition {

	unsigned long long _direction;
	double _parallaxAmount;
	double _fadeFromAlpha;
	double _fadeToAlpha;

}

@property (assign,nonatomic) unsigned long long direction;              //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) double parallaxAmount;                     //@synthesize parallaxAmount=_parallaxAmount - In the implementation block
@property (assign,nonatomic) double fadeFromAlpha;                      //@synthesize fadeFromAlpha=_fadeFromAlpha - In the implementation block
@property (assign,nonatomic) double fadeToAlpha;                        //@synthesize fadeToAlpha=_fadeToAlpha - In the implementation block
+(id)supportedSettings;
-(id)init;
-(void)setDirection:(unsigned long long)arg1 ;
-(unsigned long long)direction;
-(id)initWithSettings:(id)arg1 ;
-(void)startInteractiveTransitionWithContext:(id)arg1 ;
-(void)updateInteractiveTransitionWithContext:(id)arg1 andProgress:(double)arg2 ;
-(void)_transitionInView:(id)arg1 fromSubview:(id)arg2 toSubview:(id)arg3 wasInteractive:(BOOL)arg4 duration:(double)arg5 doEaseIn:(BOOL)arg6 doEaseOut:(BOOL)arg7 isCompleting:(BOOL)arg8 wasCancelled:(BOOL)arg9 fromProgress:(double)arg10 completionHandler:(/*^block*/id)arg11 ;
-(void)makeCurrentTransitionInteractiveWithContext:(id)arg1 andProgress:(double)arg2 ;
-(void)setSettingDirection:(unsigned long long)arg1 ;
-(void)setSettingParallaxAmount:(double)arg1 ;
-(void)setSettingFadeFromAlpha:(double)arg1 ;
-(void)setSettingFadeToAlpha:(double)arg1 ;
-(BOOL)tracksWithFinger;
-(double)parallaxAmount;
-(void)setParallaxAmount:(double)arg1 ;
-(double)fadeFromAlpha;
-(void)setFadeFromAlpha:(double)arg1 ;
-(double)fadeToAlpha;
-(void)setFadeToAlpha:(double)arg1 ;
@end

