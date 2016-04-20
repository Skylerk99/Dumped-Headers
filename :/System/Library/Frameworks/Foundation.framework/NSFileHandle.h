/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:35 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface NSFileHandle : NSObject <NSSecureCoding>

@property (copy,readonly) NSData * availableData; 
@property (readonly) unsigned long long offsetInFile; 
+(id)fileHandleWithNullDevice;
+(id)fileHandleWithStandardInput;
+(id)fileHandleWithStandardOutput;
+(id)fileHandleWithStandardError;
+(id)fileHandleForReadingAtPath:(id)arg1 ;
+(id)fileHandleForWritingToURL:(id)arg1 error:(id*)arg2 ;
+(id)fileHandleForUpdatingURL:(id)arg1 error:(id*)arg2 ;
+(id)fileHandleForReadingFromURL:(id)arg1 mode:(unsigned short)arg2 error:(id*)arg3 ;
+(id)fileHandleForWritingToURL:(id)arg1 mode:(unsigned short)arg2 error:(id*)arg3 ;
+(id)fileHandleForUpdatingURL:(id)arg1 mode:(unsigned short)arg2 error:(id*)arg3 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(void)initialize;
+(id)fileHandleForReadingFromURL:(id)arg1 error:(id*)arg2 ;
+(id)fileHandleForWritingAtPath:(id)arg1 ;
+(id)fileHandleForUpdatingAtPath:(id)arg1 ;
-(void)ml_lock;
-(void)ml_unlock;
-(id)initWithFileDescriptor:(int)arg1 closeOnDealloc:(BOOL)arg2 ;
-(id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id*)arg4 ;
-(id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 ;
-(id)initWithURL:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id*)arg4 ;
-(NSData *)availableData;
-(id)readDataToEndOfFile;
-(unsigned long long)offsetInFile;
-(/*^block*/id)writeabilityHandler;
-(void)setWriteabilityHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)readabilityHandler;
-(void)setReadabilityHandler:(/*^block*/id)arg1 ;
-(void)_closeOnDealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(void)writeData:(id)arg1 ;
-(void)synchronizeFile;
-(void)closeFile;
-(void)truncateFileAtOffset:(unsigned long long)arg1 ;
-(id)initWithFileDescriptor:(int)arg1 ;
-(int)fileDescriptor;
-(unsigned long long)seekToEndOfFile;
-(void)seekToFileOffset:(unsigned long long)arg1 ;
@end

