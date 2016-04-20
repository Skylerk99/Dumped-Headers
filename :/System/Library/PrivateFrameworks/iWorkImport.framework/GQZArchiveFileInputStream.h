/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQZArchiveInputStream.h>

@class NSString;

@interface GQZArchiveFileInputStream : NSObject <GQZArchiveInputStream> {

	_sFILE* mFile;
	char* mBuffer;
	long long mBufferStart;
	long long mBufferEnd;
	long long mSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(const char*)dataAtOffset:(long long)arg1 size:(unsigned long long)arg2 end:(long long)arg3 readSize:(unsigned long long*)arg4 ;
-(void)readFromOffset:(long long)arg1 size:(unsigned long long)arg2 buffer:(char*)arg3 ;
-(long long)size;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
@end

