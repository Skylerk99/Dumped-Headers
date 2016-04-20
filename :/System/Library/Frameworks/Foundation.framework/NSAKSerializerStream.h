/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:41 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSSerializerStream.h>

@interface NSAKSerializerStream : NSObject <NSSerializerStream> {

	void* memory;
	unsigned long long current;
	unsigned long long max;
	CFDictionaryRef roomForIntLocations;

}
-(void)copySerializationInto:(void*)arg1 ;
-(unsigned long long)writeInt:(unsigned long long)arg1 ;
-(unsigned long long)writeAlignedDataSize:(unsigned long long)arg1 ;
-(unsigned long long)writeData:(const void*)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)writeRoomForInt:(int*)arg1 ;
-(void)writeDelayedInt:(unsigned long long)arg1 for:(int)arg2 ;
-(BOOL)writeToPath:(id)arg1 safely:(BOOL)arg2 ;
-(void)dealloc;
-(void)finalize;
@end

