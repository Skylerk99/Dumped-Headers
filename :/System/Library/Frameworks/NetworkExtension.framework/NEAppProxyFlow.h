/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:11 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <NetworkExtension/NetworkExtension-Structs.h>
@class NEFlowMetaData, NSObject;

@interface NEAppProxyFlow : NSObject {

	NEFlowMetaData* _metaData;
	NEFlowRef _flow;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) NEFlowMetaData * metaData;                     //@synthesize metaData=_metaData - In the implementation block
@property (assign) NEFlowRef flow;                                  //@synthesize flow=_flow - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)flowErrorForVPNFlowError:(long long)arg1 ;
+(CFErrorRef)copyVPNFlowErrorFromFlowError:(id)arg1 ;
-(NEFlowRef)flow;
-(void)clearEventHandlers;
-(id)initWithNEFlow:(NEFlowRef)arg1 queue:(id)arg2 ;
-(void)openWithLocalEndpoint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)closeReadWithError:(id)arg1 ;
-(void)closeWriteWithError:(id)arg1 ;
-(void)setFlow:(NEFlowRef)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(unsigned long long)hash;
-(NEFlowMetaData *)metaData;
@end

