/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:45 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMRemoteDaemonProtocol, OS_dispatch_queue;
#import <IMCore/IMCore-Structs.h>
@class IMRemoteObject, NSMutableDictionary, IMLocalObject, IMDaemonListener, NSMutableArray, NSProtocolChecker, NSString, NSObject, NSRecursiveLock, NSArray, NSLock;

@interface IMDaemonController : NSObject {

	id _delegate;
	IMRemoteObject*<IMRemoteDaemonProtocol> _remoteObject;
	NSMutableDictionary* _listenerMap;
	IMLocalObject* _localObject;
	IMDaemonListener* _daemonListener;
	NSMutableArray* _services;
	NSProtocolChecker* _protocol;
	NSString* _listenerID;
	NSObject*<OS_dispatch_queue> _listenerLockQueue;
	NSObject*<OS_dispatch_queue> _remoteDaemonLockQueue;
	NSObject*<OS_dispatch_queue> _localObjectLockQueue;
	NSObject*<OS_dispatch_queue> _remoteMessageQueue;
	NSRecursiveLock* _connectionLock;
	NSArray* _servicesToAllow;
	NSArray* _servicesToDeny;
	CFRunLoopSourceRef _runLoopSource;
	NSLock* _blockingLock;
	BOOL _hasCheckedForDaemon;
	BOOL _preventReconnect;
	BOOL _inBlockingConnect;
	BOOL _acquiringDaemonConnection;
	BOOL _autoReconnect;
	BOOL _blocksConnectionAtResume;
	BOOL _hasBeenSuspended;
	unsigned _gMyFZListenerCapabilities;
	unsigned _cachedCapabilities;
	unsigned _lastUpdatedCapabilities;

}

@property (nonatomic,readonly) IMDaemonListener * listener;                                                    //@synthesize daemonListener=_daemonListener - In the implementation block
@property (nonatomic,readonly) BOOL isConnected; 
@property (nonatomic,readonly) unsigned capabilities; 
@property (setter=_setServicesToAllow:,retain) NSArray * _servicesToAllow;                                     //@synthesize servicesToAllow=_servicesToAllow - In the implementation block
@property (setter=_setServicesToDeny:,retain) NSArray * _servicesToDeny;                                       //@synthesize servicesToDeny=_servicesToDeny - In the implementation block
@property (setter=_setListenerID:,nonatomic,retain) NSString * _listenerID;                                    //@synthesize listenerID=_listenerID - In the implementation block
@property (assign,nonatomic) id delegate;                                                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=_setBlocksConnectionAtResume:,nonatomic) BOOL _blocksConnectionAtResume;              //@synthesize blocksConnectionAtResume=_blocksConnectionAtResume - In the implementation block
@property (nonatomic,readonly) BOOL isConnecting; 
@property (setter=__setCapabilities:) unsigned _capabilities;                                                  //@synthesize gMyFZListenerCapabilities=_gMyFZListenerCapabilities - In the implementation block
@property (setter=_setAutoReconnect:) BOOL _autoReconnect;                                                     //@synthesize autoReconnect=_autoReconnect - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _remoteMessageQueue;                               //@synthesize remoteMessageQueue=_remoteMessageQueue - In the implementation block
+(id)sharedInstance;
+(id)sharedController;
+(void)_blockUntilSendQueueIsEmpty;
+(BOOL)_applicationWillTerminate;
+(void)_setApplicationWillTerminate;
-(BOOL)isConnecting;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(unsigned)_capabilities;
-(IMDaemonListener *)listener;
-(BOOL)isConnected;
-(void)systemApplicationWillEnterForeground;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationDidSuspend;
-(void)systemApplicationDidResume;
-(void)blockUntilConnected;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg1 ;
-(void)_setCapabilities:(unsigned)arg1 ;
-(unsigned)capabilitiesForListenerID:(id)arg1 ;
-(void)sendABInformationToDaemon;
-(NSArray *)_servicesToAllow;
-(NSArray *)_servicesToDeny;
-(void)_noteSetupComplete;
-(void)_setAutoReconnect:(BOOL)arg1 ;
-(void)_addressBookChanged:(id)arg1 ;
-(void)__setCapabilities:(unsigned)arg1 ;
-(void)_localObjectCleanup;
-(void)_remoteObjectCleanup;
-(void)_disconnectFromDaemonWithForce:(BOOL)arg1 ;
-(BOOL)_blocksConnectionAtResume;
-(BOOL)__isLocalObjectValidOnQueue:(id)arg1 ;
-(BOOL)__isRemoteObjectValidOnQueue:(id)arg1 ;
-(BOOL)remoteObjectExists;
-(void)remoteObjectDiedNotification:(id)arg1 ;
-(void)localObjectDiedNotification:(id)arg1 ;
-(void)_blockUntilSendQueueIsEmpty;
-(BOOL)localObjectExists;
-(BOOL)connectToDaemon;
-(BOOL)_autoReconnect;
-(BOOL)_makeConnectionWithLaunch:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_connectToDaemonWithLaunch:(BOOL)arg1 capabilities:(unsigned)arg2 ;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg1 capabilities:(unsigned)arg2 blockUntilConnected:(BOOL)arg3 ;
-(BOOL)hasListenerForID:(id)arg1 ;
-(BOOL)setCapabilities:(unsigned)arg1 forListenerID:(id)arg2 ;
-(void)_listenerSetUpdated;
-(void)setMyStatus:(unsigned long long)arg1 message:(id)arg2 forAccount:(id)arg3 ;
-(double)_connectionTimeout;
-(void)_agentDidLaunchNotification:(id)arg1 ;
-(void)_handleDaemonException:(id)arg1 ;
-(void)disconnectFromDaemonWithForce:(BOOL)arg1 ;
-(void)disconnectFromDaemon;
-(BOOL)addListenerID:(id)arg1 capabilities:(unsigned)arg2 ;
-(BOOL)removeListenerID:(id)arg1 ;
-(id)_remoteObject;
-(void)setMyPicture:(id)arg1 smallPictureData:(id)arg2 ;
-(void)setMyProfile:(id)arg1 ;
-(void)setMyStatus:(unsigned long long)arg1 message:(id)arg2 ;
-(void)_setBlocksConnectionAtResume:(BOOL)arg1 ;
-(BOOL)_acquiringDaemonConnection;
-(void)listener:(id)arg1 setListenerCapabilities:(unsigned)arg2 ;
-(void)listener:(id)arg1 setValue:(id)arg2 ofProperty:(id)arg3 ;
-(void)listener:(id)arg1 setValue:(id)arg2 ofPersistentProperty:(id)arg3 ;
-(void)setDaemonTerminatesWithoutListeners:(BOOL)arg1 ;
-(void)setDaemonLogsOutWithoutStatusListeners:(BOOL)arg1 ;
-(NSString *)_listenerID;
-(void)_setListenerID:(id)arg1 ;
-(void)_setServicesToAllow:(id)arg1 ;
-(void)_setServicesToDeny:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_remoteMessageQueue;
-(unsigned)capabilities;
@end

