/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString;

@interface VMUSourceInfo : NSObject {

	NSString* _path;
	NSString* _fileName;
	unsigned _lineNumber;

}
-(unsigned)lineNumber;
-(void)dealloc;
-(id)path;
-(id)fileName;
-(id)initWithSymbolicator:(CSTypeRef)arg1 address:(unsigned long long)arg2 ;
@end

