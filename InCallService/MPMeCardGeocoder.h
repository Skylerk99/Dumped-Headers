//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, PCPersistentTimer;

@interface MPMeCardGeocoder : NSObject
{
    void *_addressBook;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_addresses;
    PCPersistentTimer *_networkPreferencesTimeoutTimer;
}

+ (id)sharedMeCardGeocoder;
- (void).cxx_destruct;
- (void)_addressBookChanged;
@property _Bool isActivelyUsing;
- (id)currentValidLocations;
- (void)_rebuildAddressArray;
- (void)_scheduleLongTermRebuild;
- (id)_dateOfOldestAddress;
- (void)_unscheduleLongTermRebuild;
- (void)_scheduleNextGeocode;
- (void)_schedulePerformGeocodesTaskWithStartWakeTime:(id)arg1 dropDeadWakeTime:(id)arg2;
- (_Bool)_unschedulePerformGeocodesWakeTaskIfEarlierThan:(id)arg1;
- (void)_doWork;
- (void)_saveGeoCache;
- (void)scheduleNextGeocode;
- (void)scheduleImmediateGeocode;
- (_Bool)_isNetworkAvailable;
- (void *)addressBook;
- (void)_loadAddressBook;
- (void)dealloc;
- (void)_networkPreferencesLoaded;
- (id)init;

@end

