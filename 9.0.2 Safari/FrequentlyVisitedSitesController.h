//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSFrequentlyVisitedSitesController.h"

@class NSMutableArray, WebBookmarkCollection;

@interface FrequentlyVisitedSitesController : WBSFrequentlyVisitedSitesController
{
    NSMutableArray *_cachedFrequentlyVisitedBookmarks;
    WebBookmarkCollection *_bookmarkCollection;
    _Bool _bookmarksNeedToSave;
    _Bool _ignoreBookmarksFolderChangeNotifications;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (void)saveFrequentlyVisitedSitesToBookmarksDBWithCompletion:(CDUnknownBlockType)arg1;
- (id)_canonicalizedFavoritesURLStringSet;
- (void)_clearFrequentlyVisitedSitesInBookmarksDB;
- (void)_receivedBookmarksFolderContentChangedNotification:(id)arg1;
- (void)banFrequentlyVisitedSite:(id)arg1;
- (void)promoteFrequentlyVisitedSite:(id)arg1 toFavoriteAtIndex:(unsigned long long)arg2;
- (void)clearFrequentlyVisitedSites;
- (id)frequentlyVisitedSites;
- (void)dealloc;
- (id)initWithBookmarkCollection:(id)arg1;

@end

