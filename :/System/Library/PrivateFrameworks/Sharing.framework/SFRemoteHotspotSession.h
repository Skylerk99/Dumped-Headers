/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:46 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFRemoteHotspotClient.h>
#import <libobjc.A.dylib/SFCompanionXPCManagerObserver.h>

@protocol SFRemoteHotspotSessionDelegate, SFRemoteHotspotProtocol;
@class NSString;

@interface SFRemoteHotspotSession : NSObject <SFRemoteHotspotClient, SFCompanionXPCManagerObserver> {

	unsigned long long _browsingActivity;
	unsigned long long _enableActivity;
	BOOL _browsing;
	id<SFRemoteHotspotSessionDelegate> _delegate;
	id<SFRemoteHotspotProtocol> _connectionProxy;

}

@property (assign) id<SFRemoteHotspotSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL browsing;                                            //@synthesize browsing=_browsing - In the implementation block
@property (retain) id<SFRemoteHotspotProtocol> connectionProxy;              //@synthesize connectionProxy=_connectionProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBrowsing:(BOOL)arg1 ;
-(void)setDelegate:(id<SFRemoteHotspotSessionDelegate>)arg1 ;
-(id)init;
-(id<SFRemoteHotspotSessionDelegate>)delegate;
-(void)stopBrowsing;
-(void)startBrowsing;
-(BOOL)browsing;
-(void)setConnectionProxy:(id<SFRemoteHotspotProtocol>)arg1 ;
-(id<SFRemoteHotspotProtocol>)connectionProxy;
-(void)enableHotspotForDevice:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updatedFoundDeviceList:(id)arg1 ;
-(void)xpcManagerConnectionInterrupted;
-(void)enableRemoteHotspotForDevice:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

