/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:33 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/HAPTimerDelegate.h>
#import <libobjc.A.dylib/HMMessageTransport.h>
#import <libobjc.A.dylib/HMIDSMessageTransport.h>

@protocol OS_dispatch_queue;
@class IDSService, NSObject, NSMutableDictionary, HMMessageDispatcher, NSMutableSet, NSString, HAPTimer, NSArray;

@interface HMDIDSMessageTransport : NSObject <IDSServiceDelegate, HAPTimerDelegate, HMMessageTransport, HMIDSMessageTransport> {

	BOOL _proxy;
	IDSService* _idsService;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _pendingResponses;
	NSMutableDictionary* _receivedResponses;
	NSMutableDictionary* _requestedCapabilities;
	NSMutableDictionary* _destinationAddress;
	NSMutableDictionary* _pendingSentMessages;
	NSMutableDictionary* _pendingResponseTimers;
	HMMessageDispatcher* _messageDispatcher;
	NSMutableSet* _peerTransientDeviceAddresses;
	NSMutableSet* _peerResidentDeviceAddresses;
	NSMutableSet* _pairedWatchDeviceAddresses;
	NSMutableSet* _reachableCompanionDeviceAddresses;
	NSMutableSet* _reachableWatchDeviceAddresses;
	NSString* _pairedWatchDestination;
	NSString* _pairedCompanionDestination;
	HAPTimer* _devicesChangedNotificationDebounceTimer;

}

@property (getter=isAccountActive,nonatomic,readonly) BOOL accountActive; 
@property (nonatomic,readonly) NSArray * pairedWatchDevices; 
@property (nonatomic,readonly) NSArray * reachableCompanionDevices; 
@property (nonatomic,readonly) NSArray * reachableWatchDevices; 
@property (nonatomic,retain) IDSService * idsService;                                           //@synthesize idsService=_idsService - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                            //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingResponses;                            //@synthesize pendingResponses=_pendingResponses - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * receivedResponses;                         //@synthesize receivedResponses=_receivedResponses - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * requestedCapabilities;                     //@synthesize requestedCapabilities=_requestedCapabilities - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * destinationAddress;                        //@synthesize destinationAddress=_destinationAddress - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingSentMessages;                         //@synthesize pendingSentMessages=_pendingSentMessages - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingResponseTimers;                       //@synthesize pendingResponseTimers=_pendingResponseTimers - In the implementation block
@property (assign,nonatomic,__weak) HMMessageDispatcher * messageDispatcher;                    //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (nonatomic,retain) NSMutableSet * peerTransientDeviceAddresses;                       //@synthesize peerTransientDeviceAddresses=_peerTransientDeviceAddresses - In the implementation block
@property (nonatomic,retain) NSMutableSet * peerResidentDeviceAddresses;                        //@synthesize peerResidentDeviceAddresses=_peerResidentDeviceAddresses - In the implementation block
@property (nonatomic,retain) NSMutableSet * pairedWatchDeviceAddresses;                         //@synthesize pairedWatchDeviceAddresses=_pairedWatchDeviceAddresses - In the implementation block
@property (nonatomic,retain) NSMutableSet * reachableCompanionDeviceAddresses;                  //@synthesize reachableCompanionDeviceAddresses=_reachableCompanionDeviceAddresses - In the implementation block
@property (nonatomic,retain) NSMutableSet * reachableWatchDeviceAddresses;                      //@synthesize reachableWatchDeviceAddresses=_reachableWatchDeviceAddresses - In the implementation block
@property (nonatomic,retain) NSString * pairedWatchDestination;                                 //@synthesize pairedWatchDestination=_pairedWatchDestination - In the implementation block
@property (nonatomic,retain) NSString * pairedCompanionDestination;                             //@synthesize pairedCompanionDestination=_pairedCompanionDestination - In the implementation block
@property (nonatomic,readonly) BOOL proxy;                                                      //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,readonly) HAPTimer * devicesChangedNotificationDebounceTimer;              //@synthesize devicesChangedNotificationDebounceTimer=_devicesChangedNotificationDebounceTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)messageElementsFromDictionary:(id)arg1 messageName:(id*)arg2 messageIdentifier:(id*)arg3 messagePayload:(id*)arg4 target:(id*)arg5 transactionID:(id*)arg6 isRequest:(BOOL*)arg7 isResponse:(BOOL*)arg8 isNotification:(BOOL*)arg9 ;
+(id)dictionaryForMessageName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 transactionID:(id)arg5 msgType:(unsigned long long)arg6 ;
+(id)idsMessageTypeDescription:(unsigned long long)arg1 ;
-(void)start;
-(BOOL)proxy;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(IDSService *)idsService;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)initWithIDSService:(id)arg1 proxy:(BOOL)arg2 ;
-(void)setMessageDispatcher:(HMMessageDispatcher *)arg1 ;
-(HMMessageDispatcher *)messageDispatcher;
-(void)configure:(id)arg1 ;
-(id)residentDevices;
-(void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 ;
-(void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
-(BOOL)isAccountActive;
-(id)transientDevices;
-(NSArray *)pairedWatchDevices;
-(NSArray *)reachableCompanionDevices;
-(NSArray *)reachableWatchDevices;
-(BOOL)rerouteDestinationIfCompanion:(id)arg1 newDestination:(id*)arg2 ;
-(BOOL)rerouteDestinationIfWatch:(id)arg1 newDestination:(id*)arg2 ;
-(void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 destination:(id)arg5 ;
-(void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 destination:(id)arg5 responseTimeout:(double)arg6 responseHandler:(/*^block*/id)arg7 ;
-(void)updatePeerDeviceAddresses:(id)arg1 ;
-(NSMutableSet *)peerResidentDeviceAddresses;
-(NSMutableSet *)peerTransientDeviceAddresses;
-(NSMutableSet *)pairedWatchDeviceAddresses;
-(NSMutableSet *)reachableCompanionDeviceAddresses;
-(NSMutableSet *)reachableWatchDeviceAddresses;
-(BOOL)_rerouteDestinationIfWatch:(id)arg1 newDestination:(id*)arg2 ;
-(NSString *)pairedWatchDestination;
-(BOOL)_rerouteDestinationIfCompanion:(id)arg1 newDestination:(id*)arg2 ;
-(NSString *)pairedCompanionDestination;
-(id)_compatibleDevices:(id)arg1 ;
-(void)_setDestinationAddress;
-(void)_updateReachableDeviceAddresses:(id)arg1 ;
-(BOOL)_isCompatibleWatchDevice:(id)arg1 ;
-(BOOL)_isCompatibleCompanionDevice:(id)arg1 ;
-(void)setReachableCompanionDeviceAddresses:(NSMutableSet *)arg1 ;
-(void)setReachableWatchDeviceAddresses:(NSMutableSet *)arg1 ;
-(void)setPairedWatchDestination:(NSString *)arg1 ;
-(void)setPairedCompanionDestination:(NSString *)arg1 ;
-(id)sendMessage:(id)arg1 destinations:(id)arg2 msgType:(unsigned long long)arg3 error:(id*)arg4 ;
-(NSMutableDictionary *)pendingSentMessages;
-(NSMutableDictionary *)pendingResponses;
-(NSMutableDictionary *)requestedCapabilities;
-(NSMutableDictionary *)destinationAddress;
-(void)_startPendingResponseTimer:(id)arg1 responseTimeout:(double)arg2 identifier:(id)arg3 ;
-(NSMutableDictionary *)pendingResponseTimers;
-(NSMutableDictionary *)receivedResponses;
-(void)_removePendingResponseTransaction:(id)arg1 ;
-(void)_pendingResponseTimeoutFor:(id)arg1 ;
-(void)_removePendingResponseTimerForTransaction:(id)arg1 ;
-(void)_restartPendingResponseTimerFor:(id)arg1 withReducedFactor:(unsigned long long)arg2 ;
-(HAPTimer *)devicesChangedNotificationDebounceTimer;
-(void)_handleDevicesChangedNotificationDebounceTimer;
-(void)timerDidFire:(id)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 ;
-(void)setIdsService:(IDSService *)arg1 ;
-(void)setPendingResponses:(NSMutableDictionary *)arg1 ;
-(void)setPendingSentMessages:(NSMutableDictionary *)arg1 ;
-(void)setPendingResponseTimers:(NSMutableDictionary *)arg1 ;
-(void)setPeerTransientDeviceAddresses:(NSMutableSet *)arg1 ;
-(void)setPeerResidentDeviceAddresses:(NSMutableSet *)arg1 ;
-(void)setPairedWatchDeviceAddresses:(NSMutableSet *)arg1 ;
@end

