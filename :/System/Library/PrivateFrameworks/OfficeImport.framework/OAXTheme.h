/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:37 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXTheme : NSObject
+(void)readObjectDefaults:(xmlNode*)arg1 theme:(id)arg2 drawingState:(id)arg3 ;
+(void)readDefaultProperties:(xmlNode*)arg1 fallback:(xmlNode*)arg2 defaultProperties:(id)arg3 drawingState:(id)arg4 ;
+(void)readObjectDefaultsFromParent:(xmlNode*)arg1 defaultsName:(const char*)arg2 toObjectDefaults:(id)arg3 drawingState:(id)arg4 ;
+(xmlNode*)childNamed:(const char*)arg1 inParent:(xmlNode*)arg2 fallbackParent:(xmlNode*)arg3 drawingState:(id)arg4 ;
+(void)readFromPackagePart:(id)arg1 toTheme:(id)arg2 state:(id)arg3 ;
+(void)readFromThemeData:(const char*)arg1 themeDataSize:(unsigned)arg2 toTheme:(id)arg3 xmlDrawingState:(id)arg4 ;
@end

