/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, AWDServerConnection;

@interface IDSAWDLogging : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	AWDServerConnection* _AWDServerConnection;

}
+(id)sharedInstance;
-(id)_metricContainerForMetricType:(unsigned)arg1 ;
-(void)_submitAWDMetric:(id)arg1 withContainer:(id)arg2 ;
-(BOOL)shouldSubmit;
-(void)messageSentForService:(id)arg1 isToDefaultPairedDevice:(BOOL)arg2 messageSize:(unsigned long long)arg3 linkType:(unsigned long long)arg4 priority:(unsigned long long)arg5 ;
-(void)clientProcessReceivedMessage:(id)arg1 messageSize:(unsigned long long)arg2 deltaTime:(unsigned long long)arg3 priority:(unsigned long long)arg4 ;
-(void)messageDeliveredForService:(id)arg1 isToDefaultPairedDevice:(BOOL)arg2 messageSize:(unsigned long long)arg3 linkType:(unsigned long long)arg4 deliveryError:(unsigned long long)arg5 RTT:(unsigned long long)arg6 priority:(unsigned long long)arg7 ;
-(void)messageReceivedForService:(id)arg1 isFromDefaultPairedDevice:(BOOL)arg2 messageSize:(unsigned long long)arg3 linkType:(unsigned long long)arg4 ;
-(void)socketOpenedForService:(id)arg1 isToDefaultPairedDevice:(BOOL)arg2 openError:(unsigned long long)arg3 socketError:(unsigned long long)arg4 ;
-(void)socketClosedForService:(id)arg1 isToDefaultPairedDevice:(BOOL)arg2 closeError:(unsigned long long)arg3 socketError:(unsigned long long)arg4 bytesSent:(unsigned long long)arg5 packetsSent:(unsigned long long)arg6 bytesReceived:(unsigned long long)arg7 packetsReceived:(unsigned long long)arg8 ;
-(void)sessionEndedWithGuid:(id)arg1 endedReason:(unsigned)arg2 genericError:(unsigned)arg3 gameKitError:(unsigned)arg4 conferenceMiscError:(unsigned)arg5 callDuration:(id)arg6 isNetworkEnabled:(BOOL)arg7 isNetworkActive:(BOOL)arg8 isNetworkReachable:(BOOL)arg9 networkCheckResult:(unsigned)arg10 dataRate:(id)arg11 gksError:(id)arg12 connectDuration:(id)arg13 remoteNetworkConnection:(unsigned)arg14 localNetworkConnection:(unsigned)arg15 connectionType:(unsigned)arg16 usesRelay:(BOOL)arg17 currentNATType:(id)arg18 remoteNATType:(id)arg19 relayConnectDuration:(id)arg20 isInitiator:(BOOL)arg21 linkQuality:(id)arg22 gksReturnCode:(id)arg23 ;
-(void)wifiSetupAttemptType:(unsigned long long)arg1 duration:(unsigned long long)arg2 result:(unsigned long long)arg3 client:(id)arg4 ;
-(void)OTRSessionNegotiation:(id)arg1 priority:(unsigned long long)arg2 duration:(unsigned long long)arg3 result:(unsigned)arg4 ;
-(void)WRMLinkRecommendation:(unsigned)arg1 primaryLinkType:(unsigned)arg2 magnetState:(unsigned)arg3 infraWiFiState:(unsigned)arg4 ;
-(void)dealloc;
-(id)init;
@end

