/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Library/MobileSubstrate/DynamicLibraries/JODebox.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_JO0;

typedef struct {
	SCD_Struct_JO0 field1;
	SCD_Struct_JO0 field2;
} SCD_Struct_JO1;

typedef struct __CFRunLoopTimer* CFRunLoopTimerRef;

typedef struct __CFNetService* CFNetServiceRef;

typedef struct __CFHTTPMessage* CFHTTPMessageRef;

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

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

