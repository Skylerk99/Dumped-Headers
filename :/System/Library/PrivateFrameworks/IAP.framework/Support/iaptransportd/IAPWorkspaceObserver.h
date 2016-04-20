/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:37 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iaptransportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/LSApplicationWorkspaceObserver.h>

@protocol LSApplicationWorkspaceObserverProtocol;
@class NSObject;

@interface IAPWorkspaceObserver : LSApplicationWorkspaceObserver {

	NSObject*<LSApplicationWorkspaceObserverProtocol> _delegate;

}

@property (assign,nonatomic) NSObject*<IAPWorkspaceObserverDelegate> delegate; 
-(void)startObserving;
-(void)setDelegate:(NSObject*<IAPWorkspaceObserverDelegate>)arg1 ;
-(NSObject*<IAPWorkspaceObserverDelegate>)delegate;
-(void)applicationsWillUninstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)stopObserving;
@end

