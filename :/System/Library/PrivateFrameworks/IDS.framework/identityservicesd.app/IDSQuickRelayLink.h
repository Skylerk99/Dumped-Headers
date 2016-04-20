/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSLink.h>
#import <identityservicesd/IDSLinkDelegate.h>

@protocol IDSLinkDelegate;
@class NSString, IDSUDPLink, NSArray, NSData, NSMutableDictionary;

@interface IDSQuickRelayLink : NSObject <IDSLink, IDSLinkDelegate> {

	IDSUDPLink* _udpLink;
	id<IDSLinkDelegate> _delegate;
	/*^block*/id _connectReadyHandler;
	NSArray* _interfaceIPv4AddressArray;
	unsigned _sourceInterfaceIndex;
	sockaddr_storage _sourceAddress;
	sockaddr_storage _relayServerAddress;
	NSData* _relaySessionID;
	NSData* _relaySessionKey;
	NSData* _relaySessionToken;
	unsigned short _internalRelaySessionID;
	NSMutableDictionary* _stunReqToTransID;
	double _bindStartTime;
	double _unbindStartTime;
	NSString* _deviceID;
	unsigned long long _headerOverhead;
	unsigned long long _state;
	unsigned long long _totalBytesSent;
	unsigned long long _totalPacketsSent;
	unsigned long long _totalBytesReceived;
	unsigned long long _totalPacketsReceived;
	unsigned long long _previousBytesSent;
	unsigned long long _previousPacketsSent;
	unsigned long long _previousBytesReceived;
	unsigned long long _previousPacketsReceived;
	double _previousReportTime;

}

@property (nonatomic,copy) NSData * relaySessionID;                                //@synthesize relaySessionID=_relaySessionID - In the implementation block
@property (nonatomic,copy) NSData * relaySessionKey;                               //@synthesize relaySessionKey=_relaySessionKey - In the implementation block
@property (nonatomic,copy) NSData * relaySessionToken;                             //@synthesize relaySessionToken=_relaySessionToken - In the implementation block
@property (assign) unsigned short internalRelaySessionID;                          //@synthesize internalRelaySessionID=_internalRelaySessionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSString * deviceID;                                            //@synthesize deviceID=_deviceID - In the implementation block
@property (getter=linkTypeString,readonly) NSString * linkTypeString; 
@property (readonly) unsigned long long state;                                     //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long headerOverhead;                            //@synthesize headerOverhead=_headerOverhead - In the implementation block
@property (assign) id<IDSLinkDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
-(id)copyLinkStatsDict;
-(unsigned long long)sendPacketBuffer:(SCD_Struct_ID16*)arg1 toDeviceID:(id)arg2 ;
-(BOOL)_hasMatchRequest:(id)arg1 ;
-(BOOL)_processQRBindResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned)arg3 localAddress:(sockaddr*)arg4 remmoteAddress:(sockaddr*)arg5 arrivalTime:(double)arg6 ;
-(BOOL)_processQRUnbindResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned)arg3 localAddress:(sockaddr*)arg4 remmoteAddress:(sockaddr*)arg5 arrivalTime:(double)arg6 ;
-(BOOL)_processQRErrorResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned)arg3 localAddress:(sockaddr*)arg4 remmoteAddress:(sockaddr*)arg5 arrivalTime:(double)arg6 ;
-(void)_sendQRMessageBuffer:(SCD_Struct_ID16*)arg1 ;
-(void)_sendQRBindRequest;
-(void)_sendQRUnbindRequest;
-(void)setRelaySessionToken:(NSData *)arg1 ;
-(BOOL)_processStunPacket:(SCD_Struct_ID16*)arg1 fromDevice:(id)arg2 arrivalTime:(double)arg3 ;
-(BOOL)link:(id)arg1 fromDeviceID:(id)arg2 didReceivePacket:(SCD_Struct_ID16*)arg3 ;
-(id)generateLinkReport:(double)arg1 isCurrentLink:(BOOL)arg2 ;
-(NSString *)linkTypeString;
-(unsigned long long)headerOverhead;
-(void)link:(id)arg1 didConnectForDevice:(id)arg2 ;
-(void)link:(id)arg1 didDisconnectForDevice:(id)arg2 ;
-(void)connectWithSessionInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)disconnectWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)remoteHostAwake;
-(NSData *)relaySessionID;
-(void)setRelaySessionID:(NSData *)arg1 ;
-(NSData *)relaySessionKey;
-(void)setRelaySessionKey:(NSData *)arg1 ;
-(NSData *)relaySessionToken;
-(unsigned short)internalRelaySessionID;
-(void)setInternalRelaySessionID:(unsigned short)arg1 ;
-(void)setDelegate:(id<IDSLinkDelegate>)arg1 ;
-(void)dealloc;
-(id<IDSLinkDelegate>)delegate;
-(unsigned long long)state;
-(void)invalidate;
-(id)initWithDeviceID:(id)arg1 ;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceID;
@end

