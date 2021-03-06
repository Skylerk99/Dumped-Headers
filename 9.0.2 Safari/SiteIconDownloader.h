//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SiteIconDownloadRequestDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface SiteIconDownloader : NSObject <SiteIconDownloadRequestDelegate>
{
    NSMutableArray *_activeAndPendingBookmarkUUIDs;
    NSMutableArray *_pendingDownloadRequests;
    NSMutableSet *_activeDownloadRequests;
    NSMutableDictionary *_bookmarksNotInBookmarkDB;
    _Bool _iconDownloadingEnabled;
}

+ (id)sharedSiteIconDownloader;
@property(nonatomic) _Bool iconDownloadingEnabled; // @synthesize iconDownloadingEnabled=_iconDownloadingEnabled;
- (void).cxx_destruct;
- (void)siteIconDownloadRequestDidFail:(id)arg1;
- (void)siteIconDownloadRequest:(id)arg1 didComputeIconKeyColor:(id)arg2;
- (void)siteIconDownloadRequest:(id)arg1 didLoadIconData:(id)arg2;
- (void)_updateBookmarkForIconDownloadRequest:(id)arg1 withIconKeyColor:(id)arg2 iconData:(id)arg3;
- (void)_siteIconDownloadRequestDidFinish:(id)arg1;
- (void)cancelAllDownloads;
- (unsigned long long)_maximumSimultaneousDownloads;
- (void)_startDownloadRequestIfPossible;
- (void)downloadIconsForBookmark:(id)arg1 withIconURLs:(id)arg2;
- (void)downloadIconsForBookmark:(id)arg1;
- (_Bool)_downloadIsActiveOrPendingForBookmark:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

