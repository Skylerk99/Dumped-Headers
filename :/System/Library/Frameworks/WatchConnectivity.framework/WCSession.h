/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:19 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WCXPCManagerDelegate.h>

@protocol WCSessionDelegate, OS_dispatch_queue, OS_dispatch_group;
@class NSURL, NSDictionary, NSObject, NSMutableDictionary, NSMutableSet, WCSessionUserInfoTransfer, WCQueueManager, NSString, NSArray;

@interface WCSession : NSObject <WCXPCManagerDelegate> {

	BOOL _paired;
	BOOL _watchAppInstalled;
	BOOL _complicationEnabled;
	BOOL _reachable;
	BOOL _iOSDeviceNeedsUnlockAfterRebootForReachability;
	BOOL _sessionActivated;
	BOOL _delegateQueueSuspended;
	BOOL _shouldSuspendDelegateQueue;
	id<WCSessionDelegate> _delegate;
	NSURL* _watchDirectoryURL;
	NSDictionary* _applicationContext;
	NSDictionary* _receivedApplicationContext;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _currentMessages;
	NSMutableSet* _currentMessageIdentifiersAwaitingReply;
	NSMutableDictionary* _internalOutstandingUserInfoTransfers;
	NSMutableDictionary* _internalOutstandingFileTransfers;
	NSObject*<OS_dispatch_group> _sessionStateGroup;
	WCSessionUserInfoTransfer* _currentComplicationUserInfoTransfer;
	WCQueueManager* _queueManager;
	NSString* _pairingID;

}

@property (assign,nonatomic,__weak) id<WCSessionDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isPaired,nonatomic) BOOL paired;                                             //@synthesize paired=_paired - In the implementation block
@property (assign,getter=isWatchAppInstalled,nonatomic) BOOL watchAppInstalled;                       //@synthesize watchAppInstalled=_watchAppInstalled - In the implementation block
@property (assign,getter=isComplicationEnabled,nonatomic) BOOL complicationEnabled;                   //@synthesize complicationEnabled=_complicationEnabled - In the implementation block
@property (nonatomic,retain) NSURL * watchDirectoryURL;                                               //@synthesize watchDirectoryURL=_watchDirectoryURL - In the implementation block
@property (assign,getter=isReachable,nonatomic) BOOL reachable;                                       //@synthesize reachable=_reachable - In the implementation block
@property (assign,nonatomic) BOOL iOSDeviceNeedsUnlockAfterRebootForReachability;                     //@synthesize iOSDeviceNeedsUnlockAfterRebootForReachability=_iOSDeviceNeedsUnlockAfterRebootForReachability - In the implementation block
@property (nonatomic,copy) NSDictionary * applicationContext;                                         //@synthesize applicationContext=_applicationContext - In the implementation block
@property (nonatomic,copy) NSDictionary * receivedApplicationContext;                                 //@synthesize receivedApplicationContext=_receivedApplicationContext - In the implementation block
@property (nonatomic,copy,readonly) NSArray * outstandingUserInfoTransfers; 
@property (nonatomic,copy,readonly) NSArray * outstandingFileTransfers; 
@property (assign) BOOL sessionActivated;                                                             //@synthesize sessionActivated=_sessionActivated - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> delegateQueue;                                      //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                          //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) NSMutableDictionary * currentMessages;                                           //@synthesize currentMessages=_currentMessages - In the implementation block
@property (retain) NSMutableSet * currentMessageIdentifiersAwaitingReply;                             //@synthesize currentMessageIdentifiersAwaitingReply=_currentMessageIdentifiersAwaitingReply - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * internalOutstandingUserInfoTransfers;              //@synthesize internalOutstandingUserInfoTransfers=_internalOutstandingUserInfoTransfers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * internalOutstandingFileTransfers;                  //@synthesize internalOutstandingFileTransfers=_internalOutstandingFileTransfers - In the implementation block
@property (retain) NSObject*<OS_dispatch_group> sessionStateGroup;                                    //@synthesize sessionStateGroup=_sessionStateGroup - In the implementation block
@property (retain) WCSessionUserInfoTransfer * currentComplicationUserInfoTransfer;                   //@synthesize currentComplicationUserInfoTransfer=_currentComplicationUserInfoTransfer - In the implementation block
@property (retain) WCQueueManager * queueManager;                                                     //@synthesize queueManager=_queueManager - In the implementation block
@property (assign) BOOL delegateQueueSuspended;                                                       //@synthesize delegateQueueSuspended=_delegateQueueSuspended - In the implementation block
@property (assign) BOOL shouldSuspendDelegateQueue;                                                   //@synthesize shouldSuspendDelegateQueue=_shouldSuspendDelegateQueue - In the implementation block
@property (nonatomic,copy) NSString * pairingID;                                                      //@synthesize pairingID=_pairingID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupported;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)defaultSession;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegate:(id<WCSessionDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id<WCSessionDelegate>)delegate;
-(id)_init;
-(void)cancelUserInfo:(id)arg1 ;
-(BOOL)isComplicationEnabled;
-(NSURL *)watchDirectoryURL;
-(void)setWatchDirectoryURL:(NSURL *)arg1 ;
-(BOOL)sessionActivated;
-(void)setSessionActivated:(BOOL)arg1 ;
-(void)onDelegateQueue_updateSessionState:(id)arg1 ;
-(void)onqueue_cancelTransfers;
-(void)resumeDelegateQueue;
-(void)onqueue_resumeDelegateQueue;
-(void)onqueue_loadOutstandingFileTransfers;
-(void)onqueue_loadOutstandingUserInfoTransfers;
-(void)onqueue_loadAppContexts;
-(void)setWatchAppInstalled:(BOOL)arg1 ;
-(void)setComplicationEnabled:(BOOL)arg1 ;
-(void)onqueue_updateWatchDirectoryURL:(id)arg1 ;
-(void)updatePairingID:(id)arg1 ;
-(void)setReceivedApplicationContext:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)internalOutstandingUserInfoTransfers;
-(void)onqueue_cancelUserInfo:(id)arg1 ;
-(void)onqueue_notifyOfUserInfoError:(id)arg1 withUserInfoTransfer:(id)arg2 ;
-(NSMutableDictionary *)internalOutstandingFileTransfers;
-(void)onqueue_cancelFileTransfer:(id)arg1 ;
-(void)onqueue_notifyOfFileError:(id)arg1 withFileTransfer:(id)arg2 ;
-(BOOL)isWatchAppInstalled;
-(WCQueueManager *)queueManager;
-(BOOL)logAndTestIfUnactivatedOrMissingDelegate;
-(void)setPairingID:(NSString *)arg1 ;
-(void)onqueue_loadPersistedContent;
-(id)errorIfPreconditionsNotSatisfied;
-(void)setInternalOutstandingUserInfoTransfers:(NSMutableDictionary *)arg1 ;
-(void)setInternalOutstandingFileTransfers:(NSMutableDictionary *)arg1 ;
-(id)errorIfNotReachable;
-(void)onqueue_sendMessageData:(id)arg1 replyHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 dictionaryMessage:(BOOL)arg4 ;
-(void)_onqueue_notifyOfMessageError:(id)arg1 withErrorHandler:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)currentMessages;
-(id)createAndStartTimerOnWorkQueueWithHandler:(/*^block*/id)arg1 ;
-(void)onqueue_handleMessageCompletionWithError:(id)arg1 withMessageID:(id)arg2 ;
-(void)storeAppContext:(id)arg1 withAppContextData:(id)arg2 ;
-(void)onqueue_addOutstandingFileTransfer:(id)arg1 ;
-(id)fileSizeFromURL:(id)arg1 ;
-(void)notifyOfFileError:(id)arg1 withFileTransfer:(id)arg2 ;
-(void)onqueue_removeOutstandingFileTransfer:(id)arg1 ;
-(void)onqueue_transferUserInfo:(id)arg1 withUserInfo:(id)arg2 ;
-(void)onqueue_setCurrentComplicationUserInfoTransfer:(id)arg1 ;
-(void)onqueue_removeOutstandingUserInfoTransfer:(id)arg1 ;
-(id)onqueue_addOutstandingUserInfoTransfer:(id)arg1 ;
-(void)onqueue_sendResponseData:(id)arg1 identifier:(id)arg2 dictionaryMessage:(BOOL)arg3 ;
-(void)_onqueue_sendResponseError:(id)arg1 identifier:(id)arg2 dictionaryMessage:(BOOL)arg3 ;
-(void)onqueue_handleDictionaryMessageRequest:(id)arg1 ;
-(void)onqueue_handleDataMessageRequest:(id)arg1 ;
-(NSMutableSet *)currentMessageIdentifiersAwaitingReply;
-(void)onqueue_sendResponseDictionary:(id)arg1 identifier:(id)arg2 ;
-(void)onqueue_handleResponseDictionary:(id)arg1 record:(id)arg2 ;
-(void)onqueue_handleResponseData:(id)arg1 record:(id)arg2 ;
-(void)storeReceivedAppContext:(id)arg1 withAppContextData:(id)arg2 ;
-(BOOL)verifySessionFile:(id)arg1 ;
-(void)onqueue_cancelMessagesIfNeeded;
-(void)didSessionStateChange:(id)arg1 forceReachableChanged:(BOOL)arg2 withChangeHandler:(/*^block*/id)arg3 ;
-(BOOL)didPairingIDChange:(id)arg1 ;
-(BOOL)didWatchURLChange:(id)arg1 ;
-(void)xpcManagerHandleMessageSendingAllowed:(id)arg1 ;
-(void)xpcManager:(id)arg1 handleSentMessageWithIdentifier:(id)arg2 error:(id)arg3 ;
-(void)xpcManager:(id)arg1 handleRequest:(id)arg2 ;
-(void)xpcManager:(id)arg1 handleResponse:(id)arg2 ;
-(void)xpcManager:(id)arg1 handleApplicationContext:(id)arg2 ;
-(void)xpcManager:(id)arg1 handleSessionFile:(id)arg2 ;
-(void)xpcManager:(id)arg1 handleUserInfoTransfer:(id)arg2 ;
-(void)xpcManager:(id)arg1 handleFileTransferFinishedWithIdentifier:(id)arg2 error:(id)arg3 ;
-(void)xpcManager:(id)arg1 handleUserInfoTransferFinishedWithIdentifier:(id)arg2 error:(id)arg3 ;
-(void)xpcManager:(id)arg1 handleSessionStateChanged:(id)arg2 forceReachableChanged:(BOOL)arg3 ;
-(void)activateSession;
-(NSArray *)outstandingUserInfoTransfers;
-(NSArray *)outstandingFileTransfers;
-(void)sendMessage:(id)arg1 replyHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)sendMessageData:(id)arg1 replyHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(BOOL)updateApplicationContext:(id)arg1 error:(id*)arg2 ;
-(id)transferFile:(id)arg1 metadata:(id)arg2 ;
-(void)cancelFileTransfer:(id)arg1 ;
-(id)transferUserInfo:(id)arg1 ;
-(id)transferCurrentComplicationUserInfo:(id)arg1 ;
-(NSDictionary *)receivedApplicationContext;
-(void)notifyOfUserInfoError:(id)arg1 withUserInfoTransfer:(id)arg2 ;
-(BOOL)iOSDeviceNeedsUnlockAfterRebootForReachability;
-(void)setIOSDeviceNeedsUnlockAfterRebootForReachability:(BOOL)arg1 ;
-(void)setCurrentMessageIdentifiersAwaitingReply:(NSMutableSet *)arg1 ;
-(NSObject*<OS_dispatch_group>)sessionStateGroup;
-(void)setSessionStateGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(WCSessionUserInfoTransfer *)currentComplicationUserInfoTransfer;
-(void)setCurrentComplicationUserInfoTransfer:(WCSessionUserInfoTransfer *)arg1 ;
-(void)setQueueManager:(WCQueueManager *)arg1 ;
-(BOOL)delegateQueueSuspended;
-(void)setDelegateQueueSuspended:(BOOL)arg1 ;
-(BOOL)shouldSuspendDelegateQueue;
-(void)setShouldSuspendDelegateQueue:(BOOL)arg1 ;
-(NSString *)pairingID;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(BOOL)isPaired;
-(void)setReachable:(BOOL)arg1 ;
-(void)setPaired:(BOOL)arg1 ;
-(NSDictionary *)applicationContext;
-(void)setApplicationContext:(NSDictionary *)arg1 ;
-(BOOL)isReachable;
@end

