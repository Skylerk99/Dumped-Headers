/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@class PKDiscoveryDriver, NSString;

@interface PKDiscoveryLSWatcher : NSObject <LSApplicationWorkspaceObserverProtocol> {

	PKDiscoveryDriver* _wdriver;

}

@property (__weak) PKDiscoveryDriver * wdriver;                     //@synthesize wdriver=_wdriver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)update;
-(void)pluginsDidInstall:(id)arg1 ;
-(void)pluginsDidUninstall:(id)arg1 ;
-(id)initWithDriver:(id)arg1 ;
-(void)stopUpdates;
-(void)setWdriver:(PKDiscoveryDriver *)arg1 ;
-(PKDiscoveryDriver *)wdriver;
@end

