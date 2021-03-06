/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:00 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned originatorType : 1;
	unsigned originatorVersion : 1;
} SCD_Struct_MP1;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	unsigned containerItemType : 1;
} SCD_Struct_MP3;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct {
	CGRect field1;
	CGRect field2;
} SCD_Struct_MP7;

typedef struct UIOffset {
	double horizontal;
	double vertical;
} UIOffset;

typedef struct {
	CGSize baseSize;
	CGRect bounds;
	CGPoint centerInLocalCoordinates;
	BOOL forcesIntegralX;
	BOOL forcesIntegralY;
	UIOffset maximumRelativeOffsetStep;
	double scale;
	CGSize sizeInsetStep;
	CGPoint vanishingPoint;
} SCD_Struct_MP9;

typedef struct __CFArray* CFArrayRef;

typedef struct _MRMediaRemoteCommandInfo* MRMediaRemoteCommandInfoRef;

