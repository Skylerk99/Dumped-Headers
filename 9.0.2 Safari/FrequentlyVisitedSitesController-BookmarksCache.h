//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FrequentlyVisitedSitesController.h"

@interface FrequentlyVisitedSitesController (BookmarksCache)
- (void)_receivedBookmarkIconDownloadedNotification:(id)arg1;
- (_Bool)_saveFrequentlyVisitedSites:(id)arg1;
- (_Bool)_updateCachedFrequentlyVisitedSitesWithCandidates:(id)arg1;
- (void)_downloadIconsIfNeeded;
- (id)_existingIconsDataFromBookmarksDB;
- (void)_observeBookmarkIconDownloadedNotificationIfNeeded;
@end

