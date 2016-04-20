/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:57 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSDownloadManagerObserver.h>

@class SSDownloadManager, NSOperationQueue, NSMutableDictionary, NSString;

@interface NSAsyncSSDownloadManager : NSObject <SSDownloadManagerObserver> {

	SSDownloadManager* _manager;
	NSOperationQueue* _queue;
	NSMutableDictionary* _downloads;
	BOOL _reconnectInProgress;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)withDownload:(long long)arg1 perform:(/*^block*/id)arg2 ;
-(void)withDownload:(long long)arg1 performAsync:(/*^block*/id)arg2 ;
-(void)_attemptReconnect;
-(void)setDelegate:(id)arg1 forDownload:(long long)arg2 ;
-(void)cancelDownload:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)withDownloadMatchingIdentifier:(id)arg1 perform:(/*^block*/id)arg2 ;
-(void)finishDownload:(long long)arg1 ;
-(void)addDownload:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)downloadHandlerDisconnected:(BOOL)arg1 ;
-(void)dealloc;
-(void)addOperationWithBlock:(/*^block*/id)arg1 ;
-(void)addDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)downloadManagerDownloadsDidChange:(id)arg1 ;
-(id)initWithDownloadManager:(id)arg1 ;
@end

