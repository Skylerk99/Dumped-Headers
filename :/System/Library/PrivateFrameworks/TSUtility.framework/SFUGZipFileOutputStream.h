/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFUOutputStream.h>

@class NSString;

@interface SFUGZipFileOutputStream : NSObject <SFUOutputStream> {

	void* _file;
	long long _offset;
	NSString* _path;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)gzipExtension;
-(void)dealloc;
-(id)path;
-(long long)offset;
-(void)close;
-(id)initWithPath:(id)arg1 ;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
-(id)inputStream;
-(BOOL)canSeek;
-(id)closeLocalStream;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2 ;
-(BOOL)canCreateInputStream;
@end

