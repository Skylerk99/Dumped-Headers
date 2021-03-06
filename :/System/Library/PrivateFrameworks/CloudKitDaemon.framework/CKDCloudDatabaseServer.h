/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:45 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_source;
@class NSXPCListener, NSMutableArray, NSObject, NSOperationQueue, NSString;

@interface CKDCloudDatabaseServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _xpcListener;
	NSMutableArray* _connectedClients;
	NSObject*<OS_dispatch_source> _sighandlerSource;
	NSOperationQueue* _clientTeardownQueue;

}

@property (nonatomic,retain) NSXPCListener * xpcListener;                                 //@synthesize xpcListener=_xpcListener - In the implementation block
@property (nonatomic,retain) NSMutableArray * connectedClients;                           //@synthesize connectedClients=_connectedClients - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> sighandlerSource;              //@synthesize sighandlerSource=_sighandlerSource - In the implementation block
@property (nonatomic,retain) NSOperationQueue * clientTeardownQueue;                      //@synthesize clientTeardownQueue=_clientTeardownQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
-(void)dealloc;
-(id)init;
-(void)resume;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)statusReport;
-(NSObject*<OS_dispatch_source>)sighandlerSource;
-(NSXPCListener *)xpcListener;
-(NSMutableArray *)connectedClients;
-(NSOperationQueue *)clientTeardownQueue;
-(id)allClients;
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(void)setConnectedClients:(NSMutableArray *)arg1 ;
-(void)setSighandlerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setClientTeardownQueue:(NSOperationQueue *)arg1 ;
@end

