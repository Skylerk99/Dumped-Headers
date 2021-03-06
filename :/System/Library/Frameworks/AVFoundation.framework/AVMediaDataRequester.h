/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVMediaDataRequesterConsumer, OS_dispatch_queue;
@class NSObject;

@interface AVMediaDataRequester : NSObject {

	id<AVMediaDataRequesterConsumer> _mediaDataConsumer;
	NSObject*<OS_dispatch_queue> _requestQueue;
	/*^block*/id _requestBlock;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> requestQueue;              //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,readonly) id requestBlock;                                        //@synthesize requestBlock=_requestBlock - In the implementation block
-(id)initWithMediaDataConsumer:(id)arg1 requestQueue:(id)arg2 requestBlock:(/*^block*/id)arg3 ;
-(void)_requestMediaDataIfReady;
-(void)startRequestingMediaData;
-(id)requestBlock;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(void)finalize;
@end

