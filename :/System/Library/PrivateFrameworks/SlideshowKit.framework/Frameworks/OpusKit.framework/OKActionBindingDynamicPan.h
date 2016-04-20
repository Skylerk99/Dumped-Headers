/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:52 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKActionBindingPan.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIAttachmentBehavior, NSString;

@interface OKActionBindingDynamicPan : OKActionBindingPan <UIGestureRecognizerDelegate> {

	double _length;
	double _damping;
	double _frequency;
	UIAttachmentBehavior* _draggingBehavior;

}

@property (assign,nonatomic) double length;                         //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) double damping;                        //@synthesize damping=_damping - In the implementation block
@property (assign,nonatomic) double frequency;                      //@synthesize frequency=_frequency - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(void)dealloc;
-(id)init;
-(void)setDamping:(double)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(double)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)handlePan:(id)arg1 ;
-(void)setLength:(double)arg1 ;
-(double)damping;
-(double)frequency;
-(void)setFrequency:(double)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(void)unload;
-(id)settingObjectForKey:(id)arg1 ;
-(void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2 ;
-(BOOL)respondsToAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2 ;
-(void)performActionWithState:(unsigned long long)arg1 location:(CGPoint)arg2 touchCount:(unsigned long long)arg3 translation:(CGPoint)arg4 velocity:(CGPoint)arg5 direction:(unsigned long long)arg6 context:(id)arg7 ;
@end

