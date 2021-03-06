//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TabDocument.h"

@interface TabDocument (Reader)
- (_Bool)addReadingListBookmarkWithBlock:(CDUnknownBlockType)arg1;
- (void)collectReadingListItemInfo;
- (id)readerContext;
- (void)clearReaderContext;
- (void)clearReaderView;
- (void)createBrowserReaderViewIfNeeded;
- (id)readerPageArchiveURL;
- (_Bool)isShowingReadingListArchive;
- (void)didClickLinkRequestingNewWindowInReaderWithRequest:(id)arg1;
- (void)didClickLinkInReaderWithRequest:(id)arg1;
- (void)didDeactivateReaderWithMode:(unsigned long long)arg1;
- (void)didDetermineReaderAvailability:(_Bool)arg1;
- (void)didActivateReader;
- (_Bool)isReaderAvailable;
- (_Bool)hasDoneReaderDetection;
- (void)updateReadingListItemPreviewText:(id)arg1;
- (id)readerWebView;
- (void)clearReaderScrollInformation;
- (_Bool)shouldShowReaderOnActivate;
@end

