/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, TSUStreamWriteChannel;
#import <iWorkImport/iWorkImport-Structs.h>
@class NSObject, NSError;

@interface TSPCGDataConsumer : NSObject {

	NSObject*<OS_dispatch_queue> _writeQueue;
	id<TSUStreamWriteChannel> _writeChannel;
	NSError* _error;

}
+(CGDataConsumerRef)newCGDataConsumerForWriteChannel:(id)arg1 ;
-(id)initWithWriteChannel:(id)arg1 ;
-(unsigned long long)putBytes:(const void*)arg1 count:(unsigned long long)arg2 ;
-(id)init;
-(void)close;
@end

