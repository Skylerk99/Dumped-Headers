/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:54 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSArray.h>

@protocol SYChangeSerializer;
@class NSArray;

@interface _SYLazyChangeArray : NSArray {

	NSArray* _source;
	id<SYChangeSerializer> _decoder;
	BOOL _isSYObjectDataArray;

}
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)initWithSYObjectDataArray:(id)arg1 decoder:(id)arg2 ;
-(id)initWithSourceArray:(id)arg1 decoder:(id)arg2 ;
@end

