/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:37 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXStyleMatrix : NSObject
+(void)readFromNode:(xmlNode*)arg1 toStyleMatrix:(id)arg2 packagePart:(id)arg3 drawingState:(id)arg4 ;
+(id)readReferenceFromNode:(xmlNode*)arg1 ;
+(BOOL)readReferenceFromParentNode:(xmlNode*)arg1 name:(const char*)arg2 inNamespace:(id)arg3 color:(id*)arg4 index:(unsigned*)arg5 ;
@end

