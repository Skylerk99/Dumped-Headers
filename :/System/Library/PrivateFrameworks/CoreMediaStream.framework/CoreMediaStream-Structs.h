/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:07 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct _MSSPCContext {
	void owner;
	__CFString personID;
	__CFString authToken;
	__CFDictionary deviceInfo;
	__CFDictionary clientHeadersRef;
	double connectionTimeout;
	/*function pointer*/void* __didReceiveDataCallback;
	/*function pointer*/void* __didFinishCallback;
	/*function pointer*/void* __didFailAuthenticationCallback;
	/*function pointer*/void* __didReceiveServerSideConfigVersionCallback;
	/*function pointer*/void* __didReceiveRetryAfterCallback;
	CFURLConnectionClient_V1 __client;
	_CFURLConnection __connection;
	__CFData __responseData;
	__CFHTTPMessage __response;
	__CFError __error;
} MSSPCContext;

typedef struct _MSPSPCContext {
	MSSPCContext _super;
	/*function pointer*/void* finishedCallback;
	/*function pointer*/void* authFailedCallback;
	/*function pointer*/void* didReceiveServerSideConfigurationVersionCallback;
	/*function pointer*/void* didReceiveRetryAfterCallback;
} MSPSPCContext;

typedef struct _MSPSPCUCContext {
	MSSPCContext _super;
	/*function pointer*/void* finishedCallback;
	/*function pointer*/void* authFailedCallback;
	/*function pointer*/void* didReceiveServerSideConfigurationVersionCallback;
} MSPSPCUCContext;

typedef struct _MSSSPCContext {
	MSSPCContext _super;
	/*function pointer*/void* finishedCallback;
	/*function pointer*/void* gotDataChunkCallback;
	/*function pointer*/void* authFailedCallback;
	/*function pointer*/void* didReceiveServerSideConfigurationVersionCallback;
	/*function pointer*/void* didReceiveRetryAfterCallback;
	double connectionTimeout;
	long long __state;
	__CFData __chunkLengthData;
	__CFData __currentChunkData;
	long long __chunkBytesRemaining;
} MSSSPCContext;

typedef struct _mmcs_engine* mmcs_engineRef;

typedef struct _MSShPCContext {
	MSSPCContext _super;
	/*function pointer*/void* didFindShareStateCallback;
	/*function pointer*/void* didFinishTransactionCallback;
	/*function pointer*/void* didFailAuthenticationCallback;
	/*function pointer*/void* didReceiveServerSideConfigurationVersionCallback;
	int __contextType;
} MSShPCContext;

typedef struct _MSSSCPCContext {
	MSSPCContext _super;
	/*function pointer*/void* didFinishCallback;
	/*function pointer*/void* didFailAuthenticationCallback;
} MSSSCPCContext;

typedef struct _MSRSPCContext {
	MSSPCContext _super;
	/*function pointer*/void* finishedCallback;
	/*function pointer*/void* authFailedCallback;
	/*function pointer*/void* didReceiveServerSideConfigurationVersionCallback;
} MSRSPCContext;

typedef struct _MSRPCContext {
	MSSPCContext _super;
	/*function pointer*/void* finishedCallback;
	/*function pointer*/void* authFailedCallback;
	/*function pointer*/void* didReceiveRetryAfterCallback;
	/*function pointer*/void* didReceiveServerSideConfigurationVersionCallback;
} MSRPCContext;

typedef struct sqlite3* sqlite3Ref;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct MSDSPCContext {
	MSSPCContext _super;
	/*function pointer*/void* finishedCallback;
	/*function pointer*/void* authFailedCallback;
	/*function pointer*/void* didReceiveServerSideConfigurationVersionCallback;
	/*function pointer*/void* didReceiveRetryAfterCallback;
} MSDSPCContext;

typedef struct {
	long long version;
	void context;
	/*function pointer*/void* getFileDescriptorAndContentTypeFromItemCallback;
	/*function pointer*/void* getItemProgressCallback;
	/*function pointer*/void* getItemDoneCallback;
	/*function pointer*/void* putItemProgressCallback;
	/*function pointer*/void* putItemDoneCallback;
	/*function pointer*/void* requestCompletedCallback;
} SCD_Struct_MM14;

