/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:52 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVCNetworkAddress, NSString, NSData, AVCAudioStreamConfig, AVCVideoStreamConfig;

@interface AVCMediaStreamConfig : NSObject {

	AVCNetworkAddress* _localAddress;
	AVCNetworkAddress* _remoteAddress;
	long long _direction;
	unsigned long long _txPayloadType;
	unsigned long long _rxPayloadType;
	unsigned _remoteSSRC;
	NSString* _cName;
	BOOL _rtcpEnabled;
	BOOL _rtcpXREnabled;
	unsigned short _rtcpRemotePort;
	double _rtcpSendInterval;
	BOOL _rtpTimeOutEnabled;
	BOOL _rtcpTimeOutEnabled;
	double _rtpTimeOutInterval;
	double _rtcpTimeOutInterval;
	NSData* _sendMasterKey;
	NSData* _receiveMasterKey;
	long long _SRTPCipherSuite;
	long long _SRTCPCipherSuite;
	AVCAudioStreamConfig* _audio;
	AVCVideoStreamConfig* _video;

}

@property (nonatomic,retain) AVCNetworkAddress * localAddress;                                 //@synthesize localAddress=_localAddress - In the implementation block
@property (nonatomic,retain) AVCNetworkAddress * remoteAddress;                                //@synthesize remoteAddress=_remoteAddress - In the implementation block
@property (nonatomic,copy) NSString * cName;                                                   //@synthesize cName=_cName - In the implementation block
@property (assign,nonatomic) long long direction;                                              //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) unsigned long long txPayloadType;                                 //@synthesize txPayloadType=_txPayloadType - In the implementation block
@property (assign,nonatomic) unsigned long long rxPayloadType;                                 //@synthesize rxPayloadType=_rxPayloadType - In the implementation block
@property (assign,nonatomic) unsigned remoteSSRC;                                              //@synthesize remoteSSRC=_remoteSSRC - In the implementation block
@property (assign,getter=isRTCPEnabled,nonatomic) BOOL rtcpEnabled;                            //@synthesize rtcpEnabled=_rtcpEnabled - In the implementation block
@property (assign,getter=isRTCPXREnabled,nonatomic) BOOL rtcpXREnabled;                        //@synthesize rtcpXREnabled=_rtcpXREnabled - In the implementation block
@property (assign,nonatomic) unsigned short rtcpRemotePort;                                    //@synthesize rtcpRemotePort=_rtcpRemotePort - In the implementation block
@property (assign,nonatomic) double rtcpSendInterval;                                          //@synthesize rtcpSendInterval=_rtcpSendInterval - In the implementation block
@property (assign,getter=isRTPTimeOutEnabled,nonatomic) BOOL rtpTimeOutEnabled;                //@synthesize rtpTimeOutEnabled=_rtpTimeOutEnabled - In the implementation block
@property (assign,getter=isRTCPTimeOutEnabled,nonatomic) BOOL rtcpTimeOutEnabled;              //@synthesize rtcpTimeOutEnabled=_rtcpTimeOutEnabled - In the implementation block
@property (assign,nonatomic) double rtpTimeOutInterval;                                        //@synthesize rtpTimeOutInterval=_rtpTimeOutInterval - In the implementation block
@property (assign,nonatomic) double rtcpTimeOutInterval;                                       //@synthesize rtcpTimeOutInterval=_rtcpTimeOutInterval - In the implementation block
@property (nonatomic,retain) NSData * sendMasterKey;                                           //@synthesize sendMasterKey=_sendMasterKey - In the implementation block
@property (nonatomic,retain) NSData * receiveMasterKey;                                        //@synthesize receiveMasterKey=_receiveMasterKey - In the implementation block
@property (assign,setter=RTPCipherSuite,nonatomic) long long SRTPCipherSuite;                  //@synthesize SRTPCipherSuite=_SRTPCipherSuite - In the implementation block
@property (assign,setter=RTCPCipherSuite,nonatomic) long long SRTCPCipherSuite;                //@synthesize SRTCPCipherSuite=_SRTCPCipherSuite - In the implementation block
@property (nonatomic,retain) AVCAudioStreamConfig * audio;                                     //@synthesize audio=_audio - In the implementation block
@property (nonatomic,retain) AVCVideoStreamConfig * video;                                     //@synthesize video=_video - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setDirection:(long long)arg1 ;
-(long long)direction;
-(BOOL)isRTPTimeOutEnabled;
-(double)rtpTimeOutInterval;
-(BOOL)isRTCPTimeOutEnabled;
-(double)rtcpTimeOutInterval;
-(long long)SRTPCipherSuite;
-(long long)SRTCPCipherSuite;
-(NSData *)sendMasterKey;
-(NSData *)receiveMasterKey;
-(BOOL)isValidAudioConfig;
-(AVCNetworkAddress *)remoteAddress;
-(BOOL)isRTCPEnabled;
-(double)rtcpSendInterval;
-(NSString *)cName;
-(unsigned)remoteSSRC;
-(unsigned long long)txPayloadType;
-(unsigned long long)rxPayloadType;
-(void)setRtcpEnabled:(BOOL)arg1 ;
-(void)setRtpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtcpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtpTimeOutInterval:(double)arg1 ;
-(void)setRtcpTimeOutInterval:(double)arg1 ;
-(void)setRtcpSendInterval:(double)arg1 ;
-(AVCNetworkAddress *)localAddress;
-(unsigned short)rtcpRemotePort;
-(BOOL)isRTCPXREnabled;
-(void)setCName:(NSString *)arg1 ;
-(void)setTxPayloadType:(unsigned long long)arg1 ;
-(void)setRxPayloadType:(unsigned long long)arg1 ;
-(void)setRemoteSSRC:(unsigned)arg1 ;
-(void)setRtcpRemotePort:(unsigned short)arg1 ;
-(void)setRtcpXREnabled:(BOOL)arg1 ;
-(void)setSendMasterKey:(NSData *)arg1 ;
-(void)setReceiveMasterKey:(NSData *)arg1 ;
-(void)setSRTPCipherSuite:(long long)arg1 ;
-(void)setSRTCPCipherSuite:(long long)arg1 ;
-(BOOL)isValidVideoConfig;
-(BOOL)isAudioCodecValid;
-(BOOL)isVideoCodecValid;
-(void)setLocalAddress:(AVCNetworkAddress *)arg1 ;
-(void)setRemoteAddress:(AVCNetworkAddress *)arg1 ;
-(AVCAudioStreamConfig *)audio;
-(void)setAudio:(AVCAudioStreamConfig *)arg1 ;
-(AVCVideoStreamConfig *)video;
-(void)setVideo:(AVCVideoStreamConfig *)arg1 ;
@end

