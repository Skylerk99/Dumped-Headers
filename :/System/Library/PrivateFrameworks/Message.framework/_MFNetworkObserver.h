/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:13 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _MFNetworkObserver : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;

}
-(void)execute;
-(void)dealloc;
-(id)initWithBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
@end

