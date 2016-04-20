/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CMWakeGestureDelegate;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMWakeGestureManager : NSObject {

	Dispatcher* fWakeDispatcher;
	long long fCurrentState;
	double fLastNotificationTime;
	BOOL fEnableAudioAlert;
	int fNightStandThreshold;
	NSObject*<OS_dispatch_queue> fPrivateQueue;
	unique_ptr<CMWakeGestureVisitor, std::__1::default_delete<CMWakeGestureVisitor> >* fWakeGestureVisitor;
	int fScreenDimmingNotificationToken;
	id<CMWakeGestureDelegate> _delegate;
	long long _wrist;
	long long _crown;

}

@property (assign,nonatomic) id<CMWakeGestureDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long wrist;                                 //@synthesize wrist=_wrist - In the implementation block
@property (assign,nonatomic) long long crown;                                 //@synthesize crown=_crown - In the implementation block
+(BOOL)isWakeGestureAvailable;
+(id)sharedManager;
+(void)initialize;
-(void)stopWakeGestureUpdates;
-(void)updateWristAndCrown;
-(long long)wrist;
-(long long)crown;
-(void)onWakeUpdated:(const CLGestureReport*)arg1 ;
-(void)playAlert;
-(void)setWrist:(long long)arg1 ;
-(void)setCrown:(long long)arg1 ;
-(void)startWakeGestureUpdates;
-(BOOL)simulateGestureWithDelay:(double)arg1 Duration:(double)arg2 ;
-(BOOL)setNightStandMode:(BOOL)arg1 withConfiguration:(long long)arg2 ;
-(void)setDelegate:(id<CMWakeGestureDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CMWakeGestureDelegate>)delegate;
@end

