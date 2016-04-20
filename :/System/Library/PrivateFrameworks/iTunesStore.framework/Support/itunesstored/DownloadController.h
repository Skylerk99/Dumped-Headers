/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSCountedSet, ISOperationQueue, NSMutableDictionary, WorkspaceDownloadObserver, NSString;

@interface DownloadController : NSObject <LSApplicationWorkspaceObserverProtocol> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSObject*<OS_dispatch_queue> _externalQueue;
	NSMutableArray* _managerClients;
	NSCountedSet* _networkKinds;
	ISOperationQueue* _thumbnailOperationQueue;
	NSMutableDictionary* _thumbnailRequestsByDownloadID;
	WorkspaceDownloadObserver* _workspaceDownloadObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controller;
-(void)notifyClientsOfChangeset:(id)arg1 ;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)observeXPCServer:(id)arg1 ;
-(void)_clientDisconnectNotification:(id)arg1 ;
-(void)cancelDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)pauseDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)resumeDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 usingReplyBlock:(/*^block*/id)arg3 ;
-(void)notifyClientsOfPropertyChanges:(id)arg1 forDownloadID:(long long)arg2 downloadKind:(id)arg3 ;
-(void)notifyClientsOfExternalPropertyChanges:(id)arg1 forDownloadID:(long long)arg2 downloadKind:(id)arg3 ;
-(void)_sendDownloadKindsUsingNetwork:(id)arg1 ;
-(void)cancelAllDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)finishDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getActiveDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getDownloadAssetPropertiesWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getDownloadAssetsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getDownloadKindsUsingNetworkWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getDownloadPropertiesWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getEntityExistsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)insertDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)moveDownloadWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)prioritizeDownloadWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)reevaluateBackgroundDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)registerClientDownloadManager:(id)arg1 connection:(id)arg2 ;
-(void)removePersistenceIDWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)restartDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)retryRestoreDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)setAssetPropertiesWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)setDownloadHandlerWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)setDownloadPropertiesWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)setDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getCellularNetworkAllowed:(id)arg1 connection:(id)arg2 ;
-(void)setCellularNetworkAllowed:(id)arg1 connection:(id)arg2 ;
-(void)finishSessionWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getSessionPropertiesWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)connectDownloadHandlerWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)resetDisavowedSessionsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)setClientDownloadHandlerWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)setSessionProgressWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)setHandlerPropertiesWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)setSessionPropertiesWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)setSessionStatusDescriptionWithMessage:(id)arg1 connection:(id)arg2 ;
-(id)_downloadPersistentIDsFromBundleIDs:(id)arg1 ;
-(BOOL)_pauseDownloads:(id)arg1 isForced:(BOOL)arg2 client:(id)arg3 ;
-(BOOL)_resumeDownloads:(id)arg1 client:(id)arg2 ;
-(BOOL)_cancelDownloads:(id)arg1 client:(id)arg2 ;
-(void)_retryRestoreIfNecessaryForTransaction:(id)arg1 ;
-(BOOL)_prioritizeDownload:(id)arg1 aboveDownload:(id)arg2 client:(id)arg3 error:(id*)arg4 ;
-(BOOL)_restartDownloads:(id)arg1 client:(id)arg2 ;
-(void)_handleSessionMessage:(id)arg1 connection:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_handleSessionMessage:(id)arg1 connection:(id)arg2 usingReplyBlock:(/*^block*/id)arg3 ;
-(id)_managerClientForConnection:(id)arg1 ;
-(void)beginUsingNetworkForDownloadKind:(id)arg1 ;
-(void)endUsingNetworkForDownloadKind:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)start;
-(void)applicationInstallsDidStart:(id)arg1 ;
-(void)applicationInstallsDidChange:(id)arg1 ;
-(void)applicationInstallsDidUpdateIcon:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2 ;
-(void)applicationInstallsDidPause:(id)arg1 ;
-(void)applicationInstallsDidResume:(id)arg1 ;
-(void)applicationInstallsDidCancel:(id)arg1 ;
-(void)applicationInstallsDidPrioritize:(id)arg1 ;
-(void)_dispatchAsync:(/*^block*/id)arg1 ;
@end

