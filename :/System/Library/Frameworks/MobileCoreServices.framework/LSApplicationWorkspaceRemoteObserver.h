/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:09 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/LSApplicationWorkspaceObserver.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSObject;

@interface LSApplicationWorkspaceRemoteObserver : LSApplicationWorkspaceObserver {

	BOOL _observinglsd;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _progressSubscriptionsQueue;

}
-(void)setObservinglsd:(BOOL)arg1 ;
-(BOOL)isObservinglsd;
-(unsigned long long)currentObserverCount;
-(void)addLocalObserver:(id)arg1 ;
-(void)removeLocalObserver:(id)arg1 ;
-(id)localObservers;
-(void)dealloc;
-(id)init;
-(void)applicationInstallsDidStart:(id)arg1 ;
-(void)applicationInstallsDidChange:(id)arg1 ;
-(void)applicationInstallsDidUpdateIcon:(id)arg1 ;
-(void)applicationsWillInstall:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)pluginsDidInstall:(id)arg1 ;
-(void)applicationsDidFailToInstall:(id)arg1 ;
-(void)applicationsWillUninstall:(id)arg1 ;
-(void)pluginsWillUninstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)pluginsDidUninstall:(id)arg1 ;
-(void)applicationsDidFailToUninstall:(id)arg1 ;
-(void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2 ;
-(void)applicationInstallsDidPause:(id)arg1 ;
-(void)applicationInstallsDidResume:(id)arg1 ;
-(void)applicationInstallsDidCancel:(id)arg1 ;
-(void)applicationInstallsDidPrioritize:(id)arg1 ;
-(void)networkUsageChanged:(BOOL)arg1 ;
@end

