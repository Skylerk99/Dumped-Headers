//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSTimer;

@interface PHIntervalTimer : NSObject
{
    double _interval;
    NSTimer *_timer;
    NSMutableSet *_observers;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)oneSecondTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableSet *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double interval; // @synthesize interval=_interval;
- (void).cxx_destruct;
- (void)_postNotification;
- (void)_invalidateTimerIfNecessary;
- (void)_createTimerIfNecessary;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithInterval:(double)arg1;

@end
