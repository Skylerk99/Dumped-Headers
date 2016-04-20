/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:09 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOLogAdaptor.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSString;

@interface GEOBaseLogAdaptor : NSObject <GEOLogAdaptor> {

	NSMutableArray* _supportedLogMessageTypes;
	NSMutableArray* _supportedLogMessageSubTypes;
	NSObject*<OS_dispatch_queue> _adaptorQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)flushLogs;
-(void)queueLogMessage:(id)arg1 ;
-(void)addSupportForLogMessageType:(int)arg1 subType:(int)arg2 ;
-(id)adaptorQueue;
-(BOOL)acceptsLogMessageOfType:(int)arg1 subType:(int)arg2 ;
-(void)removeSupportForLogMessageType:(int)arg1 subType:(int)arg2 ;
@end

