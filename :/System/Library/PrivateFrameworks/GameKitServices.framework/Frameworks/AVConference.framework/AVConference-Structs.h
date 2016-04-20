/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:53 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FFTMeter;

typedef struct _NSZone* NSZoneRef;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct PacketThread_s* PacketThread_sRef;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct opaque_pthread_cond_t {
	long long __sig;
	char __opaque[40];
} opaque_pthread_cond_t;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct OpaqueAudioConverter* OpaqueAudioConverterRef;

typedef struct in_addr {
	unsigned s_addr;
} in_addr;

typedef struct sockaddr_in {
	unsigned char sin_len;
	unsigned char sin_family;
	unsigned short sin_port;
	in_addr sin_addr;
	char sin_zero[8];
} sockaddr_in;

typedef struct OpaqueVTCompressionSession* OpaqueVTCompressionSessionRef;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_VC12;

typedef struct {
	unsigned long long field1;
} SCD_Struct_VC13;

typedef struct opaque_pthread_rwlock_t {
	long long __sig;
	char __opaque[192];
} opaque_pthread_rwlock_t;

typedef struct opaqueRTCReporting* opaqueRTCReportingRef;

typedef struct METER_INFO {
	BOOL frequencyMeteringEnabled;
	FFTMeter* fftMeter;
} METER_INFO;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
	unsigned long long field4;
	unsigned long long field5;
	unsigned long long field6;
	unsigned long long field7;
	unsigned long long field8;
	unsigned long long field9;
	unsigned long long field10;
	unsigned long long field11;
	unsigned long long field12;
	unsigned long long field13;
	unsigned long long field14;
	unsigned long long field15;
	unsigned long long field16;
	unsigned long long field17;
	unsigned long long field18;
	unsigned long long field19;
	unsigned long long field20;
	unsigned long long field21;
} SCD_Struct_VC17;

typedef struct OpaqueVTDecompressionSession* OpaqueVTDecompressionSessionRef;

typedef struct opaqueCMFormatDescription* opaqueCMFormatDescriptionRef;

typedef struct OpaqueFigThread* OpaqueFigThreadRef;

typedef struct VideoPacketBuffer_t* VideoPacketBuffer_tRef;

typedef struct _CAImageQueue* CAImageQueueRef;

typedef struct OpaqueFigImageQueue* OpaqueFigImageQueueRef;

typedef struct tagIPPORT {
	int iFlags;
	char szIfName[16];
	/*function pointer*/void* IP;
	unsigned dwIPv4;
	unsigned char abIPv6[16];
	unsigned short wPort;
} tagIPPORT;

typedef struct tagCONNRESULT {
	unsigned dwCallID;
	int iResultCount;
	int iRole;
	unsigned dwRemoteCallID;
	int proto;
	int bIfRelay;
	unsigned short wRelayServType;
	unsigned short wChannelNumber;
	tagIPPORT mbLocal;
	tagIPPORT mbRemote;
	tagIPPORT mbSrc;
	tagIPPORT mbDst;
	tagIPPORT mbRemoteSrc;
	tagIPPORT mbRelayExt;
	unsigned dwRTT;
	int bIfLocalCellularQoS;
	int bIfRemoteCellularQoS;
	int iLocalCellTech;
	int iRemoteCellTech;
	unsigned dwCellularUniqueTag;
	unsigned short wCellularMTU;
	int bIfUpgrade;
	int bIfPrimary;
	int bIfReplaceOnly;
	tagCONNRESULT next;
} tagCONNRESULT;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct OpaqueVTPixelTransferSession* OpaqueVTPixelTransferSessionRef;

typedef struct __CVPixelBufferPool* CVPixelBufferPoolRef;

typedef struct SKEStateOpaque* SKEStateOpaqueRef;

typedef struct __CFData* CFDataRef;

typedef struct __SecIdentity* SecIdentityRef;

typedef struct SSLContext* SSLContextRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct vDSP_DFT_SetupStruct* vDSP_DFT_SetupStructRef;

typedef struct DSPSplitComplex {
	float realp;
	float imagp;
} DSPSplitComplex;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct _tls_record_s* tls_record_sRef;

typedef struct sockaddr_storage {
	unsigned char ss_len;
	unsigned char ss_family;
	char __ss_pad1[6];
	long long __ss_align;
	char __ss_pad2[112];
} sockaddr_storage;

typedef struct __IOSurfaceAccelerator* IOSurfaceAcceleratorRef;

typedef struct __CTServerConnection* CTServerConnectionRef;

typedef struct opaqueCMSession* opaqueCMSessionRef;

typedef struct AudioEventQueue_t* AudioEventQueue_tRef;

typedef struct __CFString* CFStringRef;

