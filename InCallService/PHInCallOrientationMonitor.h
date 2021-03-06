//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BKSAccelerometerDelegate.h"

@class BKSAccelerometer, NSString;

@interface PHInCallOrientationMonitor : NSObject <BKSAccelerometerDelegate>
{
    _Bool _isOrientationLocked;
    long long _currentOrientation;
    BKSAccelerometer *_accelerometer;
    long long _lockedOrientation;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isOrientationLocked; // @synthesize isOrientationLocked=_isOrientationLocked;
@property(nonatomic) long long lockedOrientation; // @synthesize lockedOrientation=_lockedOrientation;
@property(readonly, retain, nonatomic) BKSAccelerometer *accelerometer; // @synthesize accelerometer=_accelerometer;
@property(nonatomic) long long currentOrientation; // @synthesize currentOrientation=_currentOrientation;
- (void).cxx_destruct;
- (unsigned long long)springBoardLockedInterfaceOrientation;
- (_Bool)isSpringBoardInterfaceOrientationLocked;
@property(readonly, nonatomic) long long activeInterfaceOrientation;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)setOrientationEventsEnabled:(_Bool)arg1;
- (void)_updateCachedOrientationValues;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

