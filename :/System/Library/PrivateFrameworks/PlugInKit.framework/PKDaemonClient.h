/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface PKDaemonClient : NSObject {

	NSObject*<OS_xpc_object> _pkd;
	NSObject*<OS_dispatch_queue> _replyQueue;
	long long _protocolVersion;

}

@property (retain) NSObject*<OS_xpc_object> pkd;                         //@synthesize pkd=_pkd - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> replyQueue;              //@synthesize replyQueue=_replyQueue - In the implementation block
@property (assign) long long protocolVersion;                            //@synthesize protocolVersion=_protocolVersion - In the implementation block
+(id)convertToXPC:(id)arg1 version:(unsigned long long)arg2 ;
-(id)initWithServiceName:(const char*)arg1 ;
-(NSObject*<OS_dispatch_queue>)replyQueue;
-(void)setProtocolVersion:(long long)arg1 ;
-(long long)protocolVersion;
-(id)errorInReply:(id)arg1 ;
-(id)convertFromXPC:(id)arg1 ;
-(void)matchPlugIns:(id)arg1 flags:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)accessPlugIns:(id)arg1 flags:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)readyPlugIns:(id)arg1 flags:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)setPluginAnnotations:(id)arg1 annotations:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)copyReceipt:(/*^block*/id)arg1 ;
-(void)setPkd:(NSObject*<OS_xpc_object>)arg1 ;
-(id)request:(const char*)arg1 paths:(id)arg2 ;
-(void)send:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)request:(const char*)arg1 ;
-(void)set:(id)arg1 uuids:(id)arg2 ;
-(void)addPlugIns:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)removePlugIns:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)bulkPlugins:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)holdPlugins:(id)arg1 flags:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)releaseHold:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSObject*<OS_xpc_object>)pkd;
-(void)setReplyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

