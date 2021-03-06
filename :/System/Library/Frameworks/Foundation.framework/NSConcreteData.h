/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:34 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSData.h>

@interface NSConcreteData : NSData {

	unsigned _isInline : 1;
	unsigned _retainCount : 31;
	unsigned long long _length;
	unsigned long long _capacity;
	void* _bytes;
	SCD_Union_NS13 _u;

}
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 deallocator:(/*^block*/id)arg4 ;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5 ;
-(BOOL)_isCompact;
-(BOOL)_copyWillRetain;
-(void)getBytes:(void*)arg1 ;
-(id)_createDispatchData;
-(void)dealloc;
-(id)init;
-(unsigned long long)length;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(void)finalize;
@end

