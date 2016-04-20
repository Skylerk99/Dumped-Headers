/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:15 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreTime.framework/TimeSources/LinkSource.bundle/LinkSource
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkSource/LinkSource-Structs.h>
#import <LinkSource/TMLSLinkDelegate.h>

@protocol TMMonotonicClock;
@class NSDictionary, TMLSLink, NSString;

@interface TMLSLinkSource : NSObject <TMLSLinkDelegate> {

	NSDictionary* _lastCompanionTimeUpdate;
	BOOL _coalescingUpdates;
	BOOL _gizmo;
	id<TMMonotonicClock> _clock;
	id _daemonCore;
	TMLSLink* _link;
	NSString* _companionTimeZone;
	SCD_Struct_TM0 _lastRTCSample;

}

@property (nonatomic,retain) id<TMMonotonicClock> clock;                                       //@synthesize clock=_clock - In the implementation block
@property (assign,nonatomic,__weak) id daemonCore;                                             //@synthesize daemonCore=_daemonCore - In the implementation block
@property (nonatomic,retain) TMLSLink * link;                                                  //@synthesize link=_link - In the implementation block
@property (assign,nonatomic) SCD_Struct_TM0 lastRTCSample;                                     //@synthesize lastRTCSample=_lastRTCSample - In the implementation block
@property (nonatomic,copy) NSString * companionTimeZone;                                       //@synthesize companionTimeZone=_companionTimeZone - In the implementation block
@property (assign,getter=isLastRTCSampleValid,nonatomic) BOOL lastRTCSampleValid; 
@property (assign,getter=isGizmo,nonatomic) BOOL gizmo;                                        //@synthesize gizmo=_gizmo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)rtcWhenBeyondUncertainty:(double)arg1 ;
-(id)timeAtRtc:(double)arg1 ;
-(id)dictionary;
-(id)initWithClock:(id)arg1 daemonCore:(id)arg2 ;
-(void)systemTimeZoneChanged;
-(void)link:(id)arg1 didReceiveDrift:(double)arg2 ;
-(void)setLastRTCSample:(SCD_Struct_TM0)arg1 ;
-(NSString *)companionTimeZone;
-(void)syncTimeZone;
-(id)daemonCore;
-(SCD_Struct_TM0)lastRTCSample;
-(void)link:(id)arg1 didReceiveTime:(double)arg2 remoteRTC:(double)arg3 uncertainty:(double)arg4 source:(id)arg5 ;
-(id)initWithClock:(id)arg1 ;
-(void)syncAutomaticTimeEnabled;
-(void)setLastRTCSampleValid:(BOOL)arg1 ;
-(void)linkDidReceiveReset:(id)arg1 ;
-(void)setCompanionTimeZone:(NSString *)arg1 ;
-(BOOL)isLastRTCSampleValid;
-(void)systemTimeChanged:(id)arg1 ;
-(void)publishCommand:(id)arg1 ;
-(void)link:(id)arg1 didReceiveTimeZone:(id)arg2 forSource:(id)arg3 ;
-(void)setDaemonCore:(id)arg1 ;
-(void)link:(id)arg1 didSyncLocalRTC:(double)arg2 remoteRTC:(double)arg3 uncertainty:(double)arg4 ;
-(void)link:(id)arg1 didReceiveAutomaticTimeEnabled:(BOOL)arg2 ;
-(id<TMMonotonicClock>)clock;
-(void)setClock:(id<TMMonotonicClock>)arg1 ;
-(void)setGizmo:(BOOL)arg1 ;
-(BOOL)isGizmo;
-(void)dealloc;
-(id)init;
-(void)significantTimeChange;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(TMLSLink *)link;
-(void)setLink:(TMLSLink *)arg1 ;
@end

