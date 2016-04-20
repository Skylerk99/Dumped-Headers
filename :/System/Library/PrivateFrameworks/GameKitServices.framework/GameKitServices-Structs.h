/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:50 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

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

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct {
	int field1;
	char* field2;
	int field3;
	unsigned field4;
} SCD_Struct_GC4;

typedef struct opaqueRTCReporting* opaqueRTCReportingRef;

typedef struct _NSZone* NSZoneRef;

typedef struct OpaqueGCKSession* OpaqueGCKSessionRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct opaque_pthread_cond_t {
	long long __sig;
	char __opaque[40];
} opaque_pthread_cond_t;

typedef struct opaque_pthread_rwlock_t {
	long long __sig;
	char __opaque[192];
} opaque_pthread_rwlock_t;

typedef struct OpaqueAGPSession* OpaqueAGPSessionRef;

typedef struct _DNSServiceRef_t* DNSServiceRef_tRef;

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

