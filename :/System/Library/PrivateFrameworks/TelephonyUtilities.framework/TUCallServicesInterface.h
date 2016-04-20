/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:30 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUVideoProxyCallManagerDelegate.h>
#import <libobjc.A.dylib/TUCallServicesClient.h>
#import <libobjc.A.dylib/TUCallServicesProtocol.h>

@protocol TUCallServicesDaemonDelegate, OS_dispatch_semaphore;
@class NSArray, TUProxyCallModel, NSXPCConnection, NSObject, NSMapTable, TUCallNotificationManager, TUVideoProxyCallManager, NSString;

@interface TUCallServicesInterface : NSObject <TUVideoProxyCallManagerDelegate, TUCallServicesClient, TUCallServicesProtocol> {

	BOOL _hasRequestedInitialState;
	int _connectionRequestNotificationToken;
	NSArray* _currentCalls;
	id<TUCallServicesDaemonDelegate> _daemonDelegate;
	TUProxyCallModel* _proxyCallModel;
	NSArray* _localProxyCalls;
	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_semaphore> _initialStateSemaphore;
	NSMapTable* _uniqueProxyIdentifierToProxyCall;
	NSObject*<OS_dispatch_semaphore> _uniqueProxyIdentifierToProxyCallSemaphore;
	TUCallNotificationManager* _callNotificationManager;
	TUVideoProxyCallManager* _videoProxyCallManager;

}

@property (assign,nonatomic) id<TUCallServicesDaemonDelegate> daemonDelegate;                                         //@synthesize daemonDelegate=_daemonDelegate - In the implementation block
@property (nonatomic,copy) NSArray * currentCalls;                                                                    //@synthesize currentCalls=_currentCalls - In the implementation block
@property (nonatomic,retain) TUProxyCallModel * proxyCallModel;                                                       //@synthesize proxyCallModel=_proxyCallModel - In the implementation block
@property (nonatomic,copy) NSArray * localProxyCalls;                                                                 //@synthesize localProxyCalls=_localProxyCalls - In the implementation block
@property (nonatomic,readonly) BOOL daemonDelegateIsLocal; 
@property (assign,nonatomic) int connectionRequestNotificationToken;                                                  //@synthesize connectionRequestNotificationToken=_connectionRequestNotificationToken - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> initialStateSemaphore;                                  //@synthesize initialStateSemaphore=_initialStateSemaphore - In the implementation block
@property (assign,nonatomic) BOOL hasRequestedInitialState;                                                           //@synthesize hasRequestedInitialState=_hasRequestedInitialState - In the implementation block
@property (nonatomic,retain) NSMapTable * uniqueProxyIdentifierToProxyCall;                                           //@synthesize uniqueProxyIdentifierToProxyCall=_uniqueProxyIdentifierToProxyCall - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> uniqueProxyIdentifierToProxyCallSemaphore;              //@synthesize uniqueProxyIdentifierToProxyCallSemaphore=_uniqueProxyIdentifierToProxyCallSemaphore - In the implementation block
@property (nonatomic,retain) TUCallNotificationManager * callNotificationManager;                                     //@synthesize callNotificationManager=_callNotificationManager - In the implementation block
@property (nonatomic,retain) TUVideoProxyCallManager * videoProxyCallManager;                                         //@synthesize videoProxyCallManager=_videoProxyCallManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(NSArray *)currentCalls;
-(void)setClientCapabilities:(id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(TUProxyCallModel *)proxyCallModel;
-(void)handleCallModelStateChanged:(id)arg1 ;
-(void)setCurrentInputDeviceToDeviceWithID:(id)arg1 ;
-(void)setCurrentOutputDeviceToDeviceWithID:(id)arg1 ;
-(id)proxyCallWithUniqueProxyIdentifier:(id)arg1 ;
-(void)setProxyCall:(id)arg1 forUniqueProxyIdentifier:(id)arg2 ;
-(void)notifyCallServicesDaemonOfNewCall;
-(void)videoProxyCallFiltered:(id)arg1 ;
-(void)setInitialStateSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setUniqueProxyIdentifierToProxyCall:(NSMapTable *)arg1 ;
-(void)setCallNotificationManager:(TUCallNotificationManager *)arg1 ;
-(void)setVideoProxyCallManager:(TUVideoProxyCallManager *)arg1 ;
-(void)setHasRequestedInitialState:(BOOL)arg1 ;
-(void)requestInitialStateIfNecessaryAndSendNotifications:(BOOL)arg1 ;
-(int)connectionRequestNotificationToken;
-(void)_tearDownXPCConnection;
-(id)daemonDelegateWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)daemonDelegateIsLocal;
-(void)_setUpXPCConnection;
-(id)proxyCallWithCall:(id)arg1 ;
-(void)_handleCurrentCallsChanged:(id)arg1 callsDisconnected:(id)arg2 ;
-(id<TUCallServicesDaemonDelegate>)daemonDelegate;
-(BOOL)hasRequestedInitialState;
-(void)handleCurrentCallsChanged:(id)arg1 ;
-(void)_updateCurrentCallsWithoutNotifications:(id)arg1 ;
-(void)_updateCallModelState:(id)arg1 shouldSendNotifications:(BOOL)arg2 ;
-(NSObject*<OS_dispatch_semaphore>)initialStateSemaphore;
-(void)requestInitialStateIfNecessary;
-(void)requestInitialStateIfNecessaryAndWait;
-(void)setCurrentCalls:(NSArray *)arg1 ;
-(void)setLocalProxyCalls:(NSArray *)arg1 ;
-(TUCallNotificationManager *)callNotificationManager;
-(void)handleCurrentCallsChanged:(id)arg1 callDisconnected:(id)arg2 ;
-(NSObject*<OS_dispatch_semaphore>)uniqueProxyIdentifierToProxyCallSemaphore;
-(NSMapTable *)uniqueProxyIdentifierToProxyCall;
-(void)answerCallWithUniqueProxyIdentifier:(id)arg1 withSourceIdentifier:(id)arg2 ;
-(void)holdCallWithUniqueProxyIdentifier:(id)arg1 ;
-(void)unholdCallWithUniqueProxyIdentifier:(id)arg1 ;
-(void)disconnectCallWithUniqueProxyIdentifier:(id)arg1 ;
-(void)conferenceCallWithUniqueProxyIdentifier:(id)arg1 ;
-(void)unconferenceCallWithUniqueProxyIdentifier:(id)arg1 ;
-(void)swapCalls;
-(void)playDTMFToneForCallWithUniqueProxyIdentifier:(id)arg1 key:(unsigned char)arg2 ;
-(void)endActiveAndAnswerCallWithUniqueProxyIdentifier:(id)arg1 ;
-(void)endHeldAndAnswerCallWithUniqueProxyIdentifier:(id)arg1 ;
-(void)disconnectCurrentCallAndActivateHeld;
-(void)disconnectAllCalls;
-(void)pullRelayingCallsFromClient;
-(void)pushRelayingCallsToHostWithSourceIdentifier:(id)arg1 ;
-(void)pushHostedCallsToPairedClientDevice;
-(void)pullHostedCallsFromPairedHostDevice;
-(void)sendHardPauseDigitsForCallWithUniqueProxyIdentifier:(id)arg1 ;
-(void)sendTelephonyDigits:(id)arg1 ;
-(void)updateCallWithProxy:(id)arg1 ;
-(void)enteredForegroundForCallWithUniqueProxyIdentifier:(id)arg1 ;
-(void)enteredBackgroundForAllCalls;
-(void)sendConversationData:(id)arg1 forCallWithUniqueProxyIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_updateLocalProxyCallsWithCalls:(id)arg1 ;
-(void)handleConversationReceivedData:(id)arg1 forCallWithUUID:(id)arg2 ;
-(void)handleLocalFrequencyChangedTo:(id)arg1 forCallsWithUniqueProxyIdentifiers:(id)arg2 ;
-(void)handleRemoteFrequencyChangedTo:(id)arg1 forCallsWithUniqueProxyIdentifiers:(id)arg2 ;
-(void)handleCallControlFailureWithUserInfo:(id)arg1 ;
-(void)handleNotificationName:(id)arg1 forCallWithUniqueProxyIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(id)dialWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)pullThumperCallFromClientUsingInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDaemonDelegate:(id<TUCallServicesDaemonDelegate>)arg1 ;
-(void)setProxyCallModel:(TUProxyCallModel *)arg1 ;
-(NSArray *)localProxyCalls;
-(void)setConnectionRequestNotificationToken:(int)arg1 ;
-(void)setUniqueProxyIdentifierToProxyCallSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(TUVideoProxyCallManager *)videoProxyCallManager;
@end

