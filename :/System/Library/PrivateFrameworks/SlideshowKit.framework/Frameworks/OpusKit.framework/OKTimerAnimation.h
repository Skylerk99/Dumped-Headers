/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:51 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer, NSDictionary, NSMutableDictionary, CAMediaTimingFunction;

@interface OKTimerAnimation : NSObject {

	NSTimer* _timer;
	NSDictionary* _fromValues;
	NSDictionary* _toValues;
	double _duration;
	double _currentInterval;
	NSMutableDictionary* _previousValues;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;
	BOOL _additionally;
	CAMediaTimingFunction* _timingFunction;

}

@property (assign,nonatomic) BOOL additionally;                                   //@synthesize additionally=_additionally - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
+(id)animationFromValues:(id)arg1 toValues:(id)arg2 withDuration:(double)arg3 progressBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)handleTimer:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(CAMediaTimingFunction *)timingFunction;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)start;
-(void)setAdditionally:(BOOL)arg1 ;
-(BOOL)additionally;
@end

