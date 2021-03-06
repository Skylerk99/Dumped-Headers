//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBUHistory.h"

#import "WKHistoryDelegatePrivate.h"

@class NSCalendar, NSMutableArray, NSString, _WKVisitedLinkProvider;

@interface History : WBUHistory <WKHistoryDelegatePrivate>
{
    NSMutableArray *_deferredUpdates;
    NSCalendar *_calendar;
    struct __CFDateFormatter *_weekdayMonthDateFormatter;
    _WKVisitedLinkProvider *_visitedLinkProvider;
}

+ (id)sharedHistory;
+ (id)_localizedStringForWeekday:(long long)arg1 partOfDay:(long long)arg2;
+ (id)_localizedStringForTodayWithPartOfDay:(long long)arg1;
+ (struct _NSRange)hourRangeFromPartOfDay:(long long)arg1;
+ (long long)partOfDayFromHourOfDay:(long long)arg1;
+ (id)dayWithPeriodOfDayStringForDate:(id)arg1;
- (void).cxx_destruct;
- (void)_webView:(id)arg1 didUpdateHistoryTitle:(id)arg2 forURL:(id)arg3;
- (void)_webView:(id)arg1 didPerformServerRedirectFromURL:(id)arg2 toURL:(id)arg3;
- (void)_webView:(id)arg1 didPerformClientRedirectFromURL:(id)arg2 toURL:(id)arg3;
- (void)_webView:(id)arg1 didNavigateWithNavigationData:(id)arg2;
- (void)_addVisitedLinksForItemsIfNeeded:(id)arg1;
- (void)_removeAllVisitedLinks;
- (void)_updateForWKWebView:(id)arg1 updates:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _WKVisitedLinkProvider *visitedLinkProvider;
- (void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1;
- (_Bool)historyStoreShouldCheckDatabaseIntegrity:(id)arg1;
- (Class)_historyItemClass;
- (void)removeItem:(id)arg1;
- (void)cancelDeferredUpdates;
- (void)commitDeferredUpdates;
- (id)_weekdayMonthDateStringForDate:(id)arg1;
- (id)titleForItem:(id)arg1;
- (void)localeChanged:(struct __CFLocale *)arg1;
- (struct __CFDateFormatter *)newDateFormatterForLocale:(struct __CFLocale *)arg1 formatType:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

