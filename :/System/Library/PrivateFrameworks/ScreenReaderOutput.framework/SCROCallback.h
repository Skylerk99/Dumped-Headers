/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:41 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@interface SCROCallback : NSObject <NSCoding> {

	int _key;
	id _object;
	BOOL _isAtomic;

}
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(int)key;
-(id)object;
-(id)initWithKey:(int)arg1 object:(id)arg2 ;
-(void)setIsAtomic:(BOOL)arg1 ;
-(BOOL)isAtomic;
-(void)postToHandler:(id)arg1 ;
@end

