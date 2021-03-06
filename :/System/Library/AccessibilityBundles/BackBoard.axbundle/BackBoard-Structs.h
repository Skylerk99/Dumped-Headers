/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:26 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/BackBoard.axbundle/BackBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct SCRCMathAverageValue {
	unsigned samples;
	double fifo[50];
	int fifoIndex;
	double sum;
	double average;
	double current;
} SCRCMathAverageValue;

typedef struct {
	int field1;
	int field2;
	CGPoint field3;
	CGPoint field4;
	unsigned field5;
	unsigned long long field6;
	void field7;
	int field8;
	int field9;
	unsigned field10;
	unsigned long long field11;
	unsigned char field12[0];
} SCD_Struct_AX1;

typedef struct __IOHIDUserDevice* IOHIDUserDeviceRef;

typedef struct __IOHIDEvent* IOHIDEventRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct __IOHIDServiceClient* IOHIDServiceClientRef;

