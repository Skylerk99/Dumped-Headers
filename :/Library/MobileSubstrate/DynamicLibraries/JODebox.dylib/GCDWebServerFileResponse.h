/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Library/MobileSubstrate/DynamicLibraries/JODebox.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <JODebox.dylib/JODebox.dylib-Structs.h>
#import <JODebox.dylib/GCDWebServerResponse.h>

@class NSString;

@interface GCDWebServerFileResponse : GCDWebServerResponse {

	NSString* _path;
	unsigned long long _offset;
	unsigned long long _size;
	int _file;

}
+(id)responseWithFile:(id)arg1 byteRange:(NSRange)arg2 isAttachment:(BOOL)arg3 ;
+(id)responseWithFile:(id)arg1 isAttachment:(BOOL)arg2 ;
+(id)responseWithFile:(id)arg1 ;
+(id)responseWithFile:(id)arg1 byteRange:(NSRange)arg2 ;
-(id)initWithFile:(id)arg1 isAttachment:(BOOL)arg2 ;
-(id)initWithFile:(id)arg1 byteRange:(NSRange)arg2 ;
-(id)initWithFile:(id)arg1 byteRange:(NSRange)arg2 isAttachment:(BOOL)arg3 ;
-(BOOL)open:(id*)arg1 ;
-(id)description;
-(void)close;
-(id)initWithFile:(id)arg1 ;
-(id)readData:(id*)arg1 ;
@end

