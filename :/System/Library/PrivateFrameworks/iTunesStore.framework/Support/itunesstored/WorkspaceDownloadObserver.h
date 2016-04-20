/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/LSApplicationWorkspaceObserver.h>

@protocol LSApplicationWorkspaceObserverProtocol;
@class NSObject;

@interface WorkspaceDownloadObserver : LSApplicationWorkspaceObserver {

	NSObject*<LSApplicationWorkspaceObserverProtocol> _delegate;

}

@property (assign,nonatomic) NSObject*<LSApplicationWorkspaceObserverProtocol> delegate; 
-(void)startObserving;
-(void)setDelegate:(NSObject*<LSApplicationWorkspaceObserverProtocol>)arg1 ;
-(NSObject*<LSApplicationWorkspaceObserverProtocol>)delegate;
-(void)applicationInstallsDidStart:(id)arg1 ;
-(void)applicationInstallsDidChange:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2 ;
-(void)applicationInstallsDidPause:(id)arg1 ;
-(void)applicationInstallsDidResume:(id)arg1 ;
-(void)applicationInstallsDidCancel:(id)arg1 ;
-(void)applicationInstallsDidPrioritize:(id)arg1 ;
-(void)stopObserving;
@end

