/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:52 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKActionBinding.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSMutableDictionary, AVCaptureSession, NSTimer, UILongPressGestureRecognizer, NSString;

@interface OKActionBindingMicrophoneNoise : OKActionBinding <UIGestureRecognizerDelegate> {

	unsigned long long _numberOfTouchesRequired;
	double _interval;
	NSMutableDictionary* _actionContext;
	AVCaptureSession* _session;
	NSTimer* _timer;
	float _lastMeanAudioLevel;
	BOOL _shouldForwardMotion;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	CGPoint _lastLocation;

}

@property (assign,nonatomic) unsigned long long numberOfTouchesRequired;              //@synthesize numberOfTouchesRequired=_numberOfTouchesRequired - In the implementation block
@property (assign,nonatomic) double interval;                                         //@synthesize interval=_interval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(void)dealloc;
-(id)init;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)numberOfTouchesRequired;
-(id)initWithSettings:(id)arg1 ;
-(void)handleLongPress:(id)arg1 ;
-(void)setInterval:(double)arg1 ;
-(double)interval;
-(void)unload;
-(id)settingObjectForKey:(id)arg1 ;
-(void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2 ;
-(BOOL)respondsToAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2 ;
-(void)_updateAudioLevels:(id)arg1 ;
@end

