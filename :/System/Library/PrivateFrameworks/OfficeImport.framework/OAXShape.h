/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:37 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXShape : NSObject
+(id)readFromXmlNode:(xmlNode*)arg1 inNamespace:(id)arg2 drawingState:(id)arg3 ;
+(void)readNonVisualShapeProperties:(xmlNode*)arg1 nodeName:(const char*)arg2 inNamespace:(id)arg3 shapeProperties:(id)arg4 ;
+(void)readCoreFromXmlNode:(xmlNode*)arg1 inNamespace:(id)arg2 toShape:(id)arg3 drawingState:(id)arg4 ;
+(BOOL)isWritable:(id)arg1 ;
@end

