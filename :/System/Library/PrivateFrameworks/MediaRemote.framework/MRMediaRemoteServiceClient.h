/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaRemote/MediaRemote-Structs.h>
@class NSObject, NSMutableArray, MRAVRoutingClientController, NSArray;

@interface MRMediaRemoteServiceClient : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	unsigned long long _registeredNowPlayingObservers;
	NSMutableArray* _registeredOrigins;
	MRAVRoutingClientController* _routingClientController;
	BOOL _receivesExternalScreenTypeChangedNotifications;
	BOOL _receivesSupportedCommandsNotifications;
	BOOL _receivesRoutesChangedNotifications;
	BOOL _receivesOriginChangedNotifications;
	BOOL _receivesPlaybackErrorNotifications;
	NSArray* _nowPlayingNotificationObservers;
	NSArray* _routingNotificationObservers;
	NSArray* _originNotificationObservers;
	MRMediaRemoteServiceRef _service;
	NSArray* _externalScreenTypeNotificationObservers;

}

@property (nonatomic,readonly) MRMediaRemoteServiceRef service;                                                                      //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serviceQueue; 
@property (getter=isRegisteredForNowPlayingNotifications,nonatomic,readonly) BOOL registeredForNowPlayingNotifications; 
@property (assign,nonatomic) BOOL receivesExternalScreenTypeChangedNotifications;                                                    //@synthesize receivesExternalScreenTypeChangedNotifications=_receivesExternalScreenTypeChangedNotifications - In the implementation block
@property (assign,nonatomic) BOOL receivesSupportedCommandsNotifications;                                                            //@synthesize receivesSupportedCommandsNotifications=_receivesSupportedCommandsNotifications - In the implementation block
@property (assign,nonatomic) BOOL receivesRoutesChangedNotifications;                                                                //@synthesize receivesRoutesChangedNotifications=_receivesRoutesChangedNotifications - In the implementation block
@property (assign,nonatomic) BOOL receivesOriginChangedNotifications;                                                                //@synthesize receivesOriginChangedNotifications=_receivesOriginChangedNotifications - In the implementation block
@property (assign,nonatomic) BOOL receivesPlaybackErrorNotifications;                                                                //@synthesize receivesPlaybackErrorNotifications=_receivesPlaybackErrorNotifications - In the implementation block
@property (nonatomic,readonly) NSArray * registeredOrigins; 
@property (nonatomic,retain) NSArray * externalScreenTypeNotificationObservers;                                                      //@synthesize externalScreenTypeNotificationObservers=_externalScreenTypeNotificationObservers - In the implementation block
@property (nonatomic,retain) NSArray * nowPlayingNotificationObservers;                                                              //@synthesize nowPlayingNotificationObservers=_nowPlayingNotificationObservers - In the implementation block
@property (nonatomic,retain) NSArray * routingNotificationObservers;                                                                 //@synthesize routingNotificationObservers=_routingNotificationObservers - In the implementation block
@property (nonatomic,retain) NSArray * originNotificationObservers;                                                                  //@synthesize originNotificationObservers=_originNotificationObservers - In the implementation block
+(id)sharedServiceClient;
-(NSObject*<OS_dispatch_queue>)serviceQueue;
-(void)dealloc;
-(id)init;
-(MRMediaRemoteServiceRef)service;
-(void)registerForNowPlayingNotificationsWithQueue:(id)arg1 ;
-(void)unregisterForNowPlayingNotifications;
-(void)setReceivesSupportedCommandsNotifications:(BOOL)arg1 ;
-(void)setRoutingNotificationObservers:(NSArray *)arg1 ;
-(void)setExternalScreenTypeNotificationObservers:(NSArray *)arg1 ;
-(void)setOriginNotificationObservers:(NSArray *)arg1 ;
-(void)setNowPlayingNotificationObservers:(NSArray *)arg1 ;
-(BOOL)isRegisteredForNowPlayingNotifications;
-(void)setReceivesRoutesChangedNotifications:(BOOL)arg1 ;
-(void)setReceivesExternalScreenTypeChangedNotifications:(BOOL)arg1 ;
-(void)setReceivesOriginChangedNotifications:(BOOL)arg1 ;
-(NSArray *)registeredOrigins;
-(BOOL)registerOrigin:(MROriginRef)arg1 ;
-(BOOL)unregisterOrigin:(MROriginRef)arg1 ;
-(void)unregisterAllOrigins;
-(void)fetchPickableRoutesWithCategory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)nowPlayingNotificationObservers;
-(NSArray *)routingNotificationObservers;
-(NSArray *)originNotificationObservers;
-(BOOL)receivesExternalScreenTypeChangedNotifications;
-(BOOL)receivesSupportedCommandsNotifications;
-(BOOL)receivesRoutesChangedNotifications;
-(BOOL)receivesOriginChangedNotifications;
-(BOOL)receivesPlaybackErrorNotifications;
-(void)setReceivesPlaybackErrorNotifications:(BOOL)arg1 ;
-(NSArray *)externalScreenTypeNotificationObservers;
@end

