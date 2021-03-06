/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:10 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIViewServiceDeputyXPCInterface.h>

@class NSXPCInterface, NSString;

@interface _UIViewServiceViewControllerDeputyXPCInterface : NSObject <_UIViewServiceDeputyXPCInterface> {

	NSXPCInterface* _exportedInterface;
	NSXPCInterface* _remoteViewControllerInterface;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interfaceWithExportedInterface:(id)arg1 remoteViewControllerInterface:(id)arg2 ;
-(id)exportedInterface;
-(id)connectionProtocol;
-(id)hostObjectInterface;
-(SEL)connectionSelector;
-(id)connectionInvocation;
@end

