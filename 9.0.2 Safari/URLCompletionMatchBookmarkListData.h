//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSURLCompletionMatchData.h"

@class NSMutableArray, NSString, WBSHistoryItem;

@interface URLCompletionMatchBookmarkListData : NSObject <WBSURLCompletionMatchData>
{
    NSMutableArray *_bookmarks;
    WBSHistoryItem *_historyItem;
}

- (void).cxx_destruct;
- (id)_historyItemAtIndex:(unsigned long long)arg1;
- (float)topSitesScoreForPageTitleAtIndex:(unsigned long long)arg1 atTime:(double)arg2;
- (float)topSitesScoreForURLStringAtIndex:(unsigned long long)arg1 atTime:(double)arg2;
- (_Bool)matchesAutocompleteTrigger:(id)arg1;
- (void)enumerateUserVisibleURLsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePageTitlesUsingBlock:(CDUnknownBlockType)arg1;
- (id)matchDataByMergingWithMatchData:(id)arg1;
@property(readonly, nonatomic) _Bool lastVisitWasFailure;
@property(readonly, nonatomic) double lastVisitedTimeInterval;
@property(readonly, nonatomic) _Bool containsBookmark;
- (id)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1;
- (id)userVisibleURLStringAtIndex:(unsigned long long)arg1;
- (id)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)arg1;
- (id)pageTitleAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *originalURLString;
- (id)_historyItemUserVisibleURLString;
- (id)_bookmarkUserVisibleURLString;
- (id)bookmark;
- (id)initWithBookmark:(id)arg1 andBookmark:(id)arg2;
- (id)initWithBookmark:(id)arg1 historyItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

