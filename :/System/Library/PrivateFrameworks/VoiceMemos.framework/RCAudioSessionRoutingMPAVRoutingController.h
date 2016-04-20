/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:49 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVRoutingController.h>

@class AVAudioSession, NSString, AVAudioSessionPortDescription, MPAVRoute, NSArray;

@interface RCAudioSessionRoutingMPAVRoutingController : MPAVRoutingController {

	AVAudioSession* _audioSession;
	NSString* _audioSessionCategory;
	unsigned long long _audioSessionCategoryOptions;
	BOOL _hasCategoryEverBeenActive;
	AVAudioSessionPortDescription* _cachedPickedInputRoutePortDescription;
	MPAVRoute* _cachedPickedOutputRoute;
	NSArray* _cachedPickableOutputRoutes;

}

@property (nonatomic,readonly) AVAudioSessionPortDescription * cachedPickedInputRoutePortDescription;              //@synthesize cachedPickedInputRoutePortDescription=_cachedPickedInputRoutePortDescription - In the implementation block
@property (nonatomic,readonly) MPAVRoute * cachedPickedOutputRoute;                                                //@synthesize cachedPickedOutputRoute=_cachedPickedOutputRoute - In the implementation block
@property (nonatomic,readonly) NSArray * cachedPickableOutputRoutes;                                               //@synthesize cachedPickableOutputRoutes=_cachedPickableOutputRoutes - In the implementation block
@property (nonatomic,readonly) BOOL hasCategoryEverBeenActive;                                                     //@synthesize hasCategoryEverBeenActive=_hasCategoryEverBeenActive - In the implementation block
@property (nonatomic,readonly) BOOL isRoutingToAirPlayMirrorDestination; 
@property (nonatomic,readonly) BOOL isRoutingToPhoneCall; 
@property (nonatomic,readonly) BOOL isAudioSessionAppropriateForQueryingRoutes; 
-(BOOL)routeOtherThanHandsetAndSpeakerAvailable;
-(void)fetchAvailableRoutesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)initWithName:(id)arg1 ;
-(void)showAvailableRoutes;
-(BOOL)isRoutingToPhoneCall;
-(BOOL)hasCategoryEverBeenActive;
-(AVAudioSessionPortDescription *)cachedPickedInputRoutePortDescription;
-(BOOL)isAudioSessionAppropriateForQueryingRoutes;
-(NSArray *)cachedPickableOutputRoutes;
-(MPAVRoute *)cachedPickedOutputRoute;
-(BOOL)isRoutingToAirPlayMirrorDestination;
-(BOOL)makeAudioSessionCategoryActive:(BOOL)arg1 ;
-(void)audioSessionInterruptionNotification:(id)arg1 ;
-(void)audioSessionRouteChangeNotification:(id)arg1 ;
-(id)_rcDelegate;
-(void)_updateHasCategoryEverBeenActive;
@end

