/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:50 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PXTransition : NSObject
+(int)readOrientation:(xmlNode*)arg1 attribute:(const char*)arg2 defaultValue:(int)arg3 ;
+(int)readDirection:(xmlNode*)arg1 defaultValue:(int)arg2 ;
+(int)readReverseDirection:(xmlNode*)arg1 defaultValue:(int)arg2 ;
+(int)readInOut:(xmlNode*)arg1 defaultValue:(int)arg2 ;
+(BOOL)mapDirection:(id)arg1 outDir:(int*)arg2 ;
+(void)writeReverseOrientation:(int)arg1 withAttributeName:(id)arg2 file:(id)arg3 ;
+(void)writeOrientation:(int)arg1 withAttributeName:(id)arg2 file:(id)arg3 ;
+(void)writeDirection:(int)arg1 file:(id)arg2 ;
+(void)writeReverseDirection:(int)arg1 file:(id)arg2 ;
+(void)writeInOut:(int)arg1 file:(id)arg2 ;
+(void)writeReverseInOut:(int)arg1 file:(id)arg2 ;
+(void)writeTransitionAttributes:(id)arg1 attributePrefix:(id)arg2 file:(id)arg3 ;
+(void)initialize;
+(void)readTransitionFromNode:(xmlNode*)arg1 tgtTransition:(id)arg2 drawingState:(id)arg3 ;
+(BOOL)isPowerPoint2013TransitionType:(int)arg1 ;
+(void)writeTransitionOptions:(id)arg1 transitionType:(int)arg2 file:(id)arg3 ;
+(BOOL)isPowerPoint2010TransitionType:(int)arg1 ;
+(void)writeTransitionFromSlideBase:(id)arg1 file:(id)arg2 state:(id)arg3 ;
@end

