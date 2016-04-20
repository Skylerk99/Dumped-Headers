/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUReportingController.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, SSVPlayActivityController;

@interface MPUJinglePlayActivityReportingController : MPUReportingController {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	double _nonCatalogAggregatePlayDuration;
	double _nonCatalogAggregateStartTime;
	NSString* _nonCatalogDeviceName;
	BOOL _nonCatalogOffline;
	BOOL _nonCatalogSBEnabled;
	unsigned long long _nonCatalogSourceType;
	unsigned long long _nonCatalogStoreAccountID;
	BOOL _shouldReportAggregateTimePlayActivityEvents;
	BOOL _shouldReportPlayActivityEvents;
	SSVPlayActivityController* _playActivityController;

}

@property (nonatomic,readonly) SSVPlayActivityController * playActivityController;              //@synthesize playActivityController=_playActivityController - In the implementation block
@property (assign,nonatomic) BOOL shouldReportAggregateTimePlayActivityEvents;                  //@synthesize shouldReportAggregateTimePlayActivityEvents=_shouldReportAggregateTimePlayActivityEvents - In the implementation block
@property (assign,nonatomic) BOOL shouldReportPlayActivityEvents;                               //@synthesize shouldReportPlayActivityEvents=_shouldReportPlayActivityEvents - In the implementation block
-(void)dealloc;
-(id)init;
-(void)_recordReportingEvents:(id)arg1 ;
-(id)_captureNonCatalogAggregatePlayActivityEvent;
-(void)_clearNonCatalogAggregatePlayActivityEventData;
-(void)setShouldReportAggregateTimePlayActivityEvents:(BOOL)arg1 ;
-(void)setShouldReportPlayActivityEvents:(BOOL)arg1 ;
-(void)acquirePendingPlayActivityEventsForStoreAccountID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(SSVPlayActivityController *)playActivityController;
-(BOOL)shouldReportAggregateTimePlayActivityEvents;
-(BOOL)shouldReportPlayActivityEvents;
-(id)initWithWritingStyle:(unsigned long long)arg1 ;
-(void)completePendingPlayActivityEvents:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_applicationWillTerminateNotification:(id)arg1 ;
@end

