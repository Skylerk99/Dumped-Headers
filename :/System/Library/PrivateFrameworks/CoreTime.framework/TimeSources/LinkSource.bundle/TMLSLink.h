/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:15 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreTime.framework/TimeSources/LinkSource.bundle/LinkSource
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkSource/TMLSTransportDelegate.h>

@protocol OS_dispatch_source, TMMonotonicClock, TMLSLinkDelegate;
@class NSObject, NSMutableDictionary, TMLSTransport, NSArray, NSString;

@interface TMLSLink : NSObject <TMLSTransportDelegate> {

	NSObject*<OS_dispatch_source> _syncTimer;
	NSMutableDictionary* _dataPendingSend;
	NSMutableDictionary* _dataPendingAck;
	NSMutableDictionary* _dataPendingRetry;
	NSMutableDictionary* _pendingIdentifiers;
	BOOL _compatible;
	BOOL _gizmo;
	int _syncState;
	id<TMMonotonicClock> _clock;
	id<TMLSLinkDelegate> _delegate;
	TMLSTransport* _transport;
	NSArray* _registeredDevices;

}

@property (nonatomic,retain) id<TMMonotonicClock> clock;                       //@synthesize clock=_clock - In the implementation block
@property (nonatomic,retain) id<TMLSLinkDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TMLSTransport * transport;                        //@synthesize transport=_transport - In the implementation block
@property (assign,getter=isCompatible,nonatomic) BOOL compatible;              //@synthesize compatible=_compatible - In the implementation block
@property (nonatomic,retain) NSArray * registeredDevices;                      //@synthesize registeredDevices=_registeredDevices - In the implementation block
@property (assign,getter=isGizmo,nonatomic) BOOL gizmo;                        //@synthesize gizmo=_gizmo - In the implementation block
@property (assign,nonatomic) int syncState;                                    //@synthesize syncState=_syncState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleDeliveryOfIdentifier:(id)arg1 withData:(id)arg2 withError:(id)arg3 ;
-(void)doBTConversionFailure;
-(id)initWithDelegate:(id)arg1 clock:(id)arg2 ;
-(void)updateCompatibilityState;
-(void)sendAutomaticTimeEnabled:(BOOL)arg1 ;
-(void)sendData:(id)arg1 localOnly:(BOOL)arg2 nonWaking:(BOOL)arg3 ;
-(void)sendTimeZone:(id)arg1 forSource:(id)arg2 ;
-(NSArray *)registeredDevices;
-(void)sendDrift:(double)arg1 ;
-(void)hasDeliveredIdentifier:(id)arg1 ;
-(void)didUpdateDeviceRegistryCompatibilityState:(id)arg1 ;
-(void)syncRTC;
-(void)setSyncState:(int)arg1 ;
-(void)doSyncRTC;
-(void)convertBTTime:(id)arg1 ;
-(void)sendSyncRequest;
-(void)setRegisteredDevices:(NSArray *)arg1 ;
-(void)sendTime:(double)arg1 localRTC:(double)arg2 uncertainty:(double)arg3 source:(id)arg4 ;
-(void)createSyncTimer;
-(void)dataReceived:(id)arg1 ;
-(void)convertBTTimeFinal:(id)arg1 ;
-(void)sendBTConversionFailure;
-(void)sendReset;
-(void)didSendDataIdentifier:(id)arg1 withError:(id)arg2 ;
-(void)handleSyncTimer;
-(void)setCompatible:(BOOL)arg1 ;
-(void)restartSync;
-(id<TMMonotonicClock>)clock;
-(void)setClock:(id<TMMonotonicClock>)arg1 ;
-(void)setGizmo:(BOOL)arg1 ;
-(BOOL)isGizmo;
-(void)setDelegate:(id<TMLSLinkDelegate>)arg1 ;
-(id<TMLSLinkDelegate>)delegate;
-(int)syncState;
-(TMLSTransport *)transport;
-(void)setTransport:(TMLSTransport *)arg1 ;
-(BOOL)isCompatible;
@end

