/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:50 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned storageAvailableBytes : 1;
} SCD_Struct_CK1;

typedef struct {
	unsigned field1[8];
} SCD_Struct_CK2;

typedef struct __CFUserNotification* CFUserNotificationRef;

typedef struct CC_SHA256state_st {
	unsigned count[2];
	unsigned hash[8];
	unsigned wbuf[16];
} CC_SHA256state_st;

typedef struct {
	unsigned badgeCount : 1;
	unsigned forDevice : 1;
} SCD_Struct_CK5;

typedef struct _PCSIdentityData* PCSIdentityDataRef;

typedef struct _PCSIdentitySetData* PCSIdentitySetDataRef;

typedef struct _OpaquePCSShareProtection* OpaquePCSShareProtectionRef;

typedef struct __CFData* CFDataRef;

typedef struct _PCSPublicIdentityData* PCSPublicIdentityDataRef;

typedef struct {
	unsigned doubleValue : 1;
	unsigned signedValue : 1;
	unsigned type : 1;
} SCD_Struct_CK11;

typedef struct z_stream_s {
	char* next_in;
	unsigned avail_in;
	unsigned long long total_in;
	char* next_out;
	unsigned avail_out;
	unsigned long long total_out;
	char* msg;
	internal_state state;
	/*function pointer*/void* zalloc;
	/*function pointer*/void* zfree;
	void opaque;
	int data_type;
	unsigned long long adler;
	unsigned long long reserved;
} z_stream_s;

typedef struct MGNotificationTokenStruct* MGNotificationTokenStructRef;

typedef struct {
	unsigned applicationConfigVersion : 1;
	unsigned deviceFlowControlBudget : 1;
	unsigned deviceFlowControlBudgetCap : 1;
	unsigned deviceProtocolVersion : 1;
	unsigned globalConfigVersion : 1;
	unsigned applicationContainerEnvironment : 1;
	unsigned deviceFlowControlRegeneration : 1;
	unsigned isolationLevel : 1;
	unsigned targetDatabase : 1;
} SCD_Struct_CK14;

typedef struct _mkbbackupref* mkbbackuprefRef;

typedef struct {
	unsigned altitude : 1;
	unsigned course : 1;
	unsigned horizontalAccuracy : 1;
	unsigned latitude : 1;
	unsigned longitude : 1;
	unsigned speed : 1;
	unsigned verticalAccuracy : 1;
} SCD_Struct_CK16;

typedef struct _mmcs_engine* mmcs_engineRef;

typedef struct MMCSItemReader* MMCSItemReaderRef;

typedef struct {
	unsigned containerEnvironment : 1;
	unsigned participantState : 1;
	unsigned participantType : 1;
	unsigned permission : 1;
} SCD_Struct_CK19;

typedef struct {
	int list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_CK20;

typedef struct {
	unsigned acceptTimestamp : 1;
	unsigned participantType : 1;
	unsigned permission : 1;
	unsigned state : 1;
	unsigned createdOutOfProcess : 1;
} SCD_Struct_CK21;

typedef struct FPSAPContextOpaque_* FPSAPContextOpaque_Ref;

typedef struct FairPlayHWInfo_ {
	unsigned IDLength;
	unsigned char ID[20];
} FairPlayHWInfo_;

